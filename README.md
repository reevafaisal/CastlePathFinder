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
