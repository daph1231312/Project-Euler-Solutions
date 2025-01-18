#include <stdio.h>

int check(int a);        

int main(){
    int number;
    int counter=1;                     //1.'den baslamasi icin
    for(number=2;;number++){           //en kucuk asal sayi 2 oldugu icin oradan baslatip artiriliyor
        if(check(number)==1)           //asal olup olmadigini kontrol eden fonksiyond siradaki sayi ile girilip asal donutu alinirsa sayaci artiriyor ki 2. asala gecelim
        counter++;
        if(counter==10001)             //bizden 10001. asal sayi istendigi icin dongunun o sayiya ulastiginda durmasini saglar
        break;
}
printf("%d",number);                  //istenen sayiyi okur
}

int check(int num){
int checker=1;                       //checker 1'e esit olursa asal
for(int b=2; b<=num/2; b++){         //bolmeye 2,den baslayacagi icin 2'ye esitlenir ve bir sayi yarisindan daha buyuk bi sayiya bolunemeyeceginden num/2 ile sinirlandirilir
if(num%b==0){
    checker=0;                       //eger sayi herhangi bir sayiya kalansiz bolunebiliyorsa asal degil demektir ve checker 0 olur
    break;
}


}
return checker;                     //fonksiyon number ile cagrildiginda alinan donut
}