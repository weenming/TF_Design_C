gcc -Wall -Wextra -I ./include/ inc_60deg_multi_threading_append.c -c
gcc -L ./ inc_60deg_multi_threading_append.o -lOptim -lMaterial -lFilm -lLinearC -o inc_60deg_multi_threading_append.exe
inc_60deg_multi_threading_append.exe