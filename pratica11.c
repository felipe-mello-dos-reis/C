#include <stdio.h>
#include <stdlib.h>

typedef struct st st;
struct st
{
	int a;
	st *prox;
};
typedef st *pontst;

int main()
{
	pontst p, q;
	p = (st *) malloc (sizeof(st));
//	p->a = 2; Ao deixar a estrutura çider em branco, deve-se começar a imprimir a partir de p->prox
	p->prox = (st *) malloc (sizeof (st));
	p->prox->a = 3;
	p->prox->prox = (st *) malloc (sizeof(st));
	p->prox->prox->a = 5;
	p->prox->prox->prox = NULL;
	for(q = p->prox; q != NULL; q = q->prox)
		printf("%4d", q->a);
//	free (p);
	printf("\n\n"); system ("pause"); return 0;
}
