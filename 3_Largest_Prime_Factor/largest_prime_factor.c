#include <stdio.h>
//find the prime factors of 600851475143

int main(){
   long long int num=600851475143;     //istenen sayi num degiskenine atanir

for(int i=2; i<=num/2; i++){          //en kucuk asal sayidan baslanarak num o sayiya artik bolunemeyene kadar bolunur ve bolen sayi artirilir
    while((long long int)num%i==0){   //num i sayisina bolunebiliyorsa bolunebildigi kadar o sayi yazdirilir
        printf("%d\n", i);
        num/=(long long int)i;       //devamliligin saglanmasi icin num o sayiya bolunup esitlenir ki hesap dogru ciksin

    }
}

}


        
        
        
        
        
        
        

  