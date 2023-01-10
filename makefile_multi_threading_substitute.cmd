gcc -Wall -Wextra -I ./include/ inc_60deg_multi_threading_substitute.c -c
gcc -L ./ inc_60deg_multi_threading_substitute.o -lOptim -lMaterial -lFilm -lLinearC -o inc_60deg_multi_threading_substitute.exe
inc_60deg_multi_threading_substitute.exe