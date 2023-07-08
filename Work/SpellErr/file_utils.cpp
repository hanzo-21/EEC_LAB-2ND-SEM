#include<stdlib.h>
#include<stdio.h>
char *readContent(char *fileName){

	char  *content= (char*) malloc(sizeof(char)*100+1);

//	if(content==NULL){
//		printf("File cannot be opened");
//		exit(1);
//	}
	FILE *fp=fopen(fileName, "r");

    if (fp==NULL){
        content[0]='\0';
    }
    else   {
        int count= 0;
        int ch=fgetc(fp);
        while(ch!=EOF){
            content[count++]=(char)ch;
            ch=fgetc(fp);

        }
        content[count]='\0';
        fclose(fp);
    }
	return content;


}

char *sortContent(char*){

}


