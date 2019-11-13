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
