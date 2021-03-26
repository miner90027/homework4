/* Aleks McCormick
 * UAF CS 202
 * Homework 4
 * Boxes
 * 03/25/2021
 */

#include "HollowBox.hpp"
#include <string>

HollowBox::HollowBox(int w, int h) : Box(w, h) {

}

std::string HollowBox::type() const{
	return "Hollow";
}

void HollowBox::print(std::ostream &os) const {
	for(int i = 0; i < Box::getHeight(); i++){
		for(int x = 0; x < Box::getWidth(); x++)
		{
			if(i == 0 || i == Box::getHeight()-1 || x == 0 || x == Box::getWidth()-1){
				os << "x";
			}
			else{
				os << " ";
			}
		}
		os << "\n";
	}
}
