# makefile

CC = gcc
FLAGS = -shared -fPIC
EXECUTABLE=electrotest
INSTALLDIR=/usr/bin/
SOS=libresistance.so libpower.so libcomponent.so

all : | lib electrotest.o
	mkdir -p lib
	mv $(SOS) lib/
	$(CC) -o $(EXECUTABLE) electrotest.o -Llib -lresistance -lpower -lcomponent -Wl,-rpath,lib

lib : $(SOS)

install : all
	sudo install $(EXECUTABLE) $(INSTALLDIR)

uninstall :
	sudo rm -r $(INSTALLDIR)/$(EXECUTABLE)

libresistance.so : libresistance.c libresistance.h
	$(CC) $(FLAGS) -c -o $@ $<

libpower.so : libpower.c libpower.h
	$(CC) $(FLAGS) -c -o $@ $<

libcomponent.so : libcomponent.c libcomponent.h
	$(CC) $(FLAGS) -c -o $@ $<

electrotest.o : electrotest.c
	$(CC) -c electrotest.c
	
clean:
	rm -r lib
	rm *.o
	rm $(EXECUTABLE)
	
		
