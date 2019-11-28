#include <iostream>
using namespace std;
void out(double a,double b){
    if(a>b)
        printf(" Cong");
    else if(a == b)
        printf(" Ping");
    else
        printf(" Gai");
}

int main()
{
    int m, x, y;
    scanf("%d %d %d", &m, &x, &y);
    for (int i = 99; i >=10; i--)
    {
        int j = i / 10 + i % 10 * 10;
        double k = abs(i - j) * 1.0 / x;
        if(k * y == j)
        {
            printf("%d", i);
            out(i, m);
            out(j, m);
            out(k, m);
            return 0;
        }
    }
    printf("No Solution");
    return 0;
}