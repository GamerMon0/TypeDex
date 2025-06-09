pokedex_project/

├── main.cpp                 // Main logic and program entry point

│

├── pokemon.h                // Declaration of the Pokemon class

├── pokemon.cpp              // Implementation of Pokemon methods

│

├── data.h                   // Function to load all Pokémon data (manually or from file)

├── data.cpp                 // Implementation of data loading

│

├── type_chart.h             // Type weakness/resistance logic interface

├── type_chart.cpp           // Implementation of type logic

│

├── types.h                  // List of all valid Pokémon types

│

└── pokemon_data.csv         // (Optional) CSV file with all 1025 Pokémon


| File                | Description                                                                |
| ------------------- | -------------------------------------------------------------------------- |
| `main.cpp`          | Controls the overall flow of the Pokédex app                               |
| `pokemon.h/.cpp`    | Defines the `Pokemon` class and its methods like `stats()`                 |
| `data.h/.cpp`       | Loads all Pokémon into memory, either hardcoded or from `pokemon_data.csv` |
| `type_chart.h/.cpp` | Contains logic to compute weaknesses based on types                        |
| `types.h`           | Defines all known Pokémon types (as strings or enums)                      |
| `pokemon_data.csv`  | (Optional) CSV with Pokémon stats; editable with Excel or Google Sheets    |
