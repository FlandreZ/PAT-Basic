#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a[10005] = {0};
    int N;
    scanf("%d", &N);
    for (int i = 0; i < N;i++){
        int tmp;
        scanf("%d", &tmp);
        a[abs(tmp - i-1)]++;
    }
        for (int i = 9999; i >= 0; i--)
            if (a[i] > 1)
                printf("%d %d\n", i, a[i]);
    return 0;
}