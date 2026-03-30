// polymorphism is the ability of object to take on different forms or behave in different wayas depending on the context in which they are used 

// complie time polymorphim 
// run time polymorphism 



// in this we are making two functio and in first fun we make int amd in second fun string
// this is a function overloading and in this we can put the same name for function but in the parameter 
// we should give the different datatypes 


// complie time polymorphim 
// function overloading 

#include<iostream>
using namespace std;

class print {
    public :
    void show (int x){
        cout<<"int :" << x << endl;

    }
     void show (string str){
        cout<<"string " <<str << endl;

    }
};

int main (){
    print p1;
    p1.show(25);
    p1.show("raj");
    return 0;

}


