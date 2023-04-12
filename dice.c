#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void print_dice(int n)
{
	char number[][3][3] = {{{0,0,0},{0,1,0},{0,0,0}},
			     {{1,0,0},{0,0,0},{0,0,1}},
			     {{0,1,0},{0,1,0},{0,1,0}},
			     {{1,0,1},{0,0,0},{1,0,1}},
			     {{1,0,1},{0,1,0},{1,0,1}},
			     {{1,0,1},{1,0,1},{1,0,1}}};

	int i;
	printf("\t  _________\n");
	printf("\t /         \\\n");
	for (i=0; i<3; i++)
	{
		printf("\t|  %c  %c  %c  |\n",number[n-1][i][0]?'O':' '
				             ,number[n-1][i][1]?'O':' '
					     ,number[n-1][i][2]?'O':' ');
	}
	printf("\t \\_________/\n");
	

}

int main()
{
	srand(clock());
	print_dice(1+(rand()%6));
}
