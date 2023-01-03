#include <iostream>
#include <iomanip>
#include<cmath>
#include<string>
#include<cstdlib>
#include<fstream>
using namespace std;

int main(){

    float Mean,SD,sum,sum2;
    int N=0;


    string textline;
    ifstream source("score.txt");
    while(getline(source,textline)){
        sum += atof(textline.c_str());
        sum2 += pow(atof(textline.c_str()),2);
        N++;
         }

        Mean = sum/N;
        SD = sqrt((sum2/N)-pow(Mean,2));

    cout << "Number of data = "<<N<<'\n';
    cout << setprecision(3) <<"Mean = "<< Mean<<'\n';
    cout << setprecision(3) << "Standard deviation = "<<SD ;

    source.close();
}

