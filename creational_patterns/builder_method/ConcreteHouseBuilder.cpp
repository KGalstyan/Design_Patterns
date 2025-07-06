#include "ConcreteHouseBuilder.hpp"

ConcreteHouseBuilder::ConcreteHouseBuilder() {
    house = new House();
}

ConcreteHouseBuilder::~ConcreteHouseBuilder() {
}

void ConcreteHouseBuilder::buildFoundation() {
    house->setFoundation("Concrete, brick, and steel");
}

void ConcreteHouseBuilder::buildWalls() {
    house->setWalls("Brick walls");
}

void ConcreteHouseBuilder::buildRoof() {
    house->setRoof("Concrete roof");
}

void ConcreteHouseBuilder::buildGarage() {
    house->setGarage(true);
}

void ConcreteHouseBuilder::buildGarden() {
    house->setGarden(true);
}

void ConcreteHouseBuilder::buildSwimmingPool() {
    house->setSwimmingPool(true);
}

House* ConcreteHouseBuilder::getResult() {
    return house;
}
