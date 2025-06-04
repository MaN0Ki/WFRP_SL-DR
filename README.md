# WFRP_SL-DR

A simple command-line dice roller for *Warhammer Fantasy Roleplay 4e*.
It rolls two dice, compares the result against an attribute value and
prints the success level.

## Build

Compile the program using `make`:

```bash
make
```

## Usage

Run the `roll` binary with an integer attribute as parameter:

```bash
./roll 45
```

The program shows the rolled dice, reports success or failure and
prints the calculated difference. You can run a quick test with:

```bash
make test
```

## Notes

This repository also serves as a playground for learning Git.
