#include <stdio.h>
#include <stdlib.h>
#define MAX 1000
#define MAXFILENAME 100

typedef struct node {
	int valor;
	struct node *proximo;
} Node;

typedef struct fila {
	int inicio;
	int fim;
	int *array;
} Fila;

typedef struct grafo {
	int qt_vertices;
	int qt_arestas;
	Node **lista;
} *Grafo;

Fila *criaFila() {
	Fila *F = malloc(sizeof *F);
	F->array = (int *)malloc(MAX * sizeof(int));
	F->inicio = 0;
	F->fim = 0;

	return F;
}

void insereFila(Fila *F, int valor) {
	F->array[F->fim] = valor;
	(F->fim) += 1;
}

void resetaFila(Fila *F) {
	F->inicio = 0;
	F->fim = 0;
}

int removeFila(Fila *F) {
	int x = F->array[F->inicio];
	F->inicio += 1;
	if (F->inicio == F->fim) {
		resetaFila(F);
	}
	return x;
}

int filaVazia(Fila *F) {
	return F->inicio == F->fim;
}

Fila *liberaFila(Fila *F) {
	free(F->array);
	F = NULL;
	return F;
}

Grafo inicializaGrafo(int n) {
	Grafo G = malloc(sizeof *G);

	G->lista = malloc(n * sizeof(Node *));
	G->qt_vertices = n;
	G->qt_arestas = 0;

	return G;
}

int valorNoGrafo(Grafo G, int v, int w) {
	for (Node *p = G->lista[v]; p != NULL; p = p->proximo) {
		if (p->valor == w)
			return 1;
	}
	return 0;
}

void insereGrafo(Grafo G, int v, int w) {
	if (valorNoGrafo(G, v, w)) {
		return;
	}

	Node *p = malloc(sizeof(Node));
	p->valor = w;
	p->proximo = G->lista[v];
	G->lista[v] = p;
	G->qt_arestas += 1;
}

int verificaBipartido(Grafo G) {
	Fila *F;
	Node *p;
	int *distancia;
	int origem, p_grafo, p_fila;

	distancia = malloc(G->qt_vertices * sizeof(int));
	F = criaFila();

	for (p_grafo = 0; p_grafo < G->qt_vertices; p_grafo++)
		distancia[p_grafo] = -1;

	for (origem = 0; origem < G->qt_vertices; origem++) {
		distancia[origem] = 0;

		insereFila(F, origem);

		while (!filaVazia(F)) {
			p_grafo = removeFila(F);
			p = G->lista[p_grafo];

			while (p != NULL) {
				p_fila = p->valor;
				if (distancia[p_fila] == -1) {
					distancia[p_fila] = distancia[p_grafo] + 1;
					insereFila(F, p_fila);
				}
				else {
					if (distancia[p_fila] % 2 != (distancia[p_grafo] + 1) % 2) {
						F = liberaFila(F);
						return 0;
					}
				}
				p = p->proximo;
			}
		}
		for (p_grafo = 0; p_grafo < G->qt_vertices; p_grafo++)
			distancia[p_grafo] = -1;
		resetaFila(F);
	}
	F = liberaFila(F);
	return 1;
}

int main(int argc, char *argv[]) {
	FILE *entrada;
	char file_name[MAXFILENAME];

	if (argc != 1) {
		printf("Numero incorreto de parametros. Ex: .\\nome_arquivo_executavel\n");
        return 0;
	}

	//scanf("%s", file_name);
	entrada = fopen("1.in", "r");
	
	if (entrada == NULL) {
		printf("\nNao encontrei o arquivo! Informe o nome da instancia\n");
        exit(EXIT_FAILURE);
	}

	int i, j, k, qt_alunos, qt_perguntas, perguntado, instancias;
	Grafo perguntas;

    fscanf(entrada, "%d", &instancias);
    
    for(k=0;k<=instancias;k++){
        fscanf(entrada, "%d", &qt_alunos);
	    perguntas = inicializaGrafo(qt_alunos);

        for (i = 0; i < qt_alunos; i++) {
            fscanf(entrada, "%d", &qt_perguntas);
            for (j = 0; j < qt_perguntas; j++) {
                fscanf(entrada, "%d", &perguntado);
                insereGrafo(perguntas, i, perguntado);
            }
	    }

	    if (verificaBipartido(perguntas) == 0)
		    printf("Impossivel\n");
	    else
		    printf("Vai ter debate\n");
    }



	fclose(entrada);

	return 0;
}
