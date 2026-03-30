#include <iosteream>
using namespace std;
int main(){
    try 
    {
        int choice;

        cout <<"enter  the 1 for the invaild argument "<<" "<<"enter 2 for the out of range ";
        cin>>choice;

        if (choice==1){
            throw invalid_argument("invalid argument ");
        }
        else if (choice==2){
            throw out_of_range("out of range");
        }
        else
        {
            throw "unknown erroe";
            }
        }
        catch (invalid_argument e){
            cout<<"caught excepation "<<e.what()<<endl;
        }
         catch (out_of_range e){
            cout<<"caught excepation "<<e.what()<<endl;
        }
         catch ( .....){
            cout<<"caught excepation "<<endl;
        }
    }
    return 0;
}