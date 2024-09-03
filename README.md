# EECS 281 Project 1 - Rescue the Countess

## Project Identifier
`B99292359FFD910ED13A7E6C7F9705B8742F0D79`

## Overview
This project involves implementing a pathfinding game in C++, where Marco must navigate a maze-like castle to rescue Countess Cherry. The castle contains up to 10 rooms, with obstacles such as walls, minions, and warp pipes that can teleport Marco to other rooms.

### Key Features
- **Pathfinding Algorithms**: Implements both queue-based and stack-based pathfinding algorithms.
- **Input Modes**: Supports two input modes - Map Mode (M) and Coordinate List Mode (L).
- **Output Modes**: Can display results in either Map Mode or Coordinate List Mode, depending on user preference.
- **Command-Line Interface**: Supports several command-line options to control input modes, output modes, and routing algorithms.

## Files Included
- `Makefile`: Automates the build process, generating the `superMarco` executable.
- `*.cpp` and `*.h` files: Source code implementing the pathfinding algorithms, input/output processing, and error handling.
- `p1-rescue-the-countess-files.tgz`: Contains sample input files, a project identifier, error message listings, and additional resources.
- `test-n-flags.txt`: Custom test files to validate the functionality of the program.
- `Error_messages.txt`: Listing of valid error messages.

## Compilation and Execution

### Compiling the Program
To compile the program, run:
```bash
make
```bash

### Running the Program
To run the program, use one of the following command-line examples:

```bash
./superMarco --stack < infile > outfile
./superMarco --queue --output M < infile > outfile
./superMarco --stack --output L < infile > outfile

### Cleaning the Project
To remove all object files and the executable, run:

```bash
make clean

### Input and Output

#### Input Modes
- **Map Mode (M)**: The castle is represented as a series of rooms with walls, minions, warp pipes, and starting/ending positions.
- **Coordinate List Mode (L)**: The castle is described by listing coordinates of significant features within each room.

#### Output Modes
- **Map Mode (M)**: The program outputs a map of the castle with the path Marco takes from start to finish.
- **Coordinate List Mode (L)**: The program outputs a list of coordinates representing Marco's path from start to finish.

### Error Handling
The program checks for:
- Invalid command-line arguments (e.g., specifying both `--stack` and `--queue`).
- Invalid map characters or coordinates in the input file.
- Rooms, rows, or columns that exceed the specified dimensions.

If any of these errors are encountered, the program outputs an informative error message to `stderr` and exits with a status code of `1`.

### Testing
Test files are named `test-n-flags.txt` and should be placed in the same directory as the source code. Each test file corresponds to a specific configuration of the routing and output modes.

To test the program with a specific test file, use the following command:

```bash
./superMarco < test-n-flags.txt > test-n-output.txt

