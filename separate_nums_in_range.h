#ifndef __nums_in_range__
#define __nums_in_range__

typedef int *Numbers_in_one_range;
typedef int **Number_list;

typedef struct 
{
	Numbers_in_one_range numbers;
	int length;
} Numbers_in_range;

// typedef struct 
// {
// 	Number_list values;
// 	int length;
// } Number_Ranges;

Numbers_in_range *separate_nums_in_range(int *number_list, int start, int end, int length);

#endif