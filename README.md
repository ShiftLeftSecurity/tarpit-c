![tarpit-logo](tarpit-logo.png)

# Tarpit-C
### A set of C/C++ code snippets seeded with vulnerable conditions

**Tarpit-C** is a collection of code snippets that mimic common vulnerable conditions found in C/C++ code such as buffer overflow, integer overflow, use-after-free, double free, underflows etc. The code snippets are generally not meant to compile. The can be used to learn how to perform investigations with [Joern](https://joern.io) or [Ocular](https://ocular.shiftleft.io).

### Overflows & Underflow

| File | Description | CWE Category |
| --- | --- | --- |
| `buffer_underwrite` | Buffer Underwrite ('Buffer Underflow')  | [124](https://cwe.mitre.org/data/definitions/124.html) |
| `double_free.c` | Double Free  | [415](https://cwe.mitre.org/data/definitions/415.html) |
| `use_after_free.c` | Use After Free  | [416](https://cwe.mitre.org/data/definitions/416.html) |
| `heap_buffer_overflow.c` | Buffer Overflow (Heap)  | [122](https://cwe.mitre.org/data/definitions/122.html) |
| `stack_buffer_overflow.c` | Buffer Overflow (Stack)  | [121](https://cwe.mitre.org/data/definitions/121.html) |
| `signed_integer_overflow.c` | Integer Overflow  | [190](https://cwe.mitre.org/data/definitions/190.html) |

### String Format & Manipulation

| File | Description | CWE Category |
| --- | --- | --- |
| `uncontrolled_format_string.c` | Use of Externally-Controlled Format String | [134](https://cwe.mitre.org/data/definitions/134.html) |


### Miscellaneous
| File | Description | CWE Category |
| --- | --- | --- |
| `numeric_truncate.c` | Numberic Truncation - a primitive is cast to a primitive of a smaller size and data is lost in the conversion | [197](https://cwe.mitre.org/data/definitions/197.html) |

- - -

## :warning: Disclaimer

We do not take responsibility for the way in which any one uses the code snippets. We have made the purposes of the application clear and it should not be used maliciously.