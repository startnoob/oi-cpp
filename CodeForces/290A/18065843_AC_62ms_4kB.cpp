/*************************************************************************
        > File Name: prw.cpp
        > Author: ralph
        > Mail: 1694487365@qq.com
        > Created Time: 2019年01月30日 星期三 18时15分57秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
string arrPresidents[40] = { "Washington", "Adams", "Jefferson", "Madison", "Monroe", "Adams", "Jackson", "Van Buren", "Harrison", "Tyler", "Polk", "Taylor", "Fillmore", "Pierce", "Buchanan", "Lincoln", "Johnson", "Grant", "Hayes", "Garfield", "Arthur", "Cleveland", "Harrison", "Cleveland", "McKinley", "Roosevelt", "Taft", "Wilson", "Harding", "Coolidge", "Hoover", "Roosevelt", "Truman", "Eisenhower", "Kennedy", "Johnson", "Nixon", "Ford", "Carter", "Reagan"  };
int main()
{
    int t;
    cin>>t;
    cout<<arrPresidents[t-1];
}