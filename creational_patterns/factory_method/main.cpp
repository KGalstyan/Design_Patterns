#include <iostream>
#include "TextApplication.hpp"
#include "PDFApplication.hpp"

void clientCode(const Application& app) {
    app.newDocument();
}

int main() {
    std::cout << "Text Application:\n";
    TextApplication textApp;
    clientCode(textApp);

    std::cout << "\nPDF Application:\n";
    PDFApplication pdfApp;
    clientCode(pdfApp);

    return 0;
}
