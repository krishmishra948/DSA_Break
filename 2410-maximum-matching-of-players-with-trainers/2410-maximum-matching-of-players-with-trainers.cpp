class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& Trainers) {
    sort(players.begin(),players.end());
    sort(Trainers.begin(),Trainers.end());
    int i=0;//players pointer
    int j=0;// Trainers pointer 
    int ans =0;
    while(i < players.size() && j < Trainers.size()){
        if(Trainers[j]>= players[i]){
            ans++;
            i++;
            j++;
        }
        else{
            j++;
        }
    }

    return ans;
    }
};