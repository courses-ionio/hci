# ΙΟΝΙΟ ΠΑΝΕΠΙΣΤΗΜΙΟ, ΤΜΗΜΑ ΠΛΗΡΟΦΟΡΙΚΗΣ 
## ΜΑΘΗΜΑ
### Επικοινωνία Ανθρώπου Υπολογιστή  
Επιβλέπων καθηγητής: Χωριανόπουλος Κωνσταντίνος 

## Στοιχεία φοιτητή 
### Παπακωστούλης Αντώνιος
### ΑΜ: Π2014055

### [Προσωπικό αποθετήριο](https://github.com/p14papa1/hci)





## Άσκηση 1. Σet-up the main dependencies and demonstrate your base system. change your command prompt with your student ID, list your dot files, display your shell configuration file and display system information

[asciinema url](https://asciinema.org/a/Bq03Tr1YnLH6PEgw3eNBwmtL0)

Χρησιμοποιήθηκαν οι εντολές 
Για να αλλάξω το command prompt με το ΑΜ χρησιμοποίησα την εντολή

```bash
sudo nano ~/.bashrc
```

Έπειτα άλλαξα το όνομα με το ΑΜ μου. Στην συνέχεια  για να δείξω τα dotfiles χρησιμοποίησα την εντολή 

```bash
ls -a
```

Στην συνέχεια εγκατέστησα το neofetch με την εντολή 

```bash
sudo apt-get install neofetch
```

και στην συνέχεια το εκτέλεσα με την εντολή neofetch. 



## Άσκηση 2. Get familiar with basic commands, reading documentation and editing files. Browse and view files on your system.

[asciinema url](https://asciinema.org/a/EwLNC1szZ9enYqMwx62xlQH2D)

Για αυτή την άσκηση χρησιμοποίησα το vim και το ranger. Άρχικα για να εγκαταστήσω χρησιμοποίησα τις εντολές

```bash
sudo apt-get install vim
sudo apt-get install ranger
```

Στην συνέχεια δημιούργησα ένα directory με όνομα askisi2


```bash
mkdir askisi2
```

Μετά είδα τα manual των vim και ranger 

```bash
man vim
man ranger
```

Στην συνέχεια έτρεξα το vim με την εντολή

```bash 
vim askisi2
```

Και τέλος το ranger με την εντολή 

```bash
ranger
```
















