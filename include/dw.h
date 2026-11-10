#ifndef DW_H
#define DW_H

#include <ostream>

class Fraction {
public:
  Fraction(int numerator, int denominator);
  bool operator==(const Fraction &other) const;
  friend std::ostream &operator<<(std::ostream &out, const Fraction &value);

private:
  int m_numerator;
  int m_denominator;
};

#endif
