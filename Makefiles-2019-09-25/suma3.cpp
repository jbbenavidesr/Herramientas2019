#include "suma3.h"
double suma3(int N){
    double sum=0;
    for(int n=1; n <= N; n++){
        sum+= 1.0/(2*n*(2*n+1));      
    }
    return sum;
}