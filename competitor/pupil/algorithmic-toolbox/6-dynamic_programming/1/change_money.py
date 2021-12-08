from functools import lru_cache
@lru_cache(1000000)
def get_recursive_change(money, coins = [1, 3, 4]):
    if money == 0:
        return 0

    mini_change = money
    for coin in coins:
        if money >= coin:
            change = get_recursive_change(money - coin) + 1
            if mini_change > change:
                mini_change = change
    return mini_change

def get_dp_change(money, coins = {0 : 0, 1 : 1, 3 : 1, 4 : 1}):
    money += 1
    changes = [None] * money 
    for mon in range(money):
        if mon in coins:
            changes[mon] = coins[mon]
        else:
            change1 = changes[mon - 1] if mon >= 1 else changes[mon - 1]
            change2 = changes[mon - 3] if mon >= 3 else changes[mon - 1]
            change3 = changes[mon - 4] if mon >= 4 else changes[mon - 1]
            changes[mon] = 1 + min(change1, change2, change3)
    return changes[-1]

if __name__ == "__main__":
    money = int(input())
    # print(get_recursive_change(m))
    print(get_dp_change(money))