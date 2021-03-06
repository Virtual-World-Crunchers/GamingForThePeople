![](https://github.com/Virtual-World-Crunchers/GamingForThePeople/blob/wiki/VWC-Project/Prototype1/title.jpg?raw=true)

# Lacuna v1

**Lacuna v1** is a project that is attempting to address toxicity in competitive online team-based games, particularly on solo players that play games like League of Legends. It is our hope that we can encourage a more friendlier gaming community through a means of immediate intervention when toxic behaviour occurs during gameplay.


## Features included:
* Slow Mode Chat
* Toxicity Notification
* Individual Muting


## Getting Started
The following instructions will help you to get a copy  of the game and run it locally.

### Prerequisites 
Before cloning the repo from GitHub, make sure the Git LFS (Large File Storage) has been installed.  You can read about the installation [here](https://docs.github.com/en/repositories/working-with-files/managing-large-files/installing-git-large-file-storage). Moreover, if you don't have Windows, you might need to get Unreal Engine installed as well to open up the game (a very long installation process). Thus it is preferred that you use Windows to run the game. 

### Installation
1. Clone the repo to local from the v1.1 branch
```shell
git clone -b v1.1 --single-branch https://github.com/Virtual-World-Crunchers/GamingForThePeople.git 
```

2. Open the project file <br>

Either:


* (Preferred) Open the application file (Currently for Windows) <br>
```shell
.../Lacuna_V1/WindowsNoEditor/ShooterGame.exe
```

OR

* Use Unreal Engine to open the project <br>
```shell
.../VWC-Project/Prototype1/Prototype1.uproject
```
* And launch the game by clicking on _"Launch"_ in the top menu bar


## Usage

### Basic Game Controls
* WASD - movement
* Left Mouse - shoot
* Right Mouse - zoom on target
* Scroll/Q - switch weapons
* R - reload
* ESC - Game menu
* C - Toggle chat window (Please do this before attempting to toggle to slow chat feature when you first play, because not doing this will crash the game)
* Enter - submit chat input; Also to select an option in the game menu and main screen.
* Arrow keys - navigate the menus
* Left Shift - sprint
* Spacebar - Jump
* Tab - Show Scoreboard

### Slow Mode Chat:
Users can choose whether they want to enable message delay when they are receiving toxic messages with "ALT + 1" keybind. A message will pop up, which will notify the players that they have already enabled the slow chat mode if they choose yes. The slow chat feature can also be toggled on by using "ALT + 1" command to disable it as the user needs. There will be no changes if the user do not want to turn on this function. Once slow mode chat has been enabled messages are receieved by the user only after 20 seconds.

![](https://github.com/Virtual-World-Crunchers/GamingForThePeople/blob/wiki/wiki/usage_1.GIF?raw=true)

### Toxicity Notification and Individual Muting
If suspicious toxic messages detect in the chat. A pop up window will allows user to determine whether they think the chat log is toxic and mute the players they think is toxic.

![](https://github.com/Virtual-World-Crunchers/GamingForThePeople/blob/wiki/wiki/notifications.jpeg?raw=true)


## Authors
[@Alicat42](https://github.com/Alicat42)<br>
[@ek-williams](https://github.com/ek-williams)<br>
[@ethanxu98](https://github.com/ethanxu98)<br>
[@Jrui24](https://github.com/Jrui24)<br>
[@marcopolo141](https://github.com/marcopolo141)<br>
[@RileyHen](https://github.com/RileyHen)


## Acknowledgements
### Used Asset:
* [Shooter Game](https://github.com/Noesis/UE4-ShooterGame)
