#include<stdio.h>
int main()
{
    int A,B,C;
    scanf("%d %d %d",&A,&B,&C);
    if(((A+B)==C || (A+B)<C)  || ((B+C)==A || (B+C)<A)|| ((C+A)==B || (C+A)<B))
        printf("Invalido\n");
    else
     {
        if(A==B && B==C)
           printf("Valido-Equilatero\n");

        else if(A==B || B==C || C==A)
           printf("Valido-Isoceles\n");
        else if(A!=B && B!=C && C!=A)
           printf("Valido-Escaleno\n");

        if((A*A==B*B+C*C) || (B*B==C*C+A*A) || (C*C==A*A+B*B))
           printf("Retangulo: S");
        else
           printf("Retangulo: N");
      }
  return 0;
}


























