# Outland Haven - 2D Action RPG

Outland Haven is a 2D action RPG, my 4th-year graduation project. As the sole systems programmer, I implemented the scalable enemy AI state machine, the procedural tilemap generation system, and the core game architecture. *(Game and all the systems are not finished)*

**You can find the Source Code on GitHub** - https://github.com/thameeeh/Toris.git

## My contribution to this game

### Feature 1: Scalable Enemy AI State Machine

https://github.com/user-attachments/assets/59c5ad6a-3aa6-4112-9ff3-8277883c5c42

Implementation of a flexible, event-driven state machine from scratch to control all enemy behavior. The system is built on ScriptableObjects, allowing for new enemy types to be created without writing new code.

- Technical Details:

    - Architected the core EnemyStateMachine and EnemyState base classes.

    - Used ScriptableObjects to define specific behaviors like Idle, Chase, and Attack, which can be mixed and matched (e.g., WolfIdleSO, WolfChaseSO, WolfAttackSO).

    - Implemented sensor logic (EnemyAggroCheck) to detect the player and trigger state transitions (e.g., from Idle to Chase).

    - Created distinct enemy types, like the Wolf (a direct melee attacker) and the Badger (a "burrowing" enemy with unique Burrow and Unburrow states).

### Feature 2: Procedural Tilemap Generation

https://github.com/user-attachments/assets/06625483-e027-4e28-9588-f9b267a9677b

To create large, varied levels, I wrote a MapGenerator script that procedurally builds the game world from multiple tilemap layers and populates it with prefabs.

- Technical Details:

    - Developed a MapGenerator that reads noise data to place ground, wall, and water tiles automatically.

    - The system intelligently places different tile types on separate, sorted Tilemap layers (e.g., "Ground," "Walls," "Decorations") for correct 2D rendering.

    - The generator also handles programmatic spawning of resources (like trees and rocks) and enemies across the map.

### Feature 3: Core Game Architecture (The "Game Initiator")

<img width="979" height="598" alt="Screenshot 2025-11-02 175626" src="https://github.com/user-attachments/assets/1894d66f-cba1-499b-bad9-9971a201ddc4" />


Engineered the game's startup and scene-loading logic. I created a persistent _GameInitiator scene that acts as the entry point for the entire application, ensuring all managers and systems are loaded before the player ever sees the menu.

- Technical Details:

    - The GameInitiator script is the first thing loaded and is marked DontDestroyOnLoad to persist across all scenes.

    - It is responsible for instantiating all essential managers (like SceneLoader and AudioManager).

    - This pattern ensures that no scene depends on another scene's managers, making the project scalable and preventing common dependency errors. It also manages the flow from the main menu into the first level.
