#include<stdlib.h>
#include<stdio.h>
char *readContent(char *fileName){
	
	char  *content= (char*) malloc(sizeof(char)*100+1);
	
//	if(content==NULL){
//		printf("File cannot be opened");
//		exit(1);
//	}
	char *str;
	FILE *fprt;
	fprt= fopen(fileName, "r");

	char *input ; 
	
	fgets(input,1,fprt);
	int count=0;
	
	for(;*input!=EOF;count++ ){
		content[count]= *input;
		*input= fgetc(fprt);
	}
	content[count]='\0';
	return content;
	
	
}


