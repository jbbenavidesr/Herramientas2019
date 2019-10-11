#include <iostream>
#include <cstdlib>

typedef float REAL;

int main(int argc, char **argv)
{
    std::cout<<argc<<"\n";
    for (int i=1; i<argc; i++){
        std::cout<<argv[i]<<"\n";
    }
    return 0;
}