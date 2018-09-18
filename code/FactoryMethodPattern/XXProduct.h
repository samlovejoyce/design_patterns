#ifndef XX_PRODUCT
#define XX_PRODUCT
#include<iostream>

#include "XXFactory.h"

namespace WDesignPattern
{
	template<typename T> struct XXFactoryRegister
	{
		XXFactoryRegister(std::string name)
		{
			/* lambda表达式 */
			XXFactory::registry()[name] = [](){return new T; };
			std::cout << "Rgistring class " << name << std::endl;
			//std::cout << "Registring class '" << name << "'\n";
		}
	};

	/* 工厂类，抽象类 */
	class XXProduct
	{
	public:
		virtual void draw() = 0;
	};

	/* 子类，具体势力类 */
	class Circle : public XXProduct
	{
	public:
		void draw();

	private:
		static XXFactoryRegister<Circle> addToFactory;
	};

	/* 子类，具体势力类 */
	class Square : public XXProduct
	{
	public:
		void draw();

	private:
		static XXFactoryRegister<Square> addToFactory;
	};

	/* 子类，具体势力类 */
	class Ellipse : public XXProduct
	{
	public:
		void draw();

	private:
		static XXFactoryRegister<Ellipse> addToFactory;
	};
}

#endif
