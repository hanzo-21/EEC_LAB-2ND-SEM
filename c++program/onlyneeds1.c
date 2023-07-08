// which is greater of two number

#include<stdio.h>
#include<conio.h>

int a;

int input();

int main (){
	
	
	if (input()>input())
		printf("%d is not greater",a);
	else
		printf("%d is greater",a);
	
	
	
	
	getch();
	return 0;
}

int input(){
	printf("enter number ");
	scanf("%d",&a);
	return a;
}
