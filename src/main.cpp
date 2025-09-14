#include <raylib.h>
#include "game.h"
#include "colors.h"
#include <iostream>
// #include "grid.h"
// #include "blocks.cpp"

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
    InitWindow(500, 620, "raylib Tetris");
    SetTargetFPS(60); //Set our game to run at 60 frames-per-second, else it'll differ computer to computer

    Font font = LoadFontEx("Font/monogram.ttf", 64, 0, 0);

    Game game = Game();


    while (WindowShouldClose() == false) {
        UpdateMusicStream(game.music);
        game.HandleInput();
        if (EventTriggered(0.2)) { //every 2 seconds, blocks move down (falling) -> decrease to speed up game (difficulty)
            game.MoveBlockDown();
        }

        BeginDrawing();
        ClearBackground(darkBlue);

        //"Score" text and score box
        DrawTextEx(font, "Score", {355, 15}, 38, 2, WHITE);
        DrawRectangleRounded({320, 55, 170, 60}, 0.3, 6, lightBlue);

        //"Next" text and next block box
        DrawTextEx(font, "Next", {360, 175}, 38, 2, WHITE);
        DrawRectangleRounded({320, 215, 170, 180}, 0.3, 6, lightBlue);

        //Score (actual numbered score)
        char scoreText[10];
        sprintf(scoreText, "%d", game.score);
        Vector2 textSize = MeasureTextEx(font, scoreText, 38, 2);
        DrawTextEx(font, scoreText, {320 + (160 - textSize.x)/2, 65}, 38, 2, WHITE);

        if(game.gameOver) {
            DrawTextEx(font, "GAME OVER!", {315, 450}, 30, 2, WHITE);
        }

        game.Draw();
        EndDrawing();
    }
    CloseWindow();
}