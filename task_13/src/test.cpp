#include <gtest/gtest.h>

#include "lesson_schedule.hpp"

TEST(LessonSchedule, SelectsMaximumNonOverlappingSet) {
  const auto selected = SelectLessons({{9, 10, "9", "10"},
                                       {9.3, 10.3, "9.3", "10.3"},
                                       {10, 11, "10", "11"},
                                       {10.3, 11.3, "10.3", "11.3"},
                                       {11, 12, "11", "12"}});
  ASSERT_EQ(selected.size(), 3);
  EXPECT_EQ(selected[0].start_text, "9");
  EXPECT_EQ(selected[1].start_text, "10");
  EXPECT_EQ(selected[2].start_text, "11");
}
