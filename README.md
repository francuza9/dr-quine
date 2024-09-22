# dr-quine

## Project Overview

The **dr-quine** project consists of three exercises designed to explore the concept of quines—programs that output their own source code. Each exercise is implemented in both C and Python, demonstrating the similarities and differences between the two languages in achieving this unique functionality.

## Exercises

1. **Colleen**
   - **Description**: A C/Python program that outputs its own source code, including comments and a function.
   - **Files**:
     - `Colleen.c`
     - `Colleen.py`
   
2. **Grace**
   - **Description**: A C/Python program that writes its source code into another file, demonstrating file handling and string manipulation.
   - **Files**:
     - `Grace.c`
     - `Grace.py`
   
3. **Sully**
   - **Description**: A C/Python program that recursively generates its own source code by creating new executable files, showcasing the concept of self-replication.
   - **Files**:
     - `Sully.c`
     - `Sully.py`

## Requirements

- **C**: Ensure you have a C compiler (e.g., `clang` or `gcc`) installed.
- **Python**: Ensure you have Python 3.x installed.

## Usage

### Building and Running the C Versions

1. Open a terminal and navigate to the project directory.
2. Use the provided Makefile to build the C executables:
   ```bash
   make
3. Run each Program:
   ```bash
   make colleen
   make grace
   make sully
### Running the Python Versions

1. To run the Python versions, simply use:
   ```bash
   make
### Cleaning Up:
To perform a full clean, removing all executables and object files, use:
  ```bash
  make fclean
