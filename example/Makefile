all:
	g++ -c dlHandlerExample.cpp -o dlHandlerExample.o -I../include -std=c++11 -fPIC
	g++ dlHandlerExample.o -shared -o dlHandlerExample.so
clean:
	rm -f *.o *.so