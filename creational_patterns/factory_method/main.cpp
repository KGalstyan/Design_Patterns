#include <iostream>
#include "TextFactory.hpp"
#include "PDFFactory.hpp"

void clientCode(const AbstractFactory& factory) {
    Document* doc = factory.createDocument();
    Menu* menu = factory.createMenu();
    Toolbar* toolbar = factory.createToolbar();

    doc->open();
    doc->save();
    menu->show();
    toolbar->show();

    delete doc;
    delete menu;
    delete toolbar;
}

int main() {
    std::cout << "--- Text Application ---\n";
    TextFactory textFactory;
    clientCode(textFactory);

    std::cout << "\n--- PDF Application ---\n";
    PDFFactory pdfFactory;
    clientCode(pdfFactory);

    return 0;
}
