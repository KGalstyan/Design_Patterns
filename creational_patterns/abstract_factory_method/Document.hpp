#ifndef DOCUMENT_HPP
#define DOCUMENT_HPP

class Document {
public:
    virtual ~Document() {}
    virtual void open() = 0;
    virtual void save() = 0;
};

#endif
