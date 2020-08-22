#include<stdio.h>
main()
{
    int n1,n2,sum,diff,prod,div,rem;
    printf("enter the two numbers\n");
    scanf("%d%d",&n1,&n2);
    sum=n1+n2;
    diff=n1-n2;
    prod=n1*n2;
    div=n1/n2;
    rem=n1%n2;
    printf("sum of %d and %d is %d\n",n1,n2,sum);
    printf("difference of %d and %d is %d\n",n1,n2,diff);
    printf("product of %d and %d is %d\n",n1,n2,prod);
    printf("division of %d and %d is %d\n",n1,n2,div);
    printf("remainder of %d and %d is %d\n",n1,n2,rem);
    }
