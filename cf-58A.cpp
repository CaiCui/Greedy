/**CF-58A Chat room
  *Greedy
  *
  */
//Coders Code uses string-matching
//c++
#include<bits/stdc++.h>
int main()
{char i{0},c;
while(std::cin>>c&&i!=5)i+=c=="hello"[i];
std::cout<<((i==5)?"YES":"NO");}

//c
#include<stdio.h>
int main()
{
    char str[]="hello";
    char s[110];
    int p;
    int i;
    gets(s);
    p=0;
    for(i=0;p<5&&s[i];i++)
        p+=s[i]==str[p];
    puts(p==5?"YES":"NO");
}
//My Code - - brute force,如果字符串过长就会有TLE可能
#include <iostream>
#include<cstring>
using namespace std;
int main()
{
   int i;
   int a[101];
   int b[101];
   int c[101];
   int d[101];
   int e[101];
   int aa,bb,cc,ee,flag;
   int k1,k2,k3,k4,k5;
   char sss[130];
   cin>>sss;
   flag=0;
   aa=bb=cc=ee=0;
   for(i=0;i<strlen(sss);i++)
      {
          if(sss[i]=='h')
            a[aa++]=i;
          if(sss[i]=='e')
            b[bb++]=i;
          if(sss[i]=='l')
            c[cc++]=i;
          if(sss[i]=='o')
            e[ee++]=i;

      }
    for(k1=0;k1<aa;k1++)
       for(k2=0;k2<bb;k2++)
         for(k3=0;k3<cc;k3++)
           for(k4=0;k4<cc;k4++)
             for(k5=0;k5<ee;k5++)
               if(a[k1]<b[k2]&&b[k2]<c[k3]&&c[k3]<c[k4]&&c[k4]<e[k5])
    {
        flag=1;
        break;
    }

   if(flag)
        cout<<"YES"<<endl;
   else
        cout<<"NO"<<endl;
   return 0;
}

