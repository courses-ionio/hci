# ΙΟΝΙΟ ΠΑΝΕΠΙΣΤΗΜΙΟ, ΤΜΗΜΑ ΠΛΗΡΟΦΟΡΙΚΗΣ 
## ΜΑΘΗΜΑ
### Επικοινωνία Ανθρώπου-Υπολογιστή  
Επιβλέπων καθηγητής: Χωριανόπουλος Κωνσταντίνος 

## Στοιχεία φοιτήτριας  
### Ιωάννα Ξυγκώρου
### ΑΜ: Π2014215

### Eργασία 1. Set-up the main dependencies and demonstrate your base system - Change your command prompt with your student ID, list your dot files, display your shell configuration file and display system information (hardware+software)

#### url asciinema: https://asciinema.org/a/9SG281VoNbsADe2PSorONC7Ti

Για να αλλάξω το command prompt χρησιμοποίησα το αρχείο .bashrc στο home directory του χρήστη μου. 
Είναι ένας μόνιμος τρόπος και μπορώ να εξακολουθώ να βλέπω δίπλα το directory στο οποίο βρίσκομαι. Καλύτερο απο το να κάνω απλά 
export την μεταβλητή PS1.

Για να δείξω το shell configuration χρησιμοποίησα τον nano editor. Είναι απλός και ευκολος στη χρήση κάνοντας το περιεχόμενο στο terminal να διαβάζεται ευχάριστα, σε αντίθεση με το command less που απλά δείχνει το περιεχόμενο του αρχείου στο terminal.

Για να δω τα dot files στο home directory χρησιμοποίησα την εντολή

```
ls -a
```

Εγκατέστησα το neofetch για να δείξω τις πληροφορίες του συστήματός μου με την εντολή

```
sudo apt install neofetch
```

Για να τρέξω το neofetch

```
neofetch
```

### Eργασία 2. Βrowse and view files on your system.

#### url asciinema: https://asciinema.org/a/h62DdOhYr0twEc1Tqhwj792pn

Για την εργασία αυτή εγκατέστησα το ranger και το vim, με τις ενολές 
```
sudo apt-get install ranger
```

```
sudo apt-get install vim
```

στη συνέχεια είδα τα manual και για τα δύο με τις εντολές

```
man ranger
```

```
man vim
```

Δημιουργησα directory με ονομα askisi2 και μεσα σε αυτό με τον nano editor δημιουργησα δύο αρχεία .txt για τις ανάγκες της άσκησης. Στη συνέχεια έτρεξα το ranger με την εντολή

```
ranger
```

To ranger σου δείχνει όλα τα directory και τα αρχεία στο σύστημα με ευκολη πλοήγηση με τα βελάκια του πληκτρολογίου. Σου δείχνει επίσης και το περιεχόμενο των αρχείων.

Στη συνέχεα χρησιμοποίησα το vim για να δω τα 2 αρχεία που δημιούργησα πριν.

```
vim /path/to/filename
```

### Eργασία 3. Plan your time with a calendar. Add, edit, search for an appointment

#### url asciinema: https://asciinema.org/a/hlVT8xuHGLLSUn36ZZEr6e5X8

Χρησιμοποίησα το calcurse. H εγκατάσταση και η λειτουργία του είναι πάρα πολύ εύκολη. Η εγκατάσταση έγινε με την εντολή

```
sudo apt-get install calcurse
```
και τρέχει με

```
calcurse
```

Επιλέγεις ημερομηνία και ορίζει event η ραντεβού με start και end time. Μπορείς να επεξεργαστείς το description του event ή ραντεβού καθώς και να το σβήσεις. Όλες οι καταχωρήσεις φαίνονται δεξια στο calendar απο όπου και κάνεις search. Παρέχεται και η δυνατότητα να κάνεις repeat ένα ραντεβου πχ καθε μέρα κάθε βδομάδα ή κάθε μήνα. Πολύ σημαντικό και εύκολο στη χρήση εργαλείο.

### Eργασία 4. Βecome productive with a todo list. Create a list of todos, edit, delete, and check some of them.

#### url asciinema: https://asciinema.org/a/UX2kxz8UoZw0DsYb27vePhbAC

Xρησιμοποίησα το taskwarrior. Ήταν η καλύτερη επιλογή κατα τη γνώμη μου. Εύκολο στη χρήση με πάρα πολλές δυνατότητες.
Η εγκατάσταση έγινε με

```
sudo apt-get install taskwarrior
```

Yποστηριζει task visualizations με τη μορφή callendar, και διαγράμματος με τα tasks.

```
task calendar
```

```
task burndown
```

Τα πάντα περιγράφονται αναλυτικά στην επίσημη ιστοσελίδα https://taskwarrior.org/


