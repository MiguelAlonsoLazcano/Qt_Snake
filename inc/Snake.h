//
// Created by alonso on 8/31/18.
//
#pragma once
#ifndef QT_SNAKE_SNAKE_H
#define QT_SNAKE_SNAKE_H

#include <QWidget>
#include <QKeyEvent>

/*
 * @brief Snake class is used to create an instance of QWidget, it is controlled with the
 * cursor keys. It shall be only one instance of this class during all the game
 * TODO: Analyze if singleton design pattern is applicable for this class
 * */
class Snake: public QWidget {
public:
    Snake(QWidget *parent = 0);

protected:
    void paintEvent(QPaintEvent *);
    void timerEvent(QTimerEvent *);
    void keyPressEvent(QKeyEvent *);

private:
    QImage dot;
    QImage head;
    QImage apple;


    /*
     * @brief Constants for determine the size of and apple and a dot of the snake
     * */
    static const int DOT_SIZE = 10;

    /*
     * @brief Constant for define the maximun number of possible dots on the board (900 = (300*300)/(10*10)
     * */
    static const int ALL_DOTS = 900;

    /*
     * @brief Constant used to calculate random position for an apple, delay constant determines the speed
     * of the game
     * */
    static const int RAND_POS = 29;
    static const int DELAY = 140;

    int timerId;
    int dots;
    int apple_x;
    int apple_y;

    /*
     * @brief Arrays that hold the x and the y coordinates of all joints of a Snake
     * */
    int x[ALL_DOTS];
    int y[ALL_DOTS];

    bool leftDirection;
    bool rightDirection;
    bool upDirection;
    bool downDirection;
    bool inGame;

    void loadImages();
    void initGame();
    void locateApple();
    void checkApple();
    void checkCollision();
    void move();
    void doDrawing();
    void gameOver(QPainter &);

};


#endif //QT_SNAKE_SNAKE_H
