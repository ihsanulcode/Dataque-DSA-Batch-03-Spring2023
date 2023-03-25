const int max_items = 5;

template <class T>
class Queue
{
private:
    int rear;
    T arr[max_items];

public:
    Queue();
    bool isEmpty();
    void enqueue(T);
    T dequeue();
    T front();
};
