// 
// 
// 

#include "fun.h"
//#include <vector>

void SnakeXY::setXY(short x, short y) {
	this->x = x;
	this->y = y;
}

SnakeXY::SnakeXY(short x, short y) {
    this->x = x;
    this->y = y;
}

short SnakeBody::getSize() { return snakeBodyArr.size(); }

void SnakeBody::addBodySegment(short x, short y) {
        //snakeBodyArr[size].setXY(x, y);
        snakeBodyArr.push_back(SnakeXY(x, y));
    }

void SnakeBody::moveLeft() {
        if (getSize() > 0) {
            for (short i = getSize(); i >= 1; i--) {
                snakeBodyArr[i].setXY(snakeBodyArr[i - 1].x, snakeBodyArr[i - 1].y);
            }
        }
        snakeBodyArr[0].x -= SPEED;
    }

void SnakeBody::moveUp() {
    if (getSize() > 0) {
            for (short i = getSize(); i >= 1; i--) {
                snakeBodyArr[i].setXY(snakeBodyArr[i - 1].x, snakeBodyArr[i - 1].y);
            }
        }
        snakeBodyArr[0].y -= SPEED;
    }
    
void SnakeBody::moveDown() {
        if (getSize() > 0) {
            for (short i = getSize(); i >= 1; i--) {
                snakeBodyArr[i].setXY(snakeBodyArr[i - 1].x, snakeBodyArr[i - 1].y);
            }
        }
        snakeBodyArr[0].y += SPEED;
    }

void SnakeBody::moveRight() {
        if (getSize() > 0) {
            for (short i = getSize(); i >= 1; i--) {
                snakeBodyArr[i].setXY(snakeBodyArr[i - 1].x, snakeBodyArr[i - 1].y);
            }
        }
        snakeBodyArr[0].x += SPEED;
    }

void SnakeBody::headToFirst() {
        head = &snakeBodyArr[0];
    }
    
void SnakeBody::headTailFlip() {
        SnakeXY snakeBodyCopy[150];
        for (short i = getSize(); i >= 0; i--) {
            snakeBodyCopy[getSize() - i] = snakeBodyArr[i];
        }
        for (short i = 0; i < getSize() + 1; i++) {
            snakeBodyArr[i] = snakeBodyCopy[i];
        }
    }

