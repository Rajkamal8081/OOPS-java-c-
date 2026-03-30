// Abstraction 
// hiding all unnecessary details & showing only the important parts 

// Abstract  classes & pure virtual function 

// abstract classes are used to provide a base class from which other classes can be derived 

//  they cannot be instantiated and are meant to be inherted 

//  abstract classes are typically used to define an interface for derived classes

// pure virtual function 
// A pure virtual funtion (or abstract function) is a virtual with no definition /logic 
//it is declared by assigning 0 at the of declaration 


#include <iostream>
using namespace std;
 
// Abstract function 

class shape 
{
public:
virtual void show ()=0;  // pure virtual fun and abstract fun 

};
 
class circal : public shape
{
public:
void show(){
    cout <<"circal is rouand \n";
}
};
class triangle  : public shape
{
public:
void show(){
    cout <<"triangle  is three side  \n";
}
};

int main (){
    circal c1;
    c1.show();

    triangle t1;
    t1.show();

}