#include <gtest/gtest.h>

#include "merge_sort.hpp"

TEST(MergeSort, SortsValues) {
  std::vector<int> values = {5, 3, 1, 4, 2};
  MergeSort(values);
  EXPECT_EQ(values, (std::vector<int>{1, 2, 3, 4, 5}));
}

TEST(MergeSort, HandlesDuplicates) {
  std::vector<int> values = {3, 3, 1, 1, 2, 2};
  MergeSort(values);
  EXPECT_EQ(values, (std::vector<int>{1, 1, 2, 2, 3, 3}));
}
