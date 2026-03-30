#include<iostream>
using namespace std;
class Student
{
public:
    string name;
    int age;
    float rollnumber;

    // Student(){//default

    // }

    //we can make many contructor in class

    Student(string s,int r,float g){ //parameterize constructor
        name =s;
        age =r; 
        rollnumber =g;


    }

};


int main(){
    Student s1("rajk",23,43);
    Student s2("rahul",223,45);
       Student s3("rajkamal",2,43);
    Student s4("ral",233,45);

Student s5=s2; //copy constructor
 s5.name= "raka"; // deep copy constructor if it change

    // s1.name="rajkamal";
    // s1.age=23;
    // s1.rollnumber=15;
cout<<s1.name<<" "<<s1.age<<"  "<<s1.rollnumber<<endl;
cout<<s2.name<<" "<<s2.age<<"  "<<s2.rollnumber<<endl;
cout<<s3.name<<" "<<s3.age<<"  "<<s3.rollnumber<<endl;
cout<<s4.name<<" "<<s4.age<<"  "<<s4.rollnumber<<endl;
cout<<s5.name<<" "<<s5.age<<"  "<<s5.rollnumber<<endl;
}
