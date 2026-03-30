// friend class and function 

// a friend class or a friend function can access private and protected members of other classes in which it is declred as a friend .

#include <iostream>
using namespace std;

class A
{
string priva ="tarajan  ";
friend class B;
friend void revealpriva(A &obj);
};

class B {           // become a friend class of a 
public:
void showpriva ( A &obj){
    cout<<obj.priva << endl;
}
};

void revealpriva ( A &obj){         // friend function 
    cout<< obj.priva <<endl;
}


int main (){
    A s1;
    B e1;
    e1.showpriva(s1);       //friend class 

    revealpriva(s1);        // friend function
}