#ifndef PDFAPPLICATION_HPP
#define PDFAPPLICATION_HPP

#include "Application.hpp"

class PDFApplication : public Application {
public:
    Document* createDocument() const;
};

#endif
