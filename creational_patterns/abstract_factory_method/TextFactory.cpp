#include "TextFactory.hpp"

Document* TextFactory::createDocument() const {
    return new TextDocument();
}

Menu* TextFactory::createMenu() const {
    return new TextMenu();
}

Toolbar* TextFactory::createToolbar() const {
    return new TextToolbar();
}
