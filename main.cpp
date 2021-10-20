#include <iostream>
class Car {
private:
    float fuel { 0 };
    float speed { 0 };
    int passengers { 0 };
    int arr[5] = { 1, 2, 3 };
    char *p {};
public:
    Car() {
        std::cout << "Car()" << std::endl;
    }

    Car(float amount) {
        fuel = amount;
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
    this->fuel += amount;
}

void Car::Accelerate() {
    this->speed++;
    this->fuel -= 0.5f;
}

void Car::Brake() {
    this->speed = 0;
}

void Car::AddPassengers(int count) {
    this->passengers = count;
}

void Car::Dashboard() {
    std::cout << "Fuel: " << fuel << std::endl;
    std::cout << "Speed: " << speed << std::endl;
    std::cout << "Passengers: " << passengers << std::endl;
}

int main() {
    Car c(5);
    c.Dashboard();

    return 0;
}
