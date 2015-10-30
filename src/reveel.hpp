#ifndef REVEEL_H
#define REVEEL_H
#include <vector>
#include <string>

class Node {
    protected:
        Node* parent;
        long size;
        std::string fullPath;
    public:
        Node* getParent();
        void setParent(Node*);
        long getSize();
        void setSize(long);
        std::string getFullPath();
        void setFullPath(std::string);
};

class Directory: public Node {
    protected:
        std::vector<Node> children;
    public:
        long getSize();
        long computeSize();
};

class File: public Node {
};
#endif  /* REVEEL_H */
