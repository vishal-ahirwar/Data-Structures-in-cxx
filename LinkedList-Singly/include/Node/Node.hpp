#ifndef NODE
#define NODE
#ifndef SUCCESS
#define SUCCESS 0   
#endif
#ifndef FAILED
#define FAILED 1
#endif

#include<cstddef>
template <typename T>
class Node
{
private:
    T data;
    Node *next;

public:
    T getData() const { return this->data; };
    void setData(const T &ref);
    Node *getNextNode() const { return this->next; };
    void setNextNode(Node *);
};
template <typename T>
void Node<T>::setData(const T &ref)
{
    this->data = ref;
};
template <class T>
void Node<T>::setNextNode(Node *nxt_ptr)
{
    this->next = nxt_ptr;
};
#endif