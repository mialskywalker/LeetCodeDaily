#include <iostream>
#include <vector>
#include <string>
#include <limits.h>
using namespace std;

int main()
{
    std::cout << "Hello World!\n";
}

class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<string> result;
        if (score.size() == 1) {
            result.push_back("Gold Medal");
        }
        else if (score.size() == 2) {
            double max = *max_element(score.begin(), score.end());
            for (int i = 0; i < score.size(); i++)
            {
                if (score[i] == max) {
                    result.push_back("Gold Medal");
                }
                else {
                    result.push_back("Silver Medal");
                }
            }
        }
        else {

            int iter = 1;

            while (true) {
                double max = *max_element(score.begin(), score.end());
                for (int i = 0; i < score.size(); i++)
                {
                    if (score[i] == max && iter == 1) {
                        result.push_back("Gold Medal");
                    }
                    else if (score[i] == max && iter == 2) {
                        result.push_back("Silver Medal");
                    }
                    else if (score[i] == max && iter == 3) {
                        result.push_back("Bronze Medal");
                    }
                    else if (score[i] == max && iter > 3) {
                        result.push_back(to_string(iter));
                    }
                }
                iter++;
            }
        }
        return result;
    }
};