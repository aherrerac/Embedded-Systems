#DINAMIC
#liboperadores.so: operadores.o 
#		ld -o liboperadores.so operadores.o -shared

#STATIC

all:

liboperadores.a: operadores.o
		ar rv liboperadores.a operadores.o
		ranlib liboperadores.a

operadores.o:
		gcc -c operadores.c -fPIC

