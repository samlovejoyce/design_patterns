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
			/* lambda���ʽ */
			XXFactory::registry()[name] = [](){return new T; };
			std::cout << "Rgistring class " << name << std::endl;
			//std::cout << "Registring class '" << name << "'\n";
		}
	};

	/* �����࣬������ */
	class XXProduct
	{
	public:
		virtual void draw() = 0;
	};

	/* ���࣬���������� */
	class Circle : public XXProduct
	{
	public:
		void draw();

	private:
		static XXFactoryRegister<Circle> addToFactory;
	};

	/* ���࣬���������� */
	class Square : public XXProduct
	{
	public:
		void draw();

	private:
		static XXFactoryRegister<Square> addToFactory;
	};

	/* ���࣬���������� */
	class Ellipse : public XXProduct
	{
	public:
		void draw();

	private:
		static XXFactoryRegister<Ellipse> addToFactory;
	};
}

#endif
