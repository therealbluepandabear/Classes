#include <iostream>
class Car {
private:
    float fuel;
    float speed;
    int passengers;
public:
    void FillFuel(float amount);
    void Accelerate();
    void Brake();
    void AddPassengers(int count);
    void Dashboard();
};

void Car::FillFuel(float amount) {

}

void Car::Accelerate() {
    speed++;
    fuel -= 0.5f;
}

void Car::Brake() {
    speed = 0;
}

void Car::AddPassengers(int count) {
    passengers = count;
}

void Car::Dashboard() {
    std::cout << "Fuel: " << fuel << std::endl;
    std::cout << "Speed: " << speed << std::endl;
    std::cout << "Passengers: " << passengers << std::endl;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
