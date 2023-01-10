#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void print_func() {
    // printf("call print_func");
    return;
}

typedef struct arguments {
    double a;
    int b;
} args;

DWORD WINAPI ThreadProc(LPVOID p) {
    // printf("333\n");
    int i;
    for (i = 0; i < 1; ++i) {
        Sleep(100 * (*(args*)p).b);
        printf("sub thread %d\n", (*(args*)p).b);
        printf("%f\n", (*(args*)p).a);
    }
    print_func();
    int errNum = errno;
    printf("error = %s \n", strerror(errNum));
    return;
}

int main() {
    printf("111\n");
    const int LEN = 100;
    HANDLE thread;
    int i;
    args a[LEN];  // VS code is crazy...
    for (i = 0; i < LEN; i++) {
        a[i].a = i * 2;
        a[i].b = i;
    }
    void* p;
    for (i = 0; i < LEN; i++) {
        p = &a[i];
        thread = CreateThread(NULL, 0, ThreadProc, p, 0, NULL);
        CloseHandle(thread);
    }

    printf("222\n");
    Sleep(1000000);
    return 0;
}