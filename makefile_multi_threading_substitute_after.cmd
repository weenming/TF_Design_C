gcc -Wall -Wextra -I ./include/ inc_60deg_multi_threading_substitute_after.c -c
gcc -L ./ inc_60deg_multi_threading_substitute_after.o -lOptim -lMaterial -lFilm -lLinearC -o inc_60deg_multi_threading_substitute_after.exe
inc_60deg_multi_threading_substitute_after.exe