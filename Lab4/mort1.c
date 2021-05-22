#include <stdio.h>

int main(void)

	{

	    double loan_amount, interest_rate, month_payment, remaining_balance, interest, rate_decimal, payment;

	    int month = 1;

	     

	    printf("Enter the loan amount.\n");

	    scanf("%lf", &loan_amount);

	     

	    printf("Enter the monthly interest rate of the loan.\n");

	    scanf("%lf", &interest_rate);

	     

	    printf("Enter the amount of the monthly payment.\n");

	    scanf("%lf", &month_payment);

	     

	    printf(" Month  Payment  Interest  Remaining \n");

	    while(remaining_balance > 0)

	    {

	        remaining_balance = loan_amount - month_payment;

            rate_decimal = interest_rate * .01;

	        interest = rate_decimal * remaining;

	        payment = month_payment;

	        printf("%7.lf    $%9.2lf    $%10.2lf    $%11.2lf\n"

	            , month, payment, interest, remaining_balance);

	         

	        month = month + 1;

	}
