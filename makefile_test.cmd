gcc -Wall -Wextra -I ./include/ test.c -c
gcc -L ./ test.o -lOptim -lMaterial -lFilm -lLinearC -o test.exe
test.exe