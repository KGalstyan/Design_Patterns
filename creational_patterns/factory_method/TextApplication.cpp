#include "TextApplication.hpp"
#include "TextDocument.hpp"

Document* TextApplication::createDocument() const {
    return new TextDocument();
}
