#include <iostream>
#include <map>
using namespace std;
int main(){
    map<string , int>m;
    m["tv"]=106;
      m["te"]=106;
        m["tdd"]=107;
          
   for(auto p:m){
    cout<<p.first<<" "<<p.second;
   }
}
