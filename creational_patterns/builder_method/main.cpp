#include "Director.hpp"
#include "ConcreteHouseBuilder.hpp"
#include <iostream>

int main() {
    Director director;

    // Luxury house
    ConcreteHouseBuilder luxuryBuilder;
    director.constructLuxuryHouse(luxuryBuilder);
    House* luxuryHouse = luxuryBuilder.getResult();
    luxuryHouse->show();
    delete luxuryHouse;

    std::cout << "\n";

    // Simple house
    ConcreteHouseBuilder simpleBuilder;
    director.constructSimpleHouse(simpleBuilder);
    House* simpleHouse = simpleBuilder.getResult();
    simpleHouse->show();
    delete simpleHouse;

    return 0;
}
