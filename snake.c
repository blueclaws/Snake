#include<stdio.h>
int directions();
int snake();
void game();
int main(void)
{
	do{
		getchar(); // call directions function here.
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
				printf(" "); //implement directions function here.
				if(col == 4 && row == 3)
				{
					printf("@");
				}
			}
			
		} 
		printf("\n");
	}
	
}

int snake()
{
	return 1;
}

int directions()
{
	char dir;
	int row, col;
	scanf("%c", &dir);

	if(dir == 'w')
	{
		row = row - 1;	
		return 1;
	}
	else if(dir == 'a')
	{
		col = col -1;
		return 2;
	}
	else if(dir == 's')
	{
		row = row + 1;
		return 3;
	}
	else if(dir == 'd')
	{
		col = col + 1;
		return 4;
	}
	else
	{
		return 0;
	}
}
