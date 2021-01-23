# Demonstration for C++ 20 Concept

Show how to use Concept for dependency injection.

## Requirements

- `clang` version above `10.0`
- `make` tool

## Usage

- Run `make` to check that the code can be compiled in the environment.
- Uncomment the line `a.put()` of concept in `eater.hh`.
- Run `make clean` and `make` again.
- Enjoy the human readable and understandable error message.
  - > no member named 'put' in 'StdoutLogger'
