#include "Director.hpp"

void Director::constructLuxuryHouse(HouseBuilder& builder) {
    builder.buildFoundation();
    builder.buildWalls();
    builder.buildRoof();
    builder.buildGarage();
    builder.buildGarden();
    builder.buildSwimmingPool();
}

void Director::constructSimpleHouse(HouseBuilder& builder) {
    builder.buildFoundation();
    builder.buildWalls();
    builder.buildRoof();
    builder.buildGarage();
}
