#include <stdio.h>
#include <stdlib.h>
#include "separate_nums_in_range.h"

// Numbers_in_range *copy_number_list(int *source[], int *sizes)
// {
// 	Numbers_in_range *final = malloc(sizeof(Numbers_in_range) * 3);
// 	for (int i = 0; i < 3; i++)
// 	{
// 		final[i].length = sizes[i];
// 		final[i].numbers = malloc(sizeof(int) * sizes[i]);
// 		for (int j = 0; j < final[i].length; j++)
// 		{
// 			final[i].numbers[j] = source[i][j];
// 		}
// 	}
// 	return final;
// }

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
		if (number_list[i] < start)
		{
			separated_list[0][sizes[0]] = number_list[i];
			sizes[0]++;
		}
		if (number_list[i] > end)
		{
			separated_list[2][sizes[2]] = number_list[i];
			sizes[2]++;
		}
		if (number_list[i] >= start && number_list[i] <= end)
		{
			separated_list[1][sizes[1]] = number_list[i];
			sizes[1]++;
		}
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
