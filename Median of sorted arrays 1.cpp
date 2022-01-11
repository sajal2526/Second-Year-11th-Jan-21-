#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int m,n;
    cin>>m>>n;
    int num1[m],num2[n];
    for(int i=0;i<m;i++){
        cin>>num1[i];
    }
    for(int i=0;i<n;i++){
        cin>>num2[i];
    }
    int res[m+n];
    for(int i=0;i<m;i++){
        res[i]=num1[i];
}
    for(int i=m;i<m+n;i++){
        res[i]=num2[i-m];
}
     for(int i=1;i<m+n;i++){
        int current=res[i];
        int j=i-1;
        while(res[j]>current && j>=0){
            res[j+1]=res[j];
            j--;
        }
        res[j+1]=current;
    }
    if((m+n)%2!=0){
        cout<<res[(m+n)/2];
}
    else{
        float ans =res[(m+n)/2]+res[(m+n)/2-1];
        cout<<ans/2;
    }
    return 0;
}