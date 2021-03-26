/* Aleks McCormick
 * UAF CS 202
 * Homework 4
 * Boxes
 * 03/25/2021
 */

#ifndef HOMEWORK4_BOX_HPP
#define HOMEWORK4_BOX_HPP
#include <iostream>
#include <string>

class Box {
	friend std::ostream & operator<< (std::ostream &os, const Box &b);
public:
	Box();
	Box(int w, int h);

	void setHeight(int h);
	void setWidth(int w);
	int getHeight() const;
	int getWidth() const;

	virtual void print(std::ostream &os) const = 0;
	virtual std::string type()= 0;
private:
	int _height;
	int _width;
};


#endif //HOMEWORK4_BOX_HPP
