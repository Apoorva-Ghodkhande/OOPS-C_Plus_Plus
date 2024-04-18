#include <iostream>

class Engine{
    public:
    void start(){
        std::cout<< "engine started"<< std::endl;
    }
};

class Car{
    public:
    Car():engine(new Engine()){}
    void startCar(){
        engine->start();
    } 
    private:
    Engine* engine;
};


int main(){
 Car car;
 car.startCar();
    return 0;
}