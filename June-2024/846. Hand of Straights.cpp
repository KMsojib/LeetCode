class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int n = hand.size();
        if(n%groupSize){
            return false;
        }

        map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[hand[i]]++;
        }

        while(!mp.empty()){
            int crnd_val = mp.begin()->first;
            for(int i=0;i<groupSize;i++){
                if(mp[crnd_val+i]==0){
                    return false;
                }
                mp[crnd_val+i] --;
                if(mp[crnd_val+i] <1){
                    mp.erase(crnd_val+i);
                }
            }
        }
        return true;
    }
};