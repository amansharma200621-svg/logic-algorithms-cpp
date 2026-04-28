#ifndef SUDOKU_SOLVER_H
#define SUDOKU_SOLVER_H

#include <vector>

class SudokuSolver {
public:
    static bool solve(std::vector<std::vector<int>>& board);
private:
    static bool isSafe(const std::vector<std::vector<int>>& board, int row, int col, int num);
};

#endif
