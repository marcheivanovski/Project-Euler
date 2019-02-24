#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(unsigned long int number){   //this method is for problem 10
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

int numberDivisors(long int triangular){    //this method is for problem 12
    int counter=0;
    for(int i=1; i<=triangular; i++){
        if(triangular%i==0)
            counter++;

    }
    return counter;
}

long int collatzSteps(long int number){           //this method is for problem 14
    long int counter=0;

    while(number!=1){
        if(number%2==0)
            number=number/2;
        else
            number=number*3+1;

        counter++;
    }

    return counter;
}

int main()
{
    /* SUMMATION OF PRIMES PROBLEM 10
    unsigned long int sum=0;
    for(unsigned long int i=1; i<=200000; i++){
        if(isPrime(i))
            sum+=i;
    }
    printf("%lu",sum);
    */


   /* LARGEST PRODUCT IN A GRID PROBLEM 11
    int array[20][20];
    for(int i=0; i<20; i++){
        for(int j=0; j<20; j++){
            scanf("%d",&array[i][j]);
        }
    }

    int index[4][2];
    int max=array[0][0]*array[0][1]*array[0][2]*array[0][3];
    for(int i=0; i<20; i++){        //check horizontally
        for(int j=0; j<20; j++){

            if(j!=0 && j!=1 && j!=2 && array[i][j-3]*array[i][j-2]*array[i][j-1]*array[i][j]>max){
                max=array[i][j-3]*array[i][j-2]*array[i][j-1]*array[i][j];
                index[0][0]=i;
                index[0][1]=j-3;
                index[1][0]=i;
                index[1][1]=j-2;
                index[2][0]=i;
                index[2][1]=j-1;
                index[3][0]=i;
                index[3][1]=j;
            }
        }
    }

    for(int i=0; i<20; i++){        //check vertically
        for(int j=0; j<20; j++){

                if( i!=0 && i!=1 && i!=2 && array[i][j]*array[i-1][j]*array[i-2][j]*array[i-3][j]>max ){
                    max=array[i][j]*array[i-1][j]*array[i-2][j]*array[i-3][j];
                    index[0][0]=i-3;
                    index[0][1]=j;
                    index[1][0]=i-2;
                    index[1][1]=j;
                    index[2][0]=i-1;
                    index[2][1]=j;
                    index[3][0]=i;
                    index[3][1]=j;
                }

        }
    }

    for(int i=0; i<20; i++){        //check dioganally
        for(int j=0; j<20; j++){
            if(i!=19 && i!=18 && i!=17 && j!=17 && j!=18 && j!=19 &&
            array[i][j]*array[i+1][j+1]*array[i+2][j+2]*array[i+3][j+3] > max ){

            max=array[i][j]*array[i+1][j+1]*array[i+2][j+2]*array[i+3][j+3];
            index[0][0]=i;
            index[0][1]=j;
            index[1][0]=i+1;
            index[1][1]=j+1;
            index[2][0]=i+2;
            index[2][1]=j+2;
            index[3][0]=i+3;
            index[3][1]=j+3;

            }

        }
    }

    for(int i=0; i<20; i++){        //check dioganally
        for(int j=0; j<20; j++){
            if(i!=0 && i!=1 && i!=2 && j!=0 && j!=1 && j!=2 &&
               array[i][j]*array[i-1][j+1]*array[i-2][j+2]*array[i-3][j+3]>max){

                max=array[i][j]*array[i-1][j+1]*array[i-2][j+2]*array[i-3][j+3];
                index[0][0]=i;
                index[0][1]=j;
                index[1][0]=i-1;
                index[1][1]=j+1;
                index[2][0]=i-2;
                index[2][1]=j+2;
                index[3][0]=i-3;
                index[3][1]=j+3;

               }
        }
    }

    printf("The max is %d",max);
    printf("\n");
     for(int i=0; i<4; i++){
        for(int j=0; j<2; j++){
                printf("%d |", index[i][j]);
        }
        printf("\n");
     }
    */

    /*HIGHLY DIVISIBLE TRIANGLE NUMBER PROBLEM 12
    bool pogoj=false;
    long int number=1;
    long int triangular=0;

    while (pogoj==false){
        for(int i=1; i<=number; i++){
            triangular+=i;

        }
        //printf("Number: %d and triangular: %d\n", number, triangular);
        number++;

        if(numberDivisors(triangular)>500){
            pogoj=true;
            printf("%li",triangular);
        }
        triangular=0;

    }

    */

    //* LARGE SUM PROBLEM 13 DONT KNOW HOW TO INPUT THE NUMBER, THE PROBLEM IS NOT HARD AT ALL
    /* LONGEST COLLATZ SEQUENCE PROBLEM 14
    long int max=0;
    long int number=0;
    for(long int i=0; i<1000000; i++){

        if(collatzSteps(i)>max){
            max=collatzSteps(i);
            number=i;
        }

    }

    printf("%li", number);

    */
    unsigned long long paths=1; //LATTICE PATHS PROBLEM 15
    unsigned long long correct=1;
    for(int i=1; i<=40; i++){
        paths=paths*i;
    }
    printf("%llu",paths);
    for(int i=1; i<=20; i++){
        correct=correct*i;
    }
    printf("\n%llu", correct*correct);

    printf("\n%li",paths/(correct*correct) );
    return 0;
}
