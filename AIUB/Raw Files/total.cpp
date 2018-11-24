#include <iostream>
#include <cstdio>
#include <sstream>
#include <string>
#include <math.h>
#include <cstdlib>
#include <conio.h>
#include <ctime>
#include <windows.h>
using namespace std;

class GPA_CALCULATOR
{
    int num_of_sub_taken,num_of_credit_taken,count,credit;
    float a,b,sum=0.00;
    string take_theory,take_lab;
public:
    gpa_calculator()
     {
        system("Cls");
        cout<<"\t\t*** GPA CALCULATOR ***"<<endl<<endl<<endl;
        cout<<'\a'<<" No. of Credit taken in this Semester: ";
        cin>>num_of_credit_taken;
        if(num_of_credit_taken >=23 )
        cout<<'\a'<<"Maximum Credit Level Crossed";
        else
         {
         num_of_sub_taken=num_of_credit_taken/3;
         }
        cout<<endl<<endl<<"Enter The Theoretical & Lab Grades of "<<num_of_sub_taken<<" subjects"<<endl<<" \tExample: A+/A/A-/a+/a/a-..."<<endl;

        for(count=1;count<=num_of_sub_taken;count=count+1)
        {
         cout<<endl<<"Grades of Subject "<<count<<": "<<endl;
         cout<<"Theoretical: "; cin>>take_theory;
         cout<<"Lab(0 if not): "; cin>>take_lab;

        if (take_theory == "A+" || take_theory == "a+"){a =12.00;}
        else if (take_theory == "A" || take_theory == "a"){a =11.25;}
        else if (take_theory == "A-" || take_theory == "a-"){a =10.5;}
        else if (take_theory == "B+" || take_theory == "b+"){a =9.75;}
        else if (take_theory == "B" || take_theory == "b"){a =9.00;}
        else if (take_theory == "B-" || take_theory == "b-"){a =8.25;}
        else if (take_theory == "C+" || take_theory == "c+"){a =7.50;}
        else if (take_theory == "C" || take_theory == "c"){a =6.75;}
        else if (take_theory == "C-" || take_theory == "c-"){a =6.00;}
        else if (take_theory == "D+" || take_theory == "d+"){a =5.25;}
        else if (take_theory == "D" || take_theory == "d"){a =4.50;}
        else if (take_theory == "D-" || take_theory == "d-"){a =3.00;}
        else if (take_theory == "F" || take_theory == "f"){a =0.00;}

        if (take_lab == "A+" || take_lab == "a+"){b =4.00;}
        else if (take_lab == "A" || take_lab == "a"){b =3.75;}
        else if (take_lab == "A-" || take_lab == "a-"){b =3.50;}
        else if (take_lab == "B+" || take_lab == "b+"){b =3.25;}
        else if (take_lab == "B" || take_lab == "b"){b =3.00;}
        else if (take_lab == "B-" || take_lab == "b-"){b =2.75;}
        else if (take_lab == "C+" || take_lab == "c+"){b =2.50;}
        else if (take_lab == "C" || take_lab == "c"){b =2.25;}
        else if (take_lab == "C-" || take_lab == "c-"){b =2.00;}
        else if (take_lab == "D+" || take_lab == "d+"){b =1.75;}
        else if (take_lab == "D" || take_lab == "d"){b =1.50;}
        else if (take_lab == "D-" || take_lab == "d-"){b =1.00;}
        else if (take_lab == "F" || take_lab == "f"){b =0.00;}
        else if (take_lab == "0" || take_lab == "0.00"){b =0.00;}
        sum=sum+a+b;

        }
        sum=sum/num_of_credit_taken;
        float gpa = ceilf(sum * 100) / 100;
        cout<<'\a'<<endl<<"\t==> GPA : "<<gpa<<endl;
     }
};
class CGPA_CALCULATOR
{
    int num_of_semester_completed,credit;
    float cgpa,a,b,sum=0.00;;
    int count;
public:
        cgpa_calculator()
    {
        system("Cls");
        cout<<"\t\t*** CGPA CALCULATOR ***"<<endl<<endl<<endl;
        cout<<'\a'<<" No. of Semester Completed: ";
        cin>>num_of_semester_completed;
        cout<<endl<<endl<<"NOTE: Enter CGPA of "<<num_of_semester_completed-1<<" Semester's and GPA of last Semester: "<<endl;
        for(count=1;count<=num_of_semester_completed-1;count=count+1)
        {
         cout<<endl<<"CGPA of Semester "<<count<<": ";
         cin>>a;
         sum=sum+a;
        }
        cout<<endl<<"GPA of Last Semester(Not CGPA): "<<endl;
        cin>>b;
        sum=sum+b;
        sum=sum/num_of_semester_completed;
        float cgpa = ceilf(sum * 100) / 100;
        cout<<'\a'<<endl<<"\tCGPA = "<<cgpa;
     }
};

class APPLICATION_GENERATOR
{
    string id,semester;
    float cgpa;
    int credit;
public:

    application_generator()
    {

    system("Cls");
    char name[256];
    //std::string p_name;
    char p_name[256];
    cout<<"Enter Your Name (AIUB format): ";
    cin.getline (name,256);
    cout<<"Enter your ID: ";
    cin>>id;
    cout<<"No of Semester you have Completed: ";
    cin>>semester;
    cout<<"No. of Credit you want to take: ";
    cin>>credit;
    cout<<"Your Current CGPA: ";
    cin>>cgpa;
    cout<<"Enter your Parent's name: ";
    //std::getline(std::cin,p_name);
    cin.getline (p_name,256);
    cout<<endl<<endl;
    system("Cls");
    cout<<"To"<<endl<<"The Head of the department"<<endl<<"Faculty of Science & Information Technology"<<endl<<"AIUB, Dhaka-1213"<<endl;
    cout<<"Subject: Prayer for permission to take "<<credit<<" credits."<<endl<<endl;
    cout<<"Dear Sir,"<<endl;
    cout<<"With due respect, I would like to inform you that, My son '"<<name<<"', ID: "<<id<<endl;
    cout<<"has completed his "<<semester<<" semester and secured CGPA-"<<cgpa<<". Due to my sudden financial problem,"<<endl;
    cout<<"it would be very helpful to me and my family to pay his upcoming semester tuition fees if you allow"<<endl;
    cout<<"him to take "<<credit<<" credits in the upcoming Fall 16-17 semester. So Sir I hope you would understand"<<endl;
    cout<<"my situation."<<endl<<endl;
    cout<<"So, I therefore, pray and hope that you would be kind enough to give my son the permission to"<<endl;
    cout<<"take "<<credit<<" credits which is less than the minimum load."<<endl<<endl;
    cout<<"With best regards"<<endl<<endl;
    cout<<p_name<<endl;
    cout<<"Mobile no:    "<<endl;
    }
};

class GRADING_SYSTEM
{
public:
    grading_system()
    {
    system("Cls");
    FILE *fp;
    char ch;
    fp=fopen("source2.data.mp3","r");
    while(1)
    {
    ch=fgetc(fp);
    if(ch==EOF)
        break;
    printf("%c",ch);
    }
    fclose(fp);
    }
};
class SIMPLE_CALCULATOR
{
public:
   void simple_calculator()
    {
      system("Cls");
      cout<<"\tNote: SIMPLE CALCULATOR part is 'Under Construction'"<<endl;
    }
};
class High_LOW
{
public:
    void high_low()
 {
  int number;
 int guess;
 char again;
 const int total_chance=3;
 static int score=0;
 system("Cls");
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

};
class PIANO
{
public:
    void piano()
 {
   while(!0){
              system("Cls");
              cout<<"Press 'E' or 'e' to EXIT"<<endl;
              cout<<"Input note: (A-L row only)";
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
 }
};
class SAMPLE_GAMES:public High_LOW,public PIANO
{
public:
   void sample_games()
    {
 system("Cls");
 char go_to_option1;
 cout<<endl<<endl;
 cout<<" 1. High / Low"<<endl;
 cout<<" 2. Piano"<<endl;
 cout<<" Five new games are coming next week!!!!!"<<endl<<endl;
 cout<<'\a'<<" WHICH OPTION YOU WANT TO USE: ";
 go_to_option1= getch();
 switch (go_to_option1)
   {
 case '1':
    high_low();
    break;
 case '2':
    piano();
    break;
 default:
    cout<<"Invalid Input"<<endl;
   }
 }

};

class FACULTY_EMAIL
{
public:
    faculy_email()
    {
    system("Cls");
    cout<<"Search Option is under Construction"<<endl;
    FILE *fp2;
    char ch;
    fp2=fopen("source1.data.mp3","r");
    while(1)
    {
    ch=fgetc(fp2);
    if(ch==EOF)
        break;
    printf("%c",ch);
    }
    fclose(fp2);
    }
};

int main()
{
 char go_to_option;
 GPA_CALCULATOR *obj_gpa=new GPA_CALCULATOR;
 CGPA_CALCULATOR *obj_cgpa=new CGPA_CALCULATOR;
 APPLICATION_GENERATOR *obj_appgen=new APPLICATION_GENERATOR;
 GRADING_SYSTEM *obj_grad_sys=new GRADING_SYSTEM;
 SAMPLE_GAMES *obj_games=new SAMPLE_GAMES;
 SIMPLE_CALCULATOR *obj_calc=new SIMPLE_CALCULATOR;
 FACULTY_EMAIL *obj_mail=new FACULTY_EMAIL;
 while(true){
 cout<<endl<<endl;
 cout<<"\t\t*** AMERICAN INTERNATIONAL UNIVERSITY,BANGLADESH ***"<<endl<<endl<<endl;
 cout<<" 1. GPA CALCULATOR"<<endl;
 cout<<" 2. CGPA CALCULATOR"<<endl;
 cout<<" 3. APPLICATION GENERATOR"<<endl;
 cout<<" 4. FACULTY'S EMAIL"<<endl;
 cout<<" 5. GRADING SYSTEM"<<endl;
 cout<<" 6. SIMPLE CALCULATOR"<<endl;
 cout<<" 7. SAMPLE GAMES"<<endl<<endl;
 cout<<'\a'<<" WHICH OPTION YOU WANT TO USE: ";
 go_to_option= getch();
 switch (go_to_option)
 {
 case '1':
    obj_gpa->gpa_calculator();
    break;
 case '2':
    obj_cgpa->cgpa_calculator();
    break;
 case '3':
     obj_appgen->application_generator();
    break;
 case '4':
     obj_mail->faculy_email();
    break;
 case '5':
     obj_grad_sys->grading_system();
    break;
 case '6':
     obj_calc->simple_calculator();
    break;
   case '7':
    obj_games->sample_games();
    break;
 default:
    cout<<"Invalid Input"<<endl;
    system("Cls");
 }
}
 return 0;
}

