// Code

class Solution {
public:

    bool findsucessors(vector<int>& hand, int groupSize, int i, int n) 
    {
        int f = hand[i] + 1;
        hand[i] = -1;
        int count = 1;
        i += 1;
        while (i < n && count < groupSize) 
        {
            if (hand[i] == f) 
            {
                f = hand[i] + 1;
                hand[i] = -1;
                count++;
            }
            i++;
        }
        if (count != groupSize)
            return false;
        else
            return true;
    }

    bool isNStraightHand(vector<int>& hand, int groupSize) 
    {
        int n = hand.size();
        if(n % groupSize != 0)
            return false;

        std::sort(hand.begin(), hand.end());

        for (int i = 0; i < n; i++) 
        {
            if (hand[i] >= 0) {
                if (!findsucessors(hand, groupSize, i, n))
                    return false;
            }
        }
        return true;
    }
};
