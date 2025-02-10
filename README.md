# Snake Game

A simple Snake game implemented in C++ for the Windows terminal.

## Team Name: Taneli Armanto
## Team Members
- Marm Bhatt - Student ID 202401408
- Raj Sutariya - Student ID 202401221
- Kuldeep Solanki - Student ID 20240404
- Harsh Patel - Student ID 202401261

## Features
- Classic snake gameplay
- Randomly generated fruit
- Score tracking
- Basic collision detection

## How to Play
- Use `WASD` keys to move the snake:
  - `W` - Move Up
  - `A` - Move Left
  - `S` - Move Down
  - `D` - Move Right
- Press `X` to quit the game.
- The snake grows when it eats the fruit, and the score increases.
- The game ends if the snake collides with the wall or itself.

## Installation and Running
### Prerequisites
- Windows OS (game uses `conio.h` and `windows.h`)
- C++ compiler (MinGW/GCC recommended)

### Compilation
To compile the game, run:
```sh
g++ SnakeGame.cpp -o SnakeGame.exe
```

### Running
Execute the compiled binary:
```sh
SnakeGame.exe
```

## Known Issues
- The game flickers due to screen refresh.
- The fruit sometimes does not respawn correctly.
- Snake only appears after pressing `D`.
- The game may not properly redraw when using larger grid sizes (e.g., 50x50).

## Future Improvements
- Implement smooth rendering to reduce flickering.
- Fix fruit spawn issue.
- Add difficulty levels and better collision handling.
- Improve screen refresh method for larger grid sizes.

## Contributing
Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.

## License
This project is open-source and free to use under the MIT License.

