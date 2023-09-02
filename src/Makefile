TARGET = app_bin
CC = gcc

$(TARGET) : main.o convert.o bit_operations.o 
	$(CC) main.o convert.o bit_operations.o -o $(TARGET)

main.o : main.c
	$(CC) -c main.c -o main.o 

convert.o : convert.c 
	$(CC) -c convert.c -o convert.o

bit_operations.o : bit_operations.c 
	$(CC) -c bit_operations.c -o bit_operations.o

clean :  #doesnt work
	rm *.0  