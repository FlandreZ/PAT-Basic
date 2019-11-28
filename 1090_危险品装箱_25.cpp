#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main(){
    int m, n;
    cin >> n >> m;
    map<int, vector<int>> mp;
    for (int i = 0; i < n;i++){
        int a, b;
        scanf("%d%d", &a, &b);
        mp[a].push_back(b);
        mp[b].push_back(a);
    }
    for (int i = 0; i < m;i++){
        int k;
        bool flag = true;
        scanf("%d", &k);
        int a[k],b[100000] = {0};
        for (int j = 0; j < k;j++){
            scanf("%d", a + j);
            b[a[j]] = 1;
        }
        for (int j = 0; j < k;j++&&flag)
            for (unsigned int l = 0; l < mp[a[j]].size();l++&&flag)
                if(b[mp[a[j]][l]] == 1)
                    flag = false;
        if(flag)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}