#include <iostream>
using namespace std;

class Animal {          // Abstract Class
public:
    virtual void sound() = 0;   // Pure Virtual Function
};

class Dog : public Animal {
public:
    void sound() {
        cout << "Dog barks!" << endl;
    }
};

class Cat : public Animal {
public:
    void sound() {
        cout << "Cat meows!" << endl;
    }
};

int main() {
    Animal* a;

    a = new Dog();
    a->sound();

    a = new Cat();
    a->sound();
}
