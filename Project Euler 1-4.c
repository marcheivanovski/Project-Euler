#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>


bool isPalindrome(int number){

    int counter=0;
    int copy=number;

    while(copy>0){
        copy/=10;
        counter++;
    }

    copy=number;

    int numbers[counter];

    for(int i=0; i<counter; i++){
        numbers[i]=copy%10;
        copy=copy/10;

    }


    int times=counter-1;
    int sum=0;
    for(int i=0; i<counter; i++){
        sum=sum+numbers[i]*pow(10,times);

        times--;
    }

    //printf("\n%d",sum);

    if(sum==number){
        return true;
    }
    else{
        return false;
    }

}

int main()
{
    /* EVEN FIBONACHI NUMBERS////////////

    printf("Tell me the limit to which i should calculate\n");
    int limit;
    scanf("%d",&limit);

    int number[limit];
     for(int i=0; i<limit; i++){
        number[i]=0;
    }

    int next=0;
    int counter=2;
    number[0]=1;
    number[1]=1;

    int sum=0;


    while(next<=limit){
        number[counter]=number[counter-1]+number[counter-2];
        next=number[counter]+number[counter-1];


        if(number[counter]%2==0){
            sum+=number[counter];
        }

        counter++;
    }
    printf("\n%d", sum);

    //////////////////// */


   /*  LARGEST PRIME FACTOR
    printf("Enter the number from which i should find largest prime factor: ");
    int number;
    int factors=0;
    int lastprime=0;


    scanf("%d",&number);
    for(int i=1; i<=number; i++){
        if(number%i==0){
            for(int j=1; j<i; j++){
                if(i%j==0){
                    factors++;
                }
            }

            if(factors==1){
                lastprime=i;
            }

            factors=0;

        }
    }

    printf("%d", lastprime);
    */



    int number=0;
    int number1=0, number2=0;
    int max=0;

   for(int i=100; i<1000; i++){
        for(int j=100; j<1000; j++){
                number=i*j;
                if( isPalindrome(number) ){
                    max=number;
                    number1=i;
                    number2=j;
                }
        }
    }

    printf("%d * %d = %d",number1,number2, max);



    return 0;
}
