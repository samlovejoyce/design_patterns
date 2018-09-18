#include "XXProduct.h"


namespace WDesignPattern
{
	XXFactoryRegister<Circle> Circle::addToFactory("Circle");

	XXFactoryRegister<Square> Square::addToFactory("Square");

	XXFactoryRegister<Ellipse> Ellipse::addToFactory("Ellipse");

	void Circle::draw()
	{
		std::cout << "drawing a circle \n";
	}


	void Square::draw()
	{
		std::cout << "drawing a square \n";
	}
	
	void Ellipse::draw()
	{
		std::cout << "drawing a ellipse \n";
	}
}

