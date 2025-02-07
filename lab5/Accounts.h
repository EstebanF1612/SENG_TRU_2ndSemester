#ifndef ACCOUNTS_H
#define ACCOUNTS_H
#include <iostream>

class Account
{
    private:
        int id;
        double balance;

    public:
        Account(){
            id = 0;
            balance = 100;
        }

        int getId(){
            return id;
        }

        double getBalance(){
            return balance;
        }

        void setId(int newId){
            id = newId;
        }

        void setBalance(double newBalance){
            balance = newBalance;
        }

        void withdraw(double amount){
            balance -= amount;
        }

        void deposit(double amount){
            balance += amount;
        }

        int getAChoice(){
            int choice;
            std::cin >> choice;
            return choice;
        }

        int switchControl(int choice){
            switch(choice){
                case 1:
                    std::cout<<"Balance is: "<<getBalance()<<"$\n";
                    break;
                case 2:
                    double withdrawAmount;
                    std::cout<<"Enter the amount to withdraw: ";
                    std::cin>>withdrawAmount;
                    withdraw(withdrawAmount);
                    break;
                case 3:
                    double depositAmount;
                    std::cout<<"Enter the amount to deposit: ";
                    std::cin>>depositAmount;
                    deposit(depositAmount);
                    break;
                case 4:
                    break;
            }
            return choice;
        }
};

#endif