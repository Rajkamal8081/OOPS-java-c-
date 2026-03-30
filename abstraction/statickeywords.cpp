// static keyword

//static variable 
// variables declared as static in a function are created and initialised once for the lifetime of the program ./in function 

// static variable in class are created and initialised once . they are shared by all the objects of the class ./ in class 


#include <iostream>

using namespace std;
void counter (){
   static  int count = 0;  // without static it will give  the result from start and when we use static keyword it will give series 
    count++;
    cout<<"count :"<<count <<endl;

}

int main(){
    counter ();
    counter();

}