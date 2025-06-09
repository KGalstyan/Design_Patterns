#ifndef ABSTRACTFACTORY_HPP
#define ABSTRACTFACTORY_HPP

#include "Document.hpp"
#include "Menu.hpp"
#include "Toolbar.hpp"

class AbstractFactory {
public:
    virtual ~AbstractFactory() {}
    virtual Document* createDocument() const = 0;
    virtual Menu* createMenu() const = 0;
    virtual Toolbar* createToolbar() const = 0;
};

#endif