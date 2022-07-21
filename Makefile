CC=clang
CFLAGS=-g -Wall
EXE=helloworld

all: $(EXE)

%: %.C
	$(CC) $(CFLAGS) $<-0 $0

clean:
	rm -rf *.dSYM *.0 $(EXE)