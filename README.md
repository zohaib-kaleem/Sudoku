# Sudoku

A simple **Sudoku game in the console**, written in C.

This project allows you to play and solve Sudoku puzzles directly in your terminal/console. It’s a lightweight implementation for learning and fun. It’s great for practicing C basics, console I/O, and logic implementation.

---

## 🧩 Features

- 🔢 Play a classic 9×9 Sudoku game  
- 🎯 Console‑based user interface  
- 🧠 Puzzle logic implemented in plain C  
- 💾 Includes sample puzzle inputs (e.g., `sudoko.txt`)

---

## 🚀 Getting Started

These instructions will help you run the project on your local machine.

### 🛠 Prerequisites

Make sure you have a C compiler:

- **GCC** (Linux / macOS / WSL)
- **MinGW** or similar (Windows)

### 📥 Clone the Repository

```bash
git clone https://github.com/zohaib-kaleem/Sudoku.git
cd Sudoku
````

### 💻 Compile the Code

If your main source file is named `code.c`, compile it:

```bash
gcc code.c -o sudoku
```

If there are multiple `.c` files, compile them all:

```bash
gcc *.c -o sudoku
```

### ▶️ Run the Game

After compiling, run the executable:

```bash
./sudoku
```

On Windows:

```cmd
sudoku.exe
```

---

## 📄 Files in This Repository

| File         | Description                                 |
| ------------ | ------------------------------------------- |
| `code.c`     | Main source code (Sudoku logic + gameplay). |
| `sudoko.txt` | Example puzzle input or reference puzzle.   |
| `code.exe`   | Pre‑compiled executable (Windows).          |
| `LICENSE`    | Apache‑2.0 open source license.             |
| `README.md`  | Project documentation (this file).          |

---

## 🧠 How to Play

1. Launch the program after compiling.
2. Follow on‑screen instructions to enter or solve a Sudoku puzzle.
3. The program will check for valid input and help solve or validate your board.

> *Note*: Exact gameplay controls depend on how the console logic is implemented in `code.c`.

---

## 📜 License

This project is distributed under the **Apache‑2.0 License**. See the `LICENSE` file for details.

---

## 🙌 Contributing

Contributions are welcome! You can:

* Improve the game logic
* Add difficulty levels
* Implement auto‑solve / hint features
* Improve input validation

Feel free to fork the repo and submit pull requests.

---

## 📫 Contact

For questions or collaboration, open an issue or reach out via GitHub.

Happy coding and puzzle solving! 🧩

```
