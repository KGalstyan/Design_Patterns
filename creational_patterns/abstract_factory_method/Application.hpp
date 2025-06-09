#ifndef APPLICATION_HPP
#define APPLICATION_HPP

#include "Document.hpp"

class Application {
public:
    virtual ~Application() {}
    virtual Document* createDocument() const = 0;

    void newDocument() const {
        Document* doc = createDocument();
        doc->open();
        doc->save();
        delete doc;
    }
};

#endif
