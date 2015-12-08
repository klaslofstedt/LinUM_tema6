# makefile
# NOT FINISHED

CC=gcc
CFLAGS=-c -Wall -I.

all: lab6

# add libpower.o and libresistance.o on this line
lab6: main.o libcomponent.o 
	$(CC) main.o libcomponent.o 

clean:
	rm *o lab6 
#install:
#	cp lab6/bin

#uninstall:
#	rm /bin/lab6
