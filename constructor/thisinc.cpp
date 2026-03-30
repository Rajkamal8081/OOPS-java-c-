#include <iostream>
using namespace std;
class Cricketer{
    public:
string name;
int run;
// Cricketer(string n,int r){
//     name=n;
//     run =r;
// }

Cricketer(string name,int run){
   this-> name=name;
   this-> run =run;
}
};

int main(){
    Cricketer c1("virat kkohli",24990);
    Cricketer c2("rohit",33423);
    cout<<c1.name<<" "<<c1.run<<endl;
      cout<<c2.name<<" "<<c2.run<<endl;
}

