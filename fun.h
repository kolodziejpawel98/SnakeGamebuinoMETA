// fun.h

#ifndef _FUN_h
#define _FUN_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif
#undef max
#undef min
#include <vector>
const short SPEED = 2;

struct SnakeXY {
    short x;
    short y;
    SnakeXY() : x(-1), y(-1) {}
    SnakeXY(short x, short y);
    void setXY(short x, short y);
};


class SnakeBody {
public:
    SnakeBody(){}
    short getSize();
    void addBodySegment(short x, short y);
    void moveLeft();
    void moveUp();
    void moveDown();
    void moveRight();
    void headToFirst();
    void headTailFlip();

    //SnakeXY snakeBodyArr[150];
    std::vector<SnakeXY> snakeBodyArr;
    SnakeXY* head;
};

#endif

