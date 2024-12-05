# Pokémon Battle System

**Author:** Raissa Cavalcanti

This program implements a game based on the Pokémon universe, where players can battle CPU-controlled opponents using Pokémon that can be chosen and trained for combat. The game features a scoring system where victories increase the player's score, and player rankings are updated and saved in a text file.

The code is structured into various components, leveraging object-oriented programming (OOP) concepts to organize functionalities like battles, rankings, and player interaction through menus.

## Program Structure

### Main Classes

- **Pokemon**: Represents a Pokémon, with attributes such as:
  - Name, types, hit points (HP), attacks, etc.
  - A list of attacks, each with properties like name, power, accuracy, and type.

- **Attack**: Models attacks used by Pokémon. Includes:
  - Name, category, power, and accuracy.

- **User**: Represents the player, storing details such as:
  - Nickname, score, victories, and defeats.
  - Ability to load or create profiles from ranking files.

- **Game**: Manages the game’s core logic:
  - Battles, Pokémon selection, attacks, ranking updates, and menu interactions.
  - Responsible for loading and saving player rankings in files.

### Additional Modules

- **utils**: Contains helper functions, such as:
  - Damage calculation between Pokémon.
  - Attack success validation.

## Game Features

- **Main Menu**:
  - Start a battle against the CPU.
  - Select the game difficulty (Easy, Medium, Hard).
  - Display the player rankings with scores, victories, and defeats.
  - Exit the game and save the rankings.

- **Battles**:
  - The player selects a starting Pokémon; the CPU does the same.
  - Turn-based system where each side alternates between attacking and switching Pokémon.
  - Difficulty influences the CPU's behavior (choosing stronger attacks on higher levels).
  - The winner earns points based on the difficulty level.

- **Rankings**:
  - Stored in `ranking.txt`, containing:
    - Player nickname, score, victories, and defeats.
  - Updated and displayed after each battle.

## How to Run the Program

1. **Compile the Code**:
   - Open the terminal in the project folder and compile with:
     ```bash
     make
     ```
   - To clean temporary files:
     ```bash
     make clean
     ```

2. **Run the Game**:
   - Execute the program:
     ```bash
     ./main
     ```
   - Enter your nickname and follow the main menu.

3. **In-Game Interaction**:
   - Choose between attacking or switching your Pokémon.
   - The game ends when all Pokémon from one side are defeated.

## Program Components

- **Files**:
  - `ranking.txt`: Stores player ranking data.
  - Source code:
    - `main.cpp`: Entry point of the program.
    - `game.cpp`, `game.h`: Manage game logic.
    - `pokemon.cpp`, `pokemon.h`: Implement Pokémon and attacks.
    - `utils.cpp`, `utils.h`: Contain helper functions.

## Conclusion

This program provides an interactive Pokémon battle experience through terminal menus. It combines OOP principles to model Pokémon, attacks, and players while managing battles and rankings effectively. It’s a practical application of advanced programming concepts.

> **Note**: Developed as part of the Computer Science program, Programming II course, at the Federal University of Mato Grosso.

For questions or suggestions, please contact via [email](mailto:cavalcanti.c.raissa@gmail.com).
