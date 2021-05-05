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
* 3rd Design Pattern: Factory
  * We will need to create enemies for the player to fight, so this design pattern will fit that feature well. It will determine the process for enemies spawning in the game.
  * Creating enemies means creating new objects at runtime, so this can lead to memory management issues and bugs or crashes. If we are careful with this design pattern though, it can properly make them and solve potential memory leaks.
  * The factory design pattern standardizes how to instantiate objects of particular classes, so it is a good choice for ensuring that enemies are not created incorrectly.

 > ## Phase II
 > In addition to completing the "Class Diagram" section below, you will need to 
 > * Set up your GitHub project board as a Kanban board for the project. It should have columns that map roughly to 
 >   * Backlog, TODO, In progress, In testing, Done
 >   * You can change these or add more if you'd like, but we should be able to identify at least these.
 > * There is no requirement for automation in the project board but feel free to explore those options.
 > * Create an "Epic" (note) for each feature and each design pattern and assign them to the appropriate team member. Place these in the `Backlog` column
 > * Complete your first *sprint planning* meeting to plan out the next 7 days of work.
 >   * Create smaller development tasks as issues and assign them to team members. Place these in the `TODO` column.
 >   * These cards should represent roughly 7 days worth of development time for your team, taking you until your first meeting with the TA
## Class Diagram
 > Include a class diagram(s) for each design pattern and a description of the diagram(s). Your class diagram(s) should include all the main classes you plan for the project. This should be in sufficient detail that another group could pick up the project this point and successfully complete it. Use proper OMT notation (as discussed in the course slides). You may combine multiple design patterns into one diagram if you'd like, but it needs to be clear which portion of the diagram represents which design pattern (either in the diagram or in the description). 
 
 > ## Phase III
 > You will need to schedule a check-in with the TA (during lab hours or office hours). Your entire team must be present. 
 > * Before the meeting you should perform a sprint plan like you did in Phase II
 > * In the meeting with your TA you will discuss: 
 >   - How effective your last sprint was (each member should talk about what they did)
 >   - Any tasks that did not get completed last sprint, and how you took them into consideration for this sprint
 >   - Any bugs you've identified and created issues for during the sprint. Do you plan on fixing them in the next sprint or are they lower priority?
 >   - What tasks you are planning for this next sprint.

 > ## Final deliverable
 > All group members will give a demo to the TA during lab time. The TA will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Kanban board. 
 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 
