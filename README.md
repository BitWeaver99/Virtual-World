# Virtual-World (Procedural World from Scratch)

## 📌 Project Overview

This project is a **procedural world generation tool** built entirely from scratch with minimal external dependencies. The goal is to create **realistic terrain, biomes, and environmental effects** while maintaining full control over the generation logic.

### **Why Build from Scratch?**

- Why not?

- For fun.

- Learning opportunity.

- No reliance on heavy third-party libraries or engines.

- Full control over algorithms and optimizations.

- Designed to be lightweight and easily expandable.

## 🌍 Planned Features

*(The project is in its early stages and does not have implemented features yet. Below are the planned features:)*

- **Multiple Generation Algorithms**: Includes noise functions, Voronoi diagrams, Delaunay triangulation, and Poisson disc sampling.

- **Realistic Biomes**: Generates forests, mountains, plains, and more based on rules.

- **Weather & Seasons**: Dynamic environmental effects, including temperature shifts and biome changes.

- **Day/Night Cycle**: Simulates realistic lighting and atmospheric changes over time.

- **Lakes & Rivers**: Water bodies that follow realistic terrain flow.

- **Structures & Roads**: Procedurally placed settlements, roads, and other man-made structures.

- **Nature & Wildlife**: Trees, plants, and dynamic fauna that interact with the environment.

- **NPCs**: Simple AI-driven characters inhabiting the world.

- **Modifiable Terrain**: Terrain that can be changed dynamically through gameplay or external tools.

- **Efficient Rendering**: Optimized mesh generation and rendering pipeline.

- **Customizable Parameters**: Modify terrain features, scale, and biome rules.

- **Configurable Output**: Uses **Lua** and **YAML** for configurations and data output.



## 🛠 Assumptions & Design Principles

This project follows a few fundamental assumptions:

- **Written in pure C99** for performance and portability.
- **Cross-platform**: Designed to run on Linux, Windows, and macOS.
- **The world follows realistic geological formations** (no floating islands unless explicitly defined).
- **Biome transitions are smooth**, using noise-based blending.
- **Minimal dependencies**: Uses only OpenGL, GLFW, GLEW, and essential utility libraries (e.g., stb\_image for textures).
- **Data-driven and object-oriented concepts**: The system is designed around modular, reusable components.
- **Expandable and customizable**: Developers can add new terrain generators and biome rules easily.
- **User-friendly tools**: The UI for generation tools should be simple and intuitive.
- **Testing framework**: The project includes automated tests to ensure stability.
- **Playable out-of-the-box**: Comes with a default demo that generates a playable world with decent visuals and mechanics.

## 📥 Installation & Dependencies

### **System Requirements**

- **OS**: Linux, Windows, or macOS
- **Compiler**: GCC or Clang (supports C99+)
- **Libraries**: OpenGL, GLFW, GLEW, stb\_image (for texture loading)
- **Build System**: Uses CMake
- **Version Control**: Git & GitHub

### **Build Instructions**

1. Clone the repository:
   ```sh
   git clone https://github.com/yourusername/virtual-world.git
   cd virtual-world
   ```
2. Build the project using CMake:
   ```sh
   mkdir build && cd build
   cmake ..
   make
   ```
3. Run the executable:
   ```sh
   ./virtual-world
   ```

## 🖥 Usage & Examples *(WIP)*

*(Usage instructions and examples will be added as development progresses.)*

### Running the World Generator

#### Example Output (WIP)

*(Placeholder for screenshots or ASCII previews of generated terrains)*

## 🔧 Roadmap & Future Plans

-

## 📜 License

This project is licensed under the **MIT License**. See [LICENSE](LICENSE) for details.

## 🤝 Contribution Guidelines

- **Coding Style**: Follows ANSI C formatting standards.
- **Pull Requests**: Open an issue before submitting PRs.
- **Bug Reports & Feature Requests**: Use GitHub Issues.
- **Testing**: Ensure code passes all test cases before submitting PRs.

---

### **💡 Have an idea? Want to contribute?**

Feel free to fork the repo and submit a pull request! 🚀

