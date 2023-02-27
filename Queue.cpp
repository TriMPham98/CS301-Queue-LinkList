#include "Queue.h"

template<class T>
Queue<T>::Queue()
{
    head = nullptr;
    tail = nullptr;
}

template<class T>
Queue<T>::Queue(int max)
{
    head = nullptr;
    tail = nullptr;
}

template<class T>
Queue<T>::~Queue()
{

}

template<class T>
void Queue<T>::MakeEmpty()
{

}

template<class T>
bool Queue<T>::IsEmpty() const
{
    return false;
}

template<class T>
bool Queue<T>::IsFull() const
// Returns true if the queue is full; false otherwise.
{
    return false;
}

template<class T>
void Queue<T>::Enqueue(T newItem)
{

}

template<class T>
T Queue<T>::Dequeue()
{
    return T();
}
