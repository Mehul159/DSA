#include<bits/stdc++.h>
using namespace std;
void merge(int *arr,int l,int m,int r)
{
int i,j,k;
int nl=m-l+1;
int nr=r-m;
int larr[nl],rarr[nr];
for(int i=0;i<nl;i++)
larr[i]=arr[l+i];
for(int i=0;i<nr;i++)
rarr[i]=arr[m+1+i];
i=0;
j=0;
k=l;
while(i<nl&&j<nr)
{
if(larr[i]<=rarr[j])
arr[k++]=larr[i++];
else
arr[k++]=rarr[j++];
}
while(i<nl)
arr[k++]=larr[i++];
while(j<nr)
arr[k++]=rarr[j++];
}
void mergesort(int *arr,int l,int r)
{
if(l<r)
{
int m=l+(r-l)/2;
mergesort(arr,l,m);
mergesort(arr,m+1,r);
merge(arr,l,m,r);
}
}
int main()
{
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];
mergesort(arr,0,n-1);
for(int i=0;i<n;i++)
cout<<arr[i]<<" ";
}