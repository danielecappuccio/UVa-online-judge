/*
 * Competitive Programming
 *
 * @author        Daniele Cappuccio
 * @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
 * @license       MIT License (https://opensource.org/licenses/MIT)
 */

#include <cstdio>

const int n_max = 1000;

int diffs[n_max];

int main()
{
  while (true) {
    int n;
    scanf("%d", &n);
    if (!n)
      break;
    bool homogeneous = true;
    int i, j, k, pk;
    for (j = 0; j < n; j++, pk = k) {
      scanf("%d", &k);
      if (j)
        diffs[j] = k - pk;
    }
    for (i = 1; i < n; i++) {
      for (j = 0; j < n && homogeneous; j++, pk = k) {
        scanf("%d", &k);
        if (j && k - pk != diffs[j])
          homogeneous = false;
      }
      for ( ; j < n; j++)
        scanf("%*d");
    }
    puts((homogeneous) ? "homogeneous" : "not homogeneous");
  }
  return 0;
}
