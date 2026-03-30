#include <iostream>
using namespace std;
class customer{
string name;
int balance,account_number;
public:
customer(string name ,int balance ,int account_number){
    this->name=name;
    this->balance=balance;
    this->account_number=account_number;

}
void deposit(int amout ){
    if(amout>0){
        balance+=amout;
        cout<<amout<<"  is credited successfully \n";

    }
    else 
    {
        throw "amout should be greater than 0";
    }
}
void withdraw(int amout ){
    if(amout>0 && amout<=balance)
    {
        balance-=amout;
        cout<<amout<<" is dedited successfully ";
    }
    else if (amout <0)
    {
         throw"amout should be greater than 0";
    }
    else {
        throw "your balance is low ";
    }
}
};

int main(){
    customer c1("rajkamal" ,200000,547);
    try{
    c1.deposit(20000);
    c1.withdraw(500000);
    }
    catch(const char *e)
    {
        cout<<"excepation occured :"<<e<<endl;
    }

    
}