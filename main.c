#include <stdio.h>
#include <stdlib.h>//1.16

int max3��int x,int y,int z��

{
 if��x>y)
 if(x>z) return x;
 else return z;
 else
 if(y>z) return y;
 else return z;
} 

#include<iostream.h>//1.20
#include<stdlib.h>
# define N 10
double polynomail��int a[],int i,double x,int n);
int main()
{ 
 double x;
 int n,i;
 int a[N];
 cout<<"�������ֵx��"��
cin>>x;
cout<<"����n��ֵ��";
cin>>n;
if(n>N-1)
exit(0);
cout<<"�������ʽϵ��a[0]--a[n]:";
for(i=0;i<=n;i++)cin>>a[i];
cout<<"the polynomail value is"
<<polynomail(a,n,x,n)<<endl;
return 0;
}
double polynomail(int a[] ,int i,double x,int n)
{
 if��i>0) return a[n-i]+polynomail(a,i-1,x,n)*x;
 else return a[n];
}  //ʱ�临�Ӷ�Ϊo(n).
