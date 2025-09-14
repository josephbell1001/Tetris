#include <raylib.h>
#include "grid.h"
#include "blocks.cpp"

int main()
{
    Color darkBlue = {44, 44, 127, 255};
    InitWindow(300, 600, "raylib Tetris");
    SetTargetFPS(60);          // Set our game to run at 60 frames-per-second, else it'll differ computer to computer

    Grid grid = Grid();
    grid.Print();

    TBlock block = TBlock();

    while (WindowShouldClose() == false)
    // checks if ESC key is pressed or if the window is closed, close game
    // (Hover over functions for more details)
    {
        BeginDrawing();
        ClearBackground(darkBlue);
        grid.Draw();
        block.Draw();
        
        EndDrawing();
        /* code */
    }
    

    CloseWindow();
    // return 0;
}