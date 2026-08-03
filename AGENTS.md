# Project Context & Agent Memory: "First Letter" (CPU Problem)

## 1. Problem Summary
This repository contains the problem statement, test cases, and solution for the competitive programming problem **"First Letter"** (from CPU — *Competitive Programmers' Union*).

### Goal
Given an $N \times M$ grid consisting of periods (`.`) and lowercase letters (`c`), find the total number of **"C"** shapes formed by connected line segments of `'c'`s.

### Rules & Definitions
- **Line Segment**: A maximal contiguous sequence of `'c'`s horizontally or vertically.
- **Forming a "C"**:
  - Consists of a **top horizontal line segment**, a **bottom horizontal line segment**, and a **vertical line segment** connecting their left endpoints.
  - Line segments must be used in full (cannot be considered partially), but a single line segment can be reused across multiple "C" shapes.
  - In the reference solution, the top and bottom horizontal segments share the exact same rightmost column endpoint.

---

## 2. Workspace File Structure
- `statement.md`: Complete problem statement, input/output requirements, and problem lore.
- `case-0`: Sample test cases file containing $TC = 3$ test cases.
- `case-1`: Main test cases file containing $TC = 6$ test cases.
- `sol.cpp`: C++ reference solution authored by `royastik27` using line-end precomputation and column scanning.
- `AGENTS.md`: Primary workspace context and memory for AI coding agents.

---

## 3. Test Cases Breakdown (`case-1`)
`case-1` currently contains **6 test cases** (`TC = 6` on Line 1):

1. **Case 1 (`5 18`)**: 5x18 grid containing disjoint horizontal line segments.
2. **Case 2 (`7 15`)**: 7x15 grid pattern with intersecting horizontal and vertical segments.
3. **Case 3 (`10 15`)**: 10x15 grid with horizontal segments of 8 `'c'`s separated by 2 rows of vertical `'c'`s.
4. **Case 4 (`10 15`)**: 10x15 standard grid pattern.
5. **Case 5 (`10 15`)**: Continuous decreasing staircase pattern (10 `'c'`s on Row 1 down to 1 `'c'` on Row 10) connected by a vertical line at column 3.
6. **Case 6 (`10 15`)**: Reverse continuous staircase pattern (1 `'c'` on Row 1 up to 10 `'c'`s on Row 10) connected by a vertical line at column 3.

---

## 4. Instructions for Agent
When working in this codebase:
- Always ensure `TC` on Line 1 of `case-1` reflects the exact count of test cases present.
- Every test case in `case-1` must start with `$N$ $M$` followed by $N$ string rows of length $M$.
- Refer to `statement.md` for problem semantics and `sol.cpp` for solution logic.
