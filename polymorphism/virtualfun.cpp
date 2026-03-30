// run time polymorphism 

// virtual function 
// a virtual function is a member function that you expect to be redefined in derived classses

#include <iostream>
using namespace std;

class parents
{
public:
void show (){
    cout<<"parents class \n";

}
virtual void hello(){  //virtual  define 
cout <<"parents class virtual \n";
}

};

class child : public parents
{
  
    public:
    void show (){
        cout<<"child class \n ";
    }

     void hello(){   //redefine virtual here 
cout <<"child class virtual \n";
}


};

int main (){
    child c1;
    // c1.show();
    // c1.hello();

    parents *ptr;
    ptr=&c1;        //run time binding 
    ptr->hello();       // virtual function 
    return 0;
}