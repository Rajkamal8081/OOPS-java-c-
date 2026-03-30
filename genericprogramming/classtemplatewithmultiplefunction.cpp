#include <iostream>
using namespace std;
template<class t>
class calculater{
private:
t num ,num1;
public:
calculater(t a,t b){
num =a;
num1 =b;
}
t add(){
    return num + num1;
}
t sub(){
    return num - num1;
}
t mul(){
    return num * num1;
}
};
int main(){
    calculater<int> c1(10,4);
    calculater<float> d1(1.2,3.44);
    cout<<"integer adddition "<<c1.add()<<endl;
    cout <<"folating addition  "<<d1.add()<<endl;

}







