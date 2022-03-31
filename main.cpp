
#include "Account.h"
#include "Money.h"

#include <iostream>
int main()
{
    Account myAccount(Money(300, 23));

    std::cout << myAccount << std::endl;

    myAccount.makeDeposit(Money(200, 0));
    myAccount.makeDeposit(Money(300, 24));
    myAccount.makeDeposit(Money(501, 22));

    std::cout << "\n\n";
    std::cout << myAccount << std::endl;


    myAccount.makeWithdrawal(Money(300, 10));
    myAccount.makeWithdrawal(Money(201, 34));


    std::cout << "\n\n";
    std::cout << myAccount << std::endl;

    std::cout << "\n\n";
    std::cout << "***RELATIONAL OPERATORS TEST***" << std::endl;

    Money m1(100, 0);
    Money m2(200, 20);
    Money m3(90, 10);
    Money m4(100, 0);

    std::cout << "m1: " << m1 << std::endl;
    std::cout << "m2: " << m2 << std::endl;
    std::cout << "m3: " << m3 << std::endl;
    std::cout << "m4: " << m4 << std::endl;
    // < > <= >= !+ ==
    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "m1 > m2: " << (m1 > m2) << std::endl;
    std::cout << "m1 > m3: " << (m1 > m3) << std::endl;
    std::cout << "m1 > m4: " << (m1 > m4) << std::endl;

    std::cout << std::endl;

    std::cout << "m1 < m2: " << (m1 < m2) << std::endl;
    std::cout << "m1 < m3: " << (m1 < m3) << std::endl;
    std::cout << "m1 < m4: " << (m1 < m4) << std::endl;

    std::cout << std::endl;

    std::cout << "m1 >= m2: " << (m1 >= m2) << std::endl;
    std::cout << "m1 >= m3: " << (m1 >= m3) << std::endl;
    std::cout << "m1 >= m4: " << (m1 >= m4) << std::endl;

    std::cout << std::endl;

    std::cout << "m1 <= m2: " << (m1 <= m2) << std::endl;
    std::cout << "m1 <= m3: " << (m1 <= m3) << std::endl;
    std::cout << "m1 <= m4: " << (m1 <= m4) << std::endl;

    std::cout << std::endl;

    std::cout << "m1 == m2: " << (m1 == m2) << std::endl;
    std::cout << "m1 == m3: " << (m1 == m3) << std::endl;
    std::cout << "m1 == m4: " << (m1 == m4) << std::endl;

    std::cout << std::endl;

    std::cout << "m1 != m2: " << (m1 != m2) << std::endl;
    std::cout << "m1 != m3: " << (m1 != m3) << std::endl;
    std::cout << "m1 != m4: " << (m1 != m4) << std::endl;


    return 0;
}