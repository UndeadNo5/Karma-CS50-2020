//Greed Algorithm: Find out the least amount of change possible 
#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float dollar;
// Get user input of a positive float    
    do
    {
        dollar = get_float("Change: ");
    }
    while (dollar < 0.009)
// Change $ into a interger    
    int change = round(dollar * 100);
// Define and assign value to coins while subtracting the value from the original change
    int quarter = change / 25;
    change = change - quarter * 25;
    int dimes = change / 10;
    change = change - dimes * 10;
    int nickels = change / 5;
    change = change - nickels * 5;
    int pennies = change / 1;
    change = change - pennies * 1;
// Add all the coins up to find the least number of coins possible    
    int coins = quarter + dimes + nickels + pennies;
// Command if you want to display all the denominations of individual coins
//     printf("You will need %i quarters, %i dimes , %i nickels and %i pennies \n", quarter, dimes, nickels, pennies);      
    printf("%i \n", coins);
}    

