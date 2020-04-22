#include "separate_nums_in_range.h"
#include <stdio.h>

int main(void)
{
	int number_list[] = {4, 3, 1, 2};
	int length = 4;
	Numbers_in_range *nums_separated_by_range = separate_nums_in_range(number_list, 2, 3, length);
	for (int i = 0; i < 3; i++)
	{
		printf("[");
		for (int j = 0; j < nums_separated_by_range[i].length; j++)
		{
			printf(" %d ", nums_separated_by_range[i].numbers[j]);
		}
		printf("]\n");

	}

	return 0;
}