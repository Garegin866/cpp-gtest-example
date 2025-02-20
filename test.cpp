#include <gtest/gtest.h> // Подключаем библиотеку.

#include "rational.h"    // Подключаем файл с определением Rational.

// Объявление тестового класса RationalTest.
class RationalTest : public ::testing::Test {};

// Тест для конструктора.
TEST(RationalTest, ConstructorTest) {
    Rational r = Rational(3, 4);
    EXPECT_EQ(r.GetNumerator(), 3);
    EXPECT_EQ(r.GetDenominator(), 4);
}

// Тест для сложения.
TEST(RationalTest, AdditionTest) {
    Rational r = Rational(1, 5) + Rational(2, 5);
    EXPECT_EQ(r.GetNumerator(), 3);
    EXPECT_EQ(r.GetDenominator(), 5);
}

// Главная функция для запуска тестов.
int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}