#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main()
{
	int NB,Un1,Un2,i,Un;
	
	
	printf("Entrez un nombre entier :\n");
	scanf("%d",&NB);
	
	Un1=Un2=1;
	
	for(i=0;i<NB;i++)
	{
	    
		if(i<=1)
		{
			Un = i;	
		}
		else
		{
			Un = Un1 + Un2;
			Un1 = Un2;
			Un2 = Un;
		}
		
		printf("%d \n",Un);
		
		
	

	}
		return 0;
}

	
