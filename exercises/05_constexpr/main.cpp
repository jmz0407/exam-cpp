#include "../exercise.h"

const unsigned long long fibonacci(int i) {
  if (i <= 1) {
        return i;
    }
    unsigned long long prev = 0;
    unsigned long long curr = 1;
    for (int n = 2; n <= i; ++n) {
        unsigned long long next = prev + curr;
        prev = curr;
        curr = next;
    }
    return curr;
}

int main(int argc, char **argv) {
    const auto FIB20 = fibonacci(20);
    ASSERT(FIB20 == 6765, "fibonacci(20) should be 6765");
    std::cout << "fibonacci(20) = " << FIB20 << std::endl;

    // TODO: 观察错误信息，修改一处，使代码编译运行
    const auto ANS_N = 100;
    const auto ANS = fibonacci(ANS_N);
    std::cout << "fibonacci(" << ANS_N << ") = " << ANS << std::endl;

    return 0;
}
