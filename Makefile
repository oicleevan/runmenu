runmenu: runmenu.o
	g++ runmenu.o -o runmenu

runmenu.o: runmenu.cpp
	g++ -c runmenu.cpp

install:
	make
	cp runmenu /usr/bin

clean:
	rm -f *.o runmenu