#include "../header/triangle.hpp"

void Triangle::set_base(int b) {
    this->base = b;
}

void Triangle::set_height(int h) {
    this->height = h;
}

int Triangle::area() {
    return 0.5 * this->base * this->height;
}