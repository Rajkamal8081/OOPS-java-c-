#include <iostream>
using namespace std;
template<class T>
void show( T x){
    cout <<"templare 1 "<<x<<endl;

}
template<class T , class u>
void show( T a, u c){
    cout <<"template 2"<<a<<" "<<c<< endl;

}
int main(){
    show(25);
    show("raj" ,34);

    return 0;
}
