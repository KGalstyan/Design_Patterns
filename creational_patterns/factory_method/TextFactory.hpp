#ifndef TEXTFACTORY_HPP
#define TEXTFACTORY_HPP

#include "AbstractFactory.hpp"
#include "TextDocument.hpp"
#include "TextMenu.hpp"
#include "TextToolbar.hpp"

class TextFactory : public AbstractFactory {
public:
    Document* createDocument() const;
    Menu* createMenu() const;
    Toolbar* createToolbar() const;
};

#endif
