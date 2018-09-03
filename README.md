"# Game-of-Life" 

Overview:
Game of life is a sample simulation game where it is initially given a square grid of cells and will compute what the resulting life would look like after ‘n’ number of iterations.

Rules:
1. Any live cell with fewer than two live neighbors dies, as if caused by under-population.
2. Any live cell with two or three live neighbors lives on to the next generation.
3. Any live cell with more than three live neighbors dies, as if by overcrowding.
4. Any dead cell with exactly three live neighbors becomes a live cell, as if by reproduction.

Inputs:
• Square grid – an array with its values either ‘0’ or ‘1’ (0 means dead, 1 means alive).
• Number of iterations ‘n’.

Output:
• Count of live cells after nth iterations Example demonstration of how iteration in Game of Life looks like below:
• Initial Grid
| 0 1 1 1 0 |
| 0 0 0 0 0 |
| 0 1 1 1 0 |
| 0 0 0 0 0 |
| 0 0 0 0 0 |
• Result after 1 iteration
| 0 0 1 0 0 |
| 0 0 0 0 0 |
| 0 0 1 0 0 |
| 0 0 1 0 0 |
| 0 0 0 0 0 |
