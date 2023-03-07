gcc -Wall -Wextra -I ./include/ inc_60deg_SiO2_working.c -c
gcc -L ./ inc_60deg_SiO2_working.o -lOptim -lMaterial -lFilm -lLinearC -o inc_60deg_SiO2_working.exe
inc_60deg_SiO2_working.exe