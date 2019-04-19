/*************************************************************************
	> File Name: 2.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2019年03月01日 星期五 19时22分05秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
multiset<int> st;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b;
        scanf("%d",&a);
        if(a==1)
        {
            scanf("%d",&b);
            st.insert(b);
        }
        if(a==2)
        {
            scanf("%d",&b);
            set<int>::iterator it=st.find(b);
            if(it!=st.end()) st.erase(it);
        }
        if(a==3)
        {
            scanf("%d",&b);
            multiset<int>::iterator it=st.upper_bound(b);
            if(it!=st.end()) printf("%d\n",*it);
            else printf("max\n");
        }
        if(a==4)
        {
            scanf("%d",&b);
            multiset<int>::iterator it=st.lower_bound(b);
            if(it!=st.begin()) printf("%d\n",*(--it));
            else printf("min\n");
        }
        if(a==6)
        {
            if(st.size()>0)
            {
                printf("%d\n",*st.begin());
                st.erase(st.begin());
            }
        }
        if(a==5)
        {
            if(st.size()>0)
            {
                printf("%d\n",*(--st.end()));
                st.erase(--st.end());
            }
        }
//        for(multiset<int>::iterator it=st.begin(); it!=st.end(); it++)
//        {
//          cout<<*it<<" ";
//        }
//        cout<<endl;
    }
    for(multiset<int>::iterator it=st.begin(); it!=st.end(); it++)
    {
        cout<<*it<<" ";
    }
}
