#ifndef DIRECTOR_HPP
#define DIRECTOR_HPP

#include "HouseBuilder.hpp"

class Director {
public:
    void constructLuxuryHouse(HouseBuilder& builder);
    void constructSimpleHouse(HouseBuilder& builder);
};

#endif
