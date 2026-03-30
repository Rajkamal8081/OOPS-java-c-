 #include<iostream>
 using namespace std;
 class Engine {
public:
    Engine() {
        cout << "Engine constructed" << endl;
    }
    ~Engine() {
        cout << "Engine destroyed" << endl;
    }
    void start() {
        cout << "Engine started" << endl;
    }
};

class Car {
private:
    Engine eng;  // Composition (Engine is part of Car)
public:
    Car() {
        cout << "Car constructed" << endl;
    }
    ~Car() {
        cout << "Car destroyed" << endl;
    }
    void run() {
        eng.start();
        cout << "Car is running" << endl;
    }
};

int main() {
    Car c;  // When Car is created, Engine is also created
    c.run();
}
