#include<stdio.h>
#include<math.h>
int main(void){
    int N = 12; 
    int i;
    float a = 0.0,b_degree = 60,b_radians,initial_area,Complete_Area,mul_rad;
    b_radians = (M_PI * b_degree)/180.0;
    //Initial area by using tan(a) and tan(b).
    initial_area = tan(a) + tan(b_radians);
    for(i=5;i<60;i+=5){
        //Calculating the area of points from x1,x2,.....xN-1.
        initial_area+=2*tan((M_PI * i)/180.0);
 
    }
// Converting the multiplier (b-a)/2N to radians
mul_rad = (M_PI*((b_degree)/(2*N)))/180.0;
//Calculating the complete Area
Complete_Area = mul_rad*initial_area;
//Printing the Approximated and the Exact value and Comparing them.
printf("Approximted_area = %f\n Exact=%f\n",Complete_Area,log(2.0));
    return 0;
}