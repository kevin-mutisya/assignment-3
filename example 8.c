//calculate the simple intrest for for three sets of p,n and rate
#include<stdio.h>
main()
{
    int p,n,index;
    float rate,intrest;
    index=1;
    while (index<=3)
    {
        printf("\nEnter the value of principal\n");
        scanf("%d",&p);
        printf("\nEnter the value of years\n");
        scanf("%d",&n);
        printf("\nEnter the value of rate\n");
        scanf("%f",&rate);
        intrest=p*n*rate/100;
        printf("The simple intrest for index%d", index, "is %f\n", intrest);
        index = index+1;
    }
}
