template <class T>
class quetype
{
    struct NodeType
    {
        T info;
        NodeType *next;
    };

private:
    NodeType *front, *rear;

public:
    quetype();
    ~quetype();
    void MakeEmpty();
    void Enqueue(T);
    void Dequeue(T &);
    bool IsEmpty();
    bool IsFull();
};

class EmptyQueue
{
};
class FullQueue
{
};
