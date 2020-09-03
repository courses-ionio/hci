# ΙΟΝΙΟ ΠΑΝΕΠΙΣΤΗΜΙΟ, ΤΜΗΜΑ ΠΛΗΡΟΦΟΡΙΚΗΣ

## ΜΑΘΗΜΑ
## Επικοινωνία Ανθρώπου-Υπολογιστή
#### Επιβλέπων καθηγητής: Χωριανόπουλος Κωνσταντίνος

## Στοιχεία φοιτητή
### Βουλιβάση Χρυσούλα
### ΑΜ: Π2013100

## Εισαγωγή
Έγιναν συνολικά 4 ασκήσεις σε περιβάλλον linux (Ubuntu) με τη χρήση του terminal οπως περιγραφεται στις οδηγίες. Η υλοποίηση όλων των εργασιών έχει καταγραφεί σε asciinema sessions. Όπου έχει γίνει αναζήτηση στο διαδίκτυο για πληροφορίες παραθέτοντε τα σχετικά urls. 



### Άσκηση 1. Set-up the main dependencies and demonstrate your base system - Change your command prompt with your student ID, list your dot files, display your shell configuration file and display system information (hardware+software)
#### https://asciinema.org/a/uyGgbwwhnghk7uhTs93P7DyPa
Άλλαξα το command prompt απο το αρχείο .bashrc. Το configuration του αρχείου φαίνεται στο recorded session. Για να τροποποιήσω το αρχείο χρησιμοποίησα τον nano editor

```
sudo nano .bashrc
```

Εμφάνισα όλα τα dot files στο home directory.

```
ls -a
```

Eγκατέστησα το neofech για να δείξω το σύστημά μου hardware και software.
```
sudo apt install neofetch
neofech
```

### Άσκηση 2. Βrowse and view files on your system.
#### https://asciinema.org/a/357605
Εγκατέστησα το ranger και το vim.

```
sudo apt-get install ranger
sudo aot-get install vim
```

Χρησιμοποίησα το ranger για να περιηγηθώ στο filesystem μου.

```
ranger
```

Χρησιμοποίησα τον vim editor για να δημιουργήσω ένα νέο αρχείο στο οποίο πρόσθεσα κείμενο και το έσωσα.
Τα maual του ranger και του vim είναι αναλυτικότατα.

```
man ranger
man vim
```

### Άσκηση 3. Edit the vim or the shell configuration file.
#### https://asciinema.org/a/SwSTw5pw8ee1CS1jr9dpxfMJL

Στην συγκεκριμένη έκδοση του vim 8.1.1401. To code highlighting ειναι ενεργοποιημένο by default. Για να γίνει οποιαδήποτε αλλαγή στο configuration του vim χρησιμοποιούμε το αρχείο .vimrc το οποίο αν δεν υπάρχει το δημιουργούμε στο home directory.

```
nano .vimrc
```

Για να ενεργοποιήσουμε και να απενεργοποιήσουμε το code highlighting ανάλογα προσθέτουμε τα παρακάτω στο αρχείο .vimrc

```
:syntax on

:syntax off
```

Για να ενεργοποιήσω το auto completion χρησιμοποίησα το omni completion, το οποίο δεν είναι ενεργοποιημένο by default στον vim editor.
Το omni completion υποστηρίζει αρκετές γλώσσες τις οποίες καταλαβαίνει απο την επέκταση του αρχείου. Για να ενεργοποιήσω το omni completion προσθεσα τα παρακάτω στο αρχείο .vimrc.

```
filetype plugin on
set omnifunc=syntaxcomplete#Complete
```

Για να δοκιμάσω τις νέες αυτές δυνατότητες δημιούργησα ένα αρχείο .html.

#### Πληροφορίες σχετικά με την υλοποίηση της άσκησης βρήκα:
https://www.cyberciti.biz/faq/turn-on-or-off-color-syntax-highlighting-in-vi-or-vim/
https://vim.fandom.com/wiki/Omni_completion

### Άσκηση 4. Become productive with a todo list. Create a list of todos, edit, delete, and check some of them.
#### https://asciinema.org/a/c8qhYk7D7Gy5Vkv9zuhEgfENT
Εγκατέστησα το taskwarrior

```
sudo apt-get install taskwarrior
```

Πρόσθεσα tasks, τα επεξεργάστηκα, τσέκαρα κάποια απο αυτα και έσβησα μερικά.

```
task add <your task>
task add <your task> due:<date>
task <task number> edit
task <task number> delete
task <task number> done
```

#### Πληροφορίες σχετικά με την υλοποίηση της άσκησης βρήκα:
https://taskwarrior.org/docs/start.html

## Συμπεράσματα
Η υλοποίηση των παραπάνω ασκήσεων βοήθησε στην εξοικείωσή μου με το λειτουργικό σύστημα Ubuntu Linux και τη χρήση του terminal. Επιπλέον, βοήθησε στην εκμάθηση της λειτουργίας του GitHub και το πως αυτό μπορεί να φανεί χρήσιμο για το μέλλον.
