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
    void AddPassengers();
    void Dashboard();
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
