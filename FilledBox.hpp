/* Aleks McCormick
 * UAF CS 202
 * Homework 4
 * Boxes
 * 03/25/2021
 */

#ifndef HOMEWORK4_FILLEDBOX_HPP
#define HOMEWORK4_FILLEDBOX_HPP
#include "Box.hpp"
#include <string>

class FilledBox : public Box {
public:
	using Box::Box;
	FilledBox(int w, int h);

	std::string type() override;
	void print(std::ostream &os) const override;
private:
	std::string _type = "Filled";
};


#endif //HOMEWORK4_FILLEDBOX_HPP
