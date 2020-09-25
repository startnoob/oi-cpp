/*************************************************************************
  > File Name: bf_interpreter
  > Author: ralph
  > Mail: 1694487365@qq.com
  
 ************************************************************************/
#include <bits/stdc++.h>
using namespace std;
char command[10000000],out;
stack<int> loops;
int type[100000000];
int tail_command, tail_type;
int main()
{
    //scanf("%s", &command[0]);
    cin >> command;
    while (++tail_command <= strlen(command)) {
        //printf("Running to %d\n", tail_command);
        if (command[tail_command] == '[') {
            loops.push(++tail_command);
        }
        if (command[tail_command] == ']') {
            if (tail_type != 0) {
                tail_command = loops.top();
            } else
                loops.pop();
        }
        if (command[tail_command] == '>')
            ++tail_type;
        if (command[tail_command] == '<')
            --tail_type;
        if (command[tail_command] == '+')
            ++type[tail_type];
        if (command[tail_command] == '-')
            --type[tail_type];
        if (command[tail_command] == '.'){
            out=type[tail_type];
            cout<<out;
        }
        if (command[tail_command] == ',')
            cin>>type[tail_type];
    }
    for(int i=0;i<100;i++) cout<<type[i]<<" ";
}
