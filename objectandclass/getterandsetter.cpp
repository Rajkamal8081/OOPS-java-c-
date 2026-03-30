#include <iostream>
#include<string>
using namespace std;
class student{

string name;
int roll;

public:

float cgpa;

void getprecentage(){
    cout<<(cgpa*10)<<"% \n";
}

//setter 

void setName( string nameval)
{
name =nameval;
}
void setroll( int newroll)
{
roll = newroll;
}

         //getter

string getname(){
    return name;
}
int getroll(   ){
    return roll;
}


};


int main(){


    student s1;
    s1.setName("rajkamal");
    s1.setroll(24);

    cout<<s1.getname()<<endl;
    cout<<s1.getroll()<<endl;

    return 0;



   
}