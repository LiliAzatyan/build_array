class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        std::vector<std::string>myVector;
        int num = 1;
        for (int i = 0; i < target.size(); ++i)
        {
            if (target[i] == num)
            {
                myVector.push_back("Push");
                ++num;
            }
            else
            {
                myVector.push_back("Push");
                myVector.push_back("Pop");
                ++num;
                --i;
            }
        }
        return myVector;
    }
};