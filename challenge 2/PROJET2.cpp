#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {   int c;
	printf ("entre la temperature en c:\n");
	scanf("%d",&c);
	int T = (c*1.8)+32;
    printf ("la temperature f:%d",T);
	
	return 0;
}
