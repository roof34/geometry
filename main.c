#include "point.h"
#include <stdio.h>
#include <string.h>
int main()
{
    FILE* f = fopen("file", "w");
    int n;
    char tr[10]="triangle";
    char cr[10]="circle";
    char fg[15];
    printf("Input amount of figures: ");
    scanf("%d",&n);
    for (int i=0;i<n;i++){
	scanf("%c",fg);
	if ( strcmp(cr,fg)==0){
	    circle c;
	    inputcirlce(&c);
	     outputcirlce(&c, f);
}
	else if ( strcmp (tr,fg) ==0){
	    triangle t;
	    inputtriangle(&t);
	    outputtriangle(&t, f);
}
	else printf("unknown shape  ");
}
    fclose(f);

    return 0;
}