#include <iostream>

// 匿名命名空间，私有函数
namespace
{
  // a hack square root calculation using simple operations
  // 牛顿迭代法求平方根
  double mysqrt(double x)
  {
    if (x <= 0)
    {
      return 0;
    }

    double result = x;

    // do ten iterations
    for (int i = 0; i < 10; ++i)
    {
      if (result <= 0)
      {
        result = 0.1;
      }
      double delta = x - (result * result);
      result = result + 0.5 * delta / result;
      std::cout << "Computing sqrt of " << x << " to be " << result << '\n';
    }
    return result;
  }
}

namespace mathfunctions
{
  double sqrt(double x)
  {
    return mysqrt(x);
  }
}
