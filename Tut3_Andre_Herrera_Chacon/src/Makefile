current_dir = $(shell cd -)


#calculadora_e: 
#		gcc -o calculadora_e calculadora.c ../lib/liboperadores.a -I../include/ -L../lib/ -lm


calculadora_d:
		gcc -o calculadora_d calculadora.c -I../include -L../lib -loperadores -lm
		export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:../lib