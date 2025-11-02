# Hello! I'm Rimvydas Medimas

I am a 4th-year game development student graduating in a year with a passion for building core game systems. I specialize in **Unity/C#** and have a strong foundational understanding of low-level C++ development.
I am currently seeking junior/entry-level programmer roles to test myself in a professional working environment.

* **Email** `rimedimas@gmail.com` [**Notion**](https://little-thrill-5ca.notion.site/231a5aa5b0b28027a5d4c9ae9778014c)

---

## Featured Projects

Here are the main projects I am most proud of.

### 1. Toris - 2D Action RPG (Unity / C#)
**Role:** Gameplay & Systems Programmer

![Untitledvideo-MadewithClipchamp31-ezgif com-video-to-gif-converter](https://github.com/user-attachments/assets/525c979b-a27b-4f39-ab39-a83cb75873a9)

This is my 4th-year graduation project, a 2D action RPG. As the primary systems programmer, I was responsible for designing and implementing the core architecture for gameplay.

My main contributions include:

* **Scalable Enemy AI:** I built a flexible, event-driven **state machine** using ScriptableObjects. This allows for new, complex enemy types (like the melee "Wolf" or the "Badger" with its unique burrow/unburrow states) to be created without writing new code.
* **Procedural Tilemap Generation:** I developed the `MapGenerator` script, which procedurally builds the game world from multiple, sorted `Tilemap` layers. This system also handles the dynamic spawning of enemies and resources.
* **Core Game Architecture:** I implemented the **`GameInitiator`** system, a persistent entry point that loads and manages all core systems (like the `SceneLoader` and `AudioManager`) to ensure they persist correctly across all scenes and prevent dependency errors.

**[View the Full Project Page & Technical Overwiev](https://github.com/sourcereris/Portfolio/tree/main/Main%20Works/Unity)**

**[View the Source Code on GitHub](https://github.com/thameeeh/Toris/tree/main)**

<br>

### 2. WinAPI Central Defender (C++ / WinAPI)
**Role:** Sole Developer

https://github.com/user-attachments/assets/b187dbda-cbef-4de0-8690-9db38d2fd68a

This is a complete 2D arcade shooter built from the ground up in C++ **without using any game engine**. The goal was to prove my understanding of low-level game architecture.

All systems were built from scratch:

* **Core Technology:** Written in pure C++ using the native **Windows API** for all window creation, input handling, and event processing.
* **Custom 2D Renderer:** All graphics are rendered using **Gdiplus**, including a custom 60 FPS game loop.
* **Custom Animation System:** I developed a `KTileManager` to load sprite sheets and an `KSpriteAnimator` to handle frame timing, scaling, and mirroring.
* **Gameplay Systems:** Implemented from-scratch physics, bullet logic, enemy spawning, and an AI-controlled companion that autonomously helps the player.

**[View the Full Project Page & Technical Details](https://github.com/sourcereris/Portfolio/tree/main/Main%20Works/WinAPI%20Tower%20Defender)**

---

## My Technical Skills

* **Languages:** C#, C++, Java
* **Engines & Frameworks:** 2D Unity, Basics of WinAPI
* **Tools:** Git, GitHub, Visual Studio
* **Concepts:** Object-Oriented Programming (OOP), Game AI (State Machines), Procedural Generation, Core Gameplay Systems, 2D Game Physics

---

## Programming & Learning Archive

My repositories also contain a collection of my earlier projects and assignments from my studies. These explore various concepts in C++ (using Raylib) and Java.

**[View My C++ Project Archive](https://github.com/sourcereris/Portfolio/tree/main/Old%20Projects/CppRaylib)**

**[View My Java Project Archive](https://github.com/sourcereris/Portfolio/tree/main/Old%20Projects/Java)**












