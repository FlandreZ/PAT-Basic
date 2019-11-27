#include<iostream>
#include<set>
using namespace std;
int main(){
    set<char> s;
    int flag = 0;
    char ch = getchar();
    while(flag != 2){
        if(ch == '\n')
            flag++;
        else
            if(s.count(ch) == 0){
                putchar(ch);
                s.insert(ch);
            }
        ch = getchar();
    }
    return 0;
}