#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <unistd.h>
#include <limits.h>
#include <fcntl.h>

#define bool int
#define true 1
#define false 0

struct arg{
	int ave;
	int sum;
	int max;
	int min;
};


/*	func1.c  */

void show(int *arr,int len);

struct arg analyzeArray(int *arr,int len);

int sum(int *arr,int len);

int ave(int *arr,int len);

int max(int *arr,int len);

int min(int *arr,int len);

void writeArray(int* arr,int len,char* fileName);

void readArray(int *arr,int len,char *fileName);




/*	func2.c	*/

void createRandomArray(int *p,int len);


/*	func3.c*/

void quickSort(int* arr,int len,int size);

void bubbleSort(int arr[],int len);

void swap(int *a,int *b);

int compar(const void *a,const void *b);


