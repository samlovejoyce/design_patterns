// FactoryMethodPattern.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "XXFactory.h"
#include "XXProduct.h"

int main()
{
	std::vector<WDesignPattern::XXProduct *> products;

	products.push_back(WDesignPattern::XXFactory::instantiate("Circle"));
	products.push_back(WDesignPattern::XXFactory::instantiate("Square"));
	products.push_back(WDesignPattern::XXFactory::instantiate("Ellipse"));

	for (auto &pro: products)
	{
		pro->draw();
	}

	system("pause");

    return 0;
}

