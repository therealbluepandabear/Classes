#include <iostream>
class Car {
private:
    float fuel;
    float speed;
    int passengers;
public:
    Car() {
        std::cout << "Car()" << std::endl;

        fuel = 0;
        speed = 0;
        passengers = 0;
    }

    ~Car() {
        std::cout << "~Car()" << std::endl;
    }

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
    Car car;
    car.FillFuel(6);
    car.Accelerate();
    car.Accelerate();
    car.Accelerate();
    car.Accelerate();
    car.Dashboard();

    return 0;
}
