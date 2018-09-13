#include<stdio.h>
int snake();
void game();
int main(void)
{
	do{
		getchar();
		game();
	}while(1);
}

void game()
{
	int row, col;
	
	for(row=0; row<10; row++)
	{
		for(col=0; col<30; col++)
		{
			if((row == 9 && col == 0)||(row == 9 && col == 29)||(row == 0 && col == 0)||(row == 0 && col == 29))
			{
				printf("+");
			}
			else if(row == 0 || row == 9 )
			{
				printf("-");
			}
			else if(col == 0 || col == 29 )
			{
				printf("|");
			}
			else
			{
				printf(" ");
			}
			
		} 
		printf("\n");
	}
	
}

int snake()
{
	return 1;
}
