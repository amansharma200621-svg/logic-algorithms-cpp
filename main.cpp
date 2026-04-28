#include <iostream>
#include <vector>
#include "SudokuSolver.h"

void printBoard(const std::vector<std::vector<int>>& board) {
    for (const auto& row : board) {
        for (int val : row) std::cout << val << " ";
        std::cout << "\n";
    }
}

int main() {
    // Example grid (0 represents empty cells)
    std::vector<std::vector<int>> board = {
        {5, 3, 0, 0, 7, 0, 0, 0, 0},
        {6, 0, 0, 1, 9, 5, 0, 0, 0},
        {0, 9, 8, 0, 0, 0, 0, 6, 0},
        {8, 0, 0, 0, 6, 0, 0, 0, 3},
        {4, 0, 0, 8, 0, 3, 0, 0, 1},
        {7, 0, 0, 0, 2, 0, 0, 0, 6},
        {0, 6, 0, 0, 0, 0, 2, 8, 0},
        {0, 0, 0, 4, 1, 9, 0, 0, 5},
        {0, 0, 0, 0, 8, 0, 0, 7, 9}
    };

    if (SudokuSolver::solve(board)) {
        std::cout << "Solved Board:\n";
        printBoard(board);
    } else {
        std::cout << "No solution exists.";
    }

    return 0;
}
