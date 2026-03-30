// encapsulation
//encapsulation is wrapping up of data and member function (methods) in a single unit it also implement data hiding 

//constructor

#include<iostream>
using namespace std;

class animal{
// public:
string name;
string colore;
public:
animal( string nameval, string colorenew ){
    cout<<"animal is running"<<endl;
    name=nameval;
    colore= colorenew;

}
void start(){
    cout <<"animal is start"<<endl;
}
void stop(){
    cout<<"animal is stop"<<endl;
}
string getname(){
    return name;
}
string getcolore(){
    return colore;
}

};

int main(){
    animal a1("dog","balck");
    cout<<a1.getname()<<endl;
     cout<<a1.getcolore()<<endl;
   
}