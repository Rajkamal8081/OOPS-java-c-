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


int main(){
    Cricketer c1("virat kkohli",24990 ,45);
    Cricketer* c2 = new Cricketer("rohit",33423,34);

    cout<<c1.name<<" "<<c1.run<<endl;
    cout<<(*c2).name<<" "<<(*c2).run<<endl;


}
