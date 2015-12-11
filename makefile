# makefile
# NOT FINISHED (add libresistance)

all : libpower.so libcomponent.so electrotest.o
        mkdir -p lib
        mv libpower.so libcomponent.so lib/
        gcc -o electrotest electrotest.o -Llib -lpower -lcomponent -Wl,-rpath,lib

lib : libpower.so libcomponent.so

install : libpower.so libcomponent.so electrotest.o
        mv libpower.so libcomponent.so /usr/lib/
        gcc -o electrotest electrotest.o -lpower -lcomponent
        mv electrotest /usr/bin/

libpower.so : libpower.c libpower.h
        gcc -shared -fPIC -o libpower.so libpower.c

libcomponent.so : libcomponent.c libcomponent.h
        gcc -shared -fPIC -o libcomponent.so libcomponent.c

electrotest.o : electrotest.c
        gcc -c electrotest.c
