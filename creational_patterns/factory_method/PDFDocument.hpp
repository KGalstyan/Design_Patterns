#ifndef PDFDOCUMENT_HPP
#define PDFDOCUMENT_HPP

#include "Document.hpp"
#include <iostream>

class PDFDocument : public Document {
public:
    void open();
    void save();
};

#endif
