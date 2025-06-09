#ifndef PDFFACTORY_HPP
#define PDFFACTORY_HPP

#include "AbstractFactory.hpp"
#include "PDFDocument.hpp"
#include "PDFMenu.hpp"
#include "PDFToolbar.hpp"

class PDFFactory : public AbstractFactory {
public:
    Document* createDocument() const;
    Menu* createMenu() const;
    Toolbar* createToolbar() const;
};

#endif
