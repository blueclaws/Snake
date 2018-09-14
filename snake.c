#include<stdio.h>
static int i=1, j=1;
int directions();
void game();
int main(void)
{
	getchar();
	do{
		directions();
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
					if(row == i && col == j)
					{
						printf("@");
					}
					else
					{
						printf(" "); 
					}
			}
			
		} 
		printf("\n");
	}
	
}


int directions()
{
	char dir;
	scanf("%c", &dir);

	if(dir == 'w')
	{
		i = i-1;
	}
	else if(dir == 'a')
	{
		j = j-1;
	}
	else if(dir == 's')
	{
		i = i+1;
	}
	else if(dir == 'd')
	{
		j = j+1;
	}
	else
	{
		return 0;
	}
}
