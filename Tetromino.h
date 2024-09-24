#ifndef TETROMINO_H
#define TETROMINO_H

#include <array>    // ���� ũ�Ⱑ �ʿ��� ���� �ƴϴ� vector ��� array�� ����.
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
