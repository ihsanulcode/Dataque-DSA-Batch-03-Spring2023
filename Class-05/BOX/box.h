#ifndef BOX_H_INCLUDED
#define BOX_H_INCLUDED

class box
{

private:
    double height;
    double width;
    double depth;

public:
    box(); //no-argument constructor
    box(double,double,double); //argument constructor
    double volume();
    void setHeight(double);
    void setWidth(double);
    void setDepth(double);
    double getHeight();
    double getWidth();
    double getDepth();

};

#endif // BOX_H_INCLUDED
