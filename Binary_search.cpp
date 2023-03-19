#include<iostream>
using namespace std;
int main(){
int a[100],n,s,index,i;
int left=0,right=n-1;
cout<<"Enter the size of array:";
cin>>n;
cout<<"Enter the array element:";
for(i=0;i<n;i++)
cin>>a[i];
cout<<"\nEnter the element that you wnat to search:";
cin>>s;
while (left<=right)
{
int mid =(left+right)/2;
if(a[mid]==s)
{
    return mid;
    cout<<"The Item is :"<<s;
}
if(a[mid]<s)
{
    left=mid+1;
}
else {
    right=mid-1;
    cout<<"The item is not found!";
}
}
return 0;
}