#Tetris Remake
##🎮 Introduction

Tetris is a classic game that, and one of the earliest games that I played while growing up. This project reflects both my passion for the game and my interest in applying Object-Oriented Programming (OOP) concepts in C++.

##📝 Project Highlights

- Encapsulation & OOP — Thoughtfully scoped fields and methods to demonstrate encapsulation.

- Performance-aware Design — Leveraged stack and heap memory effectively to reduce runtime.

- Real-time Input Management — Translated keypresses to block movements with minimal latency.

- Core Algorithms — Implemented board generation, collision detection, next-block preview, and save-block mechanics.

- Raylib Integration — Used Raylib to create a UI, handle tick-rate, play music, and add sound effects.

##🎨 Features

Classic falling block gameplay with scoring.

Hard Drop (space) and Hold Block (S key) mechanics.

Background music and sound effects for rotations and line clears.

Real-time user input for smooth movement and rotation.

UI includes next block preview and score display.

##🎮 Controls
Action	Key
Move Left	← (Left Arrow)
Move Right	→ (Right Arrow)
Soft Drop	↓ (Down Arrow)
Hard Drop	Spacebar
Rotate 90°	↑ (Up Arrow)
Hold / Save Block	S key
🛠️ How to Load & Run

Download or Clone the Project:

git clone https://github.com/yourusername/tetris-remake.git


Or download as a .zip and extract.

Install Raylib:

macOS: brew install raylib

Linux: sudo apt install libraylib-dev

Windows: build from source or use precompiled binaries.

Open the Project:

Open the main.code-workspace file in VS Code.

Run the Game:

Press F5 in any .cpp file or build with:

g++ src/*.cpp -o tetris -std=c++17 -lraylib -framework OpenGL -framework Cocoa -framework IOKit -framework OpenAL
./tetris

📂 Project Structure
.
├── assets/
│   ├── Font/monogram.ttf
│   └── Sounds/
│       ├── music.mp3
│       ├── rotate.mp3
│       └── clear.mp3
├── src/
│   ├── main.cpp
│   ├── game.cpp
│   ├── game.h
│   ├── grid.cpp
│   ├── grid.h
│   ├── block.cpp
│   ├── block.h
│   ├── blocks.cpp
│   └── blocks.h
└── README.md

💡 Future Improvements

Add customizable skins and block colors.

Implement multiplayer or online leaderboards.

Add different speed levels and difficulty progression.

🛡️ Credits

- Tutorial inspiration by Programming With Nick (although many project features were adapted from tutorial, all code was written by myself and excess functinality was included)

- Sounds and Music created by Spyros
