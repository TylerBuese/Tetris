#include "includes.h"

int main()
{
    WindowInit window;
    window.setWindowWidthAndHeight(720, 1000);
    InitWindow(window.getWindowWidth(), window.getWindowHeight(), "Shitty Tetris");   
    Shape shape;

    //int startValue = GetRandomValue(0, 4);
    int startValue = 0;
    

    while (!WindowShouldClose())
    {
        BeginDrawing();
        
        if (IsKeyPressed(KEY_UP))
        {
            startValue++;
        }

        if (IsKeyPressed(KEY_DOWN))
        {
            startValue--;;
        }

        if (IsKeyPressed(KEY_ONE))
        {
            speed++;
        }


        switch (startValue)
        {
            case 0: {shape.drawShape(Ione, Itwo, Ithree, Ifour); break;}
            case 1: {shape.drawShape(Lone, Ltwo, Lthree, Lfour); break;}
            case 2: {shape.drawShape(Sone, Stwo, Sthree, Sfour); break;}
            case 3: {shape.drawShape(Tone, Ttwo, Tthree, Tfour); break;}
            case 4: {shape.drawShape(SQone, SQtwo, SQthree, SQfour); break;}
        }



        DrawText(std::to_string(startValue).c_str(), 100, 100, 20, WHITE);

        



        ClearBackground(BLACK);
        EndDrawing();
    }
}