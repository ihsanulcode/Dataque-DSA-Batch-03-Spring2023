const int MAX_ITEMS = 5;

template <class T>
class sortedtype
{
private:
    int length;
    T arr[MAX_ITEMS];
    int currentPos;

public:
    sortedtype();
    void makeEmpty();
    bool isFull();
    int lengthIs();
    void resetList();
    void getNextItem(T &);
    void insertItem(T);
    void deleteItem(T);
    void retriveItem(T &, bool &);
};