#include <gtest/gtest.h>

#include "phone_combinations.hpp"

TEST(PhoneCombinations, BuildsLexicographicOrder) {
  EXPECT_EQ(BuildPhoneCombinations("23"),
            (std::vector<std::string>{"ad", "ae", "af", "bd", "be", "bf", "cd",
                                      "ce", "cf"}));
}
