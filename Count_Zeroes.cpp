//Implement a problem of number of zeroes,
//Given an array of Is and Os which has all is first. followind by all Os Find the susher of Os. Count the number of zeroes in the given array
#include<iostream>
using namespace std;
int main()
{
int i, n, key;
int a[20];
cout<<"enter total no. of keys"<<endl;
int count=0;
cin>>n;
cout<<"enter actual keys: "<<endl;
for(i=0;i<n;i++)
{
cin>>a[i];
}
int low=0;
int high=n-1;

while(low<=high)
{
    int mid=(low+high)/2;
if(a[mid]==0) 
{
if(a[mid]== 0 && a[mid-1]==1)
{
count=n-mid;
break;
}
else
{
high=mid-1;
}
}
else
{
low=mid+1;
}
}
if(count==0)
{
cout<<"Not found"<<endl;
}
else
{
cout<<"count of zeros is"<<count<<endl;
}
return 0;
}
