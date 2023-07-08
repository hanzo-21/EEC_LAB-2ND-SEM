#include <iostream>
#include <conio.h>
#include <ctime>
#include <iomanip>
#include <cstdlib>
#include <fstream>
#include <string>


using namespace std;

class TikTakToe{
      private:
            int whichPlayersTurn,typeOfPlayer;
            int  boardData[9], indexValue;
            int playerInput;

      public:
            int game(int );
            int coinTosstoss();


};


void welcome(){
      system("cls");
      cout<<"welcome to the tik tac toe game "<<endl;
      cout<<"designed by centiped \n press any key to continue " <<endl;
}

void menu(){
      system("cls");
      cout  <<"           MENU "<<endl<<endl
            <<"1 : vs player "<<endl
            <<"2 : vs computer"<<endl
            <<"3: vs Creator "<<endl
            <<"4: credits "<<endl
            <<"5: Objective "<<endl
            <<"6: Quit game"<<endl
            <<" choose (1 - 5 )"<<endl;

}

void credits(){
      system("cls");
      cout<<"this code is own by aayush Rana Magar"<<endl;
}

void Objective(){
      system("cls");
      cout<<" The objective of the game is to manage to make a continuous line of Xs.\nThis line can be vertical, horizontal, or diagonal."<<endl;
}


TikTakToe:: int  coinToss(void) {
	int randomNumber;
	randomNumber = 1 + rand() % 2;

	return randomNumber;
}

int main()
{
      int option;


      welcome();
      getch();
      system("cls");

      for(;;){

            menu();
            cin>>option

            switch(option){

                  //player vs player
                  case 1:
                        TikTakToe t;


                  //2 : vs computer
                  case 2:



            }




      }
    return 0;
}
