
#include <stdio.h>

/*
 * Potrfolio submission
 * Name:Duoyi Wang
 * ID:201930782
 */

 int main( void ) {

    // define and initialise variables for the problem data 
   double salary = 36250.0;
   double ni_rate = 0.08;
   double tax_rate = 0.15;

    // calculate the deductions and final take-home salary
    // Use only these print statement with appropriate formatting and variable names
   double ni_cont = salary * ni_rate;
   double salary_after_ni = salary - ni_cont;
   double taxable_amt =  salary_after_ni - 12500;
   double tax_cont = taxable_amt * tax_rate;
   double take_home_salary = salary_after_ni - tax_cont;

   
   printf("Salary £%.2f\n", salary);
   printf("NI contribution £%.2f\n", ni_cont);
   printf("Tax contribution £%.2f\n", tax_cont);
   printf("Take home salary £%.2f\n", take_home_salary);

    return 0;
 }