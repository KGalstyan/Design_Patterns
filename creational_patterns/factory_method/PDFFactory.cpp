#include "PDFFactory.hpp"

Document* PDFFactory::createDocument() const {
    return new PDFDocument();
}

Menu* PDFFactory::createMenu() const {
    return new PDFMenu();
}

Toolbar* PDFFactory::createToolbar() const {
    return new PDFToolbar();
}
