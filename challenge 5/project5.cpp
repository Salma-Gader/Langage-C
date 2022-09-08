#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {

    float fahrenheit;
    float result;

    printf("Entre la temperature en fahrenheit:\n");
    scanf("%f", &fahrenheit);
    result= (fahrenheit-32)/1.8;

  
    if(result<0)
        printf("la temperature est tres froid");
    else if(result<18)
        printf("la temperature est froid");
    else if(result<37)
        printf("la temperature est chaud");
    else 
        printf("la temperateur est tres chaud");
    return 0;
 }
	
