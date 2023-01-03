# Stuff2C
Random stuff I needed to be in C for curiosity (and speed)

In no special/specific order:

- [randrange4.c](https://github.com/secemp9/Stuff2C/blob/main/randrange4.c)

I named it that way because I usually make different versions locally. I feel like this is the best one so far, so only uploaded that one.
It works using gmplib because I wanted to have big int support like Python does (also called bignum). It doesn't support commandline argument/flags yet, but it should be trivial to add. Can be used as template too.

Note that it doesn't yet support floats, but just integers. (adding support for it can be done too, but I only needed int support anyway)

- [random_file.c](https://github.com/secemp9/Stuff2C/blob/main/random_file.c)

Very simple way to generate files of X size (in bytes). This one support flags/commandline arguments. I tried it on both Windows10 and Linux and it seems to work fine (although on Linux, using urandom/random can be used too). Note that this isn't made to be specifically cryptographic secured or anything. Just made for no specific reasons.

I'll add more here as I go over my journey into C land.
