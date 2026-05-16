//function overloading
#include <iostream>
#include <string>
//#include <bits/stdc++.h>

using namespace std;

int area(int l,int b){
    return l*b;
}

inline int area(int a){
    return a*a;
}

double area(double a){
    return a-1.0;
}

int main(){
    int rect=area(5,19);
    int sq=area(5);
    double pui=area(5.9);
    cout<<rect<<" "<<sq<<" "<<pui;
}