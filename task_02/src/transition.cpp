#include "transition.hpp"

int FindZeroOneBoundary(const std::vector<int>& values) {
  for (int index = 0; index + 1 < static_cast<int>(values.size()); ++index) {
    if (values[index] == 0 && values[index + 1] == 1) {
      return index;
    }
  }
  return -1;
}
