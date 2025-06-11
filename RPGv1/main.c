#include "raylib.h"

int main(void) {
    InitWindow(1280, 720, "Raylib Verification Test");

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("Raylib is working!", 250, 280, 20, DARKGRAY);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
