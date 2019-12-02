#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> num;
    int n;
    cin >> n;
    for (int i = 1; i <= n;i++){
        int tmp = i / 2 + i / 3 + i / 5;
        num.insert(tmp);
    }
    cout << num.size();
    return 0;
}