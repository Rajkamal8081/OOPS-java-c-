// inheritence  
//when properties and member function of base are passed on the derived class

#include <iostream>
using namespace std;

class animal {
public:
string colore;

void eat(){

    cout<<"eats \n";
}

void breath(){
    cout<<"breath \n";

}

};


class fish :public animal 
{
public:
int fins;

void swim(){
    cout<<"swims \n";

}
};

int main(){
    fish f1;
    f1.breath();
}





//this is a exmple of single inheriteance