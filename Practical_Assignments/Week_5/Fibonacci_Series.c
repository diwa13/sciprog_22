#include <stdio.h>
#include <stdlib.h>
//Input arguments : f(n-1)and f(n-2)
//on exit .they have va;ues of f(n) and f(n-1)
void fibonacci(unsigned int *a,unsigned int *b);

int main(){
    int n,i;
    unsigned int f1=1,f0=0;
    printf("Enter a positive integer n\n");
    scanf("%d",&n);

    if(n<1){
        printf("The number is not positive \n");
        exit(1);
    }

    printf("The fibonacci sequence is : \n");
    printf("%u, %u,",f0,f1);

    for(i=2;i<=n;i++){
        fibonacci(&f1,&f0);
        printf("%u, ",f1);

        if(((i+1)%10)==0){ // Restricting the series to 10 numbers in one line.
            printf("\n");
        }
    }
    return 0;
}

void fibonacci(unsigned int *a,unsigned int *b){
    int next;
    next=*a+*b;  //*a=f(n-1), *b=f(n-2) next=f(n)
    *b=*a;      //*a=f(n),*b=f(n-1)
    *a=next;
}