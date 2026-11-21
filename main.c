#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int h;
	
	printf("Nhap h vao day: ");
	scanf("%d", &h);
	
	for(int i = 1; i <= h; i++)
	{
		for(int j = 1; j <= h -i ;j++ )
		{
			printf(" ");
		}
		
		for(int j = 1; j <= i ;j++ )
		{
			printf("*");
		}
		
		printf(" \n");
	}
	
	return 0;
}




