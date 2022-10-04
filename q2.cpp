#include <iostream>
#include <math.h>

using namespace std;

int main() {
    
    int dollar_val = 100;
    int quarter_val = 25;
    int dime_val = 10;
    int nickel_val = 5;
    int penny_val = 1;
          
    int dollars, quarters, dimes, nickels, pennies;
    
    cout << "Enter the change amount: ";
    float balance;
    cin >> balance;
    cout << "\n";
    int total_pennies = balance*100;
    
    dollars = total_pennies / dollar_val;
    total_pennies -= dollars * dollar_val;
    
    quarters = total_pennies / quarter_val;
    total_pennies -= quarters * quarter_val;
    
    dimes = total_pennies / dime_val;
    total_pennies -= dimes * dime_val;
    
    nickels = total_pennies / nickel_val;
    total_pennies -= nickels * nickel_val;
    
    pennies = total_pennies / penny_val;
    total_pennies -= pennies * penny_val;
   
    cout << dollars << " dollars\n" << quarters << " quarters\n" << dimes << " dimes\n"
         << nickels << " nickels\n" << pennies << " pennies\n";

return 0;
}

