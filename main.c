#include "mysort.h"		//my sort functions
#include "main.h"		//to define the struct Result (x)
#include "mytools.h"	//my Utils
#include "myfile.h"		//my file functions


int main(int argc, char *argv[]) {
	dup2(fd, 0);
	dup2(fd, 1);
	dup2(fd, 2);
	if(fd > 2)	close(fd);
}
