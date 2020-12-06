#include "separate_nums_in_range.h"

int main(void)
{
  int number_list[] = {3, 1, 7, 4, 6, 5, 8, 2};
  int length = 8;
  int start_of_range = 4;
  int end_or_range = 7;
  Numbers_in_range *nums_separated_by_range = separate_nums_in_range(number_list, start_of_range, end_or_range, length);
  display_numbers_in_range(nums_separated_by_range);
  return 0;
}