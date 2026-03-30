// #include <iostream>
// using namespace  std;

// class  demo
// {
// public:
// string name;
// demo(string n){
//     name =n;

// }
// void display(){
//     cout<<"name is :"<<name<<endl;  //global 
// }
// };
// demo d2("rajkamal ");

// int main(){
//     demo d1("rajla");//local 
//     d1.display();
//     demo*d3=new demo("rahul"); // dynamically 
//     d3->display();
//    const demo d4("rakesh ");           // const 
//    d2.display();
//     delete d3;
//     return 0;

// }


#include <iostream>
using namespace std;
class Demo
{
    public:
    string name;
    Demo (string n){
       name=n;

    }
    void dispalay (){
        cout <<"name :"<<name <<endl;

    }
};
Demo d1("raj");
int main (){
    Demo d2("ASo in css ");
    d2.dispalay();
    Demo*d3=new Demo ("100");
    d3->dispalay();
    const Demo d4("kjdks");
   
    delete d3;



}
