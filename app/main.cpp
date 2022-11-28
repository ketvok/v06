#include "app.h"
#include <iostream>  // cout, cin
#include <format>  // format

/*U programu unesite broj to�aka poligona i sve to�ke poligona te
ispi�ite opseg poligona.*/

using namespace vsite::oop::v6;  // I added this.

int main()
{
	std::cout << "Unesite broj tocaka poligona:\n";
	int points;
	std::cin >> points;  // No. of points in a polygon.

	polygon polygon_1(points);

	for (int i = 0; i < points; i++) {
		std::cout << std::format("Unesite {}. tocku poligona (x y):\n", i+1);
		point input_point;
		std::cin >> input_point.x >> input_point.y;
		polygon_1.add(input_point);
	}

	std::cout << std::format("Opseg zadanog poligona je:\n{}\n", polygon_1.perimeter());
}
