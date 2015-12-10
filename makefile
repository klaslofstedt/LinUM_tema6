# makefile
# NOT FINISHED

CC=gcc
CFLAGS=-c -Wall -I.

all: electrotest 

# add libpower.o and libresistance.o on this line
electrotest: electrotest.o libcomponent.o 
	$(CC) electrotest.o libcomponent.o -o electrotest 

clean:
	rm *o electrotest 
#install:
#	cp lab6/bin

#uninstall:
#	rm /bin/lab6
