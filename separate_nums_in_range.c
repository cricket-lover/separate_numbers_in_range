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

void copy_range(int source[], Numbers_in_range *destination, int length_of_range)
{
  destination->length = length_of_range;
  destination->numbers = malloc(sizeof(int) * length_of_range);
  for (int j = 0; j < destination->length; j++)
  {
    destination->numbers[j] = source[j];
  }
}

int where_in_range(int number, int start_of_range, int end_of_range)
{
  return number < start_of_range ? 0 : (number > end_of_range) ? 2 : 1;
}

Numbers_in_range *separate_nums_in_range(Int_Array number_list, int start, int end, int length)
{
  int length_of_ranges[3] = {0, 0, 0};
  int separated_list[3][length];

  for (int i = 0; i < length; i++)
  {
    int index = where_in_range(number_list[i], start, end);
    separated_list[index][length_of_ranges[index]] = number_list[i];
    length_of_ranges[index]++;
  }

  Numbers_in_range *final = malloc(sizeof(Numbers_in_range) * 3);
  for (int i = 0; i < 3; i++)
  {
    copy_range(separated_list[i], final + i, length_of_ranges[i]);
  }
  return final;
}
