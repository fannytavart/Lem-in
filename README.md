# Lem-in

{EPITECH.} first year project.

This is a C anthill simulator. Lem-in uses [Dijkstra's algorithm](https://en.wikipedia.org/wiki/Dijkstra%27s_algorithm) to find the best path from the anthill's entrance to the anthill's exit.

## Requirements

 - [Make](https://www.gnu.org/software/make/)
 - [GCC](https://gcc.gnu.org/)

## Compilation

Navigate to the root of the repository from your Terminal and run `make` to build the `lem_in` executable file.

## How to use Lem-in?

Lem-in expects a map on [stdin](https://en.wikipedia.org/wiki/Standard_streams#Standard_input_(stdin)):
```
./lem_in < samples/map1.txt
```
Lem-in solves the map and prints the result.

## Rules

 - The goal is to find the quickest way to make all the ants cross over the anthill.
 - Each single ant needs to take the shortest route, whithout walking on its peers & avoiding traffic jams.
 - At the beginning of the game, all the ants are at the anthill entrance.
 - During each lap, every ant can move only once by following a tunnel from its current room to an empty room.
 - The goal is to lead the ants to the exit room, in a minimum amount of laps.
 - Each room could contain a single ant at a time (except `##start` and `##end`).

## Map format

You can find map samples under the `samples/` directory.

## Map generator

You can generate BSQ maps using the Perl script `gen_map.pl`:

```
perl gen_map.pl [SIZE] [DENSITY] [NB_ANTS]
```

## Authors

* **Fanny Tavart** ([GitHub](https://github.com/fannytavart/) / [LinkedIn](https://www.linkedin.com/in/fannytavart))
* **Raphaël Badia** ([GitHub](https://github.com/RaphaelBadia))
* **Oscar Stefanini** ([GitHub](https://github.com/Ostefanini/))
* **Ronan Boiteau** ([GitHub](https://github.com/ronanboiteau) / [LinkedIn](https://www.linkedin.com/in/ronanboiteau/))
