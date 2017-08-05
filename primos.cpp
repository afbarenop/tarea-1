#include <iostream>
#include <math.h>
using namespace std;
int main (){
int i=500;
for (i; i<=1400;i=i+1){
int j=2;
while (j<= i/2){
if (i%j!=0) {j=j+1;}
else {break;};
}
if (j> i/2){
cout<< i <<endl;
}
}
}
