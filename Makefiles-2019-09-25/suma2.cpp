#include "suma2.h"

double suma2(int N){
    double sum, sum1=0, sum2=0;
    for(int n=1; n <= N; n++){
        sum1+= (2.0*n-1.0)/(2*n);
        sum2+= (2.0*n)/(2*n+1);      
    }
    sum= -sum1+sum2;
    return sum;
}