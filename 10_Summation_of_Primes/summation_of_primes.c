//Find the sum of all the primes below two million.

#include <stdio.h>

int check(int number);

int main(){
    long long int sum=0;
    for(int b=2;b<2000000;b++){        //2 milyona kadar olan sayilari tek tek asal check fonksiyonu ile kontrol ederiz
        if(check(b)==1)                //eger asalsa toplama ekleriz
        sum+=(long long int)b;

    }
    printf("summation of all primes below 2000000 is: %llu", sum);

}

int check(int number){

int checker=1;
    for(int i=2;i<=number/2;i++){       //cagrilan sayinin  herhangi bir sayi ile bolunup bolunemedigine bakilir bolunuyorsa asal degil yani 0'dir
        if(number%i==0){
            checker=0;
            break;
        }
        }
        return checker;
}


