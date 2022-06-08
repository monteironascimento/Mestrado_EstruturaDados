encadeada100000:
	gcc -c ./encadeada/fila_prioridade_encadeada.c -o ./encadeada/fila_prioridade_encadeada.o
	gcc ./encadeada/main_100000.c ./encadeada/fila_prioridade_encadeada.o -o ./encadeada/main_fila_prioridade_encadeada
	./encadeada/main_fila_prioridade_encadeada

	valgrind --leak-check=full ./encadeada/main_fila_prioridade_encadeada

encadeada50000:
	gcc -c ./encadeada/fila_prioridade_encadeada.c -o ./encadeada/fila_prioridade_encadeada.o
	gcc ./encadeada/main_50000.c ./encadeada/fila_prioridade_encadeada.o -o ./encadeada/main_fila_prioridade_encadeada
	./encadeada/main_fila_prioridade_encadeada

	valgrind --leak-check=full ./encadeada/main_fila_prioridade_encadeada

encadeada1000:
	gcc -c ./encadeada/fila_prioridade_encadeada.c -o ./encadeada/fila_prioridade_encadeada.o
	gcc ./encadeada/main_1000.c ./encadeada/fila_prioridade_encadeada.o -o ./encadeada/main_fila_prioridade_encadeada
	./encadeada/main_fila_prioridade_encadeada

	valgrind --leak-check=full ./encadeada/main_fila_prioridade_encadeada

##==============================================================================

heap100000:
	gcc -c ./heap/fila_prioridade_heap.c -o ./heap/fila_prioridade_heap.o
	gcc ./heap/main_100000.c ./heap/fila_prioridade_heap.o -o ./heap/main_fila_heap_encadeada
	./heap/main_fila_heap_encadeada

	valgrind --leak-check=full ./heap/main_fila_heap_encadeada

heap50000:
	gcc -c ./heap/fila_prioridade_heap.c -o ./heap/fila_prioridade_heap.o
	gcc ./heap/main_50000.c ./heap/fila_prioridade_heap.o -o ./heap/main_fila_heap_encadeada
	./heap/main_fila_heap_encadeada

	valgrind --leak-check=full ./heap/main_fila_heap_encadeada

heap1000:
	gcc -c ./heap/fila_prioridade_heap.c -o ./heap/fila_prioridade_heap.o
	gcc ./heap/main_1000.c ./heap/fila_prioridade_heap.o -o ./heap/main_fila_heap_encadeada
	./heap/main_fila_heap_encadeada

	valgrind --leak-check=full ./heap/main_fila_heap_encadeada


