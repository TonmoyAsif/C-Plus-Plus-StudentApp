#include <iostream>
#include <stdio.h>
#include <sstream>
#include <string>
#include <math.h>
using namespace std;

class gpa
{
    int num_of_sub_taken;
    int num_of_credit_taken;

public:
     gpa(int x,int y):num_of_sub_taken(x),num_of_credit_taken(y)
     {
        cout<<endl<<endl<<"Enter The Theoretical & Lab Grades of "<<num_of_sub_taken<<" subjects"<<endl<<"          Example: A+/A/A-/a+/a/a-..."<<endl;
        int count;
        float a,b,sum=0.00;
        string take_theory,take_lab;
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
     ~gpa(){}
};

int main()
{
 int num_of_credit_taken;
 int num_of_sub_taken;
 cout<<"\t\t*** GPA CALCULATOR ***"<<endl<<endl<<endl;
 cout<<'\a'<<" No. of Credit taken in this Semester: ";
 cin>>num_of_credit_taken;
 if(num_of_credit_taken >=23 )
    cout<<'\a'<<"Maximum Credit Level Crossed";
 else
 {
     num_of_sub_taken=num_of_credit_taken/3;
     gpa obj_of_gpa(num_of_sub_taken,num_of_credit_taken);
 }
 return 0;
}
