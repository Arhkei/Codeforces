# A. Next Round
**time limit per test:** 3 seconds  
**memory limit per test:** 256 megabytes

"Contestant who earns a score equal to or greater than the $k$-th place finisher's score will advance to the next round, as long as the contestant earns a positive score..." — an excerpt from contest rules.

A total of $n$ participants took part in the contest ($n \ge k$), and you already know their scores. Calculate how many participants will advance to the next round.

### Input
The first line of the input contains two integers $n$ and $k$ ($1 \le k \le n \le 50$) separated by a single space.

The second line contains $n$ space-separated integers $a_1, a_2, \dots, a_n$ ($0 \le a_i \le 100$), where $a_i$ is the score earned by the participant who got the $i$-th place. The given sequence is non-increasing (that is, for all $i$ from $1$ to $n - 1$ the following condition is fulfilled: $a_i \ge a_{i+1}$).

### Output
Print a single integer — the number of participants who advance to the next round.

### Examples

| input |
| :--- |
| `8 5` <br> `10 9 8 7 7 7 5 5` |

| output |
| :--- |
| `6` |

| input |
| :--- |
| `4 2` <br> `0 0 0 0` |

| output |
| :--- |
| `0` |

---
