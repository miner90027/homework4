/* Aleks McCormick
 * UAF CS 202
 * Homework 4
 * Boxes
 * 03/25/2021
 */

#include "FilledBox.hpp"

FilledBox::FilledBox(int w, int h) : Box(w,h){

}

std::string FilledBox::type() {
	return "Filled";
}

void FilledBox::print(std::ostream &os) const{

	for(int i = 0; i < Box::getHeight(); i++){
		for(int x = 0; x < Box::getWidth(); x++)
		{
			os << "x";
		}
		os << "\n";
	}
}