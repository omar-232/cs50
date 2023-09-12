#include <cs50.h>
#include <stdio.h>

float calculate_half(float bill, float tax, int tip);

int main(void)
{
    float bill_amount = get_float("Bill before tax and tip: ");
    float tax_percent = get_float("Sale Tax Percent: ");
    int tip_percent = get_int("Tip percent: ");

    float amount_each_person_owes = calculate_half(bill_amount, tax_percent, tip_percent);
    printf("You will owe $%.2f each!\n", amount_each_person_owes);
}

float calculate_half(float bill, float tax, int tip)
{
    // Calculate sales tax
    float sales_tax = (bill * tax) / 100;

    // Calculate tip
    float tip_amount = (bill * tip) / 100;

    // Calculate total bill
    float total_bill = bill + sales_tax + tip_amount;

    // Calculate the amount each person owes
    float amount_each_person_owes = total_bill / 2;

    return amount_each_person_owes;
}