#include <raylib.h>
// #include "grid.h"
// #include "blocks.cpp"
#include "game.h"

double lastUpdateTime = 0;  //keeps track of last time the game state was updated

bool EventTriggered(double interval) {
    double currentTime = GetTime();
    if (currentTime - lastUpdateTime >= interval) {
        lastUpdateTime = currentTime;
        return true;
    }
    return false;
}

int main()
{
    Color darkBlue = {44, 44, 127, 255};
    InitWindow(300, 600, "raylib Tetris");
    SetTargetFPS(60);          // Set our game to run at 60 frames-per-second, else it'll differ computer to computer


    Game game = Game();


    while (WindowShouldClose() == false) {
        game.HandleInput();
        if (EventTriggered(0.2)) { //every 2 seconds, blocks move down (falling)
            game.MoveBlockDown();
        }

        BeginDrawing();
        ClearBackground(darkBlue);
        game.Draw();
        EndDrawing();
    }
    CloseWindow();
}