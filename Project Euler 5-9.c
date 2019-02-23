#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

bool isDivisible(int number){  //this method is for problem 5
    bool isDivisible=true;
    for(int i=1; i<=20; i++){
        if(number%i!=0)
            isDivisible=false;
    }

    return isDivisible;
}

int sumOfSquares(int limit){   //this method is for problem 6
    int sum=0;
    for(int i=1; i<=limit; i++){
        sum+=pow(i,2);
    }
    return sum;
}
int squareOfSum(int limit){      //this method is also for problem 6
    int sum=0;
    for(int i=1; i<=limit; i++){
        sum+=i;
    }
    //printf("%d",sum);
    return pow(sum,2);
}

bool isPrime(int number){   //this method is for problem 7
    int factors=0;
    for(int i=1; i<=number; i++){
        if(number%i==0)
            factors++;
    }

    if(factors==2)
        return true;
    else
        return false;
}

bool isTriplet(int a, int b, int c){ //this is a method for 9 problem
    if(a*a+b*b==c*c || b*b+c*c==a*a || a*a+c*c==b*b){
        return true;
    }
    else
        return false;
}

int main()
{
   /* SMALLEST MULTIPLE PROBLEM 5

    bool foundit=false;
    int number=21;
    while(foundit==false){
        if(isDivisible(number) ){
            printf("%d", number);
            foundit=true;
        }

        number++;
    }

    */



    /*SUM SQUARE DIFFERENCE PROBLEM 6

    printf("%d", squareOfSum(100),sumOfSquares(100) );

    */


    /* 10001ST PRIME NUMBER PROBLEM 7

    int primeNumbers[10001];
    int counter=2;
    primeNumbers[0]=2;
    primeNumbers[1]=3;
    int number=4;
    while(counter<10001){
        if( isPrime(number) ){
            primeNumbers[counter]=number;
            counter++;
        }
        number++;
    }
    printf("%d",primeNumbers[10000] );

    */


    /* SPECIAL PITHAGORIAN THRIPLET PROBLEM 9
    for(int i=1; i<=1000; i++){
        for(int j=1; j<=1000; j++){
            for(int k=1; k<=1000; k++){

                if( isTriplet(i,j,k) && i+j+k==1000){
                    printf("%d*%d*%d = %d\n",i, j, k, i*j*k ); //will print it 6 times with all the conbinations
                }

            }
        }
    }

    */



    return 0;
}
