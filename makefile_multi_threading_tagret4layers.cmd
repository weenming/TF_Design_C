gcc -Wall -Wextra -I ./include/ inc_60deg_multi_threading_target4layers.c -c
gcc -L ./ inc_60deg_multi_threading_target4layers.o -lOptim -lMaterial -lFilm -lLinearC -o inc_60deg_multi_threading_target4layers.exe
inc_60deg_multi_threading_target4layers.exe