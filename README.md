# Lacuna v1

**Lacuna v1** is a project that is attempting to address toxicity in competitive online team-based games, particularly on solo players that play games like League of Legends. It is our hope that we can encourage a more friendlier gaming community through a means of immediate intervention when toxic behaviour occurs during gameplay.

## Feature
* Slow chat mode
* Warning Tips
* Discouraging toxicity in game

## Getting Started
The following instructions will help you to get a copy  of the game and run it locally.

### Prerequisites 
Before cloning the repo from GitHub, make sure the Git LFS (Large File Storage) has been installed.  You can read about the installation [here](https://docs.github.com/en/repositories/working-with-files/managing-large-files/installing-git-large-file-storage). Moreover, get Unreal Engine installed as well to open up the game.

### Installation
1. Clone the repo
```shell
git clone https://github.com/Virtual-World-Crunchers/GamingForThePeople.git
```

## Usage
_"Use this space to show useful examples of how a project can be used. Additional screenshots, code examples and demos work well in this space. You may also link to more resources."_


## Git Configurations

Before you begin to pull from repo and commit to the repo, make sure you have Git LFS (Large File Storage) installed. GitHub only allows files to be committed and pulled from the repo that are within a certain size limit (It blocks pushes that are greater than 100MB). However, LFS extends that limit. You can read about the installation [here](https://docs.github.com/en/repositories/working-with-files/managing-large-files/installing-git-large-file-storage). With the FPS shooter game in the project, there are already some files that are tracked by LFS. The configuration is already in the .gitattributes file. So you just have to download LFS and install it with Git Bash in your local repo, then it should be fine to start committing changes. 

Read [here](https://docs.github.com/en/repositories/working-with-files/managing-large-files/configuring-git-large-file-storage) to follow the steps to configure LFS to track additional files that exceed the limit. When adding files to LFS, please try to keep it specific to save space in the LFS.

When uploading and downloading the project files, you may get an error like "Filename too long". You can fix this error by entering this command in the command line in the folder you're saving the project to in Git bash (or something similar with git installed): 

$ git config --global core.longpaths true

Also, to prevent further errors with committing the files, please ensure the editor is closed before you commit until the repository can be configured to exclude certain folders and files.
