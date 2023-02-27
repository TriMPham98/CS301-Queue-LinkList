#include "Queue.h"

template<class T>
Queue<T>::Queue() {
    head = nullptr;
    tail = nullptr;
}

template<class T>
Queue<T>::Queue(int max) {
    head = nullptr;
    tail = nullptr;
}

template<class T>
Queue<T>::~Queue() {
    MakeEmpty();
}

template<class T>
void Queue<T>::MakeEmpty() {
    while (head != nullptr) {
        Node *temp = head;
        head = head->next;
        delete temp;
    }
    tail = nullptr;
}

template<class T>
bool Queue<T>::IsEmpty() const {
    return head == nullptr;
}

template<class T>
bool Queue<T>::IsFull() const
// Returns true if the queue is full; false otherwise.
{
    try {
        Node *temp = new Node;
        delete temp;
    } catch (std::bad_alloc error) {
        return true;
    }
    return false;
}

template<class T>
void Queue<T>::Enqueue(T newItem) {
    if (IsFull()) {
        throw FullQueue();
    } else {
        Node *newNode = new Node;
        newNode->value = newItem;
        newNode->next = nullptr;
        if (head == nullptr) {
            head = newNode;
        } else {
            tail->next = newNode;
        }
        tail = newNode;
    }
}

template<class T>
T Queue<T>::Dequeue() {
    return T();
}
