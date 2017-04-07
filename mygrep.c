#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFSIZE 1024

int main(int argc, char const *argv[]){
	if(argc < 2) return 0;

	while(1){
		char ligne[BUFFSIZE];

		fgets(ligne,BUFFSIZE,stdin);
		
		if(strstr(ligne,argv[1]) != NULL){
			printf("%s\n",ligne);
		}
	}	

	return 0;
}