#include <stdio.h>
#include <math.h>

int main(void)
{
double principal_amount=150000;
double annual_rate=4;
int n_years=20;

printf("The initial mortgage value: ");
scanf("%lf", &principal_amount);

printf("The mortgage rate: ");
scanf("%lf", &annual_rate);

double monthly_rate = (annual_rate / (12 * 100));

printf("How many years: ");
scanf("%d", &n_years);

int n_months = (n_years * 12);

printf("For a mortgage of %.2f for %d years and interest rate of %.2f%\n", principal_amount, n_years, annual_rate);

double mul = pow( (1 + monthly_rate), n_months);
double monthly_payment = ( principal_amount * (monthly_rate * mul) / ( mul - 1) );
for (int i=1; i<=n_months; i++)
{
principal_amount = ( ( principal_amount * (1+monthly_rate) ) - monthly_payment );
printf("%d \t \t %.2f \n", i, principal_amount);
}
}
