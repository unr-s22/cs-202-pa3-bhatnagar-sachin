#include <ostream>

#include "Money.h"

Money::Money(int startingDollars, int startingCents): cents{startingCents}
{
    cents += startingDollars * 100;
}


Money::Money(): cents{0} {}


std::ostream& operator<<(std::ostream& os, const Money& m)
{
    int d = m.cents / 100;
    int c = m.cents - (d * 100);

    os << "$" << d << "." << c;

    return os;
}



bool Money::operator<(const Money& other) { return cents < other.cents; }

bool Money::operator>(const Money& other) { return cents > other.cents; }

bool Money::operator<=(const Money& other) { return cents <= other.cents; }

bool Money::operator>=(const Money& other) { return cents >= other.cents; }

bool Money::operator!=(const Money& other) { return cents != other.cents; }

bool Money::operator==(const Money& other) { return cents == other.cents; }

Money Money::operator+(const Money& other) { return Money(0, cents + other.cents); }

Money Money::operator-(const Money& other) { return Money(0, cents - other.cents); }