#include "Account.h"
Account::Account(const Money& money)
{
    balance = money;
}

void Account::makeDeposit(const Money& m)
{
    deposits.push_back(m);
    update = true;
}

void Account::makeWithdrawal(const Money& m)
{
    withdrawals.push_back(m);
    update = true;
}

Money Account::getBalance()
{
    if (update)
    {
        int i;
        for (i = depositIndex; i < deposits.size(); i++)
        {
            balance = balance + deposits[i];
        }
        depositIndex = i;

        for (i = withdrawalIndex; i < withdrawals.size(); i++)
        {
            balance = balance - withdrawals[i];
        }
        update = false;
    }

    return balance;
}

std::ostream& operator<<(std::ostream& os, Account& a)
{
    os << "Account Details" << std::endl;
    os << "--------------------------" << std::endl;
    os << "Current Balance: " << a.getBalance() << std::endl;
    os << "--------------------------" << std::endl;
    os << "Number of Deposits: " << a.deposits.size() << std::endl;
    os << "--------------------------" << std::endl;
    for (int i = 0; i < a.deposits.size(); i++)
    {
        os << "(" << i+1 << ") " << a.deposits[i] << std::endl;
    }
    os << "--------------------------" << std::endl;
    os << "Number of Withdrawals: " << a.withdrawals.size() << std::endl;
    for (int i = 0; i < a.withdrawals.size(); i++)
    {
        os << "(" << i+1 << ") " << a.withdrawals[i] << std::endl;
    }

    return os;
}
