#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include <ctime>
#include<stdio.h>
using namespace std;


int main()
{
 int number;
 int guess;
 char again;
 const int total_chance=3;
 static int score=0;
 cout<<"\t\tWelcome to the High/Low game."<<endl<<endl;
 do
 {
   int chance=0;

   srand( time(0));
   number=rand()%10+1;
   cout<<"I have picked A random number from 0 to 10. Let's see if You can guess the number."<<endl;
   do
   {
     cout<<"What is your guess? (0 to 10): ";
     cin>>guess;
     if((guess<0)||(guess>10))
     {
	cout<<"Sorry,your guess must be between 0 to 10. "<<endl;
     }
     else if(guess < number)
     {
	cout<<endl<<guess<<" is low.Try a higher number. ";
     }
     else if(guess > number)
     {
	cout<<endl<<guess<<" is high.Try a lower number. ";
     }
     else		//if correct number is guessed
     {			//number is correct, and the "do" loop will end below
	cout<<endl<<"Your guess "<<guess<<" is correct. Congratulations!!"<<endl<<endl;
	score=total_chance-chance;   //score calculated for number of chances left
	cout<<"Your score is "<<score<<endl;
	break;
     }
     chance++;
     if(guess!=number)
	 cout<<" You have "<<total_chance-chance<<" chances left."<<endl;
     if(chance==total_chance)
	 { cout<<"You have tried your "<<total_chance<<" chances. Better luck next time"<<endl<<endl<<endl;
	   cout<<"The actual number was "<<number<<endl;
	   break;
	 }
     }while (guess!=number);
     cout<<"Thank you for playing High/Low!. ";
     cout<<" Want to play it again? (y/n)...: ";
     again= getch();
     system("cls");
   }while(again=='y' || again=='Y');
 }
