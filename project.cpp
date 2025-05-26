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
