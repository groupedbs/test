#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<unistd.h>



void	ftrecursif(char * str,int taille)
{
	if(taille > 0)
	{
		mkdir(str,0777);
		chdir(str);
		ftrecursif(str+1,taille -1);
	}
}



void revenir(int taille)
{
	if (taille > 0)
	{
		chdir("..");
		revenir(taille -1);
	}
}


void	arbre(int taille, char ** str)
{
	int i;
	
	for(i = 0;i < taille;i++)
	{
		mkdir(str[i],0777);
		chdir(str[i]);
		ftrecursif(str[i]+1,strlen(str[i]));
		revenir(strlen(str[i]));
	
	}
}
			


	


int main(int  argv , char *argc[])
{

	if(argv < 3)
		return -1;

	if(mkdir(argc[1],0777) < 0)
		return -1;
	chdir(argc[1]);
	printf("je suis rentre dans le dossier\n");
	arbre(argv-2,argc+2);
	return 1;
}
	


