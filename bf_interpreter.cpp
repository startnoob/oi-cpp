/*************************************************************************
  > File Name: bf_interpreter
  > Author: ralph
  > Mail: 1694487365@qq.com
  
 ************************************************************************/
#include <bits/stdc++.h>
using namespace std;
void exec(string in)
{
    int pos = 0, len = in.size();
    stack<int> q;
    string res;
    for (int i = 0; i < in.size(); i++) {
        switch (in[i]) {
        case '>':
            ++pos;
            break;
        case '<':
            --pos;
            break;
        case '+':
            ++res[pos];
            break;
        case '-':
            --res[pos];
            break;
        case '[':
            if (res[pos] == 0) {
                for (int j = i; j < in.size(); j++)
                    if (in[j] == ']') {
                        i = j;
                        break;
                    }
            }
            break;
        case ']':
            if (res[pos] == 0) {
                for (int j = i; j >= 0; j--)
                    if (in[j] == '[') {
                        i = j;
                        break;
                    }
            }
            break;
        case '.':
            cout << in[pos];
            break;
        case ',':
            cin >> in[pos];
            break;
        }
    }
}
int main()
{
    string commands;
    cout << "输入指令：";
    cin >> commands;
    exec(commands);
}
