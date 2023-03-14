const int MAX_ITEMS = 5;

template <class T>
class unsortedType
{
private:
    T arr[MAX_ITEMS];
    int length;
    int currentPos;

public:
    unsortedType(/* args */);
    void makeEmpty();
    bool isFull();
    int lengthIs();
    void insertItem(T);
    void deleteItem(T);
    void retriveItem(T &, bool &);
    void resetList();
    void getNextItem(T&);
};
