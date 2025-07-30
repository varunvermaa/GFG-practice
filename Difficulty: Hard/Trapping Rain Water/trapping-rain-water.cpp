class Solution {
  public:
    std::vector<int> nge(std::vector<int> a) {
        std::stack<int> s;
        int n = a.size();
        std::vector<int> b(n);
        for (int i = n - 1; i >= 0; i--) {
            while (!s.empty() && a[s.top()] <= a[i]) {
                s.pop();
            }
            if (s.empty()) {
                b[i] = n;
            } else {
                b[i] = s.top();
            }
            s.push(i);
        }
        return b;
    }

    std::vector<int> pge(std::vector<int> a) {
        std::stack<int> s;
        int n = a.size();
        std::vector<int> b(n);
        for (int i = 0; i < n; i++) {
            while (!s.empty() && a[s.top()] <= a[i]) {
                s.pop();
            }
            if (s.empty()) {
                b[i] = -1;
            } else {
                b[i] = s.top();
            }
            s.push(i);
        }
        return b;
    }

    int maxWater(vector<int>& arr) {
        int n = arr.size();
        if (n <= 2) return 0;

        std::vector<int> left_max(n);
        std::vector<int> right_max(n);

        left_max[0] = arr[0];
        for (int i = 1; i < n; i++) {
            left_max[i] = std::max(left_max[i - 1], arr[i]);
        }

        right_max[n - 1] = arr[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            right_max[i] = std::max(right_max[i + 1], arr[i]);
        }

        long long total_water = 0;

        for (int i = 0; i < n; i++) {
            total_water += std::max(0, std::min(left_max[i], right_max[i]) - arr[i]);
        }

        return static_cast<int>(total_water);
        
    }
};