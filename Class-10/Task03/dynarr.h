#ifndef DYNARR_H_INCLUDED
#define DYNARR_H_INCLUDED

class dynArr
{
private:
    int **data; //for 2D array memory allocation
    int row, col;
public:
    dynArr();
    dynArr(int,int);
    ~dynArr();
    void setValue(int, int,int);
    int getValue(int,int);
    void allocate(int,int);
};

#endif // DYNARR_H_INCLUDED
