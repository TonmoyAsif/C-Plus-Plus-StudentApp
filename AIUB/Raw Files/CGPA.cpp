#include <iostream>
#include <stdio.h>
#include <sstream>
#include <string>
#include <math.h>
using namespace std;

class cgpa
{
    int num_of_semester_completed;
 public:
     cgpa(int x):num_of_semester_completed(x)
     {
        cout<<endl<<endl<<"Enter CGPA of "<<num_of_semester_completed-1<<" Semester's and GPA of last Semester: "<<endl;
        int count;
        float a,b,sum=0.00;
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
        cout<<'\a'<<endl<<"CGPA = "<<cgpa;
     }
     ~cgpa(){}
};

int main()
{
 int num_of_semester_completed;
 //int num_of_sub_taken;
 cout<<"            *** CGPA CALCULATOR ***"<<endl<<endl<<endl;
 cout<<'\a'<<" No. of Semester Completed: ";
 cin>>num_of_semester_completed;
     cgpa obj_of_cgpa(num_of_semester_completed);

 return 0;
}
