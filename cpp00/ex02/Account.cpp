#include "Account.hpp"
#include <iostream>

int	_nbAccounts = 0;
int	_totalAmount = 0 ;
int	_totalNbDeposits = 0;
int	_totalNbWithdrawals = 0;


int	Account::getNbAccounts( void )
{
    return (Account::_nbAccounts);
}
int	Account::getTotalAmount( void )
{
    return (Account::_totalAmount);
}
int	Account::getNbDeposits( void )
{
    return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
    return (Account::_totalNbWithdrawals);
}

Account::Account(int initial_deposit)
{

        //aff eurodatage + 
        std::cout << /*eurodatage <<*/ "index :" << _accountIndex << ";creadted" << std::endl;
        return;        
}



Account::~Account()
{
        std::cout << "destructor called" << std::endl;
        return;        
}

void    Account::makeDeposit(int deposite)
{
    std::cout << "deposite:" << deposite;
    return;

}

bool    Account::makeWithdrawal(int withdrawal)
{
        std::cout << "withdrawal:" << withdrawal;
        return (true);
}

void	Account::displayAccountsInfos( void )
{
    //[19920104_091532] index:3;amount:432;deposits:0;withdrawals:0
    std::cout << /*eurodatage << */ "index:" << Account::getNbAccounts() << ";amount:" << Account::getTotalAmount() << ";deposits:" << Account::getNbDeposits() << ";withdrawal:" << Account::getNbWithdrawals() << std::endl;

}