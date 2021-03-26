/* Aleks McCormick
 * UAF CS 202
 * Homework 4
 * Boxes
 * 03/25/2021
 */

#include "Box.hpp"

Box::Box(): _height(1), _width(1) {

}

Box::Box(int w, int h): _height(h), _width(w) {

}

std::ostream & operator<<(std::ostream &os, const Box &b) {
	b.print(os);
	return os;
}

void Box::setHeight(int h) {
	_height = h;
}

void Box::setWidth(int w) {
	_width = w;
}

int Box::getHeight() const {
	return _height;
}

int Box::getWidth() const {
	return _width;
}


