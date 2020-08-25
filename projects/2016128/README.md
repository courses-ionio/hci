# ΙΟΝΙΟ ΠΑΝΕΠΙΣΤΗΜΙΟ, ΤΜΗΜΑ ΠΛΗΡΟΦΟΡΙΚΗΣ 
## ΜΑΘΗΜΑ
### Επικοινωνία ανθρώπου υπολογιστή 
Επιβλέπων καθηγητής: Χωριανόπουλος Κωνσταντίνος 

## Στοιχεία φοιτητή
### Ευάγγελος Καραβασιλειάδης
### ΑΜ: Π2016128

### [Προσωπικό αποθετήριο](https://github.com/VaggelisKa/hci)

## Εισαγωγή
Για τις 6 ασκήσεις που έγιναν χρησιμοποιήθηκε μηχάνημα με λογισμικό MacOS Catalina 10.15.6, Iterm2 με shell: zsh 5.7.1


## Άσκηση 1. Set-up the main dependencies and demonstrate your base system - Change your command prompt with your student ID, list your dot files, display your shell configuration file and display system information (hardware+software)
#### [Demo Video](https://asciinema.org/a/HD1fvA8Lzd3XRDHFpn1SLs5ex)
Αρχικά εγκατέστησα το Homebrew ως packet manager

```
/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/master/install.sh)"

```

Άλλαξα το command prompt απο το αρχείο .zshrc, ανοίγοντας το αρχείο για να αλλάξει το prompt πρόσθεσα 2 καινούργια lines

```
sudo nano ~/.zshrc
setopt PROMPT_SUBST
PROMPT='P2016128%  '
```

Εμφάνισα όλα τα dot files με την εντολή.

```
ls -a
```

Eγκατέστησα το neofech για να δείξω software & hardware
```
brew install neofetch
neofech
```


## Άσκηση 2. Βrowse and view files on your system.
#### [Demo Video Part I](https://asciinema.org/a/lLfTkvaQoxLCeroToKOhXh6sd)
Εγκατέστησα το ranger και το vim.

```
brew install vim
brew install vim
```

#### [Demo Video Part II](https://asciinema.org/a/HfJP0UF38SR8Ph8dV2rHvVdUO)

Χρησιμοποίησα τις παρακάτω εντολές για να δω το documentation του vim & ranger αντίστοιχα

```
man vim
man ranger
```

Χρησιμοποίησα το ranger για να δω τους φακέλους και directories μου.

```
ranger
```

Χρησιμοποίησα τον vim editor για να δημιουργήσω ένα νέο αρχείο στο οποίο έγραψα και στη συνέχεια αποθήκευσα

```
vim Exercise2
:wq (save & quit)
```



## Άσκηση 3. Become productive with a todo list. Create a list of todos, edit, delete, and check some of them.

[Demo Video Part I](https://asciinema.org/a/355470)
Ξεκινάω με την εγκατάσταση του task warrior

```
brew install taskwarrior
```

[Demo Video Part II](https://asciinema.org/a/355474)
Συνεχίζοντας, δημιούργησα και επεξεργάστηκα λίστα με τα tasks

```
task add <name>
task add <name> due:<deadline>
task <number> edit
task <number> delete
task <number> done
```
### Πληροφορήθηκα για το συντακτικό απο εδώ https://taskwarrior.org/docs/syntax.html

Στην συνέχεια κοίταξα το ημερολόγιο που συμπεριλαμβάνει όλα τα tasks που πρόστεθηκαν

```
task calendar
```



## Συμμετοχικό περιεχόμενο

### [Url σελίδας βιβλίου](https://vaggelis-kara.netlify.app)
### [Αποθετήριο βιβλίου](https://github.com/VaggelisKa/site)

#### Παραδοτέο 1.Α
Προσθήκη νέων εικόνων

##### Remarkable 
##### Virtuix omni 
