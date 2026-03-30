#include <iostream>
using namespace std;
void show(int a){
    cout <<"normal function  "<<a<<endl;

}
template<class T>
void show( T a){
    cout <<"template functon "<< a << endl;
}
int main (){
show(24);
show(23.4);
return 0;
}
