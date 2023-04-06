#include<stdio.h>
int main()
{
    float salary,salary_increase;
    scanf("%f",&salary);

    if(salary>=0 && salary<=400.00)
     {
       salary_increase=salary*.15;
       salary+=salary_increase;
      printf("Novo salario: %.2f\n",salary);
      printf("Reajuste ganho: %.2f\n",salary_increase);
      printf("Em percentual: 15 %%\n");
     }
    else if(salary>=400.01 && salary<=800.00)
     {
       salary_increase=salary*.12;
       salary+=salary_increase;
      printf("Novo salario: %.2f\n",salary);
      printf("Reajuste ganho: %.2f\n",salary_increase);
      printf("Em percentual: 12 %%\n");
     }
    else if(salary>=800.01 && salary<=1200.00)
     {
       salary_increase=salary*.10;
       salary+=salary_increase;
      printf("Novo salario: %.2f\n",salary);
      printf("Reajuste ganho: %.2f\n",salary_increase);
      printf("Em percentual: 10 %%\n");
     }
    else  if(salary>=1200.01 && salary<=2000.00)
     {
       salary_increase=salary*.07;
       salary+=salary_increase;
      printf("Novo salario: %.2f\n",salary);
      printf("Reajuste ganho: %.2f\n",salary_increase);
      printf("Em percentual: 7 %%\n");
     }

    else if(salary>=2000.00)
     {
       salary_increase=salary*.04;
       salary+=salary_increase;
      printf("Novo salario: %.2f\n",salary);
      printf("Reajuste ganho: %.2f\n",salary_increase);
      printf("Em percentual: 4 %%\n");
     }

   return 0;
}
