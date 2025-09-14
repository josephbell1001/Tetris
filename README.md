# Tetris Remake  

## 🎮 Introduction  

Tetris is a classic game and one of the earliest games I played while growing up. This project reflects both my passion for the game and my interest in applying **Object-Oriented Programming (OOP)** concepts in **C++**.  

While the core gameplay is inspired by a [tutorial](https://www.youtube.com/watch?v=wVYKG_ch4yM), I wrote every line of code myself and added extra functionality. Load up the project and click F5 on any page to start playing!  

---

## 📝 Project Highlights  

- **Encapsulation & OOP** — Thoughtfully scoped fields and methods to demonstrate encapsulation.  
- **Performance-aware Design** — Leveraged stack and heap memory effectively to reduce runtime.  
- **Real-time Input Management** — Translated keypresses to block movements with minimal latency.  
- **Core Algorithms** — Implemented board generation, collision detection, next-block preview, and save-block mechanics.  
- **Raylib Integration** — Used Raylib to create a UI, handle tick-rate, play music, and add sound effects.  

---

## 🎨 Features  

- Classic falling block gameplay with scoring.  
- **Hard Drop (Space)** and **Hold Block (S key)** mechanics.  
- Background music and sound effects for rotations and line clears.  
- Real-time user input for smooth movement and rotation.  
- UI includes next block preview and score display.  

---

## 🎮 Controls  

| Action            | Key             |  
|-------------------|-----------------|  
| Move Left         | ← (Left Arrow)  |  
| Move Right        | → (Right Arrow) |  
| Soft Drop         | ↓ (Down Arrow)  |  
| Hard Drop         | Spacebar        |  
| Rotate 90°        | ↑ (Up Arrow)    |  
| Hold / Save Block | S key           |  

---

## 🛠️ How to Load & Run  

**Download or Clone the Project:**  
```bash
git clone https://github.com/yourusername/tetris-remake.git
```
Or download as a `.zip` and extract.

**Install Raylib:**  
- **macOS:** `brew install raylib`  
- **Linux:** `sudo apt install libraylib-dev`  
- **Windows:** build from source or use precompiled binaries.  

**Open the Project:**  
Open the `main.code-workspace` file in VS Code.  

**Run the Game:**  
Press **F5** in any `.cpp` file or build with:  
```bash
g++ src/*.cpp -o tetris -std=c++17 -lraylib -framework OpenGL -framework Cocoa -framework IOKit -framework OpenAL
./tetris
```  

---

## 📂 Project Structure  

```
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
```

---

## 💡 Future Improvements  

- Add customizable skins and block colors.  
- Implement multiplayer or online leaderboards.  
- Add different speed levels and difficulty progression.  

---

## 🛡️ Credits  

- Tutorial inspiration by **Programming With Nick** (although many project features were adapted from the tutorial, all code was written by myself and extra functionality was included).  
- Sounds and Music created by [**Spyros**](https://assetstore.unity.com/packages/audio/music/black-swan-vs-white-swan-audio-pack-219984).  
