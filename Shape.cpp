//
// Created by Enzo MARIONI on 16/10/2017.
//

#include <iostream>

class Shape
{
public:
    Shape() : x_(0)
    , y_(0) {
        std::cout << "New shape created" << std::endl;
    }
    Shape(int x, int y)
            : x_(x)
            , y_(y) {
        std::cout << "New shape created (" << x_
                  << ", " << y_ << ")" << std::endl;
    }
    virtual ~Shape()
    {}
    void print() const
    {
        std::cout << "I am a shape located at ("
                  << x_ << ", " << y_ << ")" << std::endl;
    }
    void translate(int tx, int ty)
    {
        x_ += tx;
        y_ += ty; }
protected:
    int x_;
    int y_;
};
