#include<iostream>
using namespace std;
class Student
{
public:
    string name;
    int age;
    float rollnumber;

};


void geert(Student s){
cout<<s.name<<" "<<s.age<<" "<<s.rollnumber<<endl;
}
void change(Student &s){ //this not chane untill we use (&) this .its know as call by value / pass br reference
    s.name="rajsingh";
    s.age=45;
    s.rollnumber=54;

}


int main(){
    Student s1;
    s1.name="rajkamal";
    s1.age=23;
    s1.rollnumber=15;

    // Student s2;
    // s2.name="kamal";
    // s2.age=23;
    // s2.rollnumber=15;
    
    geert(s1);
    change(s1);//pass by value
      
    geert(s1);

    // geert(s2);
}
