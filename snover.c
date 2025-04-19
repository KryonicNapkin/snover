#include <stdio.h>

#include "raylib.h"
#include "include/colors.h"

#define WIN_WIDTH  800
#define WIN_HEIGHT 600

int main(int argc, char* argv[]) {
    InitWindow(WIN_WIDTH, WIN_HEIGHT, "Snover");
    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();
        {
            ClearBackground(SNOVER_BG);
            DrawRectangle(100, 200, 100, 100, SNOVER_RED);
        }
        EndDrawing();
    }
    CloseWindow();
    printf("Hello, world!\n");
    return 0;
}
