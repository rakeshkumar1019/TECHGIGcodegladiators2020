/* Read input from STDIN. Print your output to STDOUT*/
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#include<bits/stdc++.h>
using namespace std;
int main(int argc, char *a[])
{
    long long int Mod=10000000007;
    long n;
    cin>>n;
    if(n==0){
        cout<<0<<endl;
        return 0;
    }
    long long int* arr=new long long int[n];
    long long int* arr2=new long long int[n];
    long long int* ans=new long long int[n];
    for(long long int i=0;i<n;i++){
        cin>>arr[i];
    }
     for(long long int i=0;i<n;i++){
        cin>>arr2[i];
    }
     for(long long int i=0;i<n;i++){
       ans[i]=(arr2[i]/arr[i])%Mod;
    }
    sort(ans,ans+n);
    cout<<ans[0]<<endl;
}
