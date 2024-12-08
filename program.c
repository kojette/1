// 기존의 fib 함수만 남기고 sum 함수는 삭제
int fib(int n) {
    if (n <= 1) return n;
    return fib(n-1) + fib(n-2);
}

