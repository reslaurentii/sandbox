CC=gcc
CFLAGS=-Iinclude
DEPS = colors.h
OBJ = src/print.o src/colors.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

print: $(OBJ)
	gcc -o $@ $^ $(CFLAGS)
