#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int mile;
    printf ("entre la distance en mile:\n");
	scanf("%d",&mile);
	int km = mile/1.609;
    printf ("la distance en km:%d",km);
	return 0;
}
