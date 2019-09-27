#include "uhead.h"

// from i to i+100
void urand(int * m, int n){
	int i;
	srand((int)time(0));
	for(i = 0; i <= n; i++){
		m[i] = 1 + (int)(100.0*rand()/(RAND_MAX+1.0));	
	}
}

// show urand
void show(int * m, int n){
	int i;
	for(i = 0; i <= n; i++){
		printf("a[%d] = %d /n",i,m[i]);	
	}
}
