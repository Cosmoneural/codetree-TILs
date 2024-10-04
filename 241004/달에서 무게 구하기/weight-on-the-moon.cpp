#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    cout<<fixed;
    double a = 0.165;
    int b = 13;
    cout.precision(6);
    cout<<b<<" * "<<a<<" = "<<b*a;
    return 0;
}