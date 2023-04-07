#include<stdio.h>
int main()
{
    int N,P,Q;
    char x;
    scanf("%d",&N);
    scanf ("%d %c %d",&P,&x,&Q);

    if(N>=1 && N<=500000)
     {
        if((P>=0 && P<=1000) && (Q>=0 && Q<=1000))
          {
            if(x =='+')
              {
                if(P + Q <= N)
                    printf("ok\n");
                else
                    printf("Overflow\n");

              }
            else if(x =='*')
              {
                if(P*Q<=N)
                    printf("ok\n");
                else
                    printf("Overflow\n");
            }
          }
     }
    return 0;
}
