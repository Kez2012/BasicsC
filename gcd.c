#include <stdio.h>
int gcd(int a, int b){
    int r;
    if (a == 0){
        return b;
    }
    else if (b == 0){
        return a;

    }
    else{
        r = a % b;
        a = b;
        b = r;
        gcd(a,b);
    }

}

int main(){
    int n,m;
    printf("Enter two integers: ");
    scanf("%d %d",&n, &m);
    printf("The GCD of %d and %d is %d",n,m,gcd(n,m));

}
