#include "PDFApplication.hpp"
#include "PDFDocument.hpp"

Document* PDFApplication::createDocument() const {
    return new PDFDocument();
}
