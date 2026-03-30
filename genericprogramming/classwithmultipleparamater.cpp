

// #include <iostream>
// // #include <string>
// using namespace std;

// template<class T1, class T2>
// class Pair {
// private:
//     T1 first;
//     T2 second;

// public:
//     // Constructor name must match class name
//     Pair(T1 a, T2 b) {
//         first = a;
//         second = b;
//     }

//     void display() {
//         cout << "First: " << first << "  Second: " << second << endl;
//     }
// };

// int main() {
//     Pair<int, float> p1(10, 12.5);
//     Pair<string, int> p2("kamal", 23);

//     p1.display();
//     p2.display();

//     return 0;
// }






#include <iostream>
using namespace std;
#include<string>
template<class T ,class R>
class Pair
{
private:
T num1;
R num2;
public:
Pair( T a , R b){
    num1=a;
    num2=b;
}
void display(){
    cout<<"first"<<num1<<" "<<"second"<<num2<<endl;
}
};

int main()
{
Pair<int ,string>p1(23 ,"rajkamal");
}