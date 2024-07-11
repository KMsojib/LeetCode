class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int>player;
        for(int i=1;i<=n;i++)   player.push_back(i);

        int startIndex = 0; // initially start from the first player
        while(player.size()>1){
            int losePlayer = (startIndex + k -1) % player.size(); // 0 base index remove -1
            player.erase(player.begin()+losePlayer);
            startIndex = losePlayer;
        }
        return player[0];
    }
};
