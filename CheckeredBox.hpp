/* Aleks McCormick
 * UAF CS 202
 * Homework 4
 * Boxes
 * 03/25/2021
 */

#ifndef HOMEWORK4_CHECKEREDBOX_HPP
#define HOMEWORK4_CHECKEREDBOX_HPP
#include "Box.hpp"
#include <string>

class CheckeredBox : public Box{
public:
	using Box::Box;

	CheckeredBox(int w, int h);

	std::string type() const override;
	void print(std::ostream &os) const override;
};


#endif //HOMEWORK4_CHECKEREDBOX_HPP
