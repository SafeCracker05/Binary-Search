# Binary Search Algorithm Explanation

## Example: Searching for Number 88 in an Array

### Initial Setup
- **Number to find:** 88
- **Array Size:** 20
- **Initial Midpoint (mid):** 10
- **Initial Left Bound (left):** 0
- **Initial Right Bound (right):** 19

### Iterations

#### 1. First Iteration:
   - `array[mid]` is smaller than the target number.
   - Update `left` to `mid + 1` (11).
   - Adjust `mid` to `(11 + 19) / 2 = 15`.

#### 2. Second Iteration:
   - `array[mid]` is smaller than the target number.
   - Update `left` to `mid + 1` (12).
   - Adjust `mid` to `(12 + 19) / 2 = 15`.

#### 3. Third Iteration:
   - `array[mid]` is smaller than the target number.
   - Update `left` to `mid + 1` (13).
   - Adjust `mid` to `(13 + 19) / 2 = 16`.

#### 4. Fourth Iteration:
   - `array[mid]` is smaller than the target number.
   - Update `left` to `mid + 1` (14).
   - Adjust `mid` to `(14 + 19) / 2 = 16`.

#### 5. Fifth Iteration:
   - `array[mid]` is smaller than the target number.
   - Update `left` to `mid + 1` (15).
   - Adjust `mid` to `(15 + 19) / 2 = 17`.

#### 6. Sixth Iteration:
   - `array[mid]` is smaller than the target number.
   - Update `left` to `mid + 1` (16).
   - Adjust `mid` to `(16 + 19) / 2 = 17`.

#### 7. Seventh Iteration:
   - `array[mid]` is smaller than the target number.
   - Update `left` to `mid + 1` (17).
   - Adjust `mid` to `(17 + 19) / 2 = 18`.

#### 8. Eighth Iteration:
   - `array[mid]` is equal to the target number (88).
   - Print the index where the number is found.

### Conclusion
The binary search algorithm successfully found the target number (88) at index 18 after eight iterations.
