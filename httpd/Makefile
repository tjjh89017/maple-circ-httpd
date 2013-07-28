PROG = httpd

CC = gcc

ifeq ($(shell uname),linux)
SOURCE_FLAGS = -D_POSIX_SOURCE -D_BSD_SOURCE
endif

CFLAGS = -Os -Wall -Wextra \
	 $(SOURCE_FLAGS) -g \
	 -std=gnu99 \
	 -pipe \
	 -I../include \
	 -I../maple \
	 -fomit-frame-pointer
# -D NDEBUG

CFLAGS += -m32
LIBS = -s -L../lib -L../maple -L../lib/eserv
LDFLAGS = -ldao -leserv -lpthread -lcrypt

OBJS = main.o \
	cgi_custom.o


.c.o:
	$(CC) $(CFLAGS) -c $*.c

all: $(PROG)

$(PROG): $(OBJS)
	$(CC) -o $(PROG) $(CFLAGS) $(OBJS) $(LDFLAGS) $(LIBS)

clean:
	rm -f $(PROG) $(OBJS)
