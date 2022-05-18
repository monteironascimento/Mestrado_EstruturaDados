contigua100000:
	gcc -c ./pilhaContiga/pilha_contigua.c -o ./pilhaContiga/pilha_contigua.o
	gcc ./pilhaContiga/main_100000.c ./pilhaContiga/pilha_contigua.o -o ./pilhaContiga/main_pilhaContigua
	./pilhaContiga/main_pilhaContigua

	valgrind --leak-check=full ./pilhaContiga/main_pilhaContigua

contigua50000:
	gcc -c ./pilhaContiga/pilha_contigua.c -o ./pilhaContiga/pilha_contigua.o
	gcc ./pilhaContiga/main_50000.c ./pilhaContiga/pilha_contigua.o -o ./pilhaContiga/main_pilhaContigua
	./pilhaContiga/main_pilhaContigua

	valgrind --leak-check=full ./pilhaContiga/main_pilhaContigua

contigua1000:
	gcc -c ./pilhaContiga/pilha_contigua.c -o ./pilhaContiga/pilha_contigua.o
	gcc ./pilhaContiga/main_1000.c ./pilhaContiga/pilha_contigua.o -o ./pilhaContiga/main_pilhaContigua
	./pilhaContiga/main_pilhaContigua

	valgrind --leak-check=full ./pilhaContiga/main_pilhaContigua

#--------------------------------------------------------------------------------

encadeada100000:
	gcc -c ./pilhaEncadeada/pilha_encadeada.c -o ./pilhaEncadeada/pilha_encadeada.o
	gcc ./pilhaEncadeada/main_100000.c ./pilhaEncadeada/pilha_encadeada.o -o ./pilhaEncadeada/main_pilhaEncadeada
	./pilhaEncadeada/main_pilhaEncadeada

	valgrind --leak-check=full ./pilhaEncadeada/main_pilhaEncadeada

encadeada50000:
	gcc -c ./pilhaEncadeada/pilha_encadeada.c -o ./pilhaEncadeada/pilha_encadeada.o
	gcc ./pilhaEncadeada/main_50000.c ./pilhaEncadeada/pilha_encadeada.o -o ./pilhaEncadeada/main_pilhaEncadeada
	./pilhaEncadeada/main_pilhaEncadeada

	valgrind --leak-check=full ./pilhaEncadeada/main_pilhaEncadeada

encadeada1000:
	gcc -c ./pilhaEncadeada/pilha_encadeada.c -o ./pilhaEncadeada/pilha_encadeada.o
	gcc ./pilhaEncadeada/main_1000.c ./pilhaEncadeada/pilha_encadeada.o -o ./pilhaEncadeada/main_pilhaEncadeada
	./pilhaEncadeada/main_pilhaEncadeada

	valgrind --leak-check=full ./pilhaEncadeada/main_pilhaEncadeada

clean:
	rm *.o
	rm main_pilhaContigua
	rm main_pilhaEncadeada