# Επικοινωνία Ανθρώπου-Υπολογιστή

### Ονοματεπώνυμο: Παναγιωταράκης Νίκος
### ΑΜ: Π2019152
### GitHub: [p19pana](https://github.com/p19pana) / [Υποστηρικτικό Υλικό](https://github.com/Tarakhs/HCISupp)
### Asciinema: [p19pana](https://asciinema.org/~p19pana)

### Πίνακας Παραδοτέων
| Εβδομάδα | Παραδοτέο |
| --- | --- |
| 1 | [Εισαγωγή](#Εισαγωγή) |
| 2 | [CLI: Linux Basics](#2ο-Παραδοτέο---Command-Line-Interface---Linux-Basics) |
| 3 | [CLI: ToDo List](#3ο-Παραδοτέο---Command-Line-Interface---ToDo-List) |
| 4 | [Συμμετοχικό 1Α](#4ο-Παραδοτέο---Συμμετοχικό-Περιέχομενο---Εικόνες) |
| 5 | [CLI: Weather Report](#5ο-Παραδοτέο---Command-Line-Interface---Weather-Report) |
| 6 | [Συμμετοχικό 2Α](#6ο-Παραδοτέο---Συμμετοχικό-Περιέχομενο---Διαφάνειες-/-Χρονολόγιο) |
| 7 | [CLI: TMUX](#7ο-Παραδοτέο---Command-Line-Interface---TMUX) |
| 8 | [Συμμετοχικό 1Β](#8ο-Παραδοτέο---Συμμετοχικό-Περιεχόμενο---Μελέτη-Περίπτωσης) |
| 9 | [CLI: Youtube Downloader](#9ο-Παραδοτέο---Command-Line-Interface---Youtube-Downloader) |
| 10 | [Συμμετοχικό 2Β](#10ο-Παραδοτέο---Συμμετοχικό-Περιεχόμενο---Βιογραφία) |
| 11 | [Κλείσιμο](#Κλείσιμο) |

# Εισαγωγή

## Προσδοκίες Μαθήματος / Εργασίας

Ξεκινώντας με αυτό το μάθημα, ο κύριος στόχος μου είναι η κατανόηση, αλλά και η εφαρμογή στην καθημερινότητα, του αντικειμένου της διάδρασης. Η πλήρη κατανόηση του εν λόγω αντικειμένου, μπορεί πιστεύω να πραγματοποιηθεί με πολλούς τρόπους, αλλά ένας από τους πιο αποτελεσματικούς στον οποίο και θα εστιάσω, είναι η σχεδίαση από κάτω προς τα πάνω. Ξεκινώντας με το αντικείμενο, κάποιος κατά τα άλλα "απόμακρος" χρήστης, αρχίζοντας να χτίζει πάνω σε αυτήν την διαδικασία, είτε αυτό είναι με εξοικείωση με συστήματα unix, με δημιουργία scripts, με εντολές τερματικού και άλλα, του δίνουν τις θεμελιώδεις γνώσεις καθώς και τον βάζουν να σκέφτεται ακολουθώντας τον διαδραστικό / παραγωγικό τρόπο σκέψης. Αυτές οι γνωστικές βάσεις, όσο συνεχίζουν και εφαρμόζονται στην καθημερινή ενασχόληση και έρευνα ενός χρήστη, τον φέρνουν όλο και πιο κοντά στο ολοκληρωμένη νοοτροπία του αντικειμένου, "δένοντας" με φαινόμενα όπως η αλληλεπίδραση του ανθρώπου με τον υπολογιστή, η αναδρομή, η δημιουργία διεπαφών, και κατ' επέκταση η ανάλυση των αναγκών που έχει ο άνθρωπος από την τεχνολογία, καθώς και το πως (και το γιατί) εμείς φτάνουμε σε σημείο να μπορούμε να ικανοποιήσουμε αυτές τις ανάγκες.

Ως προσωπικό στόχο που έθεσα στα πλαίσια του μαθήματος, ήταν να μπορέσω να φτάσω σε ένα σημείο οικειότητας με αυτή την διαδραστική νοοτροπία, έτσι ώστε να ενσωματώνεται στην καθημερινή μου ρουτίνα και εργασία, ως φοιτητής αλλά και ως άτομο το οποίο ασχολείται με την τεχνολογία γενικότερα. Το σημαντικό είναι να μπορέσει αυτή η νοοτροπία να αντικατοπτρίζεται στον τρόπο αλλά και στην μορφή αλληλεπίδρασης που έχει ο οποιοσδήποτε χρήστης με ένα σύστημα, κάτι το οποίο μπορεί να επιτευχθεί όταν κάποιος φτάσει στο σημείο να έχει την δυνατότητα να κατανοήσει σφαιρικά το αντικείμενο της διάδρασης, όπως αναφέρθηκε και παραπάνω.

Όσο αναφορά τις πιο "πρακτικές" δεξιότητες, ένας από τους πιο βασικούς τρόπους εκμάθησης αυτών είναι μέσω δημιουργία εφαρμογών (προγράμματα, λειτουργίες, scripts), τα οποία έχουν ως σκοπό να αυξήσουν την χρηστικότητα και την αποδοτικότητα που ο καθένας μας μπορεί να φτάσει χρησιμοποιώντας ένα σύστημα. Μέσω της μετάβασης που απαιτούν τα περισσότερα περιβάλλοντα unix, γίνεται ταυτόχρονα και μια μετάβαση από την νοοτροπία της εύκολης και απλής χρήσης έτοιμων εργαλείων σε μια δημιουργική διαδικασία, χωρίς περιορισμούς από διάφορους παράγοντες, που επιπλέον προσφέρει και πάρα πολλές δυνατότητες για συγγραφή και χρήση εργαλείων είτε από τον ίδιο τον χρήστη, είτε από άλλους μέσω της μορφής open-source, όλα από τα οποία ακολουθούν φυσικά την διαδραστική μορφή που θέλουμε να κατανοήσουμε και να εφαρμόσουμε.

Στην συνέχεια, όσο προχωράει το υλικό του μαθήματος, καθώς και το επίπεδο με το οποίο ο χρήστης νιώθει άνετα με το σύστημά του, μπορούν να αρχίζουν σιγά σιγά να εισέρχονται και άλλες έννοιες, όπως ιστορική αναδρομή, εναλλακτικοί μεθόδοι διεπαφών, τρόποι διδασκαλίας και εκμάθησης, και άλλα. Αυτά προέρχονται κυρίως από τις συζητήσεις στις συναντήσεις του μαθήματος, από το υλικό το οποίο μας είναι διαθέσιμο για έρευνα όπως προχωράει το μάθημα (μέσα από τα κουίζ, αλλά και μέσα από τις πηγές και πληροφορίες που υπάρχουν στην ιστοσελίδα του βιβλίου, την οποία και ασχολούμαστε μέσω των ασκήσεων συμμετοχικού περιεχομένου), καθώς και από μεταγενέστερη δικιά μας έρευνα. Το ιδανικό είναι αυτές οι πηγές να επηρεάζουν τον τρόπο με τον οποίο ανταποκρινόμαστε στις ασκήσεις, αλλά και οι θεμελιώδεις γνώσεις που εξάγουμε μέσω αυτών να επηρεάζουν και αυτές με την σειρά τους το πως αντιλαμβανόμαστε και ερμηνεύουμε τις πηγές, επιτυγχάνοντας έτσι μια ολοκληρωμένη αλληλεπίδραση.



## Σύνοψη

Στο επίπεδο των ασκήσεων που ζητήθηκαν και των παραδοτέων που βρίσκονται στον πίνακα, οι λεπτομέρειες είναι οι εξής:

Στα παραδοτέα 1 με 6, βρίσκονται τα βασικά προαπαιτούμενα και εισαγωγικά, για παράδειγμα η παρουσίαση της εγκατάστασης των Arch, τα boot logs, κλπ. Οι εργασίες γραμμής εντολών εντάσσονται στην κατηγορία των ασκήσεων warmup, με τις περισσότερες από αυτές να είναι βασικά εργαλεία με σκοπό να μας κάνουν να εξοικειωθούμε με το περιβάλλον unix (αν και σε αρκετές από αυτές έγιναν προσθήκη scripts, όπου θεωρούσα πως είχαν να προσφέρουν κάποια ενίσχυση ή να κάνουν πιο αποτελεσματική την χρήση του εργαλείου).

Στα παραδοτέα 7 με 12, οι υπόλοιπες 3 ασκήσεις γραμμής εντολών (της κατηγορίας hci) είχαν να κάνουν με πιο εφαρμοσμένα και κοντά στο αντικείμενο παραδείγματα, τα οποία όμως προαπαιτούν αρκετές γνώσεις που πάρθηκαν από τις προηγούμενες ασκήσεις και παραδοτέα.

Οι ασκήσεις συμμετοχικού περιεχομένου πραγματεύτηκαν κυρίως προσθήκες καταχωρήσεων στην ιστοσελίδα του βιβλίου του μαθήματος, οι οποίες όμως είχαν πολλά να προσφέρουν όσο αναφορά πηγές και υλικό για διάβασμα, με την μορφή εικόνων, χρονολογίων και βιογραφικών.

Όσο αναφορά την δομή, το κάθε παραδοτέο έχει μια μικρή περίληψη, ως κυρίως μέρος μια παρουσίαση ή του αποτελέσματος ή την χρήση του εργαλείου (Συνήθως με μορφή GΙF, εκτός και αν δεν ήταν απαιραίτητο οπότε με την προσθήκη μιας απλής εικόνας), και τέλος το υλικό το οποίο βοήθησε με το παραδοτέο (οδηγοί, documentation, εντολές, πηγές). Επιπλέον, γενικότερες πηγές που υπήρξαν αλλά δεν εντάσσονται συγκεκριμένα σε κάποιο παραδοτέο αλλά ήταν περισσότερο γενικής φύσεως, έχουν αναφερθεί με τον ίδιο τρόπο, αλλά στο τέλος της εργασίας, μετά τον επίλογο.



# 2ο Παραδοτέο - Command Line Interface - Linux Basics

Ως πρώτη εργασία "προθέρμανσης", παρουσίασα τα βασικά χαρακτηριστικά του συστήματός μου, χρησιμοποιώντας βασικές εντολές / packages, καθώς και κάποιες μικροαλλαγές και παραμετροποιήσεις σε config files των προγραμμάτων που χρησιμοποιώ, έτσι ώστε να κάνω το σύστημα να φαίνεται πιο οικείο και προσαρμοσμένο στις προτιμήσεις μου.

### 1) Αλλαγή prompt name στο terminal
Αλλάζοντας μια global μεταβλητή του συστήματος, μπορούμε εύκολα να αλλάξουμε το prompt στο terminal που χρησιμοποιούμε. Έδωσα το Student ID μου ως User, HCI ως Host, να εμφανίζεται το Working Directory, καθώς και το σύμβολο που διαφοροποιεί τον κανονικό χρήστη από τον Superuser.

<p align="center">
    <img src="https://github.com/Tarakhs/HCISupp/blob/master/GIFs/prompt.gif" width="500" />
</p>

### 2) Προβολή dot files
Πρόκειται για ένα αρκετά απλό operation, με την εντολή `ls -a` εμφανίζονται όλα τα dot files του home directory.

<p align="center">
    <img src="https://github.com/Tarakhs/HCISupp/blob/master/GIFs/ls.gif" width="500" />
</p>

### 3) Config Files
Για αρχή, εμφάνισα κάποια "standard" configs από διάφορα προγράμματα, απλά παρουσιάζοντάς τα. Στην συνέχεια, παραμετροποίησα τα config files από προγράμματα που χρησιμοποιούσα περισσότερο, όπως για παράδειγμα του terminal emulator μου.

<p align="center">
    <img src="https://github.com/Tarakhs/HCISupp/blob/master/GIFs/bash.gif" width="500" />
</p>

Bash Config: `cat /etc/bash.bashrc`

<p align="center">
    <img src="https://github.com/Tarakhs/HCISupp/blob/master/GIFs/makepkg.gif" width="500" />
</p>

MakePKG Config: `cat /etc/makepkg.conf`

### 4) Προβολή Boot Logs
Τα Arch έχουν το systemd ως system manager, το οποίο χρησιμοποιεί ένα ενοποιημένο εργαλείο για logging, το `journalctl`. Παρ' όλα αυτά, με τα κατάλληλα flags, μπορούμε να ανακαλέσουμε τα logs μόνο για το συγκεκριμένο boot session. Επειδή το αρχείο εξόδου ήταν αρκετά μεγάλο, το πέρασα μέσω ενός pipe σε ένα [αρχείο txt](https://github.com/Tarakhs/HCISupp/blob/master/Various/log.txt).

<p align="center">
    <img src="https://github.com/Tarakhs/HCISupp/blob/master/GIFs/log.gif" width="500" />
</p>

### 5) List Software / Hardware Specs
Για την προβολή των χαρακτηριστικών του συστήματος, χρησιμοποιήθηκαν διάφορα εργαλεία, είτε αυτά ήταν εντολές unix ή ξεχωριστά βοηθητικά πακέτα, όπως για παράδειγμα το **neofetch**.

<p float="center">
  <img src="https://github.com/Tarakhs/HCISupp/blob/master/Images/disk.png" width="400" />
  <img src="https://github.com/Tarakhs/HCISupp/blob/master/Images/ram.png" width="400" />
</p>

Disk Stats: `df -h`  RAM Stats: `vmstat`

<p float="center">
  <img src="https://github.com/Tarakhs/HCISupp/blob/master/Images/cpu.png" width="500" />
  <img src="https://github.com/Tarakhs/HCISupp/blob/master/Images/network.png" width="500" />
</p>

CPU Stats: `htop`  Network Stats: `bmon`


<p align="center">
    <img src="https://github.com/Tarakhs/HCISupp/blob/master/GIFs/lshw.gif" width="500" />
</p>

Hardware List: `lshw -short`

<p align="center">
    <img src="https://github.com/Tarakhs/HCISupp/blob/master/GIFs/neofetch.gif" width="500" />
</p>

Short Info: `neofetch`

### 6) Terminal Customization
Κάνοντας uncomment κάποιες γραμμές και αλλάζοντας τις τιμές τους στο config file του Alacritty, η διαφορά είναι αισθητή. Συγκεκριμένα, έκανα το window που δημιουργείται να εμφανίζεται στο κέντρο της οθόνης, άλλαξα το default font, χαμήλωσα το opacity για να κάνω το παράθυρο διάφανο, και άλλαξα τα default keybinds για τις εντολές Copy / Paste έτσι ώστε να λειτουργούν με Ctrl+C/V αντί για Ctrl+Shift+C/V.
Η διαφορά φαίνεται όταν το συγκρίνουμε με την όψη του Alacritty, όταν χρησιμοποιεί το default config:
<p float="center">
  <img src="https://github.com/Tarakhs/HCISupp/blob/master/Images/stock.png" width="500" />
  <img src="https://github.com/Tarakhs/HCISupp/blob/master/Images/custom.png" width="500" />
</p>

Terminal Config: `cat ~/.config/alacritty/alacritty.yml`


#### Εντολές / Εργαλεία / Πηγές

sudo | ls | cat | lshw | df | htop | vmstat

[alacritty](https://github.com/alacritty/alacritty) |
[nano](https://www.nano-editor.org/) |
[neofetch](https://github.com/dylanaraps/neofetch) |
[kate](https://kate-editor.org/) |
[bmon](https://linux.die.net/man/1/bmon)

[How to customize the Bash prompt in Linux](https://phoenixnap.com/kb/change-bash-prompt-linux) |
[Changing Bash Prompt](https://bash.cyberciti.biz/guide/Changing_bash_prompt) |
[A complete guide to Linux Config Files](https://www.cbtnuggets.com/blog/technology/system-admin/a-complete-guide-to-linux-config-files)



# 3ο Παραδοτέο - Command Line Interface - ToDo List

Χρησιμοποιώντας το πρόγραμμα **todo.txt**, μπορούμε να δούμε και να επεξεργαστούμε ένα απλό αρχείο txt με σκοπό να κρατάμε ένα todo list με τα πράγματα που θέλουμε να κάνουμε. Η χρήση του εργαλείου είναι αρκετά απλή, με τα βασικά command `todo.sh add x` και `todo.sh del x` για να εισάγουμε / διαγράψουμε καταχωρήσεις στο αρχείο. Με την εντολή `todo.sh ls` εμφανίζεται μια λίστα με τις καταχωρήσεις που έχουμε κάνει μέχρι στιγμής.

<p align="center">
    <img src="https://github.com/Tarakhs/HCISupp/blob/master/GIFs/todo.gif" width="600" />
</p>

Επιπλέον, μας δίνεται η δυνατότητα να σημειώσουμε καταχωρήσεις ως ολοκληρωμένες, χρησιμοποιώντας τις κατάλληλες παραμέτρους, όπως με την εντολή `todo.sh done 1`, με την οποία σημειώνουμε την 1η καταχώρηση στην λίστα. Στην προκειμένη περίπτωση, τα entries που σημειώνονται ως ολοκληρωμένα γράφονται σε αντίστοιχο αρχείο **done.txt**. Το flag `listall` τραβάει τα entries και από τα δύο αρχεία **todo** και **done**, έτσι ώστε να βλέπουμε ποιά πράγματα έχουν γίνει ήδη και ποιά είναι προς ολοκλήρωση.

<p align="center">
    <img src="https://github.com/Tarakhs/HCISupp/blob/master/GIFs/done.gif" width="600" />
</p>

Σε γενικές γραμμές, είναι ένα απλό και lightweight εργαλείο που είναι αρκετά αποτελεσματικό στο να μας βοηθάει να κρατάμε επαφή με τα task τα οποία καλούμαστε να πραγματοποιήσουμε ή έχουμε στον νου μας ότι πρέπει να γίνουν αυτήν την χρονική περίοδο. Κατ' επέκταση, θα μπορούσε και να γίνει μια ενσωμάτωση με ένα window manager, έτσι ώστε να εμφανίζεται μια μικρογραφία του αρχείου txt στο desktop, έτσι ώστε να είναι ακόμη πιο προσβάσιμο και να μας θυμίζει συνεχώς τα task προς εκπλήρωση, αυξάνοντας έτσι την παραγωγικότητά μας.


#### Εντολές / Εργαλεία / Πηγές

[todo.txt](http://todotxt.org/) |
[todo.txt-cli](https://github.com/todotxt/todo.txt-cli)



# 4ο Παραδοτέο - Συμμετοχικό Περιέχομενο - Εικόνες

Σε αυτό το παραδοτέο ζητήθηκε η προσθήκη κάποιων εικόνων στο online διαδραστικό βιβλίο του μαθήματος. Έπρεπε να γίνει fork του repository του site, να γίνουν οι κατάλληλες προσθήκες στα submodules που βρίσκονται οι απαραίτητες εικόνες / λεζάντες καθώς και παραμετροποιήσεις του config file. Στην συνέχεια, έγινε host της ιστοσελίδας στο Netlify. Επέλεξα να κάνω προσθήκες πάνω σε 2 καταχωρήσεις, τις οποίες μπορείτε να δείτε παρακάτω:

[Εικόνα 1](https://p19pana-pibook.netlify.app//gallery/ascii-art/) | [Εικόνα 2](https://p19pana-pibook.netlify.app//gallery/msn/)

Μαζί με τα αντίστοιχα markdown αρχεία:

[Repo Config](https://github.com/p19pana/site/blob/master/_config.yml) | [Εικόνα 1](https://github.com/p19pana/_gallery/blob/25e38e3d4c3db5275555ffc197ac9d918987b579/ascii-art.md) | [Εικόνα 2](https://github.com/p19pana/_gallery/blob/25e38e3d4c3db5275555ffc197ac9d918987b579/msn.md)

Εικόνες:

Εικόνα 1 [Full](https://github.com/p19pana/images/blob/master/ascii-art.jpg) / [Thumb](https://github.com/p19pana/images/blob/master/ascii-art-thumb.jpg)

Εικόνα 2 [Full](https://github.com/p19pana/images/blob/master/msn.jpg) / [Thumb](https://github.com/p19pana/images/blob/master/msn-thumb.jpg)


#### Εντολές / Εργαλεία / Πηγές

[netlify](https://app.netlify.com) |
[gimp](https://www.gimp.org/)



# 5ο Παραδοτέο - Command Line Interface - Weather Report

Σε αυτή την άσκηση, παρουσίασα το εργαλείο wttr.in, το οποίο επιτρέπει στον χρήστη να προβάλλει ένα καιρικό δελτίο μέσα στο terminal. Όπως βλέπουμε από τα παρακάτω GIFs, είναι ένα απλό εργαλείο. Τρέχοντας την εντολή `curl wttr.in`, μας βγάζει ένα συνοπτικό δελτίο καιρού για την τρέχουσα τοποθεσία μας (την οποία τραβάει μέσω της διεύθυνσης IP μας).

<p align="center">
    <img src="https://github.com/Tarakhs/HCISupp/blob/master/GIFs/weatherBasic.gif" width="800" />
</p>

Βλέπουμε πως λαμβάνουμε μια σχετικά πλήρη ενημέρωση για τα καιρικά φαινόμενα, καθώς και σημαντικές λεπτομέρειες όπως θερμοκρασία, ταχύτητα ανέμου, και ποσοστό υγρασίας. Αλλάζοντας τις παραμέτρους που δίνουμε στην εντολή (Χρησιμοποιώντας `?` αντί για το σύνηθες `-`), μπορούμε να διαλέξουμε το πόσο εκτενής θα είναι η αναφορά που θα μας δοθεί, το αν θέλουμε να εμφανίζεται η τοποθεσία που δώσαμε προς εκτίμηση, και άλλα. Με τις παραμέτρους που έδωσα, έκανα να εμφανιστεί μια εκτίμηση καιρού πάνω στο αεροδρόμιο της Κέρκυρας, μόνο για την σημερινή ημέρα, αφαιρώντας το μεγάλο μήνυμα εμφάνισης τοποθεσίας, καθώς και το μήνυμα που εμφανίζει ο δημιουργός στο τέλος. Στο σημείο που διαφέρει, πιστεύω, από παρόμοια προγράμματα είναι οι δυνατότητες που προσφέρει σχετικά με την εξαγωγή του δελτίου σε μορφή PNG, κάτι το οποίο σίγουρα ανοίγει πολλές πόρτες για ενσωμάτωση σε άλλα προγράμματα ή ακόμη και σε κάποιο γραφικό περιβάλλον με την μορφή widget.

<p align="center">
    <img src="https://github.com/Tarakhs/HCISupp/blob/master/GIFs/weatherParams.gif" width="800" />
</p>

Σίγουρα αποτελεί ένα πολύ χρήσιμο και lightweight πρόγραμμα για να μπορεί ένας χρήστης να λάβει γρήγορα και αποτελεσματικά τις απαραίτητες για αυτόν πληροφορίες σύμφωνα με τα καιρικά φαινόμενα. Η αλήθεια είναι πως ο τρόπος που ήταν δομημένο με μπέρδεψε λίγο στην αρχή, ειδικά όσο αναφορά τις παραμέτρους και την μετατροπή της αναφοράς σε εικόνα PNG. Για αυτό και έγραψα ένα απλό script, το οποίο και θεωρώ πως μπορεί να κάνει πιο εύκολη την παραμετροποίηση του εργαλείου, πάνω στα πιο δημοφιλή σενάρια.

Το συγκεκριμένο script, στην ουσία ζητάει από τον χρήστη (κάποιες) πιθανές προτιμήσεις σχετικά με τις πληροφορίες που θέλει να του εμφανιστούν, και στην συνέχεια τις εισάγει μορφοποιημένες στην εντολή. Αρχικά, ζητάει για την εισαγωγή μιας τοποθεσίας. Αυτό γίνεται είτε με το όνομα μιας πόλης (πχ. "Αθήνα"), με έναν κωδικό αεροδρομίου (πχ. "SKG"), ή και ακόμη και με μια διεύθυνση IP. Επίσης δίνεται η δυνατότητα αναζήτησης μιας τοποθεσίας, χρησιμοποιώντας το σύμβολο "~". Έπειτα, ζητείται η κυρίως μορφή του δελτίου που θα εμφανιστεί, συγκεκριμένα αν αυτό θα είναι συνοπτικό (δίνοντας απλά τον ωριαίο καιρό), αν θα είναι το δελτίο καιρού της τρέχουσας ημέρας ή της τρέχουσας μαζί με της επόμενης μέρας. Τέλος, ζητείται από τον χρήστη να εισάγει εάν θα ήθελε το δελτίο να αποτυπωθεί σε πλήρη μορφή, όπου δίνονται οι καιρικές συνθήκες για τέσσερις ζώνες της ημέρας (Πρωί/Μεσημέρι/Απόγευμα/Βράδυ) ή σε μικρή μορφή (Πρωί/Βράδυ).

<p align="center">
    <img src="https://github.com/Tarakhs/HCISupp/blob/master/GIFs/weatherScript.gif" width="1000" />
</p>

Το script είναι διαθέσιμο [εδώ](https://github.com/Tarakhs/HCISupp/blob/master/Scripts/weather.sh)


#### Εντολές / Εργαλεία / Πηγές

echo | read | tr

[wttr.in](https://github.com/chubin/wttr.in) |
[wttr-switcher](https://github.com/midzer/wttr-switcher) |
[curl](https://curl.se/) |
[wget](https://www.gnu.org/software/wget/)

[wttr Help](https://wttr.in/:help)



# 6ο Παραδοτέο - Συμμετοχικό Περιέχομενο - Διαφάνειες / Χρονολόγιο

Ως επέκταση του παραδοτέου σχετικά με το διαδραστικό site του βιβλίου, σε αυτό το παραδοτέο έγιναν ενσωματώσεις των εικόνων στα αντίστοιχα σετ διαφανειών, καθώς και στο χρονολόγιο.

Slideshow: [Τρόποι Διάδρασης](https://p19pana-pibook.netlify.app//slides/styles/) | [Έξυπνες Διεπαφές Χρήστη](https://p19pana-pibook.netlify.app//slides/iui/)

Χρονολόγια: [Πολυμεσικά Συστήματα](https://p19pana-pibook.netlify.app//timeline/multimedia/) | [Τερματικό](https://p19pana-pibook.netlify.app//timeline/terminal/)

Markdown Αρχεία:

[Τρόποι Διάδρασης](https://github.com/p19pana/site/blob/master/_slides/styles.md) | [Έξυπνες Διεπαφές Χρήστη](https://github.com/p19pana/site/blob/master/_slides/iui.md)

[Πολυμεσικά Συστήματα](https://github.com/p19pana/site/blob/master/_timeline/multimedia.md) | [Τερματικό](https://github.com/p19pana/site/blob/master/_timeline/terminal.md)



# 7ο Παραδοτέο - Command Line Interface - TMUX

Το TMUX είναι ένα εργαλείο Terminal Multiplexing, το οποίο δίνει την δυνατότητα να χωρίσουμε ένα terminal window σε πολλαπλές περιοχές. Έτσι, δίνεται η δυνατότητα να τρέχουν διαφορετικές διεργασίες σε μια οθόνη, το οποίο μπορεί να έχει πολλαπλά προτερήματα, όπως σε περιπτώσεις ευχρηστίας (π.χ. να έχουμε μια πηγή στο ένα μέρος της οθόνης και το κείμενο που γράφουμε στο άλλο), σε multitasking, ή ακόμη και εάν θέλουμε να τρέξουμε πολλαπλά terminals πάνω στο ίδιο shell. Είναι ένα εργαλείο το οποίο σίγουρα μπορεί να αυξήσει την παραγωγικότητα σε διάφορους τομείς χρήσης του τερματικού, ακόμα και σε απαιτητικές ενασχολήσεις.

Για αρχή, μετά την εγκατάσταση άνοιξα ένα καινούργιο session και ξεκίνησα με τα βασικά, δημιουργώντας 2 pane αριστερά - δεξιά στον χώρο του terminal και βλέποντας το παρόν αρχείο στο ένα pane και ένα monitoring tool στο άλλο.

<p align="center">
    <img src="https://github.com/Tarakhs/HCISupp/blob/master/GIFs/tmux.gif" width="1000" />
</p>

Σε γενικές γραμμές, το tmux αποδείχθηκε πιο απλό στην χρήση από ότι μου φάνηκε εξ' αρχής (όσο αναφορά τα pane splits, attachment - detachment, window switching), όμως η αλήθεια είναι πως τα shortcuts του μου φάνηκαν λίγο υπερβολικά και τις περισσότερες φορές κατέληγα να ξεχνάω τα ανάλογα keybinds για να το χρησιμοποιήσω σωστά. Ευτυχώς, οι εντολές για αλλαγή των keybinds ήταν αρκετά απλές και με λίγες αλλαγές στο config file του κατάφερα να το προσαρμόσω έτσι ώστε να είναι πιο βολικό προς την προσωπική μου χρήση. Χρησιμοποιώντας τα κουμπιά Shift για τα windows, alt για τα panes, σε συνδυασμό με τα arrow keys το navigation έγινε αρκετά πιο εύκολο και η όλη χρήση του προγράμματος έγινε πιο γρήγορη. Στο configuration υπήρχε και η επιλογή για mouse support, ωστόσω μου φάνηκε αντίθετη στην όλη νοοτροπία του multiplexing (και των linux), καθώς και στην ταχύτητα των keyboard controls, οπότε δεν την χρησιμοποίησα.

<p align="center">
    <img src="https://github.com/Tarakhs/HCISupp/blob/master/Images/binds.png" width="400" />
</p>

Το TMUX μου φάνηκε ως ένα από τα πιο "χοντροκομμένα" εργαλεία με τα οποία ασχολήθηκα στα πλαίσια του μαθήματος, όμως και με αρκετό περιθώριο για παραμετροποίηση. Μπορούν να τραβηχτούν αρκετές παράλληλες μεταξύ του tmux και των tiling window managers (τα οποία πολλοί χρησιμοποιούν για τα προτερήματα που αναφέρθηκαν παραπάνω), τόσο και στην λειτουργία, όσο και στον τρόπο δομής / παραμετροποίησης μέσω config file. Τα περισσότερα commands ήταν λίγο περίπλοκα και ήθελαν ψάξιμο στο documentation για να κατανοηθεί η σωστή χρήση τους, και γενικότερα ο τρόπος που τρέχει το όλο πρόγραμμα ήταν πολύ as-is, για παράδειγμα πρέπει να γίνεται χειροκίνητα ο τερματισμός κάθε διεργασίας και δεν γίνεται αυτόμετα μετά από το detachment από το session. Παρ' όλα αυτά, μετά από αρκετή χρήση, όπου και ο βαθμός εξοικείωσής μου με το πρόγραμμα είχε αυξηθεί λιγάκι, σε συνδυασμό με ένα εξατομικευμένο config file, βρέθηκα να το χρησιμοποιώ αρκετά καθώς η δυνατότητα χωρίσματος σε panes προσέφερε μεγάλη άνεση για τις περισσότερες εργασίες που χρησιμοποιούσα το σύστημά μου.

<p align="center">
    <img src="https://github.com/Tarakhs/HCISupp/blob/master/GIFs/tmuxconf.gif" width="1000" />
</p>

Ολόκληρο το config είναι διαθέσιμο [εδώ](https://github.com/Tarakhs/HCISupp/tree/master/Various/.tmux.conf), όπου μαζί με την αλλαγή των keybinds έγιναν και κάποιες μικροαλλαγές (γραφικά, indexing, κλπ).


#### Εντολές / Εργαλεία / Πηγές

[tmux](https://github.com/tmux/tmux)

[TMUX - Arch Wiki](https://wiki.archlinux.org/title/tmux) |
[Getting Started with TMUX](https://linuxize.com/post/getting-started-with-tmux/) |
[Everything you need to know about TMUX](https://arcolinux.com/everthing-you-need-to-know-about-tmux-configuration/) |
[TMUX Cheat Sheet](https://tmuxcheatsheet.com/) |
[How do I understand the TMUX Design Architecture and Internals?](https://www.quora.com/How-do-I-understand-the-tmux-design-architecture-and-internals)



# 8ο Παραδοτέο - Συμμετοχικό Περιεχόμενο - Μελέτη Περίπτωσης

Σε αυτό το παραδοτέο έγινε προσθήκη ενός case study στην ιστοσελίδα του βιβλίου. Επέλεξα το θέμα του Τερματικού.

Case Study: [Terminal](https://p19pana-pibook.netlify.app//case-study/terminal/)

Markdown Αρχεία: [Content](https://github.com/p19pana/extras/blob/master/cs-terminal.md) | [Extra](https://github.com/p19pana/site/blob/master/_case-study/terminal.md)

#### Πηγές

[What is a Computer Terminal?](https://www.wise-geek.com/what-is-a-computer-terminal.htm) |
[The DEC VT100 Terminal](http://www.columbia.edu/cu/computinghistory/vt100.html) |
[A Brief History of Terminal Emulation](https://www.ttwin.com/blog/270-history-terminal-emulation) |
[VT100 Terminal Emulator](https://www.vandyke.com/products/securecrt/terminal_emulation_vt100.html) |
[Why are they called "Terminal Emulators" instead of just "Terminals"?](https://superuser.com/questions/96628/why-are-things-like-gnome-terminal-called-terminal-emulators-instead-of-just) |
[When Computers Had Personality](https://blog.console.dev/when-computers-had-personality-a-history-of-consoles/)

[Serial Terminals: New and Old](https://www.youtube.com/watch?v=nU9xCiMIr68) |
[DEC VT100 Connects to World's First Website](https://www.youtube.com/watch?v=6zBvYs5Zej0)



# 9ο Παραδοτέο - Command Line Interface - Youtube Downloader

Σε αυτήν την εργασία υλοποιήθηκε ένα script το οποίο επιτρέπει εύκολο κατέβασμα τραγουδιών μέσω του Terminal. Υπάρχουν διάφορα διαθέσιμα εργαλεία τα οποία μας το επιτρέπουν αυτό, όπου στην προκειμένη περίπτωση χρησιμοποίησα το `mpsyt` για αναζήτηση και ανάκτηση ενός url από κάποιο κομμάτι (κυρίως λόγω του interface του), το `youtube-dl` για το κατέβασμα του κομματιού και το `nvlc` για αναπαραγωγή.

To `mpsyt` είναι ένα αρκετά ευκολόχρηστο εργαλείο, με ένα απλό interface μπορεί εύκολα να γίνει μια αναζήτηση για ένα κομμάτι στο YouTube, και μετά να γίνει ή αναπαραγωγή ή αντιγραφή του url του από μια λίστα αποτελεσμάτων αναζήτησης. Να σημειωθεί πως εκτός από το API Key που έπρεπε να δημιουργηθεί από το Google account μου, έτσι ώστε να μπορεί το πρόγραμμα να εμφανίσει αποτελέσματα, έπρεπε και να τροποποιήσω λιγάκι τον κώδικα του pafy (πάνω στο οποίο βασίζεται το mps) λόγω της τελευταίας έκδοσης του YouTube η οποία δεν υποστηρίζει εμφανίσιμα dislikes, με αποτέλεσμα το mps να μην λειτουργούσε καθώς προσπαθούσε να ανακτήσει αυτά τα δεδομένα.

<p align="center">
    <img src="https://github.com/Tarakhs/HCISupp/blob/master/GIFs/mps.gif" width="1000" />
</p>

Το `youtube-dl` αποτελεί αυτό και ένα αξιόπιστο (αν και πιο απλοϊκό) πρόγραμμα. Δίνοντάς του ένα url, download directory και format το πρόγραμμα αυτό κατεβάζει το κομμάτι που επιλέξαμε ενώ ταυτόχρονα μας εμφανίζει και ένα progress bar μέσω του terminal. Ο κύριος λόγος που επέλεξα το συγκεκριμένο ανάμεσα από τα πολλαπλά cli downloaders που είναι διαθέσιμα, ήταν η δυνατότητα που προσέφερε για μετατροπή του format. Ακόμη και αν του δίναμε url το οποίο αναφερόταν σε βίντεο (Το οποίο συμβαίνει κατά 95% στην περίπτωση του YouTube), με ένα απλό flag γίνεται η μετατροπή του αρχείο σε audio file αμέσως μετά το κατέβασμα, χωρίς ανάγκη για κάποιο εξωτερικό μετατροπέα.

<p align="center">
    <img src="https://github.com/Tarakhs/HCISupp/blob/master/GIFs/ytdl.gif" width="1000" />
</p>

Τέλος, η επιλογή του player ήταν η αρκετά καθιερωμένη από πολλούς επιλογή του VLC, με την open-source cli έκδοσή του, `nvlc` να προσφέρει μια αποτελεσματική λύση στην ανάγκη για ένα media player, μέσω των shortcuts και του μινιμαλιστικού interface.

Όσο αναφορά το script, οι λόγοι υλοποίησής του ήταν πάλι παράλληλοι με τους λόγους που έγιναν scripts για τα προηγούμενα cli εργαλεία, και αυτοί ήταν κυρίως η δημιουργία ενός interface το οποίο θα έσωζε χρόνο στον χρήστη από το να εισάγει πολλαπλά flags και επιλογές στο κάθε πρόγραμμα ξεχωριστά. Έτσι, το script αυτό δίνει στον χρήστη την δυνατότητα να κάνει μια γρήγορη αναζήτηση για ένα κομμάτι, και παίρνοντας το url αυτόματα, να το κατεβάζει στο επιλεγμένο directory χρησιμοποιώντας ένα επιλεγμένο όνομα. Μετά, ο χρήστης μπορεί να επιλέξει αν θέλει να συνεχίσει να κατεβάζει και άλλα κομμάτια ή να ανοίξει το directory με την μουσική και να αρχίσει την αναπαραγωγή μέσω του VLC. Σημείωση: Έθεσα το m4a ως default format για κατέβασμα, καθώς θεωρείται πλέον από τα καλύτερα formats για αρχεία ήχου, τόσο σε μέγεθος αλλά και σε ποιότητα/συμπίεση. Σε περίπτωση που είναι επιθυμητό κάποιο άλλο format, αυτό γίνεται εύκολα αλλάζοντας μια μεταβλητή στην αρχή του script.

<p align="center">
    <img src="https://github.com/Tarakhs/HCISupp/blob/master/GIFs/downloader.gif" width="1000" />
</p>
(Για την ευκολία του GIF κατέβασα κομμάτια που ήταν ήδη αποθηκευμένα, έτσι ώστε το asciinema να μην έβγαινε πολύ μεγάλο)

Επιπλέον, ενσωμάτωσα μια αυτόματη σάρωση του clipboard για κάποιο YouTube link, έτσι ώστε σε περίπτωση που ο χρήστης είχε κάποιο url ήδη αντεγραμμένο, να γίνεται το κατέβασμα ακόμα πιο γρήγορα.

<p align="center">
    <img src="https://github.com/Tarakhs/HCISupp/blob/master/GIFs/downloader2.gif" width="1000" />
</p>

Το script είναι διαθέσιμο [εδώ](https://github.com/Tarakhs/HCISupp/blob/master/Scripts/youtube.sh)


#### Εντολές / Εργαλεία / Πηγές

[mpsyt](https://github.com/mps-youtube/mps-youtube) |
[youtube-dl](https://github.com/ytdl-org/youtube-dl) |
[vlc](https://www.videolan.org/vlc/) |
[pafy](https://pypi.org/project/pafy/) |
[xsel](https://linux.die.net/man/1/xsel)

[MPSYT - Troubleshooting](https://github.com/mps-youtube/mps-youtube/wiki/Troubleshooting) |
[MPSYT - Removed Dislike Count](https://github.com/mps-youtube/pafy/pull/305) |
[YouTube API Key](https://developers.google.com/youtube/v3/getting-started)



# 10ο Παραδοτέο - Συμμετοχικό Περιεχόμενο - Βιογραφία

Η τελευταία άσκηση συμμετοχικού περιεχομένου ήταν η προσθήκη μιας βιογραφίας στο site του βιβλίου.

Biography: [Dennis Ritchie](https://p19pana-pibook.netlify.app//biography/dennis-ritchie/)

Markdown Αρχεία: [Content](https://github.com/p19pana/extras/blob/master/bio-ritchie.md) | [Extra](https://github.com/p19pana/site/blob/master/_biography/dennis-ritchie.md)

#### Πηγές

[Dennis M. Ritchie - Biography & Facts](https://www.britannica.com/biography/Dennis-M-Ritchie) |
[DMR - Home Page](https://www.bell-labs.com/usr/dmr/www/) |
[The Father of the C Programming Language](https://www.unixmen.com/dennis-m-ritchie-father-c-programming-language/) |
[What is Multics?](https://whatis.techtarget.com/definition/Multics-Multiplexed-Information-and-Computing-Service) |
[Discovering Dennis Ritchie's Lost Dissertation](https://spectrum.ieee.org/discovering-computer-legend-dennis-ritchies-lost-dissertation)


[The Idea Factory](https://www.amazon.com/Idea-Factory-Great-American-Innovation/dp/0143122797) |
[The C Programming Language](http://my.mycuhk.net/sem2booklist.doc) |
[The Unix Time-Sharing System](https://onlinelibrary.wiley.com/doi/abs/10.1002/j.1538-7305.1978.tb02136.x)


[AT&T Archives: The UNIX Operating System](https://www.youtube.com/watch?v=tc4ROCJYbm0) |
[Pushing the Limits of Technology](https://www.youtube.com/watch?v=g3jOJfrOknA)


# Κλείσιμο

Φτάνοντας στο τέλος του εξαμήνου και ολοκληρώνοντας τα αντίστοιχα παραδοτέα και εργασίες, νιώθω πως επιτεύχθηκαν αρκετοί στόχοι μου σχετικά με το περιεχόμενο και την μεθοδολογία του μαθήματος, αναφορικά πάντα και με τα στοιχεία που αναφέρθηκαν στην Εισαγωγή. Μέσω της έρευνας και ενασχόλησης με αντικείμενα που μας παρουσιάστηκαν και μέσω των κουίζ αλλά και των συζητήσεων στην τάξη, αποκτήθηκε μια ευρύτερη κατανόηση των λόγων και των φαινομένων που συντέλεσαν στην εξέλιξη του αντικειμένου της διάδρασης και το πως αυτή έφτασε στην σημερινή της μορφή. Όσο αναφορά το πιο πρακτικό κομμάτι της εργασίας, με την μεγαλύτερη εξοικείωση με τα παραμφερή συστήματα αλλά και εφαρμογές/προγράμματα που αναπτύχθηκε καθώς ολοκλήρωνα τα παραδοτέα, πιστεύω πως βοήθησαν στην κατανόηση της σύνδεσης των εννοιών που κληθήκαμε να ερευνήσουμε, με τον σκοπό της διαδραστικής νοοτροπίας, τόσο και στις χρήσεις και προγράμματα που γράφουμε εμείς οι ίδιοι, αλλά και στα προγράμματα που χρησιμοποιούμε σε καθημερινή βάση, έτσι ώστε να επιτύχουμε μια ορθή διεπαφή με ένα σύστημα. Το συμμετοχικό περιεχόμενο ήταν και αυτό μια σπουδαία πηγή πολλών θεμάτων ανάγνωσης πάνω στο θέμα, προσφέροντάς μας διάφορα σημεία τα οποία μπορούσαμε να ψάξουμε πιο επιλεκτικά έτσι ώστε και να τα κατανοήσουμε αλλά και να τα εφαρμόσουμε στην διαδικασία μας πάνω στην εργασία.

Σε γενικές γραμμές, θεωρώ πως το μάθημα αυτό είχε πολλά να προσφέρει, και προσωπικά μου άλλαξε τον τρόπο σκέψης και αντιμετώπισης πολλών εννοιών πάνω στον τομέα της πληροφορικής τα οποία θεωρούσα δεδομένα. Ο τρόπος σκέψης στον οποίον μπαίνεις καθώς ενασχολείσαι με την επικοινωνία ανθρώπου-υπολογιστή, καθώς και με τους διάφορους τρόπους διάδρασης και μετάδοσης των εννοιών αυτών, πιστεύω πως είναι μια νοοτροπία η οποία συμβαδίζει σε ένα μεγάλο βαθμό με αυτήν που καλούμαστε να κληρονομήσουμε ως άτομα τα ασχολούνται με τον κλάδο αυτό, καθώς μας προσφέρει μια θεμελιώδη και διαχρονική αντιμετώπιση πάνω στα περισσότερα προβλήματα που θα μας παρουσιαστούν.

#### Εντολές / Εργαλεία / Πηγές

[asciinema](https://asciinema.org/)

[Arch Linux Wiki](https://wiki.archlinux.org/) |
[Arch Linux Subreddit](https://www.reddit.com/r/archlinux/) |
[Getting Started with Github](https://docs.github.com/en/get-started) |
[Basic Writing/Formatting on Github](https://docs.github.com/en/github/writing-on-github/getting-started-with-writing-and-formatting-on-github/basic-writing-and-formatting-syntax) |
[Mastering Markdown](https://guides.github.com/features/mastering-markdown/) |
[The Begginer's Guide to Shell Scripting](https://www.howtogeek.com/67469/the-beginners-guide-to-shell-scripting-the-basics/) |
[Bash Scripting Tutorial for Begginers](https://linuxconfig.org/bash-scripting-tutorial-for-beginners) |
[Git Tools - Submodules](https://git-scm.com/book/en/v2/Git-Tools-Submodules) |
[Mastering Git Submodules](https://medium.com/@porteneuve/mastering-git-submodules-34c65e940407)










