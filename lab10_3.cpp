#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{
    int count = 0;
    float sum = 0;
    float sum_of_square = 0;
    string textline;
    ifstream source("score.txt");
    while (getline(source, textline))
    {
        sum += stof(textline);
        sum_of_square += pow(stof(textline), 2);
        count++;
    }

    float mean = sum / count;
    float variance = sum_of_square / count - pow(mean, 2);
    float stdDev = sqrt(variance);

    cout << "Number of data = " << count << "\n" ;
    cout << setprecision(3);
    cout << "Mean = " << mean << "\n" ;
    cout << "Standard deviation = " << stdDev << "\n";

    return 0;
}