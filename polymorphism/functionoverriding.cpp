// run time polymorphism 
 // funtion overriding 
 // parents and child both contains the same function with different implemention 
 // the parent class function is said to  be overridden 


 // in this type of function if parent function have a fun and in the child class also have a fun but both have a same name 
 // then the child class fun will call and its disede on the run time 


 #include <iostream>
 using namespace std;
 class parent
 {
    public:
void show (){
    cout<<"parent class show \n";
}
 };

 class child :public parent
 {
    public:
    void show(){
        cout<<"child class show  \n";
    }

 };

 int main(){
    child c1;
    c1.show();

 }