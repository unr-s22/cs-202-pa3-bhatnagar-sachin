
#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <ostream>
#include <vector>

#include "Money.h"


class Account
{
    private:
        Money balance;
        std::vector<Money> deposits;
        std::vector<Money> withdrawals;

        int depositIndex = 0;
        int withdrawalIndex = 0;

        bool update = false;

    public:
        Account(const Money&);
        void makeDeposit(const Money&);
        void makeWithdrawal(const Money&);

        Money getBalance();

        friend std::ostream& operator<<(std::ostream& os, Account& a);

};

#endif // ACCOUNT_H