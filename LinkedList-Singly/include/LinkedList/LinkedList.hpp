#ifndef LINKED__LIST
#define LINKED__LIST
#include "../Node/Node.hpp"
template <class T>
class LinkedList
{
private:
    Node<T> *header;
    Node<T> *tail;
    size_t size;

public:
    size_t getSize() const { return this->size; };
};
#endif