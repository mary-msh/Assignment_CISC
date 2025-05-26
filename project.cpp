```cpp
function findDualSportPlayers(basketball_players, football_players) {
  const basketballSet = new Set(
    basketball_players.map(p => `${p.first_name} ${p.last_name}`)
  );
  return football_players
    .map(p => `${p.first_name} ${p.last_name}`)
    .filter(name => basketballSet.has(name));
}
```
