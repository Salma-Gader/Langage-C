#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int km ;
    printf ("entre la distance en km:\n");
	scanf("%d",&km);
	int mile = km*1.609;
    printf ("la distance en mile:%d",mile);
	return 0;
}
