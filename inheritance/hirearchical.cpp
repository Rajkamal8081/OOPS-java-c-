// in this we inherite from single base class in two or many dervide class 

#include <iostream>
using namespace std;

class school
{
    public:
string name;

void address(){
    cout<<"ajjkajljljalk \n";
}
void fun(){
    cout<<"fun  \n";
}

};

class tution : public school
{
void name(){
    cout<<"enter the namw \n";
}
};

class tt : public school 
{
void ram  (){
    cout<<"ram \n";
}
};

int main(){
    tt r1;
    r1.address();
}