# ΙΟΝΙΟ ΠΑΝΕΠΙΣΤΗΜΙΟ, ΤΜΗΜΑ ΠΛΗΡΟΦΟΡΙΚΗΣ
## Επικοινωνία Ανθρώπου-Υπολογιστή
## Επιβλέπων καθηγητής: Χωριανόπουλος Κωνσταντίνος
### Στοιχεία φοιτήτριας
### Μαρία Δήμα
### Α.Μ Π2013029

### Άσκηση 1. Set-up the main dependencies and demonstrate your base system - Change your command prompt with your student ID, list your dot files, display your shell configuration file and display system information (hardware+software)
#### asciinema: https://asciinema.org/a/xdeBp0SW242760i84gmzhzZbg
Άλλαξα το command promt με το Α.Μ μου. Για να αλλάξω το command prompt έκανα edit το αρχείο .bashrc με τον nano editor. To configuration του αρχείου φαίνεται στο session του asciinema.
```
sudo nano .bashrc
```
εμφάνισα τα dot files με την εντολή

```
ls -a
```

Εγκατέστησα το neofetch για να δελιξω το σύστημά μου, hardware και software.
```
sudo apt-get instal neofetch
neofetch
```

### Άσκηση 2. Get familiar with basic commands, reading documentation and editing files. Browse and view files on your system.
Εγκατέστησα το the fuck πως περιγράφεται στο https://github.com/nvbn/thefuck. Εγκατέστησα το ranger. To vim ήταν ήδη εγκατεστημένο σ
το σύστημα μου.

```
sudo apt-get install ranger
```
Έκανα browse το file system μου με τη χρήση του ranger.

```
ranger
```
Δημιούργησα directory documents όπου δημιούργησα ενα αρχείο test με τον vim editor.

```
vim test
```
Στη συνέχεια είδα τα manuals του ranger και του vim.

```
man vim
man ranger
```


