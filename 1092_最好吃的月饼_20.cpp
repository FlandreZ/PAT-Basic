#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int score[n];
    memset(score, 0, sizeof(score));
    for (int i = 0; i < m;i++)
        for (int j = 0; j < n;j++){
            int temp;
            scanf("%d", &temp);
            score[j] += temp;
        }
    int max = 0;
    for (int i = 0; i < n;i++)
        if(score[i]>max)
            max = score[i];
    bool flag = true;
    printf("%d\n", max);
    for (int i = 0; i < n;i++)
        if(score[i] == max)
            if(flag){
                printf("%d", i + 1);
                flag = false;
            }else{
                printf(" %d", i + 1);
            }
        else
            continue;
    return 0;
}