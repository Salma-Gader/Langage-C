#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() { 
    int Fahrenhei;
	printf ("entre la temperature en Fahrenhei:\n");
	scanf("%d",&Fahrenhei);
	int result =  (Fahrenhei-32)/1.8;
    printf ("la temperature en degré Celsius:\n%d",result);
	return 0;
}
