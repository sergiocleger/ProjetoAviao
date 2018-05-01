#include "Aviao.h"

aviao * removerAviao(aviao **aero, char cod[]){
	aviao *exc= NULL, *ant= NULL;
	
	if(*aero == NULL){
		printf("\nLista vazia.");
		Sleep(500);
		return exc;
	}else{
		while((*aero)->prox != NULL){
			if(strcmp((*aero)->prox->cod, cod)){
				ant= *aero;
				exc= (*aero)->prox;
				(*aero)->prox= (*aero)->prox->prox;
				break;
			}else{
				*aero= (*aero)->prox;	
			}
		}	
	}
	
	return exc;
}
