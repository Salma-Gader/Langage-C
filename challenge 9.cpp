#include <iostream>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float x1,x2,y1,y2,MN;
    printf("Entre x1 :\n");
    scanf("%f",&x1);
    printf("Entre x2 :\n");
    scanf("%f",&x2);
    printf("Entre y1 :\n");
    scanf("%f",&y1);
    printf("Entre y2 :\n");
    scanf("%f",&y2);
    
    MN = sqrt(pow((x2-x1),2) + pow((y2-y1),2));
    printf("la Distence Mn est :%f",MN);
	return 0;
}
