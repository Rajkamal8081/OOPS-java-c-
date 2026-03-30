// #include <iostream>
// #include <vector>
// #include <list>
// using namespace std;
// int main(){
//   list<int>l;

//   l.push_back(1);
//     l.push_back(2);
//       l.push_back(3);
// l.push_front(4);
// l.push_front(9);
// for(int val : l){
//     cout<< val <<" ";
// }
// cout<<endl;
// }


// deque also use the same function of list 

// to use deque function in the programm we should add its header file in the top 

#include <iostream>
#include <vector>
#include <list>
#include <deque>
using namespace std;
int main(){
  deque<int>l;

  l.push_back(1);
    l.push_back(2);
      l.push_back(3);
l.push_front(4);
l.push_front(9);
for(int val : l){
    cout<< val <<" ";
}
cout<<endl;
}