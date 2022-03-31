

#ifndef MONEY_H
#define MONEY_H


#include <ostream>

class Money
{
    private:
        int cents;

    public:
        Money(int startingDollars, int startingCents);
        Money();

        bool operator<(const Money& other);
        bool operator>(const Money& other);
        bool operator<=(const Money& other);
        bool operator>=(const Money& other);
        bool operator!=(const Money& other);
        bool operator==(const Money& other);

        Money operator+(const Money& other);
        Money operator-(const Money& other);



    friend std::ostream& operator<<(std::ostream& os, const Money& m);

};

#endif // MONEY_H