#include <stdio.h>
typedef struct point {
    int x;
    int y;
} point_t;

typedef struct circle {
    point_t O;
    int r;
} circle;

typedef struct triangle {
    point_t P[4];
} triangle;

void inputcirlce(circle* c);
void outputcirlce(circle* c, FILE* f);
void inputtriangle(triangle* t);
void outputtriangle(triangle* t, FILE* f);