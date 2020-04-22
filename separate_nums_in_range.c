#include <stdio.h>
#include <stdlib.h>
#include "separate_nums_in_range.h"

void display_numbers_in_range(Numbers_in_range *numbersList)
{
	printf("[\n");
	for (int i = 0; i < 3; i++)
	{
		printf("  [");
		for (int j = 0; j < numbersList[i].length; j++)
		{
			printf(" %d ", numbersList[i].numbers[j]);
		}
		printf("]\n");
	}
	printf("]\n");
}

Numbers_in_range *separate_nums_in_range(int *number_list, int start, int end, int length)
{
	int sizes[3] = {0, 0, 0};
	int separated_list[3][length];

	for (int i = 0; i < length; i++)
	{
		int num = number_list[i] < start ? 0 : (number_list[i] > end) ? 2 : 1;
		separated_list[num][sizes[num]] = number_list[i];
		sizes[num]++;
	}

	Numbers_in_range *final = malloc(sizeof(Numbers_in_range) * 3);
	for (int i = 0; i < 3; i++)
	{
		final[i].length = sizes[i];
		final[i].numbers = malloc(sizeof(int) * sizes[i]);
		for (int j = 0; j < final[i].length; j++)
		{
			final[i].numbers[j] = separated_list[i][j];
		}
	}

	return final;
}
