template <class T>
class QueType
{
private:
    int front;
    int rear;
    T *items;
    int maxQue;

public:
    QueType();
    QueType(int max);
    ~QueType();
    void MakeEmpty();
    bool IsEmpty();
    bool IsFull();
    void Enqueue(T);
    void Dequeue(T &);
};

class FullQueue
{
};
class EmptyQueue
{
};