CC		= gcc
CFLAGS	= -std=c11 -ggdb -Wall -Wextra -Wconversion -pedantic
LDFLAGS	= -Llib/raylib
LDLIBS	= -Iinclude -l:libraylib.a -lGL -lm -lpthread -ldl -lX11 -lrt

all: snover

snover: snover.c 
	$(CC) $(CFLAGS) $(LDFLAGS) $^ $(LDLIBS) -o $@
