#include "myfile.h"

int writeToFile(int * arr, int n, char * fileName) {
	int fileID, bytes, times, rest, i, step = 10;
	int flag = O_CREAT | O_TRUNC | O_WRONLY;
	times = n / step;
	rest  = n % step;

	if((fileID = open(fileName, flag, 0666)) >= 0) {
		//writing to file 40bytes per
		for(i = 0; i < times; i++) {
			write(fileID, arr, sizeof(mtype) * step);
		}
		write(fileID, arr, sizeof(mtype) * rest);

		if(close(fileID) < 0) {
			perror("the file cannot be close!\n");
			return -2;
		}
		return 0;
	}
	
	perror("the file cannot be found!\n");
	return -1;
}

int * readFromFile(char * fileName, int size) {
	int fileID, bytes = 1024, * dest;
	int flag = O_RDONLY;

	dest = (int *)malloc(sizeof(int) * size);

	if((fileID = open(fileName, flag, 0666)) >= 0) {
		while(read(fileID, dest, bytes) > 0);

		return dest;
	}
	
	perror("the file cannot be found!\n");
	return NULL;
}
