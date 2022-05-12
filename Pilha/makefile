contigua:
	gcc -c ./pilhaContiga/pilha_contigua.c -o ./pilhaContiga/pilha_contigua.o
	gcc ./pilhaContiga/main.c ./pilhaContiga/pilha_contigua.o -o ./pilhaContiga/main_pilhaContigua
	./pilhaContiga/main_pilhaContigua

	valgrind --leak-check=full ./pilhaContiga/main_pilhaContigua

encadeada:
	gcc -c ./pilhaEncadeada/pilha_encadeada.c -o ./pilhaEncadeada/pilha_encadeada.o
	gcc ./pilhaEncadeada/main.c ./pilhaEncadeada/pilha_encadeada.o -o ./pilhaEncadeada/main_pilhaEncadeada
	./pilhaEncadeada/main_pilhaEncadeada

	valgrind --leak-check=full ./pilhaEncadeada/main_pilhaEncadeada

clean:
	rm *.o
	rm main_pilhaContigua
	rm main_pilhaEncadeada