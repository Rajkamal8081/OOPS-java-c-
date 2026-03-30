// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     vector<int>vec{1,3,2,3,4,4};
//     vector<int>::iterator it;
//     for(it = vec.begin();it!=vec.end();it++){
//         cout<<*it<<" ";
//     }
//     cout<<endl;
//     return 0;
// }


//revers 
// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     vector<int>vec{1,3,2,3,4,4};
//     vector<int>::reverse_iterator it;
//     for(it = vec.rbegin();it!=vec.rend();it++){
//         cout<<*it<<" ";
//     }
//     cout<<endl;
//     return 0;
// }

//we can use auto also 


#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>vec{1,3,2,3,4,4};
    // vector<int>::reverse_iterator it;
    for(auto  it = vec.begin();it!=vec.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    return 0;
}
