#ifndef TETROMINO_H
#define TETROMINO_H

#include <array>    // 동적 크기가 필요한 것이 아니니 vector 대신 array를 쓴다.
#include <iostream>
#include <random>

class Tetromino {
public:
    using Matrix = std::array<std::array<int, 4>, 4>;

    Tetromino(const Matrix& shape);
    
    void printShape() const;
private:
    Matrix shape_;
};

#endif // TETROMINO_H
