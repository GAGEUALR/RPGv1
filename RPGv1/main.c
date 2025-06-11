#include "raylib.h"

int main(void) {
    InitWindow(1280, 720, "Test...");

    Texture2D elder = LoadTexture("assets/sprites/goblin.png");

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);

        if (elder.id == 0) {
            DrawText("Failed to load texture!", 10, 10, 20, RED);
        }
        else {
            DrawTexture(elder, 600, 300, WHITE);
            DrawText("Drawing...", 10, 10, 20, GREEN);
        }

        DrawText(GetWorkingDirectory(), 10, 40, 20, BLUE);

        EndDrawing();
    }

    UnloadTexture(elder);
    CloseWindow();
    return 0;
}
