# ΙΟΝΙΟ ΠΑΝΕΠΙΣΤΗΜΙΟ, ΤΜΗΜΑ ΠΛΗΡΟΦΟΡΙΚΗΣ 
## ΜΑΘΗΜΑ
### Επικοινωνία Ανθρώπου-Υπολογιστή
Επιβλέπων καθηγητής: Χωριανόπουλος Κωνσταντίνος 

## Στοιχεία φοιτητή  
### Φοίβος Αργυρίδης
### ΑΜ: Π2013041

### Άσκηση 1. Set-up the main dependencies and demonstrate your base system. Change your command prompt with your student ID, list your dot files, display your shell configuration file and display system information (hardware+software).
#### url asciinema: https://asciinema.org/a/qgSUwkBsC4WBCzimAIisNoNbo
Χρησιμοποίησα το αρχείο .bashrc στο home directory μου, το οποίο επεξεργάστηκα με τον nano editor για να αλλάξω το command prompt με τον AM μου. Για να δω αμέσως μετά την αλλαγή χρησιμοποίησα το source.

```
sudo nano .bashrc
source .bashrc
```

Έκανα list τα dot files 

```
ls -a
```

Εγκατέστησα το neofetch και έκανα display το σύστημά μου.

```
sudo apt-get instal neofetch
neofetch
```

### πηγές
https://www.cyberciti.biz/tips/howto-linux-unix-bash-shell-setup-prompt.html

https://www.cyberciti.biz/faq/bash-shell-display-only-hidden-dot-files/

https://github.com/dylanaraps/neofetch


### Άσκηση 2. Get familiar with basic commands, reading documentation and editing files. Browse and view files on your system.
#### asciinema: https://asciinema.org/a/mKw5DczeWCvs00bpYOvgF4TSt
Εγκατέστησα το vim και το ranger

```
sudo apt-get install vim
sudo apt-get install ranger
```

Δημιούργησα directory askisi2 όπου εφτιαξα με τον vim ένα νέο αρχείο askisi2

```
mkdir askisi2
vim askisi2
```

Είδα τα manuals του vim και του ranger

```
man vim
man ranger
```

Έτρεξα τον ranger και επεξεργάστηκα πάλι το αρχείο askisi2 μεσα απο τον ranger επιλέγοντας editor.

```
ranger
```

### πηγές
https://ranger.github.io/

https://www.computerhope.com/unix/umkdir.htm

https://www.linux.com/tutorials/vim-101-beginners-guide-vim/




