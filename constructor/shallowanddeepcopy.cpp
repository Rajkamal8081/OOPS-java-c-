// shallow copy copices references to original array.but array remains same,
//Deep copy created a brand new copy of the array

// compiler generally creates a shallow copy for array 

// we need to define own  copy construstor when deep copy is needed . when calss contains pointer to dyanamically allocted memory 


#include <iostream>
using namespace std;

class car {
public:  
string name;
string modal;

car(string name,string modal){
   this-> name =name;
   this-> modal =modal;
}

car(car &orginal ){ // custom contr
    cout<<"copying origal ro new ";
    name =orginal.name;
    modal = orginal.modal;
}

};

int main(){
    car c1("maruti 800","random");

    car c2(c1);

    cout<<c2.name<<endl;
    cout<<c2.modal<<endl;

    return 0; 

}