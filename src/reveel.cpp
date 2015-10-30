#include <iostream>
#include "reveel.hpp"
long Node::getSize() {
    return this->size;
}

void Node::setSize(long size) {
    this->size = size;
}

Node* Node::getParent() {
    return this->parent;
}

void Node::setParent(Node* parent) {
    this->parent = parent;
}

std::string Node::getFullPath() {
    return this->fullPath;
}

void Node::setFullPath(std::string fullPath) {
    this->fullPath = fullPath;
}

namespace ncurses {
    extern "C" {
        #include <ncurses.h>
    }
}

int main() {
    Node* node = new Node();
    node->setFullPath("/Users/dougpowers/");
    std::cout << node->getFullPath() << std::endl;

    return 0;
}
