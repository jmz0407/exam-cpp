#include "../exercise.h"
#include <vector>
using namespace std;
struct Fibonacci {
    vector<int> numbers;
    Fibonacci(vector<int> num) : numbers(num.begin(), num.end()) {
    }
    // TODO: 修改方法签名和实现，使测试通过
    int get(int i) {
      return numbers[i];
    }
};

int main(int argc, char **argv) {
    Fibonacci FIB(vector<int>{0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55});
    ASSERT(FIB.get(10) == 55, "fibonacci(10) should be 55");
    std::cout << "fibonacci(10) = " << FIB.get(10) << std::endl;
    return 0;
}
