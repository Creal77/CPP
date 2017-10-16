//
// Created by Enzo MARIONI on 16/10/2017.
//

#ifndef CPPLECTURES_SHAPE_H
#define CPPLECTURES_SHAPE_H

class Shape {

public:
    Shape();

    Shape(int x, int y);

    virtual ~Shape();

    virtual void print() const;

    void translate(int tx, int ty);

protected:
    int x_;
    int y_;
};


#endif //CPPLECTURES_SHAPE_H