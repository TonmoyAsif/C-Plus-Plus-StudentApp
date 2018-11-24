#include<iostream>
#include<fstream>
using namespace std;

int main(){
    //preparing the i/p object
    ifstream fin;
    //opening file for i/p
    fin.open("in.txt");

    int x;
    fin>>x;
    cout<<x;
    string s;
    //normally if "fin" can take input successfully then it returns the address of "fin"
    //when the input is finished "fin" returns NULL
    //when the while loop gets NULL from "fin" it breaks
        while(fin>>x){
        cout<<x<<endl;
   }

    fin.close();


    //preparing the o/p object


    return 0;
}
