//public  data & methods accessible inside class
//private   data $ methodes accessible to everyone 
//protected data & methods accessible to class &to its derived class

#include <iostream>
using namespace std;
class raj{
    public:
    string name;
    int age;
    int blance;

    void amout(){
        blance=blance*100;
    }

};
int main(){
    raj r1;
    r1.name="rajkamal singh ";
    r1.age=24;
    r1.blance=100;
    r1.amout();

    cout<<r1.name;
   cout<< r1.age;
    cout<<r1.blance;
r1.amout();
 return 0;

}