#include "suma1.h"

double suma1(int N){
    double sum=0;
    double sign = -1.0;
    for(int n=1; n <= 2*N; n++){
        sum+= sign*n/(n+1);
        sign *= -1.0;    
    }
    return sum;
}