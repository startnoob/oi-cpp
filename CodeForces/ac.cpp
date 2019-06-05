/*************************************************************************
	> File Name: ac.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2019年06月01日 星期六 23时40分33秒
 ************************************************************************/

#include<iostream>
#include<cstdio>
#include<fstream>
#include<algorithm>
#include<cmath>
#include<deque>
#include<vector>
#include<queue>
#include<string>
#include<cstring>
#include<map>
#include<stack>
#include<set>
using namespace std;
#define ll long long
#define pb push_back
#define pi 3.14159265
#define e 2.71828182
#define fo(x1,x2,x3,x4) for(int x1=x2;x1<=x3;x1+=x4)
#define M 300050
int arr[M],sorted_arr[M],n;
bool mark[M];
int binary_s(int a[],int length_a,int tar)
{
    int left=0,right=length_a-1;
    while(left<=right)
    {
        int mid=(right+left)/2;
        if(a[mid]>tar) right=mid-1;
        else left=mid+1;
    }
    return left;
}
bool checkd()
{
    fo(i,0,n-1,1) if(!mark[i]) return 1;
    return 0;
}
int main()
{
    cin>>n;
    fo(i,0,n-1,1)
    {
        cin>>arr[i];
        sorted_arr[i]=arr[i];
    }
    sort(sorted_arr,sorted_arr+n);
    while(checkd()==1)
    {
        fo(i,0,n-1,1)
        {
            if(mark[i]==1) continue;
            int temp=binary_s(sorted_arr,n,arr[i]);
            if(abs(temp-i)>=n/2)
            {
                swap(arr[i],arr[temp]);
                cout<<i+1<<" "<<temp+1<<endl;
                mark[temp]=1;
                break;
            }
            else
            {
                if(abs(i-(n-1))<n/2)
                {
                    swap(arr[0],arr[i]);
                    printf("%d %d\n",1,i+1);
                    mark[0]=0;
                    if(temp<n/2)
                    {
                        swap(arr[0],arr[n-1]);
                        swap(arr[n-1],arr[temp]);
                        mark[temp]=1;
                        printf("%d %d\n%d %d\n",1,n,n,temp);
                    }
                    else
                    {
                        swap(arr[0],arr[temp]);
                        mark[temp]=1;
                        printf("%d %d\n",1,temp+1);
                    }
                }
                else
                {
                    swap(arr[n-1],arr[i]);
                    printf("%d %d\n",1,i+1);
                    mark[0]=0;
                    if((n-1)-temp<n/2)
                    {
                        swap(arr[0],arr[n-1]);
                        swap(arr[0],arr[temp]);
                        mark[temp]=1;
                        printf("%d %d\n%d %d\n",1,n,1,temp);
                    }
                    else
                    {
                        swap(arr[n-1],arr[temp]);
                        mark[temp]==1;
                        printf("%d %d\n",n,temp+1);
                    }
                }
            }
        }
    }
}
