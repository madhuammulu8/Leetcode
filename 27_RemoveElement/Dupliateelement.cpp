
#include <stdio.h>
#include<iostream>
using namespace std;
int main()
{
 int a[] = {0,1,2,2,3,0,4,2};
 int val = 2,count=0;
 int n = sizeof(a)/sizeof(a[0]);
 for(int i=0;i<n;i++){
 if(val!=a[i])
 {
     count++;
     cout<<a[i];
 }
 }
  cout<<endl;
  cout<<count;
}
