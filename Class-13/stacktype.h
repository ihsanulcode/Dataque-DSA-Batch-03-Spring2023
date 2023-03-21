const int MAX_SIZE = 5;

template <class T>
class stacktype
{
private:
    T items[MAX_SIZE];
    int top;

public:
    stacktype(/* args */);
    bool IsFull();
    bool IsEmpty();
    void Push(T);
    void Pop();
    T Top();
};

class FullStack
{
};
class EmptyStack
{
};