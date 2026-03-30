// complie time polymorphim 



#include <iostream>
using namespace std;

class complex{
    public:
int real;
int img;

 complex (int r,int i){
    real =r;
    img =i;
 }


 void shownumber(){
    cout<<real<<" + "<<img<<" i\n";
 }
// opreteroverloading


 complex operator + (complex &c2){
    int resreal = this->real + c2.real;
    int resimg = this -> img + c2.img ;

    complex c3(resreal ,resimg );
    cout<< "res = ";
    return c3;

 }

};

int main(){


    complex c1(1,3);
    complex c2 (2,4);

    c1.shownumber();
    c2.shownumber();

      complex c3= c1+c2;

      c3.shownumber();


}



