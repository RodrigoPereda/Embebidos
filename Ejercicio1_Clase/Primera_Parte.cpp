/*
 * Primera_Parte.cpp
 *
 *  Created on: 23 sept 2026
 *      Author: rodri
 */

#include <cstdlib>
#include <iostream>


int suma()
{
    std::cout << "suma() sin argumentos (1 + 2)" << std::endl;
    return 1 + 2;
}

int suma(int a)
{
    std::cout << "suma(int) -> " << a << " + 2" << std::endl;
    return a + 2;
}

float suma(float a, float b)
{
    std::cout << "suma(float, float) -> " << a << " + " << b << std::endl;
    return a + b;
}

int main() {
	suma();
    suma(5);
    suma(1.2f, 1.8f);
    return 0;
}
