//
// Created by Enzo MARIONI on 16/10/2017.
//
#include "Shape.h"
//#include "polygon.hh"
#include "Square.h"
#include "Circle.h"

int main() {
    Square square(3, 3, 3);
    Circle circle(4, 4, 4);
    Shape* sq = &square;
    Shape* c = &circle;
    sq->print();
    c->print();
}
