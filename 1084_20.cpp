#include<iostream>
#include<vector>
using namespace std;

int main(){
    int d, n;
    cin >> d >> n;
    vector<int> a;
    a.push_back(d);
    n--;
    while(n--){
        vector<int> tmp;
        int temp = a[0],count = 1;
        for (unsigned int i = 1; i < a.size(); i++)
        {
            if(a[i] == temp)
                count++;
            else{
                tmp.push_back(temp);
                tmp.push_back(count);
                temp = a[i];
                count = 1;
            }
        }
        tmp.push_back(temp);
        tmp.push_back(count);
        a = tmp;
    }
    for (unsigned int i = 0; i < a.size();i++)
        printf("%d", a[i]);
    return 0;
}