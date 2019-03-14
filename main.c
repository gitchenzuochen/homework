#include <stdio.h>
#include <stdlib.h>//1.16

int max3（int x,int y,int z）

{
 if（x>y)
 if(x>z) return x;
 else return z;
 else
 if(y>z) return y;
 else return z;
} 

#include<iostream.h>//1.20
#include<stdlib.h>
# define N 10
double polynomail（int a[],int i,double x,int n);
int main()
{ 
 double x;
 int n,i;
 int a[N];
 cout<<"输入变量值x："；
cin>>x;
cout<<"输入n的值：";
cin>>n;
if(n>N-1)
exit(0);
cout<<"输入多项式系数a[0]--a[n]:";
for(i=0;i<=n;i++)cin>>a[i];
cout<<"the polynomail value is"
<<polynomail(a,n,x,n)<<endl;
return 0;
}
double polynomail(int a[] ,int i,double x,int n)
{
 if（i>0) return a[n-i]+polynomail(a,i-1,x,n)*x;
 else return a[n];
}  //时间复杂度为o(n).
