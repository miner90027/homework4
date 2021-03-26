/* Aleks McCormick
 * UAF CS 202
 * Homework 4
 * Boxes
 * 03/25/2021
 */

#include "CheckeredBox.hpp"

CheckeredBox::CheckeredBox(int w, int h) : Box(w, h) {

}

std::string CheckeredBox::type() {
	return "Checkered";
}

void CheckeredBox::print(std::ostream &os) const {
	for(int i = 0; i < Box::getHeight(); i++){
		for(int x = 0; x < Box::getWidth(); x++)
		{
			if(i % 2 == 0 && x % 2 == 0){
				os << "x";
			}
			else if(i % 2 != 0 && x % 2 != 0){
				os << "x";
			}
			else{
				os << " ";
			}
		}
		os << "\n";
	}
}
