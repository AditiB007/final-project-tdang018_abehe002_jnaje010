## Terminal Hero: Text-based RPG
 
Authors: 
- Tandy Dang (https://github.com/tdang93)
- Aditi Behera (https://github.com/AditiB007)
- Jarod Najera (https://github.com/jarodnajera)
 
Honorary mention (author of original README.md):
- Jeffrey McDaniel (https://github.com/jmcda001)

## Project Description
- Terminal Hero is an in-terminal text based RPG where you can create a hero to go on different quests and engage in combat with various enemies. 
- This project is important to us as it reminds us of our beloved childhood games and now we have the opportunity to make an homage to them. 
- We plan to develop this game in Python and will be using various tools for our project such as VSCode, Atom, and WSL2.
  * VSCode: Text editor with various extensions to add extra functionality (https://code.visualstudio.com/)
  * Atom: Text editor with various packages to enhance user experience (https://atom.io/)
  * WSL2: Windows Subsystem for Linux 2. Allows developers to be able to run Linux natively in Windows 10 (https://docs.microsoft.com/en-us/windows/wsl/install-win10)
* Our input will be:
  * Movement (WASD/Arrow Keys)
  * Various Actions: Attacking, Defending, Item Use (Various Keys)
  * String Input: Character Creation, etc. (Keyboard User Input)
* 1st Design Pattern: Composite
  * We are using this design pattern because we need to put together smaller components to create a bigger one, while maitaining similar behavior at all levels of composition. The feature we plan to implement with this is a challenging enemy: the Slime. The Slime will split up into smaller slimes when defeated, until its smallest "leaf node" slime children are defeated. In this way, Composite will support a uniform operation with the enemy behavior (parent or child Slime).
  * For this design pattern, structure is very important to determine the structure of elements. In terms of hierachy, we will need to know which elements are parents of which children, as well as which elements need to reference other elements. This organizational overhead is a problem that can be solved by correctly composing with Composite. We will need to correctly implement the parent and child Slimes with recursive composition, or else it will not work correctly.
  * A slime enemy is a good representation of a composite container class which can contains more composite objects and primitive objects inside of it. This adheres to the same relationship.
* 2nd Design Pattern: Strategy
  * We are using this design pattern because we will be using inheritance to build all of our characters and their traits. It is also a good design pattern for runtime changes, which we will be making for a game with user input. We will be creating different "classes" of characters that the user can pick. Each of these classes will have a different set of actions that they can execute, so Strategy will be useful for us as we can implement the same action interface for every class. This can also be applied to the various enemy types that we'll be making, so the same action interface is extended to cover the enemy's actions as well. 
  * In terms of problems, anything that deals with runtime changes can experience bugs and crashes. Because of this, we anticipate the need to test extensively for different events and alternative class objects. By having a Strategy be responsible for this, we can address the range of testing by unit testing each class that is used. It will also properly handle those changes dynamically so that as developers, we do not commit hardcoded mistakes with pointers.
  * This Strategy pattern is a well known method to be able to solve the issue of deciding which class object to use at runtime. This will lead to a good solution for allowing that flexibility to the user. Regardless of who takes their turn, as an enemy or any player class, that object will know how to behave because the Strategy pattern will be able to find its implementation. This owes to the fact that they use the same interface to act. 
* 3rd Design Pattern: Abstract Factory
  * We will need to create objects for the player to use, which all belong to different families of objects at runtime. Some of these will be enemies which can come from different families of enemies. Some other objects can be player weapons and armors, which allows the client code to be independent of which exact objects we reference.
  * Creating enemies, weapons, and armors means creating new objects at runtime, so this can lead to memory management issues and bugs or crashes. If we are careful with this design pattern though, it can properly make these objects and solve potential memory leaks. 
  * The factory design pattern standardizes how to instantiate objects of particular classes, so it is a good choice for ensuring that enemies are not created incorrectly. This will manage object creation for us dynamically, to address the issue of memory allocation.

## Class Diagram
![](https://github.com/cs100/final-project-tdang018_abehe002_jnaje010/blob/master/CS100_OMT-Diagram.png)

Note: This OMT diagram is included in the repository as a PNG image.

 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 - Download all of the files off GitHub by using "git clone --recursive https://github.com/cs100/final-project-tdang018_abehe002_jnaje010.git" (without the ""). Then run it using this command "cmake3 .", then "make", then "./game" (without the ""). Once you start the game, you will be asked for user inputs from your keyboard throughout the game, those instructions are included in the game itself.
 ## Testing
 - We tested our game through unit tests for each class made, that includes every type of player and every type of enemy.
 
