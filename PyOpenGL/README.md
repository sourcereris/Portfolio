## Project 2 – Simple 3D shooter using PyOpenGL

Small Python-based 3D demo built with Pygame and PyOpenGL that showcases basic rendering, camera control, and simple gameplay elements

**Key features**

- OpenGL sets up smooth lighting, spheres for enemies and bullets.
- Enemies spawn at random points on a surrounding sphere and moves inward; left-click shoots Bullet instances heading straight from the camera, which travel forward and collide with enemies to remove them.
- Free-look camera system, mouse-driven yaw/pitch rotation and keyboard-controlled elevation and orbit path in the Camera class.
- Physics-inspired motion, applying an inverse-distance gravitational pull from a central “Sun” object to floating shells (mass, force constant, integration).
- Modular code organization, with clear separation across Main, Camera, Sun, Enemy, Gun, Bullet, RandomPos, LoadMesh, and Mesh components.

![ezgif com-video-to-gif-converter(1)](https://github.com/user-attachments/assets/af967830-85f9-46e7-ad9e-239208c92fcb)

math concept for camera movement

<img width="771" height="545" alt="image" src="https://github.com/user-attachments/assets/dcad2cd6-8cfc-4f45-943b-e22029890215" />
