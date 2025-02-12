# Snake Game

A simple Snake Game implemented in C++ for the Windows terminal.

## How to Run

1. Compile the code using a C++ compiler (like MinGW for Windows):
   ```bash
   g++ -o SnakeGame SnakeGame.cpp -std=c++11
   ```
2. Run the executable:
   ```bash
   SnakeGame.exe
   ```

## Controls

- `W` - Move Up
- `S` - Move Down
- `A` - Move Left
- `D` - Move Right
- `X` - Exit Game

## How the Game Works

- The player controls the snake to eat the fruit ('F').
- Every time the snake eats a fruit, it grows in length and the score increases.
- The game ends if the snake hits the wall or itself.

## Data Structures Used

- **Arrays**: `tailX[100]`, `tailY[100]` store the snake’s body.
- **Enum**: `eDirection` to store movement direction.
- **Variables**:
  - `x, y` for snake’s head position.
  - `fruitX, fruitY` for fruit position.
  - `score` for tracking points.
  - `nTail` for snake length.

## Notes

This is a basic terminal-based Snake Game with simple logic and structure.

