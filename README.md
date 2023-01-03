# Stuff2C
Random stuff I needed to be in C for curiosity (and speed)

In no special/specific order:

- [randrange4.c](https://github.com/secemp9/Stuff2C/blob/main/randrange4.c)

I named it that way because I usually make different versions locally. I feel like this is the best one so far, so only uploaded that one.
It works using gmplib because I wanted to have big int support like Python does (also called bignum). It doesn't support commandline argument/flags yet, but it should be trivial to add. Can be used as template too.

Note that it doesn't yet support floats, but just integers. (adding support for it can be done too, but I only needed int support anyway).

The name give it away, but this is inspired from `randrange` in Python's `random` module. By the way, this use a deterministic seed, but you can make it use a random seed (using time, etc).

To compile it: `gcc randrange4.c -lgmp` or `gcc -o randrange4 randrange4.c -lgmp`

Possible optimizations: `-O3 -ftree-parallelize-loops=4 -march=native -ffast-math -funroll-loops`

- [random_file.c](https://github.com/secemp9/Stuff2C/blob/main/random_file.c)

Very simple way to generate files of X size (in bytes). This one support flags/commandline arguments. I tried it on both Windows10 and Linux and it seems to work fine (although on Linux, using urandom/random can be used too). Note that this isn't made to be specifically cryptographic secured or anything. Just made for no specific reasons.

To compile it: `gcc random_file.c` or `gcc -o random_file random_file.c`

Possible optimizations: `-O3 -ftree-parallelize-loops=4 -march=native -ffast-math -funroll-loops`

Note that I didn't yet add support for gmplib so it only support up to long long int (I think), although here it uses long, so there a limit on how much bytes you can generate using this.


I'll add more here as I go over my journey into C land.
