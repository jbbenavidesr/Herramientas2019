#include <iostream>
#include <random>
#include <vector>

 
int main()
{
    const int NSAMPLES = 1000000;
    int seed = 1;

    const double xmin = 0.0;
    const double xmax = 1.0;
    const double dx = 0.01;
    const int nbins = (xmax-xmin)/dx;
    std::vector<double> histo(nbins);

    std::mt19937 gen(seed); //Standard mersenne_twister_engine seeded with seed
    std::normal_distribution<> dis{0.5,0.1};

    for (int n = 0; n < NSAMPLES; ++n){
        double r = dis(gen);
        int idx = int(r/dx);
        histo[idx] += 1;
    }
    for(int ii = 0; ii < nbins; ii++){
        std::cout << xmin + ii*dx << "\t" << histo[ii]/(NSAMPLES*dx)<< "\n";
    }

}