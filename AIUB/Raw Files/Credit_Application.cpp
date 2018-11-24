#include <iostream>
#include <cstdio>
#include <sstream>
#include <string>
#include <math.h>
#include <cstdlib>
#include <conio.h>
using namespace std;
class credit_app
{
  string name,id,semester,p_name;
  float cgpa;
  int credit;
public:
    credit_app(string a,string b,string c,float d,string e,float f):name(a),id(b),semester(c),credit(d),p_name(e),cgpa(f)
    {
       cout<<endl<<endl;
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
       cout<<"With best regards"<<endl;
       cout<<p_name<<endl;
       cout<<"Mobile no:    "<<endl;
    }

};

int main()
{
    string id,semester;
    float cgpa;
    int credit;
    char name[256];
    std::string p_name;
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
    std::getline(std::cin,p_name);
    credit_app write(name,id,semester,credit,p_name,cgpa);
  return 0;
}
