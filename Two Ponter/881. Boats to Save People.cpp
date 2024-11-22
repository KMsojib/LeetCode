/*
problem satement:
    1. people array and people [i] is weight of person
    2. limit of board that means maximum weight can caryy.
        * additonl thing is board can carry only 2 person.
        * two people weight sum at most limit.
    3. return the minimum board to carry person.


exmample analysis:
 intput:
 people = [1,2,2,1] limit = 3
 so (1+2) == 3
    taken 1 board

people = [3,2,2,1] limit = 3
 [1,2,2,3] = (1,2),(2),(3)
 taken 3 board

people = [3,5,3,4] limit = 5
 [3, 3, 4, 5] = (3),(3),(4) (5);

Observation:
    1. sort the array
    2. 2 people: and sum must be at most limit
        * if index + 1 > n

        * if p1 + p2 == limit:
            take one board
        * if p1 + p2 > limit
            then take p1 one board
            p2 dosent.

5,1,4,2 limit 6
1 2 4 5
1+2 = 1
4 = 2
5 = 3

*/
class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int cn = 0;
        sort(people.begin(), people.end());
        int n = people.size();

        int l = 0,r=n-1;
        while (l <= r) {
           if(people[l]+people[r] <= limit){
                l++;
                r--;
                cn++;
            }
            else if(people[r] <= limit){
                cn++;
                r--;
            }
        }
        return cn;
    }
};

