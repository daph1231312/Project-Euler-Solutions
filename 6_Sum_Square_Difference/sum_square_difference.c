//find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

#include <stdio.h>

int main(){

    int sum_square;
    int square_sum;
    int sum=0;

    for(int i=1;i<=100;i++){

        sum+=i;
        sum_square+=i*i;
        
        }
    square_sum=sum*sum;
    int result=square_sum-sum_square;
    printf("difference of the sum of the squares and the square of the sum: %d", result);

}