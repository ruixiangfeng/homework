#include "main.h"

/*

	function : find the maximum,minimum,ave and sum

	param : int *arr,int len

	return : struct arg args
*/
struct arg analyzeArray(int *arr,int len){

	struct arg args;

	args.sum = sum(arr,len);

	args.ave = ave(arr,len);

	args.max = max(arr,len);

	args.min = min(arr,len);

	return args;
	
}

/*

	function : Calculate the sum of elements in an array

	param : int *arr,int len

	return : int sum
	
*/
int sum(int *arr,int len){

	int i,sum = 0;

	for(i = 0;i<len;i++)
		sum += arr[i];

	return sum;
}


/*

	function : Calculate the average of elements in an array

	param : int *arr,int len

	return : int ave
	
*/
int ave(int *arr,int len){

	return sum(arr,len)/len;

}

/*

	function : Find the maximum in an array

	param : int *arr,int len

	return : int maximum
	
*/

int max(int *arr,int len){

	int max = INT_MIN,i;

	for(i = 0;i<len;i++)
		max = max>arr[i]?max:arr[i];

	return max;
}

/*

	function : Find the minimum in an array

	param : int *arr,int len

	return : int minimum
	
*/

int min(int *arr,int len){

	int min = INT_MAX,i;

	for(i = 0;i<len;i++)
		min = min<arr[i]?min:arr[i];

	return min;
}


/*

	function : Print all elements and arg in an array

	param : int *arr,int len

	return : none
	
*/

void show(int *arr,int len){

	int i;
	struct arg args;

	args = analyzeArray(arr,len);

	for(i = 0 ; i < len ; i++)
		printf(" %d ",arr[i]);
	printf("\n");

	printf("sum : %d, ave : %d, maximum : %d, minimum : %d\n",args.sum,args.ave,args.max,args.min);

}

/*

	function : Write all elements to file

	param : int *arr,int len,char* fileName

	return : none
	
*/

void writeArray(int *arr,int len,char *fileName){

	int flags = O_CREAT | O_TRUNC | O_WRONLY;
	int fddes = open(fileName,flags,0664);

	if(fddes < 0)
	{
		perror("fail to open file");
		return;
	}	

	write(fddes,arr,len);

	close(fddes);

	
}	

void readArray(int *arr,int len,char *fileName){

	int flags = O_RDONLY;

	int fddes = open(fileName,flags,0664);

	read(fddes,arr,len);

	show(arr,len);
    close(fddes);

}


