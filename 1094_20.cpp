#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cmath>
using namespace std;
bool isPrime(int m){
    if(m == 0 || m == 1)
        return false;
    for (int i = 2; i <= floor(sqrt(m));i++)
        if(m % i)
            continue;
        else
        {
            return false;
        }
    return true;
}

int main(){
    int L, K;
    cin >> L >> K;
    char num[L];
    scanf("%s", num);
    for (int i = 0; i <= L - K;i++){
        int temp = 0;
        for (int j = i; j < i + K;j++)
            temp = temp * 10 + num[j] - '0';
        if(isPrime(temp)){
            for (int j = i; j < i + K;j++)
                printf("%c", num[j]);
    //注意输出的要求是字符串
            return 0;
        }
    }
    printf("404");
    return 0;
}