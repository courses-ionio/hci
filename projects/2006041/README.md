**Ονοματεπώνυμο**: Έλενα Βέργου

**ΑΜ**: Π2006041


| Εβδομάδα | Παραδοτέο |
| --- | --- |
| 1 | Goals - Φορκ του αποθετηρίου και δημιουργία της σελίδας της αναφοράς με τα προσωπικά στοιχεία σας, της σύνοψης με αυτόν τον πίνακα περιεχομένων, και συγγραφή της εισαγωγής με περιγραφή των αναγκών και των στόχων σας για το αντίστοιχο μάθημα ([link](#goal)) |
| 2 | Button ([link](#button))|
| 3 | Dependencies & Base System ([link](#Dependencies))|
| 4 | CSS Queries ([link](#css))|
| 5 | Text Editor and Plug-ins for Code Highlighting and Autocompletion ([link](#vim))|
| 6 | Collaborative Exercise ([link](#collab))|
| 7 | CSS Mouse Eraser Programming Exercise ([link](#mouseeraser))|
| 8 | Download mp3 ([link](#youtubedl))|
| 9 | d3.js visualization ([link](#d3js))|
| 10 | Άσκηση γραμμής εντολών |
| 11 | συμμετοχικό περιεχόμενο |
| 12 | Τελική αναφορά και αίτημα ενσωμάτωσης για βαθμολόγηση |

<br/>

***

<br/>

## <a name="goal"></a> Week 1: Goals
I would like to work on front-end technologies, like HTML, JS and CSS, so that I can enhance my coding skills and my ability to create and enhance web content.
Also,  I would to take the opportunity to get more familiar with the Linux command line and various command line utilities that can enhance my experience as a developer and make
the experience of interacting with resources both locally and those hosted online a lot more seamless and effortless. 
On top of that, exploring git functionalities and workflows is a much needed skill in any developer's toolkit, as it's an intergral part of collaborating on coding projects and writing production code.

<br/>

## <a name="button"></a> Week 2: Button
For this programming exercise, I changed the implementation of the button by linking the click user action to opening a new tab that serves a webpage hosting weather forecasts for Corfu. The button look - SCSS properties for color, background color, border, border shadow, etc. and symbols from the Font Awesome CSS library, etc. - and text have been appropriately modified to convay to the user information about the functionality of the button and type of action they can perform by cliking it.


### ![#1589F0](https://via.placeholder.com/15/1589F0/000000?text=+) References
1. Link to my [commit](https://github.com/elenberg-io/site/commit/c4d10f7e134d3bd01f39122dde5b148b73520014#diff-9a05d7548950d29ede008a8c948797a40ec046fb480e65e4267e6fa6a5fe222e)
2. Link to `button.md` in the forked [repo](https://github.com/elenberg-io/site/blob/button%E2%80%93exercise/_remix/button.md) 
3. Link to my source code in [codepen](https://codepen.io/p2006041/pen/qBNNNNM?editors=1111)

### ![#c5f015](https://via.placeholder.com/15/c5f015/000000?text=+) Live Demo
![link](https://github.com/elenberg-io/assets/blob/main/ButtonExercise.gif)

<br/>

## <a name="Dependencies"></a> Week 3: Dependencies & Base System
For this command line exercise, I completed the *"set-up the main dependencies and demonstrate your base system"* assignment which had the following tasks to complete:
- **change your command prompt with your student ID:** I used `sudo nano` to open with superuser privileges the `.bashrc` file with the nano text editor. The `.bashrc` shell script contains the configurations for the terminal session and is run at the beginning of a new Bash session so we can introduce there a change to a special shell variable, PS1, which is used as the new prompt string. We then call `source` on the `.bashrc` shell script to execute its contents so that the PS1 value change can take effect in our running session. 
- **list your dot files change:** We use the `find` utility that looks for files and directories through the directories hierarchy so that we can locate all dot/hidden files and directories starting from the route directory. By passing in the argument `name` the regex `.[^.]*` we are excluding the special Linux directories `.` and `..`, and then by introducing the argument `-type f` we are only retrieving dot files, not directories.    
- **display your shell configuration file:** we use `less` with the `.bashrc` shell script to show our shell configurations since we are only interested in displaying them and not editing them.
- **display system information (hardware+software):** we use the `neofetch` command line utility that we have installed and in order to display more info regarding the state of our software and hardware we edit the `config.conf` configuration file of `neofetch` that controls what information is displayed when the `neofetch` utility is invoked from the command line. We enable then some extra display options by editing this file with the nano text editor, uncommenting the lines that display this extra information and then after saving we run `neofetch` and have the default plus the extra information displayed.

### ![#1589F0](https://via.placeholder.com/15/1589F0/000000?text=+) References
1. Link to the asciicast in [asciinema](https://asciinema.org/a/367994)


### ![#c5f015](https://via.placeholder.com/15/c5f015/000000?text=+) Live Demo
[![asciicast](https://asciinema.org/a/367994.svg)](https://asciinema.org/a/367994)

<br/>

## <a name="css"></a> Week 4: CSS Queries
For this programming exercise, I implemented changes changes to the CSS Media Queries exercise, by introducing more `@media` queries dependent on screen width adapting the background colors and the font colors as the screen is squeezed according to 2 different color palettes. The font size and the actual text displayed on the screen is also adapted for the changing screen size, by controlling which html div elements are displayed using their id from the `@media` queries. I've used global CSS variables to hold the color HEX codes which are declared in the `:root` selector and then I'm calling them accordingly from each `@media` rule.

### ![#1589F0](https://via.placeholder.com/15/1589F0/000000?text=+) References
1. Link to my [commit](https://github.com/elenberg-io/site/commit/3166974ad1a2e258a1aba45a12e1ffe0a770a1c1#diff-f4ae7ac56b1b79abd24151c1b033aa250f7e0771751aeeb8e9f90e8e4875af30)
2. Link to the `css-queries.md` in the forked [repo](https://github.com/elenberg-io/site/blob/button%E2%80%93exercise/_remix/css-queries.md)
3. Link to my source code in [codecen](https://codepen.io/p2006041/pen/oNLdwQo).


### ![#c5f015](https://via.placeholder.com/15/c5f015/000000?text=+) Live Demo
![link](https://github.com/elenberg-io/assets/blob/main/ResizingScreen.gif)

<br/>

## <a name="vim"></a> Week 5: Text Editor and Plug-ins for Code Highlighting and Autocompletion
For this command line exercise, I completed the *"text editor and plug-ins for code highlighting and autocompletion"* assignment.
I used the vim text editor and `vi` to to edit the .vimrc config file for the vim editor. I downloaded `Vundle`, a vim plugin manager that allows users to keep track of and configure the vim plugins right in the `.vimrc` file. I then included in the `.vimrc` file and installed the `youcompleteme` plugin for test autocompletition. I also included in the `.vimrc` file configuration for syntax highlighting.

### ![#1589F0](https://via.placeholder.com/15/1589F0/000000?text=+) References
1. Link to the asciicast in [asciinema](https://asciinema.org/a/371700)

### ![#c5f015](https://via.placeholder.com/15/c5f015/000000?text=+) Live Demo
[![asciicast](https://asciinema.org/a/371700.svg)](https://asciinema.org/a/371700)

<br/>

## <a name="collab"></a> Week 6: Collaborative Exercise
For this collaborative exercise I forked the 2 submodules, `_gallery` and `images`, changed the references of the submodules in my forked repo of `site` to point
to these forked submodule repos, added 2 new entries in `_gallery` and `images`, added the references to the appropriate slides and chronology and updated the `_config.yml` 
file in the forked `site` repo with the url of my *netlify* live site. I added 2 Archetypes, the Datapoint 2200 and the TRS-80, under personal computers and microcomputers respectively.

### ![#1589F0](https://via.placeholder.com/15/1589F0/000000?text=+) References
1. Link to the `_gallery` forked [repo](https://github.com/elenberg-io/_gallery)
2. Link to the `_gallery` forked repo [commits](https://github.com/elenberg-io/_gallery/commits/master)
3. Link to the `images` forked [repo](https://github.com/elenberg-io/images) 
4. Link to the `images` forked repo [commits](https://github.com/elenberg-io/images/commits/master) 
5. Link to the `site` forked [repo](https://github.com/elenberg-io/site)
6. Link to the `site` forked repo [commits](https://github.com/elenberg-io/site/commits/master)
7. Netlify Link with my 2 additions in [Archetypes](https://master--gracious-yalow-e2bb28.netlify.app/slides/archetypes/)
8. Netlify Link to Timeline of [Personal Computers](https://master--gracious-yalow-e2bb28.netlify.app/timeline/personal/)
9. Netlify Link to Timeline of [Microcomputers](https://master--gracious-yalow-e2bb28.netlify.app/timeline/micros/)

<br/>

## <a name="mouseeraser"></a> Week 7: CSS Mouse Eraser Programming Exercise
For this programming exercise, I implemented changes changes to the Mouse Eraser exercise, by changing one of the pictures shown and also changing the size of the erase, by manipulating the canvas arc() method's radius argument that controls the radius of the circle of the eraser. 

My commit to the forked repo can be found by following this [link](https://github.com/elenberg-io/site/commit/adcf74f6ffe442a7c958dc7c2b88740e49cb41c9#diff-e8d1cd09284607023431678e80044d4802124ae6be7edaceec659e58726c7c80), the mouse-eraser.md page on github can be accessed through this [link](https://github.com/elenberg-io/site/blob/master/_remix/mouse-eraser.md) and my source code in CodePen can be accessed through this [link](https://codepen.io/p2006041/pen/qBNeWzw).

<br/>

## <a name="youtubedl"></a> Week 8: Download mp3
For this command line exercise, I completed the *"download mp3"* assignment which had the following tasks to complete: I downloaded a video from youtube from my command line using youtube-dl and then played it using mpv.

The link to the asciicast on asciinema can be found through this [link](https://asciinema.org/a/376115) and can also be seen embedded below:

[![asciicast](https://asciinema.org/a/376115.svg)](https://asciinema.org/a/376115)

<br/>

## <a name="d3js"></a> Week 9: d3.js visualization
For this programming exercise, I created a world choropleth charts based on the d3.js library, visualizing COVID-19 incidence rates by country.

My commit to the forked repo can be found by following this [link](https://github.com/elenberg-io/site/commit/4c43b16d06ad0c63d872956be4e043471b604a9a#diff-7b222a67dcbaf16068515e6b1b9add2d77fdbc195841e95bd5ff01dfa82b5b6d), the visualization.md page on github can be accessed through this [link](https://github.com/elenberg-io/site/blob/master/_remix/visualization.md) and my source code in CodePen can be accessed through this [link](https://codepen.io/p2006041/pen/abmbeoX).

