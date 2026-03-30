#include <iostream>
using namespace std;
class student{
    public:
    int rollnumber;
    string name;

};
int main(){
    student s1;  //object
    cin>>s1.name;
    cin>>s1.rollnumber;
    cout<<s1.name;
   cout<< s1.rollnumber;

    return 0;
}