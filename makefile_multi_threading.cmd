gcc -Wall -Wextra -I ./include/ inc_60deg_multi_threading.c -c
gcc -L ./ inc_60deg_multi_threading.o -lOptim -lMaterial -lFilm -lLinearC -o inc_60deg_multi_threading.exe
inc_60deg_multi_threading.exe