#include "account.h"
#include <gtest/gtest.h>
namespace {


TEST(Account,DefaultConstructor) {
    Account a1;
    EXPECT_EQ(0.0,a1.getBalance());
    
}


TEST(Account,ParameterizedConstructor) {
    Account a1("1001","Aswath",5000.0);
    EXPECT_EQ(5000.0,a1.getBalance());

}
TEST(Account,CopyConstructor) {
    Account a1("1001","Aswath",5000.0);
    Account a2(a1);
    EXPECT_EQ(5000.0,a2.getBalance());

}
TEST(Account,CreditTest) {
    Account a1("1001","Aswath",5000.0);
    a1.credit(3000);
    EXPECT_EQ(8000.0,a1.getBalance());

}
TEST(Account,DebitTest) {
    Account a1("1001","Aswath",5000.0);
    a1.debit(1200);
    EXPECT_EQ(3800.0,a1.getBalance());
}
TEST(Account,TransactionTest) {
    Account a1("1001","Aswath",5000.0);
    a1.debit(1200);
    a1.credit(3400);
    a1.debit(2000);
    a1.credit(3000);
    EXPECT_EQ(8200.0,a1.getBalance());
}

}
