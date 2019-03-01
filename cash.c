//Greedy.c number of coins
#include<cs50.h>
#include<stdio.h>
#include<math.h>

int main(void)
{
    float changeAmount;
    int numCoins = 0;

//prompt the user for positive number
    do
    {
        changeAmount = get_float("How much dollars you want to change?\n");
    }
    while (changeAmount <= 0);

//Convert dollar to cents $1 = 1 * 100 = 100cents and round it to whole integer
    int change = round(changeAmount * 100);

//How much quarters
    while (change >= 25)
    {
        numCoins++;
        change = change - 25;
    }
//How much dimes    
    while (change >= 10)
    {
        numCoins++;
        change = change - 10;
    }
//How much nickels    
    while (change >= 5)
    {
        numCoins++;
        change = change - 5;
    }
//How much pennies    
    while (change >= 1)
    {
        numCoins++;
        change = change - 1;
    }
//Print how much coins
    printf("Number of coins is: %i\n", numCoins);
}
