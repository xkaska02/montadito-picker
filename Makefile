TARGET=montadito_picker
CC=gcc

$(TARGET): $(TARGET).o
	$(CC) $(TARGET).o -o $(TARGET)

$(TARGET).o: $(TARGET).c
	$(CC) -c -g $(TARGET).c

clean:
	rm *.o $(TARGET) new_montadito_list

run: $(TARGET)
	./$(TARGET)

new_list:
	$(CC) new_montadito_list.c -o new_montadito_list 
	./new_montadito_list

gdb: $(TARGET)
	gdb ./$(TARGET)
