$(CC)= gcc

code: display.o input.o validation.o sort.o
	$(CC) display.o input.o validation.o sort.o -o output

display.o: display.c file.h
	$(CC) -c display.c 

input.o: input.c file.h
	$(CC) -c input.c

validation.o: validation.c file.h
	$(CC) -c validation.c

sort.o: sort.c file.h
	$(CC) -c sort.c
