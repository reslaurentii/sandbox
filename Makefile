IDIR=include
CC=gcc
CFLAGS=-I$(IDIR) -Wall

ODIR=build
LDIR=../lib
SDIR=src

LIBS=-lm

_DEPS = colors.h operators.h print.h ifstatment.h pointers.h preprocessor.h structs.h \
controlFlow.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = operators.o colors.o print.o ifstatment.o pointers.o preprocessor.o structs.o  controlFlow.o sandbox.o

OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: $(SDIR)/%.c $(DEPS)
	mkdir -p build
	$(CC) -c -o $@ $< $(CFLAGS)

sandbox: $(OBJ)
	$(CC) -o $(ODIR)/$@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o $(ODIR)/sandbox *~ core $(INCDIR)/*~

test:
	./build/sandbox
