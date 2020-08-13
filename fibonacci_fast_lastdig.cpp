#include <iostream>
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


 main() {
    long long n = 0;
    std::cin >> n;
        std::cout <<fibonacci_fast(n);
    return 0;
}
