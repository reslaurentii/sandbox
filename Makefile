IDIR=include
CC=gcc
CFLAGS=-I$(IDIR)

ODIR=build
LDIR=../lib
SDIR=src

LIBS=-lm

_DEPS = colors.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = colors.o sandbox.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: $(SDIR)/%.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

sandbox: $(OBJ)
	gcc -o $(ODIR)/$@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o $(ODIR)/sandbox *~ core $(INCDIR)/*~

test:
	./build/sandbox
