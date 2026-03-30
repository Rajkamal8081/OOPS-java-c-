// #include <iostream>
// using namespace std;

// template<class p>
// class car{
// private:
// p value ;
// public:
// void setvalue(p v){
//     value = v;
// }
// p getvalue(){
//     return value ;
// }
// };

// int main (){
//     car<int>intcar;
//     car<string>strcar;
//     intcar.setvalue(200);
//     strcar.setvalue("maruti");

//     cout<<"modals"<<intcar.getvalue()<<endl;
//     cout<<"car"<<strcar.getvalue()<<endl;
    
//     return 0;
    

// }












#include <iostream>
using namespace std;
template<class T>
class R
{
    private:
T value;
public:
void setvalue(T v){
    value=v;
}
T getvalue(){
    return value;
}
};
int main (){
    R<int>intR;
    R<string>strR;
    intR.setvalue(545);
    strR.setvalue("rakkak");
    cout<<"integer vlaue"<<intR.getvalue();
    cout<<"string value"<<strR.getvalue();
}