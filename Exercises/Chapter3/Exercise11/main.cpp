#include <iostream>
using namespace std;

int main(){
    int pennies = 0;
    int nickels = 0;
    int dimes = 0;
    int quarters = 0;
    int half_dollars = 0;
    int dollars = 0;
    int cents = 0;
    double total = 0.00;


    cout << "Enter number of pennies: ";
    cin >> pennies;
    cout << "\nEnter number of nickels: ";
    cin >> nickels;
    cout << "\nEnter number of dimes: ";
    cin >> dimes;
    cout << "\nEnter number of quarters: ";
    cin >> quarters;
    cout << "\nEnter number of half dollars: ";
    cin >> half_dollars;
    cout << "\nEnter number of dollars: ";
    cin >> dollars;

    if(pennies > 0){
        cout << "You have " << pennies;
        if(pennies == 1)
        cout << " penny.\n";
        else
        cout << " pennies.\n";
    }
    if(nickels > 0){
        cout << "You have " << nickels;
        if(nickels == 1)
        cout << " nickel.\n";
        else
        cout << " nickels.\n";
    }
    if(dimes > 0){
        cout << "You have " << dimes;
        if(dimes == 1)
        cout << " dime.\n";
        else
        cout << " dimes.\n";
    }
    if(quarters > 0){
        cout << "You have " << quarters;
        if(quarters == 1)
        cout << " quarter.\n";
        else
        cout << " quarters.\n";
    }
    if(half_dollars > 0){
        cout << "You have " << half_dollars;
        if(half_dollars == 1)
        cout << " half_dollar.\n";
        else
        cout << " half_dollars.\n";
    }
    if(dollars > 0){
        cout << "You have " << dollars;
        if(dollars == 1)
        cout << " dollar.\n";
        else
        cout << " dollars.\n";
    }

    total = (pennies + (nickels * 5) + (dimes * 10) + (quarters * 50) + (half_dollars * 50) + (dollars * 100));
    cout << "The value of all your coins is " << total << " cents($ " << total/100 << ").\n"; 

    


    return 0;
}