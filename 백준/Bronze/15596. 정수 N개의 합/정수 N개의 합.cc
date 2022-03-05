#include <vector>
long long sum(std::vector<int> &a) {
	long long ans = 0;
    int i;
    for (i = 0; i < a.size(); i++)
		ans = ans + a[i];
	return ans;
}
