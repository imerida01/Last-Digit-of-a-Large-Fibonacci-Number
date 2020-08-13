#include <iostream>

int get_fibonacci_last_digit_naive(int n) {
    if (n <= 1)
        return n;

    int previous = 0;
    int current  = 1;

    for (int i = 0; i < n - 1; ++i) {
        int tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
    }

    return current % 10;
}
long long fibonacci_fast(long long n) {
    if (n <= 1)
        return n;
    long long previous , current , next , i;
    previous=0;
    current=1;

    for(i=2 ; i<=n ; i++)
    {
        next = (previous + current)%10;
        previous = current;
        current = next;
    }

    return current;
}
void test(long long n)
{
    for(long i=1;i<=1000;i++)
    {
        if(fibonacci_fast(i)==get_fibonacci_last_digit_naive(i))
            std::cout<<"\n"<<"testing @"<<i;
        else
        {
            std::cout<<"\n"<<fibonacci_fast(i)<<"!="<<get_fibonacci_last_digit_naive(i)<<"@"<<i;
            break;
        }
    }
}
int main() {
    int n;
    std::cin >> n;
    int c = get_fibonacci_last_digit_naive(n);
    std::cout << c << '\n';
    std::cout <<'\n'<<fibonacci_fast(n);
    test(n);
    }
