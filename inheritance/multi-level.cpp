#include <iostream>
using namespace std;
 
class raj{
    public:
int age;
int hight;

void jump(){
    cout<<"jumping \n";

}
void run(){
    cout<<"runnning \n";

}
};

class ram:public raj 
{
    public:
int a;
int g;
void sing (){
    cout<<"singing \n";

}
void dance(){
    cout<<"dancing \n";
}
};

class abhay : public ram{
    public:
int g;
int h;
void study  (){
cout<<"studying \n";

}

void reading(){
    cout<<"he reads \n";

}
};

int main(){

    abhay a1;
    a1.jump();
    a1.sing();
}