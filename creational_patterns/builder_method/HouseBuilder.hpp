#ifndef HOUSEBUILDER_HPP
#define HOUSEBUILDER_HPP

#include "House.hpp"

class HouseBuilder {
public:
    virtual ~HouseBuilder() {}
    virtual void buildFoundation() = 0;
    virtual void buildWalls() = 0;
    virtual void buildRoof() = 0;
    virtual void buildGarage() = 0;
    virtual void buildGarden() = 0;
    virtual void buildSwimmingPool() = 0;
    virtual House* getResult() = 0;
};

#endif
