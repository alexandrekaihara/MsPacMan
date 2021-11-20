# Ms. PacMan in Assembly
This is the final project for the first semester of Science Computer course. The goal was to develop the game Ms. PacMan with all the features using RARS assembly.
All the images were taken from internet or edited/created by the authors.


<p align="center">
<img src="/images/github/intro.png"
     alt="Markdown Monster icon"
     style="float: left; margin-right: 30px; margin-top=30px" />  
</p>

# Dependencies
To use this program is needed to install Java on your machine. See on https://java.com/en/download/help/download_options.html for instructions for your Operational System.

# Usage
Steps to execute the program:
- After installing java on your machine, execute by double clicking on Rars10_Custom7.jar;
- On the top bar, click on "File>Open" and select "main.s";
- On the top bar, click on "Tools>Keyboard and Display MMIO Simulator";
- On the new screen click on "Connect to Program";
- On the top bar, click "Tools>Bitmap Display";
- On the new screen click on "Connect to Program";
<p align="center">
<img src="/images/github/topbar.png"
     alt="Markdown Monster icon"
     style="float: left; margin-right: 30px; margin-top=30px; margin-bottom=30px" />  
</p>

- Under the top bar, click on the 12th square that has a image of a tool to compile the program;
- Then the 13th box will become green and clickable. Then click on the 13th square;
- Click on the window of the keyboard to be able to receive the keyboard input;
- Click on the white rectangle where is written "KEYBOARD: Characters typed here are stored to Receiver Data 0xff2000004".

If the screen is too small, you can change the configurations on Bitmap display doing:
- Change "Unit Width in Pixels" to 2;
- Change "Unit Height in Pixels" to 2;
- Change "Display Width in Pixels" to 640;
- Change "Display Height in Pixels" to 480;
- Then click on the corner of the window to expand its size with the mouse;
- Restart all the steps to execute the program from step 6;

The commands are:
- "w" to go up;
- "s" to go down;
- "d" to go right;
- "a" to go left;

If you want to go jump to the next level without eating all the dots, just press the key "k";

# Issues
If you are running on Linux the images may not appear on screen, because the relative path may not work. So for each .bin file, you should add the whole path to the file. This should be enougth to execute the program without errors.

