# Simple Calculator (C++)

## Project Overview

This project is a menu-driven calculator developed in C++. It performs the four basic arithmetic operations: addition, subtraction, multiplication, and division.

The project is also used to demonstrate Git and GitHub version-control concepts, including repository initialization, commits, branching, merging, and resolving an intentional merge conflict.

## Features

- Addition of two numbers
- Subtraction of two numbers
- Multiplication of two numbers
- Division of two numbers
- Division-by-zero error handling
- Input validation for the menu choice and numeric values
- Menu-driven interface with an exit option

## Project Structure

```text
GitHub_Calculator/
|
|-- calculator.cpp
|-- README.md
```

## Requirements

To compile and run the program, you need:

- A C++ compiler such as GCC (g++)
- A terminal or command prompt

You can edit the source code using Visual Studio Code or Dev-C++.

## Compile and Run

Open a terminal in the project folder.

### Compile using GCC

```bash
g++ calculator.cpp -o calculator
```

### Run on Windows

```powershell
.\calculator.exe
```

If you use Dev-C++, you can also open `calculator.cpp`, compile it, and run it from the IDE.

## How to Use

1. Start the program.
2. Select an operation from the displayed menu:
   - `1` for Addition
   - `2` for Subtraction
   - `3` for Multiplication
   - `4` for Division
   - `5` to Exit
3. For an arithmetic operation, enter the two numbers when prompted.
4. Read the result or any error message displayed.
5. Select another operation or choose `5` to exit.

## Error Handling

- Division by zero is rejected with an error message. The program does not display a misleading numerical result.
- Invalid menu input and non-numeric values are handled with an error message, after which the menu is displayed again.

## Git and GitHub Practical

The repository is intended to demonstrate the following version-control activities:

- Initializing a local Git repository
- Connecting the local repository to a GitHub remote repository
- Staging and committing project files
- Pushing and pulling changes
- Creating and working with feature branches
- Merging branches
- Creating and resolving an intentional merge conflict

The branch names and exact merge-conflict procedure will be documented as the practical is carried out.

## Author

Add your name and other required submission details here.
