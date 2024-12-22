# Problem B: Spit Problem

[link](https://codeforces.com/problemset/problem/29/A)

## Problem Description

In a Berland's zoo, there is an enclosure with camels. It is known that camels like to spit. Bob watched these interesting animals for the whole day and registered in his notepad where each animal spitted. Now he wants to know if in the zoo there are two camels, which spitted at each other. Help him to solve this task.

The trajectory of a camel's spit is an arc, i.e. if the camel in position `x` spits `d` meters right, he can hit only the camel in position `x + d`, if such a camel exists.

## Input

The first line contains integer `n` (1 ≤ n ≤ 100) — the amount of camels in the zoo. Each of the following `n` lines contains two integers `xi` and `di` (-10^4 ≤ xi ≤ 10^4, 1 ≤ |di| ≤ 2·10^4) — records in Bob's notepad. `xi` is the position of the `i`-th camel, and `di` is the distance at which the `i`-th camel spitted. Positive values of `di` correspond to the spits right, and negative values correspond to the spits left. No two camels may stand in the same position.

## Output

If there are two camels, which spitted at each other, output `YES`. Otherwise, output `NO`.