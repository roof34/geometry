#include "point.h"
#include <math.h>
#include <stdio.h>

void inputtriangle(triangle* t)
{
    for (int i = 1; i <= 3; ++i) {
        printf("input triangle's vertices: ");
        scanf("%d %d", &t->P[i].x, &t->P[i].y);
    }
    t->P[4].x = t->P[1].x;
    t->P[4].y = t->P[1].y;
}

void outputtriangle(triangle* t, FILE* f)
{

    fprintf(f, "triangle(");
    for (int i = 1; i <= 4; ++i) {
        fprintf(f, "(%d;%d)", t->P[i].x, t->P[i].y);
        if (i < 4) {
            fprintf(f, ", ");
        }
    }
    fprintf(f, ")");

    printf("Triangle(");
    for (int i = 1; i <= 4; ++i) {
        printf("(%d;%d)", t->P[i].x, t->P[i].y);
        if (i < 4) {
            printf(", ");
        }
    }
    printf(")");

    float a, b, c;
    a = sqrt(((t->P[1].x - t->P[2].x) * (t->P[1].x - t->P[2].x)) + ((t->P[1].y - t->P[2].y) * (t->P[1].y - t->P[2].y)));
    b = sqrt(((t->P[2].x - t->P[3].x) * (t->P[2].x - t->P[3].x)) + ((t->P[2].y - t->P[3].y) * (t->P[2].y - t->P[3].y)));
    c = sqrt(((t->P[3].x - t->P[1].x) * (t->P[3].x - t->P[1].x)) + ((t->P[3].y - t->P[1].y) * (t->P[3].y - t->P[1].y)));

    if ((((a + b) <= c) || ((a + c) <= b) || ((b + c) <= a))) {
        printf("\nError: invalid triangle");
        fprintf(f, "\nError: invalid triangle");
    }
}