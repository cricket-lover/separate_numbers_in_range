#ifndef __nums_in_range__
#define __nums_in_range__

typedef int *Numbers_in_single_range;

typedef struct 
{
	Numbers_in_single_range numbers;
	int length;
} Numbers_in_range;

Numbers_in_range *separate_nums_in_range(int *number_list, int start, int end, int length);
void display_numbers_in_range(Numbers_in_range *numbersList);

#endif