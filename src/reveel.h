#ifndef REVEEL_H
#define REVEEL_H

class Node {
    protected:
        Node parent;
        long size;
    public:
        Node getParent();
        void setParent(Node);
        long getSize();
        long setSize(long);
}

#endif  /* REVEEL_H */
