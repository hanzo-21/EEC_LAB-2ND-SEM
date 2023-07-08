/*


which is most populalar product;

set= {3,4,5,3,2,2,2,3,4,6,4,2,3,4,2,3,3,3}

*/







#include<conio.h>
#include<stdio.h>


struct list{
	int pro;
	int num;
};

int main(){
	
	struct list l[10];
	
	int s[10];
	
	int i ,j,n,m=0;

	printf("enter numwer of products ");
	scanf("%d",&n);
	
	for(i=0 ; i<n ; i++){
		scanf("%d",&s[i] );
	}
	
	
	for(i=0 ; i<10; i++){
		l[i].num=0;		
	}
	
	l[0].pro = s[0];

	
	for (j=0; j <= m ; i++){

		for (i=0 ; i<n ; i ++){
									
			if (s[i]==l[j].pro){
				l[j].num++;
			}
			
			else{
				m++;
				l[m].pro=s[i];
				l[m].num++;	
			}
			
		}
			
	}
	
	
	printf("display tally \n" );
	
	for (i=0 ; i< m ; i++){
		printf("%d\t%d\n",l[i].pro,l[i].num);
	}
		
		
	
	
	getch();
	return 0;
}
