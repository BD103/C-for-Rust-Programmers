.PHONY: all c rust clean

all: c rust

c: 00-hello-world/c 01-booleans/c 02-null-terminated-strs/c 03-int-widths/c 04-error-handling/c 05-field-access-syntax/c 06-arrays/c 07-pointers/c
rust: 00-hello-world/rust 01-booleans/rust 02-null-terminated-strs/rust 03-int-widths/rust 04-error-handling/rust 05-field-access-syntax/rust 06-arrays/rust 07-pointers/rust

clean:
	rm -fv 0?-*/{c,rust}

# C programs
00-hello-world/c: 00-hello-world/main.c
	clang -Wall -o $@ $<
01-booleans/c: 01-booleans/main.c
	clang -Wall -o $@ $<
02-null-terminated-strs/c: 02-null-terminated-strs/main.c
	clang -Wall -o $@ $<
03-int-widths/c: 03-int-widths/main.c
	clang -Wall -o $@ $<
04-error-handling/c: 04-error-handling/main.c
	clang -Wall -o $@ $<
05-field-access-syntax/c: 05-field-access-syntax/main.c
	clang -Wall -o $@ $<
06-arrays/c: 06-arrays/main.c
	clang -Wall -o $@ $<
07-pointers/c: 07-pointers/main.c
	clang -Wall -o $@ $<

# Rust programs
00-hello-world/rust: 00-hello-world/main.rs
	rustc --edition=2024 -o $@ $<
01-booleans/rust: 01-booleans/main.rs
	rustc --edition=2024 -o $@ $<
02-null-terminated-strs/rust: 02-null-terminated-strs/main.rs
	rustc --edition=2024 -o $@ $<
03-int-widths/rust: 03-int-widths/main.rs
	rustc --edition=2024 -o $@ $<
04-error-handling/rust: 04-error-handling/main.rs
	rustc --edition=2024 -o $@ $<
05-field-access-syntax/rust: 05-field-access-syntax/main.rs
	rustc --edition=2024 -o $@ $<
06-arrays/rust: 06-arrays/main.rs
	rustc --edition=2024 -o $@ $<
07-pointers/rust: 07-pointers/main.rs
	rustc --edition=2024 -o $@ $<
