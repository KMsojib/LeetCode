# Problem          : 705. Design HashSet
# Time Complexity  : O(N)
# C++ Solution

class MyHashSet {
public:
    map<int, int> mp;
    MyHashSet() {}

    void add(int key) { mp[key]++; }

    void remove(int key) { mp[key] = 0; }

    bool contains(int key) { return (mp[key] != 0); }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */