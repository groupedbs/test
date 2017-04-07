#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define BUFFER 2017

int main(int argc, char const *argv[]){
	if(argc < 2) return 0;

	while(1){
		char ligne[BUFFER];

		int nread = read(0,ligne,BUFFER);
		
		if(strstr(ligne,argv[1]) != NULL){
			write(1,ligne,nread);
		}

	}	

	return 0;
}