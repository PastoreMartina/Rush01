#include <unistd.h>

void print_grid(int array[][4]) {
	int	i;
	int	j;
	char	num;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			num = array[i][j] + '0';
			write(1, &num, 1);
			write(1, " ", 1);
			j++;
		}
	i++;
        write(1, "\n", 1);
   	}
}

int	main(void)
{
	int grid[4][4] = {
		{1, 2, 3, 4},
		{2, 3, 4, 3},
		{3, 4, 3, 2},
		{4, 3, 2, 1},
	};
	print_grid(grid);
}
