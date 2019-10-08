#include "main.h"

/*

	function:create a random array

	inlet param: int *p,int len;
	return: none

*/

void createRandomArray(int *p,int len){
	
	int i;
	srand((int)time(0));
	
	//creat random num from 1 to 100
	for(i = 0;i<len;i++)
	{
		p[i] = 1 + (int)(100.0*rand()/(RAND_MAX + 1.0));
	}
	
}


