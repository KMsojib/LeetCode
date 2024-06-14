class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        sort(seats.begin(), seats.end());
        sort(students.begin(), students.end());

        int ans = 0;
        int l = 0;
        while (l < seats.size()) {
            ans += abs(seats[l] - students[l]);
            l++;
        }
        return ans;
    }
};