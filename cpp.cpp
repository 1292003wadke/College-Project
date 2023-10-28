#include<iostream>
using namespace
std; class Array2;
class Array1
{
pub
lic :
int
*a;
int
n1,i
;
pub
lic :
void accept()
{
cout<<"\n Enter length for first array : ";
cin>>n1;
a=new int[n1];
for(i=0;i<n1;i++)
{
cout<<"\n Enter value : ";
cin>>a[i];
}
}
void display()
{
for(i=0;i<n1;i++)
{
cout<<a[i]<<"\t";
} 