/*
# Problem          : 1352. Product of the Last K Numbers
# Time Complexity  : O(N)
# C++ Solution
*/

class ProductOfNumbers {
public:
    vector<long long> products;
    ProductOfNumbers() { products.push_back(1); }

    void add(int num) {
        if (num == 0) {
            products.clear();
            products.push_back(1);
        } else {
            products.push_back(products.back() * num);
        }
    }

    int getProduct(int k) {
        int n = products.size();
        if (k >= n) {
            return 0;
        }
        return products.back() / products[n - k - 1];
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */