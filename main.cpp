#include "includes.h"

int main()
{
    WindowInit window;
    window.setWindowWidthAndHeight(720, 1000);
    InitWindow(window.getWindowWidth(), window.getWindowHeight(), "Shitty Tetris");    

    while (!WindowShouldClose())
    {
        BeginDrawing();



        ClearBackground(BLACK);
        EndDrawing();
    }
}