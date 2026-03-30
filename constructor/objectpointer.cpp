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

};
void change(Cricketer* c){
    c->avg=86; //we can also write this *c.avg=343;
}

int main(){
    Cricketer c1("virat kkohli",24990 ,45);
    //Cricketer c2("rohit",33423,34);
cout<<c1.avg<<endl;
change(&c1);
cout<<c1.avg<<endl;


   
    // Cricketer*p1=&c1; //this will hold the adderss 
    // cout<<(*p1).run<<endl; //this will give the value of the run 
    // (*p1).avg=95; //this will updata the value 
    // cout<<c1.avg<< endl;
    // cout<<p1 ;//this will give the adderss of the c1

}
