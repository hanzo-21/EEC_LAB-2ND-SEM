#include<conio.h>
#include<iostream>
#include<string.h>

using namespace std;

int main(){
	
	char arr[10][10],str[200];
	int i,j,k,len;
	int m,n;
	
	cout<<"enter string"<<endl;
	gets(str);
	
	len=strlen(str);
	
	for(i=0,k=0;i<len;i++){
		for(j=0;str[k]!=' ';j++){
			arr[j][i]=str[k++];
		}
	}
		
	for	(m=0;m<i;m++){
		for(n=0;n!='\0';n++){
			printf("%c",arr[n][m]);
			
		}
		printf("\n");
	}
	
	getch();
	return 0;
}
