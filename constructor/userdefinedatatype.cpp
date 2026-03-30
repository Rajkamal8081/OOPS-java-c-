#include <iostream>
using namespace std;
class vector
{
public:
    int size;
    int capacity;
    int *arr;
    vector()
    {
        size = 0;
        capacity = 1;
        arr = new int[1];
    }
    void add(int ele)
    {
        if (size == capacity)
        {
            int *arr2 = new int[capacity];
            for (int i = 0; i < size; i++)
            {
                arr[i] = arr[i];
            }
            arr = arr2;
        }
        arr[size] = ele;
        size++;
    }

    void print (){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    
};

int main()
{
    vector v;
    cout<<v.size<<" "<<v.capacity<<endl;
    v.add(10);
    v.print();
    cout<<v.size<<" "<<v.capacity<<endl;
     v.add(13);
    v.print();
    cout<<v.size<<" "<<v.capacity<<endl;
     v.add(40);
    v.print();
    cout<<v.size<<" "<<v.capacity<<endl;
}