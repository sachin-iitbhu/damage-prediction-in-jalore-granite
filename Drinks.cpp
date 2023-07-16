#include<bits/stdc++.h>
using namespace std;
 int main(){
     double n;
     cin>>n;
     double sum=0;
     vector<int> v(n);
     for(int i=0;i<n;i++){
         cin>>v[i];
        sum+=v[i];
     }
     cout<<setprecision(14)<<sum/(n);
 }
