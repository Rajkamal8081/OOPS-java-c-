//in this two base class are drived from one single drived class


#include <iostream>
using namespace std;

class rajkamal
{
    public:
string name;
int age;
void skill(){
    cout<<"learing a new skill \n";
}
};

class singh 
{
public:
string name;
int age;
void levelup(){

    cout<<"skilling and leveluping \n";
}
};

class ra :public rajkamal,  public singh 
{
    public:
void person(){
cout<<"new presonaltiy \n";
}
};

int main(){
    ra r1;
    r1.levelup();
    singh s1;
    s1.name= "rajla";
    cout<<s1.name<<endl;
    s1.levelup();
}