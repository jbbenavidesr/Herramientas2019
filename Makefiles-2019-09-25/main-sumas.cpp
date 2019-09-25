#include<cstdio>
#include<cmath>

#include "suma1.h"
#include "suma2.h"
#include "suma3.h"

//----- Main -----
int main(void){
    int N;
    double sum1, sum2, sum3, d1, d2;

    for(N=1; N <= 10000; N++){
        sum1= suma1(N);
        sum2= suma2(N);
        sum3= suma3(N);
        d1= std::fabs(sum1-sum3)/sum3;
        d2= std::fabs(sum2-sum3)/sum3;
        std::printf("%10d\t%24.16e\t%24.16e\t%24.16e\t%24.16e\t%24.16e\n", N, 
            sum1, sum2, sum3, d1, d2);
    }


    return 0;
}
