template <class T>
class StackType
{
    struct NodeType
    {
        T info;
        NodeType *next;
    };

public:
    StackType();
    ~StackType();
    void Push(T);
    void Pop();
    T Top();
    bool IsEmpty();
    bool IsFull();

private:
    NodeType *topPtr;
};

class FullStack
{
};
class EmptyStack
{
};