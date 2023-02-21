#include "box.h"

/*
returnType className::functionName()
{
    code
}
*/

box::box()
{
    this->width = 0;
    this->height = 0;
    this->depth = 0;
}

box::box(double height,double width,double depth)
{
    this->width = width;
    this->height = height;
    this->depth = depth;
}

double box::volume()
{
    double answer = this->height * this->width * this->depth;
    return answer;
}

void box::setHeight(double height)
{
    this->height = height;
}

void box::setWidth(double width)
{
    this->width = width;
}

void box::setDepth(double depth)
{
    this->depth = depth;
}

double box::getHeight()
{
    return this->height;
}

double box::getWidth()
{
    return this->width;
}

double box::getDepth()
{
    return this->depth;
}
