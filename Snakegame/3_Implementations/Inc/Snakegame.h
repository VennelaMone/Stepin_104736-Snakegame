/**
* @file Snakegame.h
* The application with 4 operational directions
*
*/
#ifndef SNAKEGAME_H_INCLUDED
#define SNAKEGAME_H_INCLUDED


#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>
#include<time.h>
#include<ctype.h>
#include <time.h>
#include <windows.h>
#include <process.h>

#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77

/**
*  To move the snake for search of food
*/
void Move();

/**
*  To load for few seconds
*/
void load();

/**
*  To exit the game when he fails
*/
void ExitGame();

/**
*  To give food particles for the snake
*/
void Food();

/**
*  To make a left turn so that snake can take food
*/
void Left();

/**
*  To make a right turn so that snake can take food
*/
void Right();

/**
*  To make a up turn so that snake can take food
*/
void Up();

/**
*  To make a down turn so that snake can take food
*/
void Down();

/**
*  To print person name who is playing the game
*/
void Print();

/**
*  To record the previous persons name and score
*/
void record();

#endif // SNAKEGAME_H_INCLUDED
