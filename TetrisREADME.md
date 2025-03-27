
# 🎮 Console Tetris Game (C++)

Experience the classic **Tetris** right in your terminal! This is a color-coded, interactive Tetris game built using C++ and Windows Console API.


---

## 🧹 Features

- 🎨 Colorful tetrominoes using ANSI escape codes
- ⌨️ Keyboard controls with arrow keys & space bar
- 🧠 Auto piece rotation and collision detection
- 🧱 Line clearing with dynamic leveling
- 🏡 Side panel displaying score and level
- 💀 Game Over detection
- 💥 Smooth frame rate with double buffering

---

## 🕹️ Controls

| Key             | Action               |
| --------------- | -------------------- |
| ⬅️  Left Arrow  | Move piece left      |
| ➡️  Right Arrow | Move piece right     |
| ⬇️  Down Arrow  | Move piece down      |
| 🔜  Up Arrow    | Rotate piece         |
| ␣ Spacebar      | Drop piece instantly |

---

## ⚒️ How It Works

The game uses:

- `vector<vector<int>>` to represent the game grid and tetrominoes
- ANSI color codes for visual feedback
- `conio.h` for keyboard input (`_kbhit`, `_getch`)
- `windows.h` for cursor manipulation and smooth rendering
- Object-oriented structure with a `Tetris` class handling all logic

---

## 🧱 Tetromino Shapes

This game includes all 7 classic Tetris blocks:

- I, O, T, S, Z, J, L shapes

Each is color-coded and rotated dynamically.

---

## 🧪 Requirements

- OS: Windows (due to `windows.h` and `conio.h`)
- Compiler: Any modern C++ compiler (e.g., MinGW, MSVC)
- Terminal must support ANSI escape codes (e.g., Windows Terminal or modern CMD)

---

## 🚀 Run It

### Compile using g++:

```bash
g++ -o tetris tetris.cpp
```

### Run:

```bash
tetris.exe
```

---

## 💡 Future Improvements

- Add sound effects or background music 🎵
- Implement a high score leaderboard 📊
- Pause/Resume functionality ⏸️
- Support for Linux/macOS compatibility (e.g., using ncurses)

---

## 🙌 Credits

Made with ❤️ in C++\
Created by 

Kuldeep Solanki-202404040

Marm Bhatt-202401408

Raj Sutariya-202401221

Harsh Patel-202401261



---




