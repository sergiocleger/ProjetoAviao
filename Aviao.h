#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

typedef struct node{
	char cod[6];
	char comandante[20];
	int cpcd;
	char dest[10];
	
	struct node *prox;
}aviao;

aviao * criarAviao(char cod[], char comandante[], int cpcd, char dest[]);
aviao * removerAviao(aviao **head, aviao **fim);
void inserirAeroporto(aviao **aero, char cod[], char comandante[], int cpcd, char dest[]);
