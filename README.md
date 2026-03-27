# CPP Module 07

42 school C++ module focused on C++ templates. Covers function templates,
template specialization, and class templates with dynamic memory management.

## Technologies

- C++ (C++98 standard)
- Makefile

## Exercises

| Exercise | Topic | Description |
|----------|-------|-------------|
| ex00 | Function Templates | `swap`, `min`, and `max` as generic template functions |
| ex01 | Iter | Generic `iter` function that applies a callback to each element of an array |
| ex02 | Array | Template class `Array` with bounds checking, deep copy, and assignment |

## Build Instructions

Each exercise is compiled independently from its own directory:

```bash
cd ex00  # or ex01, ex02
make          # Build
make clean    # Remove object files
make fclean   # Remove object files and binary
make re       # Full rebuild
```

## Usage

```bash
# ex00 - swap, min, max with different types
cd ex00 && make && ./whatever

# ex01 - iter on int, char, and const arrays
cd ex01 && make && ./iter

# ex02 - Array template class with bounds checking
cd ex02 && make && ./array
```

## Key Technical Concepts

- **Function templates**: Generic functions that work with any type supporting
  the required operators (`<`, copy, assignment).
- **Iter pattern**: Applying a function pointer or functor to each element of
  a C-style array, with const and non-const overloads.
- **Class templates**: Full implementation of Orthodox Canonical Form (default
  constructor, copy constructor, assignment operator, destructor) in a
  templated class.
- **Bounds checking**: The `Array` class throws `std::out_of_range` on invalid
  index access.
- **Deep copy semantics**: Both copy construction and assignment allocate
  independent memory, ensuring no shared state between instances.
