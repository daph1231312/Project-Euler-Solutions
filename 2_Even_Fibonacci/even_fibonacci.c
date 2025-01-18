//By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.

#include <stdio.h>

int sum;

int fib(int a);

int main(){
    sum=0;
    for(int i=1; fib(i)<4000000; i++){     //fibonacci degeri 4 milyonu gecmeyecek sekilde degerler tek tek bulunur
        if(fib(i)%2==0){                  //fibonacci degerinin cift sayi olup olmamasina bakiyor eger cift sayiysa toplama ekliyor
            sum+=fib(i);
    }
        
    }
    printf("the sum of all even valued fibonacci numbers below 4m: %d", sum);    //toplami yazdiriyor

}
int fib(int a){
    if (a==0)    //0. fibonacci sayisi=0
    return 0;
    if (a==1)   //1. fibonacci sayisi=1
    return 1;
    else
    return fib(a-1)+fib(a-2);   //fibonacci sayisi o sayidan onceki iki fibonacci sayisinin toplami ile bulunur
}
