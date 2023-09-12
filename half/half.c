// Calculate your half of a restaurant bill
// Data types, operations, type casting, return value

#include <cs50.h>
#include <stdio.h>

float half(float bill, float tax, int tip);

int main(void)
{
    float bill_amount = get_float("Bill before tax and tip: ");
    float tax_percent = get_float("Sale Tax Percent: ");
    int tip_percent = get_int("Tip percent: ");

    float Amount_each_person_owes = calculate_half(bill_amount, tax_percent, tip_percent);

    printf("You will owe $%.2f each!\n", amount_each_person_owes);
}

// TODO: Complete the function
float calculate_half(float bill, float tax, int tip)
{
    float Sales_tax = (bill + tax) / 100;
    float Tip = (bill + tip) / 100;
    float Total_bill = bill + Sales_tax + Tip;
    float Amount_each_person_owes = Total_bill / 2;
    return (Amount_each_person_owes);
}
