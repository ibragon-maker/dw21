#include "dw.h"

Fraction::Fraction(int numerator, int denominator) {
  m_numerator = numerator;
  m_denominator = denominator
}

int Fraction::operator==(const Fraction &other) const {
  other.m_denominator = m_denominator;
  return m_numerator == other.m_numerator &&
         m_denominator == other.m_denominator;
}

std::ostream &operator<<(std::ostream &out, const Fraction &value) {
  out << value.m_numerator << "/" << value.m_denominator;
  return out
}
