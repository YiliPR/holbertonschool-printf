# Bryan,Eli and William Printf Project

## Project Description

This project implements a custom version of the `printf` function, called `_printf`, which supports a variety of format specifiers, such as `%c`, `%s`, `%d`, `%i`, and `%%`. The goal of this project is to practice working with variadic functions and gain a deeper understanding of how standard library functions are implemented.

## Table of Contents

1. [How to Install and Run the Project](#how-to-install-and-run-the-project)
2. [How to Use the Project](#how-to-use-the-project)
3. [Supported Format Specifiers](#supported-format-specifiers)
4. [Credits](#credits)
5. [License](#license)

## How to Install and Run the Project

To install and run this project, follow these steps:

### Prerequisites
- A C compiler (e.g., GCC)

### Installation Steps

1. Clone the repository to your local machine:
    ```bash
    git clone https://github.com/YiliPR/holbertonschool-printf.git
    cd holbertonschool-printf
    ```

2. Compile the project using `gcc`:
    ```bash
    GCC _printf.c prototype_functions.c proto_functions.c  _putchar.c -o printf
    ```

3. This will generate an executable file (typically named `printf`).

4. Run the executable:
    ```bash
    ./printf
    ```

## How to Use the Project

To use the custom `_printf` function, you need to call it in your C program by passing the format string along with any corresponding arguments.

### Example Usage:

```c
#include "main.h"

int main() {
    int count;

    count = _printf("Hello, %s! You have %d new messages.\n", "Alice", 5);
    _printf("Characters printed: %d\n", count);

    return 0;
}
```
## Supported Format Specifiers

The following format specifiers are supported in this custom `_printf` function:

- **`%c`**: Prints a single character.
- **`%s`**: Prints a string.
- **`%d`**: Prints an integer in decimal format.
- **`%i`**: Prints an integer (same as `%d`).
- **`%%`**: Prints a percent sign (`%`).

---

## Credits

- This project was developed by [Bryan,Eli and William].  
- The `_printf` function was created as part of a learning exercise to improve our understanding of variadic functions and low-level C programming.

---

## License

This project is licensed under the GNU General Public License v3.0 (GPL-3.0). You can view the full license details in the [LICENSE](LICENSE) file in this repository.

