#include "point.h"
#include <stdio.h>

int main()
{
    FILE* f = fopen("file", "w");
    circle c;
    
    intputcirlce(&c);

    triangle t;

    inputtriangle(&t);

    outputcirlce(&c, f);

    outputtriangle(&t, f);

    fclose(f);

    return 0;
}