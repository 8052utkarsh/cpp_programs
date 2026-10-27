#include "raylib.h"

int main() {
    // 1. विंडो इनिशियलाइज़ करें
    const int screenWidth = 800;
    const int screenHeight = 600;
    InitWindow(screenWidth, screenHeight, "My First C++ Game");
    SetTargetFPS(60);

    // प्लेयर का शुरुआती डेटा
    Vector2 playerPos = { (float)screenWidth / 2, (float)screenHeight / 2 };
    float speed = 5.0f;
    float radius = 25.0f;

    // 2. मेन गेम लूप (जब तक विंडो क्लोज़ न हो)
    while (!WindowShouldClose()) {
        
        // --- INPUT & UPDATE ---
        if (IsKeyDown(KEY_RIGHT)) playerPos.x += speed;
        if (IsKeyDown(KEY_LEFT))  playerPos.x -= speed;
        if (IsKeyDown(KEY_DOWN))  playerPos.y += speed;
        if (IsKeyDown(KEY_UP))    playerPos.y -= speed;

        // स्क्रीन की सीमा से बाहर जाने से रोकना
        if (playerPos.x < radius) playerPos.x = radius;
        if (playerPos.x > screenWidth - radius) playerPos.x = screenWidth - radius;
        if (playerPos.y < radius) playerPos.y = radius;
        if (playerPos.y > screenHeight - radius) playerPos.y = screenHeight - radius;

        // --- RENDER (DRAW) ---
        BeginDrawing();
            ClearBackground(DARKGRAY);

            DrawText("Arrow Keys dabakar move karein!", 20, 20, 20, RAYWHITE);
            DrawCircleV(playerPos, radius, RED); // प्लेयर ड्रा करें
        EndDrawing();
    }

    // 3. मेमोरी क्लीनअप
    CloseWindow();
    return 0;
}