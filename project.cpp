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

```cpp
#include <iostream>
#include <vector>
#include <climits>

int highestProductOfTwo(const std::vector<int>& nums) {
    if (nums.size() < 2) {
        std::cerr << "Need at least two numbers to compute product.\n";
        return 0;
    }

    int max1 = INT_MIN, max2 = INT_MIN; 
    int min1 = INT_MAX, min2 = INT_MAX; 

    for (int num : nums) {
        // Update max values
        if (num > max1) {
            max2 = max1;
            max1 = num;
        } else if (num > max2) {
            max2 = num;
        }

        // Update min values
        if (num < min1) {
            min2 = min1;
            min1 = num;
        } else if (num < min2) {
            min2 = num;
        }
    }

    return std::max(max1 * max2, min1 * min2);
}

```
