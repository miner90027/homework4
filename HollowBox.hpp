/* Aleks McCormick
 * UAF CS 202
 * Homework 4
 * Boxes
 * 03/25/2021
 */

#ifndef HOMEWORK4_HOLLOWBOX_HPP
#define HOMEWORK4_HOLLOWBOX_HPP
#include "Box.hpp"
#include <string>

class HollowBox: public Box {
public:
	using Box::Box;

	HollowBox(int w, int h);

	std::string type() const override;
	void print(std::ostream &os) const override;
};


#endif //HOMEWORK4_HOLLOWBOX_HPP
