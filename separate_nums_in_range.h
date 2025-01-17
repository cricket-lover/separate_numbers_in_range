#ifndef __nums_in_range__
#define __nums_in_range__

typedef int *Int_Array;

typedef struct
{
  Int_Array numbers;
  int length;
} Numbers_in_range;

Numbers_in_range *separate_nums_in_range(Int_Array number_list, int start, int end, int length);
void display_numbers_in_range(Numbers_in_range *numbersList);
void copy_range(int source[], Numbers_in_range *destination, int length_of_range);
int where_in_range(int number, int start_of_range, int end_of_range);

#endif