#include <iostream>
#include<conio.h>
#include<string.h>
#include "file_utils.h"

using namespace std;

int main() {

	char fileName[]="input.txt";
	char* content=readContent(fileName);



	cout<<content<<endl;



	//next program

    int len;
    char arr[10][10];

    len= strlen(content);

    cout<<len<<endl;

    int contentLength,wordCount,charCount;

    for(wordCount=0,contentLength=0;contentLength<len;wordCount++){

        charCount= 0;
        while(content[contentLength]!=' '){

            arr[wordCount][charCount]=content[contentLength];
            charCount++;
            contentLength++;
        }
        contentLength++;

    }

    cout<<"whast isus"<<endl;

    int temporary1,temporary2;

    for(temporary2=0;temporary2<wordCount;temporary2++){
            for(temporary1=0; arr[temporary1][temporary2] != '\0';temporary1++){
                printf("%c",arr[temporary1][temporary2]);
            }

            printf("\n");


    }





	getch();
	return 0;
}
