#ifndef CONCRETEHOUSEBUILDER_HPP
#define CONCRETEHOUSEBUILDER_HPP

#include "HouseBuilder.hpp"

class ConcreteHouseBuilder : public HouseBuilder {
private:
    House* house;

public:
    ConcreteHouseBuilder();
    ~ConcreteHouseBuilder();

    void buildFoundation();
    void buildWalls();
    void buildRoof();
    void buildGarage();
    void buildGarden();
    void buildSwimmingPool();
    House* getResult();
};

#endif
