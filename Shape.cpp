//
// Created by Enzo MARIONI on 16/10/2017.
//
// TP2
#include <iostream>
#include "Shape.h"

int x_;
int y_;

Shape::Shape() : x_(0), y_(0) {
    std::cout << "New shape created" << std::endl;
}

Shape::Shape(int x, int y)
        : x_(x), y_(y) {
    std::cout << "New shape created (" << x_
              << ", " << y_ << ")" << std::endl;
}

Shape::~Shape() {}

void Shape:: print() const {
    std::cout << "I am a shape located at ("
              << x_ << ", " << y_ << ")" << std::endl;
}

void Shape:: translate(int tx, int ty) {
    x_ += tx;
    y_ += ty;
}


