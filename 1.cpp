#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long int t;
    cin>>t;
    
    for(;t>0;t--)
    {
        long long int n;
        cin>>n;n--;
        cout<<((n/3)*(3*(n/3)+3))/2 +((n/5)*(5+5*(n/5)))/2 - ((n/15)*(15+15*(n/15)))/2<<'\n';
 }
   return 0;
}