#include "separate_nums_in_range.h"
#include <stdio.h>

int main(void)
{
	int number_list[] = {3, 1, 7, 4, 6, 5, 8, 2};
	int length = 8;
	Numbers_in_range *nums_separated_by_range = separate_nums_in_range(number_list, 4, 7, length);
	display_numbers_in_range(nums_separated_by_range);
	return 0;
}