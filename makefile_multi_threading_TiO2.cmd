gcc -Wall -Wextra -I ./include/ inc_60deg_multi_threading_TiO2.c -c
gcc -L ./ inc_60deg_multi_threading_TiO2.o -lOptim -lMaterial -lFilm -lLinearC -o inc_60deg_multi_threading_TiO2.exe
inc_60deg_multi_threading_TiO2.exe