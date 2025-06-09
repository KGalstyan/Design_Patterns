#ifndef TEXTDOCUMENT_HPP
#define TEXTDOCUMENT_HPP

#include "Document.hpp"
#include <iostream>

class TextDocument : public Document {
public:
    void open();
    void save();
};

#endif
