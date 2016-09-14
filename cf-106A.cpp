/**CF-160A Twins
  *Greedy+sortings
  *
  */
#include <iostream>
#include<algorithm>
using namespace std;
int cmp(int a,int b)
{
    return a>b?1:0;
}
int main()
{
    int n,i;
    int sum,deal;
    int a[110];
    cin>>n;
    sum=deal=0;
    for(i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
    sort(a,a+n,cmp);
    for(i=0;i<n;i++)
    {
        deal+=a[i];
        if(sum-deal<deal)
          break;

    }
    cout<<i+1<<endl;
    return 0;
}
