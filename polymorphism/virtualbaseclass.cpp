#include <iostream>
using namespace std;

class base 
{
public:
void display(){
    cout <<"base class \n";
}
};
class drived: virtual public base{
public:

void display(){
cout<<"drived class \n";
}
};
// class d : virtual public base 
// {
// public:
// void show (){
//     cout<<"d is showing \n";
// }
// };

class d3: public base ,public drived
{
public:
d3(){
    cout<<"d3 is constract \n";
}
};

int main (){
    // base b1;
    // b1.display();
    // drived d1;
    // d1.display();
    // d f1;
    // f1.display();

    d3 d;

}
