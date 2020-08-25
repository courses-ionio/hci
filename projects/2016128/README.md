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


### Άσκηση 1. Set-up the main dependencies and demonstrate your base system - Change your command prompt with your student ID, list your dot files, display your shell configuration file and display system information (hardware+software)
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



## Συμμετοχικό περιεχόμενο

### [Url σελίδας βιβλίου](https://vaggelis-kara.netlify.app)
### [Αποθετήριο βιβλίου](https://github.com/VaggelisKa/site)

#### Παραδοτέο 1.Α
Προσθήκη νέων εικόνων

##### Remarkable 
##### Virtuix omni 
