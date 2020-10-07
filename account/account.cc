#include<iostream>
#include "account.h"

Account::Account():m_accNumber("0"),m_accName(""),m_balance(0){}
Account::Account(std::string number, std::string name , double bal):
m_accNumber(number),m_accName(name), m_balance(bal){}

Account::Account(const Account& ref):
m_accNumber(ref.m_accNumber), m_accName(ref.m_accName),m_balance(ref.m_balance){}

void Account::credit(double amount){
    m_balance+=amount;
}
void Account::debit(double amount){
    m_balance-=amount;
}
double Account::getBalance(){
    return m_balance;
}
void Account::display(){
    std::cout<<m_accNumber<<"."<<m_accName<<","<<m_balance<<"\n";
}