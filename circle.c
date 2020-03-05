#include "point.h"
#include <math.h>
#include <stdio.h>

void inputcirlce(circle* c)
{
    printf(": ");
    scanf("%d %d", &c->O.x, &c->O.y);
    printf("input the circle's coordinates x y  ");
    scanf("%.2f", &c->r);
}

void outputcirlce(circle* c, FILE* f)
{
    fprintf(f, "circle((%d;%d), %d)\n", c->O.x, c->O.y, c->r);
    printf("circle((%d;%d), %d)\n", c->O.x, c->O.y, c->r);
}