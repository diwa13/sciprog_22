#include<stdio.h>
#include<math.h>
double arctanh1 (const double x, const double delta);
double arctanh2 (const double x);
int main() {
   double delta, x;
   printf("Enter the precision for Maclaurin series\n");
   scanf("%lf", &delta); //Seeking the value of delta to set the function to stop as the series is infinite
   int length=1000;
   double tan1[length]; //Store the resuls of arctanh1 for each x
   double tan2[length]; //Store the resuls of arctanh2 for each x
   int j=0;//array index
   x=-0.9;
   while (x<=0.9 && j<length){
     tan1[j]=arctanh1(x, delta);
    tan2[j]=arctanh2(x);
     printf("The difference at x=%lf between them is %.101f\n", x, fabs (tan1[j]-tan2[j]));
     j++;
     x=x+0.1;//try with 0.01 as well
   }
   return 0;
   }

double arctanh1 (const double x, const double delta){ //approximation to Maclaurin series
   double arcTan =0; // approximated result
   double elem, val;
   int n=0; //sum parameter
   do {
    val=2*n+1;
     elem=pow (x, val)/val;
     arcTan +=elem;
     n++;
   }while (fabs (elem) >= delta);
   return arcTan;
}
 double arctanh2 (const double x){ // approximations to natural logarithms
    return (log (1+x)-log(1-x)/2);
}