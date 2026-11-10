#include "dw.h"
#include <gtest/gtest.h>
#include <sstream>

TEST(Fraction, EqualFractionsCompareEqual) {
  Fraction a(1, 2);
  Fraction b(1, 2);
  EXPECT_TRUE(a == b);
}

TEST(Fraction, DifferentFractionsCompareUnequal) {
  Fraction a(1, 2);
  Fraction b(1, 3);
  EXPECT_FALSE(a == b);
}

TEST(Fraction, StreamsAsNumeratorSlashDenominator) {
  Fraction a(3, 4);
  std::ostringstream out;
  out << a;
  EXPECT_EQ(out.str(), "3/4");
}
