/* Read input from STDIN. Print your output to STDOUT*/
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#include<bits/stdc++.h>
#include<stack>
#include<cstdio>
#include<iostream>
using namespace std;
int main(int argc, char *a[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
   
   long long int t;
   cin>>t;
   while(t--){
       long long int n;
       cin>>n;
       long long int * arr=new long long int[n];
       long long int* arr2=new long long int[n];
       for(long long int i=0;i<n;i++){
           cin>>arr[i];
       }
       for(long long int i=0;i<n;i++){
           cin>>arr2[i];
       }
       sort(arr,arr+n);
       sort(arr2,arr2+n);
       stack<long long int> s;
       for(long long int i=n-1;i>=0;i--){
              s.push(arr2[i]);
       }
       long long int  count=0;
       for(long long int i=0;i<n;i++){
           if(arr[i]>s.top()){
               s.pop();
               count++;
           }
       }
       cout<<count;
       cout<<endl;

   }
}
