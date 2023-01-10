gcc -Wall -Wextra -I ./include/ inc_60deg_multi_threading_2angs.c -c
gcc -L ./ inc_60deg_multi_threading_2angs.o -lOptim -lMaterial -lFilm -lLinearC -o inc_60deg_multi_threading_2angs.exe
inc_60deg_multi_threading_2angs.exe