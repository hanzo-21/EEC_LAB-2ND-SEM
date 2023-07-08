#include <iostream>
#include<conio.h>
#include "SPELL_UTILS.h"

using namespace std;

int main() {
	
	char fileName[]="C:\\input.txt";
	char* content=readContent(fileName);
	
	cout<<"the word is "<<content<<endl;
	
	getch();
	return 0;
}
