#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <windows.h>
using namespace std;

int main()
{
  while(!0){
              cout<<"Press 'E' or 'e' to EXIT"<<endl;
              cout<<"Input note: ";
              char note;
              note= getch();
              cout<<note;
              system("cls");
              if(note=='x'||note=='X'){break;}
              if(note == 'a'){
                      Beep(250,150);
                      }
              if(note == 's'){
                      Beep(300,150);
                      }
              if(note == 'd'){
                      Beep(350,150);
                      }
              if(note == 'f'){
                      Beep(400,150);
                      }
              if(note == 'g'){
                      Beep(450,150);
                      }
              if(note == 'h'){
                      Beep(500,150);
                      }
              if(note == 'j'){
                      Beep(550,150);
                      }
              if(note == 'k'){
                      Beep(600,150);
                      }
              if(note == 'l'){
                      Beep(650,150);
                      }
}

    return 0;
}
