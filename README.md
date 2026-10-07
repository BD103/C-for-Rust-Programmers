# C for Rust Programmers

This repository contains examples complimenting my blog post, [C for Rust Programmers](https://bd103.dev/blog/2026-10-07-c-for-rust-programmers/). Each folder corresponds to a section in the article, and contains a C program and an equivalent Rust program.

## Requirements

I used the following software while developing these examples:

- Apple clang 21.0.0
- rustc 1.99.0
- GNU Make 3.81

All the examples were tested on MacOS 27. While they are likely to work on older versions or other operating systems, I haven't tested them personally.

## Compiling and Running

You can compile all the examples with `make`:

```bash
$ make all
```

The output executables are placed in the same directory as their source code. For example, here is how to run `00-hello-world/main.c`:

```bash
$ ./00-hello-world/c
Hello, world!
```
