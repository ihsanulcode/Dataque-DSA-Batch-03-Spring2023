#include "dynarr.h"
#include <iostream>
using namespace std;

dynArr::dynArr()
{
    data = NULL;
    row = 0;
    col = 0;
}
dynArr::dynArr(int row,int col)
{
    data = new int *[row];
    for(int i=0;i<row;i++){
        data[i] = new int[col];
    }

    this->row = row;
    this->col = col;
}
dynArr::~dynArr()
{
    for(int i=0;i<row;i++){
        delete[] data[i];
    }
    delete[] data;
}
int dynArr::getValue(int row,int col)
{
    return data[row][col];
}
void dynArr::setValue(int row, int col, int value)
{
    data[row][col] = value;
}

void dynArr::allocate(int row,int col)
{
    data = new int *[row];
    for(int i=0;i<row;i++){
        data[i] = new int[col];
    }

    this->row = row;
    this->col = col;
}
