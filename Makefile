runmenu: runmenu.o
	g++ runmenu.o -o runmenu

runmenu.o: runmenu.cpp
	g++ -c runmenu.cpp

install:
	cp runmenu /usr/bin

clean:
	rm -f *.o runmenu