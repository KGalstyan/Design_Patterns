#ifndef HOUSE_HPP
#define HOUSE_HPP

#include <string>

class House {
private:
    std::string foundation;
    std::string walls;
    std::string roof;
    bool hasGarage;
    bool hasGarden;
    bool hasPool;

public:
    House();

    void setFoundation(const std::string& f);
    void setWalls(const std::string& w);
    void setRoof(const std::string& r);
    void setGarage(bool g);
    void setGarden(bool g);
    void setSwimmingPool(bool p);

    void show() const;
};

#endif
