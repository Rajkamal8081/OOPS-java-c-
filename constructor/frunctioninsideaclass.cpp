#include <iostream>
using namespace std;
class Cricketer{
    public:
string name;
int run;
float avg;

Cricketer(string name,int run,float avg){
   this-> name=name;
   this-> run =run;
   this->avg=avg;
}
void print(){
    cout<<name<<" "<<run<<" "<<avg<<endl; //fot this we have to write this c1.print /or c1.name ="jks";
}

};

// void print(Cricketer c){
//     cout<<c.name<<" "<<c.run<<" "<<c.avg<<endl; //i can make this function in side a class 
// }

int main(){
    Cricketer c1("virat kkohli",24990 ,45);
    Cricketer c2("rohit",33423,34);
    // cout<<c1.name<<" "<<c1.run<<endl;
    //   cout<<c2.name<<" "<<c2.run<<endl;

    // print(c1);
    // print(c2); //but we have to write not this 

    c1.print();
    c2.print();
}

