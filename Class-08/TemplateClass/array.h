#ifndef ARRAY_H_INCLUDED
#define ARRAY_H_INCLUDED

template <class T>
class Array
{
private:
    T *arr;
    int length;

public:
    Array(int); //argument constructor
    void add(int,T); //parameters ---> int index, T data
    T get(int); //parameter ---> int index | return type ---> T data type
    int getLength(); //this function will return the array length/size

};


#endif // ARRAY_H_INCLUDED
