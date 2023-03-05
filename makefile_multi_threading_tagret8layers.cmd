gcc -Wall -Wextra -I ./include/ inc_60deg_multi_threading_target8layers.c -c
gcc -L ./ inc_60deg_multi_threading_target8layers.o -lOptim -lMaterial -lFilm -lLinearC -o inc_60deg_multi_threading_target8layers.exe
inc_60deg_multi_threading_target8layers.exe