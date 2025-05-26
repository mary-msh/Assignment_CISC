```cpp
#include <iostream>
#include <vector>
#include <set>
#include <string>
using namespace std;

struct Player {
    string first_name;
    string last_name;
};

vector<Player> findDualSportPlayers(vector<Player> basketball_players, vector<Player> football_players) {
    set<string> basketballSet;
    for (const auto& p : basketball_players) {
        basketballSet.insert(p.first_name + " " + p.last_name);
    }

    vector<Player> result;
    for (const auto& p : football_players) {
        string fullName = p.first_name + " " + p.last_name;
        if (basketballSet.find(fullName) != basketballSet.end()) {
            result.push_back(p);
        }
    }
    return result;
}
```

#Task2
```cpp
#include <iostream>
#include <vector>

int findMissingNumber(const std::vector<int>& nums) {
    int n = nums.size(); 
    int expectedSum = (n * (n + 1)) / 2;
    
    int actualSum = 0;
    for (int num : nums) {
        actualSum += num;
    }

    return expectedSum - actualSum;
}


int main() {
    std::vector<int> example1 = {2, 3, 0, 6, 1, 5};  
    std::vector<int> example2 = {8, 2, 3, 9, 4, 7, 5, 0, 6}; 

    std::cout << "Missing example1: " << findMissingNumber(example1) << std::endl;
    std::cout << "Missing example2: " << findMissingNumber(example2) << std::endl;

    return 0;}
```
