/*
题目描述
已知正整数nn是两个不同的质数的乘积，试求出两者中较大的那个质数。

输入格式
一个正整数nn。

输出格式
一个正整数pp，即较大的那个质数。*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++) if (n % i == 0) { 
        cout << n / i;
        break;
    }
    return 0;
}
