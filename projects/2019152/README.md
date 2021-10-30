# Επικοινωνία Ανθρώπου-Υπολογιστή

### Ονοματεπώνυμο: Παναγιωταράκης Νίκος
### ΑΜ: Π2019152
### GitHub: [p19pana](https://github.com/p19pana)

### Πίνακας Παραδοτέων
| Εβδομάδα* | Παραδοτέο |
| --- | --- |
| 1 | [Εισαγωγή](#Εισαγωγή) |
| 2 | [CLI: Linux Basics](#2ο-Παραδοτέο---Command-Line-Interface---Linux-Basics) |
| 3 | Άσκηση γραμμής εντολών $ |
| 4 | συμμετοχικό περιεχόμενο 1A $ |
| 5 | Άσκηση γραμμής εντολών $ |
| 6 | συμμετοχικό περιεχόμενο 2A $ |
| 7 | Άσκηση γραμμής εντολών $ |
| 8 | συμμετοχικό περιεχόμενο 1B $ |
| 9 | Άσκηση γραμμής εντολών $ |
| 10 | συμμετοχικό περιεχόμενο 2B $ |
| 11 | Άσκηση γραμμής εντολών $ |
| 12 | [Κλείσιμο](#Κλείσιμο) |
| 13 | [Bonus](Bonus)|

# Εισαγωγή

## Προσδοκίες Μαθήματος / Εργασίας
Ξεκινώντας με αυτό το μάθημα, ο κύριος στόχος μου είναι η εξοικείωσή μου με τα συστήματα Unix, η δημιουργία προγραμμάτων και scripts και γενικότερα η εμβάθυνση στην παραγωγική διαδικασία που μπορούν να σου προσφέρουν αυτού του είδους τα συστήματα. Με άλλα λόγια, η μετάβαση από τα γνωστά σε όλους "έτοιμα" περιβάλλοντα σε περιβάλλοντα open source.

Πιο συγκεκριμένα, οι πτυχές του μαθήματος που θα επιθυμούσα να εστιάσω είναι η δημιουργία εύχρηστων προγραμμάτων / λειτουργιών που αποσκοπούν στο να κάνουν την διεπαφή με τον υπολογιστή πιο αποδοτική και χρηστική σε καθημερινή βάση. Πιστεύω πως ένας αρχάριος με περιβάλλοντα unix μπορεί να κερδίσει πάρα πολλά μπαίνοντας σιγά σιγά σε αυτήν την δημιουργική διαδικασία, όπου δεν είναι περιορισμένος από διάφορους παράγοντες και του δίνεται η δυνατότητα να γράψει και να χρησιμοποιήσει εργαλεία, έτσι ώστε να αξιοποιήσει στο έπακρο τις πτυχές του συστήματος που αυτός επιλέγει.

Σε δεύτερο στάδιο, το customization, δηλαδή η παραμετροποίηση του περιβάλλοντος στα μέτρα του χρήστη, καθώς η προσπάθεια να κάνει το σύστημα να μοιάζει και να συμπεριφέρεται "δικό του", μπορούν να δώσουν μεγάλο κίνητρο σε έναν αρχάριο χρήστη να θέλει να ασχοληθεί περισσότερο, και είναι και αυτά στην εμβέλεια των κομματιών που θα ήθελα να δουλέψω πάνω σε αυτό το μάθημα.

# Σύνοψη

# 2ο Παραδοτέο - Command Line Interface - Linux Basics
Ως πρώτη εργασία "προθέρμανσης", παρουσίασα τα βασικά χαρακτηριστικά του συστήματός μου, χρησιμοποιώντας βασικές εντολές / packages, καθώς και κάποιες μικροαλλαγές και παραμετροποιήσεις σε config files των προγραμμάτων που χρησιμοποιώ, έτσι ώστε να κάνω το σύστημα να φαίνεται πιο οικείο και προσαρμοσμένο στις προτιμήσεις μου.

### 1) Αλλαγή prompt name στο terminal
Αλλάζοντας μια global μεταβλητή του συστήματος, μπορούμε εύκολα να αλλάξουμε το prompt στο terminal που χρησιμοποιούμε. Έδωσα το Student ID μου ως User, HCI ως Host, να εμφανίζεται το Working Directory, καθώς και το σύμβολο που διαφοροποιεί τον κανονικό χρήστη από τον Superuser.

<a href="https://asciinema.org/a/mwgfvMcGB2AZPnU7y2ToY5q6N" target="_blank"><img src="https://asciinema.org/a/mwgfvMcGB2AZPnU7y2ToY5q6N.svg" /></a>

### 2) Προβολή dot files
Πρόκειται για ένα αρκετά απλό operation, με την εντολή 'ls -a' εμφανίζονται όλα τα dot files του home directory.

<p align="center">
    <img src="https://github.com/Tarakhs/HCISupp/blob/master/Images/ls.png" width="500" />
</p>

### 3) Config Files
Για αρχή, εμφάνισα κάποια "standard" configs από διάφορα προγράμματα, απλά παρουσιάζοντάς τα. Στην συνέχεια, παραμετροποίησα τα config files από προγράμματα που χρησιμοποιούσα περισσότερο, όπως για παράδειγμα του terminal emulator μου.

<p align="center">
    <img src="https://github.com/Tarakhs/HCISupp/blob/master/Images/bashrc.png" width="500" />
</p>
Bash Config: 'cat /etc/bash.bashrc'

<p align="center">
    <img src="https://github.com/Tarakhs/HCISupp/blob/master/Images/makepkgconf.png" width="500" />
</p>
MakePKG Config: 'cat /etc/makepkg.conf'

#### Terminal Customization
Κάνοντας uncomment κάποιες γραμμές και αλλάζοντας τις τιμές τους στο config file του Alacritty, η διαφορά είναι αισθητή. Συγκεκριμένα, έκανα το window που δημιουργείται να εμφανίζεται στο κέντρο της οθόνης, άλλαξα το default font, χαμήλωσα το opacity για να κάνω το παράθυρο διάφανο, και άλλαξα τα default keybinds για τις εντολές Copy / Paste έτσι ώστε να λειτουργούν με Ctrl+C/V αντί για Ctrl+Shift+C/V (Βοήθησε αρκετά στο scriptάκι που αναφέρω στο Bonus!)

Η διαφορά φαίνεται όταν το συγκρίνουμε με την όψη του Alacritty, όταν χρησιμοποιεί το default config:
<p float="left">
  <img src="https://github.com/Tarakhs/HCISupp/blob/master/Images/stock.png" width="200" />
  <img src="https://github.com/Tarakhs/HCISupp/blob/master/Images/custom.png" width="200" />
</p>
Terminal Config : 'cat ~/.config/alacritty/alacritty.yml'

### 4) List Software / Hardware Specs

<p align="center">
    <img src="https://github.com/Tarakhs/HCISupp/blob/master/Images/lshw.png" width="500" />
</p>
List Hardware: 'lshw -short'

<p align="center">
    <img src="https://github.com/Tarakhs/HCISupp/blob/master/Images/neofetch.png" width="500" />
</p>
List Software: 'neofetch'

#### Εντολές / Εργαλεία / Πηγές
sudo | ls | cat | lshw

[alacritty](https://github.com/alacritty/alacritty)
[nano](https://www.nano-editor.org/)
[neofetch](https://github.com/dylanaraps/neofetch)
[kate](https://kate-editor.org/)

[How to customize the Bash prompt in Linux](https://phoenixnap.com/kb/change-bash-prompt-linux)
[Changing Bash Prompt](https://bash.cyberciti.biz/guide/Changing_bash_prompt)
[A complete guide to Linux Config Files](https://www.cbtnuggets.com/blog/technology/system-admin/a-complete-guide-to-linux-config-files)

# Κλείσιμο

#### Εντολές / Εργαλεία / Πηγές

[asciinema](https://asciinema.org/)

[Arch Linux Wiki](https://wiki.archlinux.org/)
[Arch Linux Subreddit](https://www.reddit.com/r/archlinux/)
[Getting Started with Github](https://docs.github.com/en/get-started)
[Basic Writing/Formatting on Github](https://docs.github.com/en/github/writing-on-github/getting-started-with-writing-and-formatting-on-github/basic-writing-and-formatting-syntax)
[The Begginer's Guide to Shell Scripting](https://www.howtogeek.com/67469/the-beginners-guide-to-shell-scripting-the-basics/)
[Bash Scripting Tutorial for Begginers](https://linuxconfig.org/bash-scripting-tutorial-for-beginners)

# Bonus











