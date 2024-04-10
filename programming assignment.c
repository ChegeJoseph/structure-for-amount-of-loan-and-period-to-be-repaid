#include<stdio.h>
struct loan{
    double amount;
    int period;
} loan1,loan2;

int main() {
    
    loan1.amount=5500.25;
    loan1.period=2;
    printf("period of loan 1:%d\n",loan1.period);
    printf("amount of loan 1:%.2lf\n",loan1.amount);

    loan2.amount=6000.55;
    loan2.period=3;
    printf("period of loan 2:%d\n",loan2.period);
    printf("amount of loan 2:%.2lf",loan2.amount);
    return 0;

}