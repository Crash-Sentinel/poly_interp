#include "..\include\polyInterp.h"
#include <iostream>

int main () 
{
    Point pAll[] = {
        {1.0, 2.0},
        {4.5, 7.8},
        {3.0, -10.0}
    };

    std::cout << poly_interp(0.6, pAll);
    return 0;
}