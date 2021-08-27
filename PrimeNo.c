#include<stdio.h>
#include<stdbool.h>

bool isPrime(int n){
    int i,count = 0;
    for(i = 2; i< n; i++ ){
         if (n%i == 0){
              count = 1;
         }
     }
     if (count == 0){
         return true;
     }
     else{
         return false;
     }
}

int main(){
    int m, i,j,count = 0;
    printf("Enter the number of primes: ");
    scanf("%d",&m);
    int p = 1;  //prime variable
    printf("The primes are: ");
    while(count < m){
        if (isPrime(p)){
            count += 1;
            printf("%d ", p);
        } 
        p += 1;
        
    }
}