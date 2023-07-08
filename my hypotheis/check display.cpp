// check how it is displayed

#include<iostream>
#include<conio.h>

using namespace std;



void tap(){

      cout<<R"(

                    @@@@
             @@@@@@@@@@@@@@@@@@
              @@@%. @@@@  %@@@
                    @@@@
                 @@@@@@@@@@
                  @@@@@@@@/
    @@@,         &@@@@@@@@@
    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&
    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
    @@@@     ,@@@@@@@@@@@@@@@//@@@@@@@@
                   @@@@@@        @@@@@@
                                 ,@@@@@
                                  ,,,,,
)";
}



void tital(){
      system("cls");
      cout<<R"(

   ______   _______     _____  _______    ______
  |_   _ `.|_   __ \   |_   _||_   __ \ .' ____ \
    | | `. \ | |__) |    | |    | |__) || (___ \_|
    | |  | | |  __ /     | |    |  ___/  _.____`.
   _| |_.' /_| |  \ \_  _| |_  _| |_    | \____) |
  |______.'|____| |___||_____||_____|    \______.'

  )";
}

void fallingWaterAnimation(int n) {

      switch (n){

      case 0:
            break;

      case 1:
            cout<<"                                  (((()"<<endl;
            break;

      case 2:
            cout<<
R"(                                 ((((()
                                   ((()  )";

            break;


      case 3:
            cout<<
R"(                                ((((()
                                  (((((()
                                   ((() )";

            break;

      case 4:
            cout<<

R"(                                  ((()
                                   ((((())
                                   ((((())
                                   ((() )";

            break;

      case 5:
            cout<<

R"(                                 /\
                                   ((()
                                  ((((())
                                  ((((())
                                   ((() )";

            break;



      default:

            break;

      }

}



int main(){

      int n=5, i;

      tital();

      getch();

      for(i=0;;i++){

            if (i==n ){
                  i=0;
            }

            system("cls");
            tap();

            fallingWaterAnimation(i);

            getch();





      }

      getch();
      return 0;
}
