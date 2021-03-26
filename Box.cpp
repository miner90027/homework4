/* Aleks McCormick
 * UAF CS 202
 * Homework 4
 * Boxes
 * 03/25/2021
 */

#include "Box.hpp"
#include "FilledBox.hpp"
#include "HollowBox.hpp"
#include "CheckeredBox.hpp"


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

std::unique_ptr<Box> boxFactory(char c, int w, int h) {
	switch(c){
		case 'f':
			return std::make_unique<FilledBox>(w,h);
		case 'h':
			return std::make_unique<HollowBox>(w,h);
		case 'c':
			return std::make_unique<CheckeredBox>(w,h);
		default:
			throw std::runtime_error("Bad char passed to boxFactory().\nAccepted char input: f, h, c.\n");
	}
}


