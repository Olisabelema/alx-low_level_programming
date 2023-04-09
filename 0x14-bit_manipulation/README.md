0x14. C - Bit manipulation

Bit manipulation is a technique used in computer programming to manipulate individual bits, or binary digits, in a larger data structure such as integers, characters, or arrays. Bit manipulation is a low-level operation that works with the binary representation of numbers, allowing programmers to perform operations such as shifting bits, masking bits, and setting or clearing individual bits.

Some common bit manipulation operations include:

Bitwise AND (&) - performs a logical AND operation on each corresponding bit of two operands.

Bitwise OR (|) - performs a logical OR operation on each corresponding bit of two operands.

Bitwise XOR (^) - performs a logical XOR (exclusive OR) operation on each corresponding bit of two operands.

Bitwise NOT (~) - performs a logical NOT operation on each bit of the operand, effectively flipping all bits from 0 to 1 and vice versa.

Bitwise left shift (<<) - shifts the bits of the left operand to the left by a specified number of positions, effectively multiplying the operand by 2 to the power of the shift distance.

Bitwise right shift (>>) - shifts the bits of the left operand to the right by a specified number of positions, effectively dividing the operand by 2 to the power of the shift distance.

Bit manipulation can be used to optimize code and perform certain tasks more efficiently, such as implementing data compression algorithms, cryptographic functions, and optimizing memory usage in embedded systems. However, it can also make code more difficult to understand and maintain, and should be used judiciously and with caution.

This project has 8 tasks all togethrt, 6 of these tasks are mandatory (task 0 to task 5) while 2 of these tasks are advanced (task 6 to task 7). Below are the requirements for the task:

Task 0: Write a function that converts a binary number to an unsigned int.

Prototype: unsigned int binary_to_uint(const char *b);
where b is pointing to a string of 0 and 1 chars
Return: the converted number, or 0 if
there is one or more chars in the string b that is not 0 or 1
b is NULL

Task 1: Write a function that prints the binary representation of a number.

Prototype: void print_binary(unsigned long int n);
Format: see example
You are not allowed to use arrays
You are not allowed to use malloc
You are not allowed to use the % or / operators

Task 2: Write a function that returns the value of a bit at a given index.

Prototype: int get_bit(unsigned long int n, unsigned int index);
where index is the index, starting from 0 of the bit you want to get
Returns: the value of the bit at index index or -1 if an error occured

Task 3: Write a function that sets the value of a bit to 1 at a given index.

Prototype: int set_bit(unsigned long int *n, unsigned int index);
where index is the index, starting from 0 of the bit you want to set
Returns: 1 if it worked, or -1 if an error occurred

Task 4: Write a function that sets the value of a bit to 0 at a given index.

Prototype: int clear_bit(unsigned long int *n, unsigned int index);
where index is the index, starting from 0 of the bit you want to set
Returns: 1 if it worked, or -1 if an error occurred

Task 5: Write a function that returns the number of bits you would need to flip to get from one number to another.

Prototype: unsigned int flip_bits(unsigned long int n, unsigned long int m);
You are not allowed to use the % or / operators

Task 6: 6. Endianness
#advanced
Write a function that checks the endianness.

Prototype: int get_endianness(void);
Returns: 0 if big endian, 1 if little endian

Task 7: 7. Crackme3
#advanced
Find the password for this program.

Save the password in the file 101-password
Your file should contain the exact password, no new line, no extra space
