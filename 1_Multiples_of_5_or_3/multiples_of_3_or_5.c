
//Find the sum of all the multiples of 3 or 5 below 1000.

#include <stdio.h>

int sum;

int main(){
    for(int i=0;i<1000;i++){      //1000 sayisindan kucuk her sayinin hesabi icin for loop 
            if (i%3==0 || i%5==0){    //eger sayi ikisinden birine veya ikisine de bolunebiliyosa o sayi toplama esitlenir. Or gate'de ikisinden birinin veya ikisinin de 1 olmasi sonucu 1 yapar
            sum+=i;
       }
    }
    printf("sum of the numbers that are divisible by 3 or 5: %d", sum);
}