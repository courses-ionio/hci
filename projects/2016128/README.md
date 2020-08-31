# ΙΟΝΙΟ ΠΑΝΕΠΙΣΤΗΜΙΟ, ΤΜΗΜΑ ΠΛΗΡΟΦΟΡΙΚΗΣ 
## ΜΑΘΗΜΑ
### Επικοινωνία ανθρώπου υπολογιστή 
Επιβλέπων καθηγητής: Χωριανόπουλος Κωνσταντίνος 

## Στοιχεία φοιτητή
### Oνοματεπώνυμο: Ευάγγελος Καραβασιλειάδης
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
brew install ranger
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

#### [Demo Video Part I](https://asciinema.org/a/355470)
Ξεκινάω με την εγκατάσταση του task warrior

```
brew install taskwarrior
```

#### [Demo Video Part II](https://asciinema.org/a/355474)
Συνεχίζοντας, δημιούργησα και επεξεργάστηκα λίστα με τα tasks

```
task add <name>
task add <name> due:<deadline>
task <number> edit
task <number> delete
task <number> done
```
Πληροφορήθηκα για το συντακτικό απο εδώ https://taskwarrior.org/docs/syntax.html

Στην συνέχεια κοίταξα το ημερολόγιο που συμπεριλαμβάνει όλα τα tasks που πρόστεθηκαν

```
task calendar
```

## Άσκηση 4. Τrack your time with a simple journal.

#### [Demo Video](https://asciinema.org/a/355483)

Αρχικά εγκατέστησα το jrnl

```
brew install jrnl
```

Συνεχίζοντας πρόσθεσα συμβάντα στο journal μου

```
jrnl <timeframe>: <message>
jrnl --edit
jrnl -n 10 (last 10 days)
```

Πληροφορήθηκα για το συντακτικό απο εδώ https://jrnl.sh/usage/


## Άσκηση 5. Organise the terminal window into multiple areas. Use one window to search-edit local files or browse the web and another window for performance monitoring	

#### [Demo Video](https://asciinema.org/a/355503)


Αρχικα εγκατέστησα το tmux

```
brew install tmux
```
για να γίνει το split

```
ctrl b %
```

για εναλλαγή παραθύρων
```
ctrl b o
```

Για να δω τις διεργασίες, να βρω και να επεξεργαστώ αρχείο
```
top
cd <location>
ls -a
vim <filename>
```

Boήθεια απο: [Tmux tutorial Youtube](https://www.youtube.com/watch?v=BHhA_ZKjyxo)



## Άσκηση 6. Surf the web. Create a new elvi

#### [Demo Video](https://asciinema.org/a/355696)

Αρχικά εγκατέστησα το surfraw

```
brew install surfraw
```

Στη συνέχεια χρειάστηκε να αλλάξω το surfraw configuration file διότι δεν άνοιγε ο browser, πρόσθεσα τα παρακάτω lines

```
SURFRAW_graphical=yes
SURFRAW_graphical_browser=open
SURFRAW_text_browser=open
```
[Πηγή](https://apple.stackexchange.com/questions/121755/how-to-configure-surfraw-on-osx)

Mετά επρέπε να δημιουργήσω ένα local elvis folder, να αντιγράψω την τοποθεσία του κώδικα που ανοίγει το youtube και να κάνω κάποια modifications έτσι ώστε να ανοίξει τη σείδα που θέλω (Angular Docs)

```
cd .config
mkdir surfraw
cd surfraw
mkdir elvi
cd elvi
cp /usr/local/crate/2.3.0/surfraw/youtube angular // aντιγραφή και μετονομασία ως angular
sudo nano angular // για να μπω στο file και να τον αλλάξω
```

Για τα Modifications απλά αντικατέστησα το link του  youtube με αυτό της σελίδας που θέλω

[Βοήθεια απο tutorial](https://www.youtube.com/watch?v=FvimaTL_kJU)



## Συμμετοχικό περιεχόμενο

### [Url σελίδας βιβλίου](https://vaggelis-kara.netlify.app)
### [Αποθετήριο βιβλίου](https://github.com/VaggelisKa/site)


### Παραδοτέο 1.Β1
Προσθήκη διαδραστικού παραδείγματος

[Tic-Tac-Toe](https://vaggelis-kara.netlify.app/remix/tic-tac-toe/)

Πηγές-Βοήθειες: 
[Similar Project](https://codepen.io/tyl-er/pen/QpBErL),
[Pug Docs](https://pugjs.org/api/getting-started.html),
[SCSS Docs](https://sass-lang.com/documentation),

### Παραδοτέο 1.Β2
Προσθήκη διαδραστικού παραδείγματος

[Hover-Effects](https://vaggelis-kara.netlify.app/remix/hover-effects/)

Πηγές-Βοήθειες:
[Similar Project](https://codepen.io/davidicus/pen/emgQKJ),
[SCSS Docs](https://sass-lang.com/documentation)

### Παραδοτέο 1.Γ1
Προσθήκη βιογραφίας

[Σύντομη βιογραφία του Jack Dorsey](https://vaggelis-kara.netlify.app/biography/jack-dorsey/)

Πηγή: [Wikipedia](https://en.wikipedia.org/wiki/Jack_Dorsey)

### Παραδοτέο 2.Γ1
Προσθήκη βιογραφίας

[Σύντομη βιογραφία του Bill Gates](https://vaggelis-kara.netlify.app/biography/bill-gates/)

Πηγή: [Wikipedia](https://en.wikipedia.org/wiki/Bill_Gates)


## Συμπεράσματα Ασκήσεων

Έχοντας ήδη μια γνώση και εξοικείωση με τη χρήση του τερματικού, παρότι είναι η πρώτη φορά που χρησιμοποιώ Unix τερματικό (Mac ειδικότερα), αρχικά θεώρησα πως η εργασία θα είναι απλά μια επανάληψη των εντολών που χρησιμοποιώ σε καθημερινή βάση. Αντιθέτως, όμως, έμαθα περισσότερες εντολές που δεν έχω χρησιμοποιήσει ξανά και ήρθα σε επαφή με άλλες εφαρμογές τερματικού, όπως taskwarrior, που θεωρώ εξαιρετικά χρήσιμες και θα συνεχίσω να τις δουλεύω τακτικά.

## Συμπεράσματα Συμμετοχικού Υλικού

Αρχικά, για τα διαδραστικά παραδείγματα που πρόσθεσα στην σελίδα του βιβλίου, μέσα εκ των οποίων έμαθα να χρησιμοποιώ τον online editor Codepen και να ένθετω το παράθυρο του πρότζεκτ στη σελίδα μου στο Netlify (αντιγραφή του βιβλίου). Λέγοντας αυτό, γνώρισα το συγκεκριμένο πρόγραμμα που είναι εξαιρετικά πρακτικό στο hosting στατικών ιστοσελίδων τύπου blog, το οποίο και θα συνεχίσω να χρησιμοποιώ για παρόμοιες ανάγκες. Τέλος, ενημερώθηκα περεταίρω και πρόσθεσα δύο νέες βιογραφίες ατόμων που με εμπνέουν και έχουν συμβάλλει σημαντικά στην διάδραση των ανθρώπων μέσα στα κοινωνικά δίκτυα (Jack Dorsey) και σε υπολογιστικά συστήματα με την δημιουργία λογισμικών (Bill Gates)




