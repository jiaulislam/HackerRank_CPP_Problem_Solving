#include <iostream>
using namespace std;

int main(){
    int n; long long int lval; char s; float x;
    double y;
    scanf("%d %lld %c %f %lf", &n, &lval, &s, &x, &y);
    printf("%d\n%lld\n%c\n%f\n%lf", n, lval, s, x, y);
}