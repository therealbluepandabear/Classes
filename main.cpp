#include <iostream>
class Car {
private:
    float fuel { 0 };
    float speed { 0 };
    int passengers { 0 };
    int arr[5] = { 1, 2, 3 };
    char *p {};
    static int totalCount;
public:
    Car() {
        totalCount++;
        std::cout << "Car()" << std::endl;
    }

    Car(float amount) {
        totalCount++;
        fuel = amount;
    }

    ~Car() {
        std::cout << "~Car()" << std::endl;
    }

    void FillFuel(float amount);
    void Accelerate();
    void Brake();
    void AddPassengers(int count);
    void Dashboard() const;
    static void ShowCount();
};

int Car::totalCount = 0;

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

void Foo(const Car &car) {

}

void Car::AddPassengers(int passengers) {
    this->passengers = passengers;
    Foo(*this);
}


void Car::Dashboard() const {
    std::cout << "Fuel: " << fuel << std::endl;
    std::cout << "Speed: " << speed << std::endl;
    std::cout << "Passengers: " << passengers << std::endl;
    std::cout << "Total cars: " << totalCount << std::endl;
}

void Car::ShowCount() {
    std::cout << "Total cars: " << totalCount << std::endl;
}

int main() {
    Car c1, c2, c3;

    c1.Dashboard();

    Car::ShowCount();

    return 0;
}
