#ifndef TEXTAPPLICATION_HPP
#define TEXTAPPLICATION_HPP

#include "Application.hpp"

class TextApplication : public Application {
public:
    Document* createDocument() const;
};

#endif
