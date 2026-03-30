#include <iostream>
using namespace std;

class car {
public:  
string name;
string modal;
int *mileage;

car(string name,string modal){
   this-> name =name;
   this-> modal =modal;
   mileage = new int ;
   *mileage =12;
}

car(car &orginal ){
    cout<<"copying origal ro new ";
    name =orginal.name;
    modal = orginal.modal;
    mileage = new int;
    *mileage =*orginal.mileage;
}
~car(){
    cout<<"deleting object "<<endl;
    if (mileage!= NULL)
    {
        delete mileage;
        mileage = NULL;
    }
    
}

};

int main(){
    car c1("maruti 800","random");
    cout<<c1.name<<endl;
    cout<<c1.modal<<endl;
    cout<<*c1.mileage<<endl;

    return 0; 

}