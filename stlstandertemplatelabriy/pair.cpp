#include <iostream>
#include <vector>
using namespace std;
int main(){
vector<pair<int, int >> vec = {{1,3},{2,4},{2,5}};

vec.push_back({1,4});
vec.emplace_back(2,4);

for(pair<int, int >p : vec){
cout<<p.first<<" "<<p.second<<endl;
}
return 0;
}