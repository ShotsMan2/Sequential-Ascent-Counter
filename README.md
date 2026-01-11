# Sequential Ascent Counter

This project implements a data analysis algorithm in C designed to process a stream of integers and detect **Positive Increments** (Sequential Ascents).

## 📊 Algorithm Logic

The algorithm evaluates the relationship between consecutive data points in a temporal sequence $x_1, x_2, x_3, \dots, x_n$.

It calculates the total count $C$ where the current value strictly exceeds the immediate predecessor:

$$C = \sum_{i=2}^{n} [ x_i > x_{i-1} ]$$

### Operational Flow:
1.  **Initialization:** Accepts the initial reference value ($x_1$).
2.  **Stream Processing:** Enters a loop to accept subsequent values ($x_i$).
3.  **Sentinel Check:** Terminates execution if the input is `0`.
4.  **Trend Analysis:**
    * Compares Current ($x_i$) vs Previous ($x_{i-1}$).
    * If $x_i > x_{i-1}$, increments the event counter.
5.  **State Update:** Updates the reference variable (`previous = current`) for the next iteration.

### Example Scenario
**Input Stream:** `1, 5, 7, 19, 14, 4, 8, 0`

* $5 > 1$ ✅ (Count: 1)
* $7 > 5$ ✅ (Count: 2)
* $19 > 7$ ✅ (Count: 3)
* $14 > 19$ ❌ (Drop)
* $4 > 14$ ❌ (Drop)
* $8 > 4$ ✅ (Count: 4)
* `0` -> **STOP**

**Output:** `sonuc: 4`

## 🚀 Usage

1.  Compile the code:
    ```bash
    gcc main.c -o ascent_counter
    ```
2.  Run the executable:
    ```bash
    ./ascent_counter
    ```
3.  Enter a series of numbers. Enter `0` to finish and view the statistics.

---
*This repository demonstrates state retention and comparative logic in C.*
