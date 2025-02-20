#include <cassert>

#include "rational.h"

int main() {
    // Тест для проверки конструктора.
    Rational r1(3, 4);
    assert(r1.GetNumerator() == 3);
    assert(r1.GetDenominator() == 4);

    // Тест для проверки сложения.
    Rational r6 = Rational(1, 5) + Rational(2, 5);
    assert(r6.GetNumerator() == 3);
    assert(r6.GetDenominator() == 5);
}