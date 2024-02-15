#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int g=5;
    int num1=0;
    int num2=1;
    int nsum =0;
    for(int i=0;i<5;i++){
        nsum=num1+num2;
        num1=num2;
        num2=nsum;
    }
    cout << num2;
    return 0;
}