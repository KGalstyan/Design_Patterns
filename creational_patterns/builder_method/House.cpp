#include "House.hpp"
#include <iostream>

House::House() : hasGarage(false), hasGarden(false), hasPool(false) {}

void House::setFoundation(const std::string& f) { foundation = f; }
void House::setWalls(const std::string& w) { walls = w; }
void House::setRoof(const std::string& r) { roof = r; }
void House::setGarage(bool g) { hasGarage = g; }
void House::setGarden(bool g) { hasGarden = g; }
void House::setSwimmingPool(bool p) { hasPool = p; }

void House::show() const {
    std::cout << "🏠 House Details:\n";
    std::cout << "Foundation: " << foundation << "\n";
    std::cout << "Walls: " << walls << "\n";
    std::cout << "Roof: " << roof << "\n";
    std::cout << "Garage: " << (hasGarage ? "Yes" : "No") << "\n";
    std::cout << "Garden: " << (hasGarden ? "Yes" : "No") << "\n";
    std::cout << "Swimming Pool: " << (hasPool ? "Yes" : "No") << "\n";
}
