#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>
#include <cstdlib>
#include <string>

using namespace std;

int main(){
    int count;
    float SD,sum=0;
    string textline;
    ifstream source("score.txt");;
    while (getline(source,textline)){
        sum += atof(textline.c_str());
        SD += pow(atof(textline.c_str()),2); 
        count++;
    }
    cout << "Number of data = " << count << '\n';
    cout << setprecision(3);
    cout << "Mean = " << sum/count << '\n';
    cout << "Standard deviation = " << sqrt((SD/count)-pow(sum/count,2)) << '\n';
}
