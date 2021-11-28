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
| 8 | συμμετοχικό περιεχόμενο 1B $ |
| 9 | Άσκηση γραμμής εντολών $ |
| 10 | συμμετοχικό περιεχόμενο 2B $ |
| 11 | Άσκηση γραμμής εντολών $ |
| 12 | [Κλείσιμο](#Κλείσιμο) |

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

<p float="left">
  <img src="https://github.com/Tarakhs/HCISupp/blob/master/Images/disk.png" width="400" />
  <img src="https://github.com/Tarakhs/HCISupp/blob/master/Images/ram.png" width="400" />
</p>
Disk Stats: `df -h`
RAM Stats: `vmstat`

<p float="left">
  <img src="https://github.com/Tarakhs/HCISupp/blob/master/Images/cpu.png" width="600" />
  <img src="https://github.com/Tarakhs/HCISupp/blob/master/Images/network.png" width="600" />
</p>
CPU Stats: `htop`
Network Stats: `bmon`

<p align="center">
    <img src="https://github.com/Tarakhs/HCISupp/blob/master/GIFs/lshw.gif" width="500" />
</p>
Hardware List: `lshw -short`

<p align="center">
    <img src="https://github.com/Tarakhs/HCISupp/blob/master/GIFs/neofetch.gif" width="500" />
</p>
Short Info: `neofetch`


#### Terminal Customization
Κάνοντας uncomment κάποιες γραμμές και αλλάζοντας τις τιμές τους στο config file του Alacritty, η διαφορά είναι αισθητή. Συγκεκριμένα, έκανα το window που δημιουργείται να εμφανίζεται στο κέντρο της οθόνης, άλλαξα το default font, χαμήλωσα το opacity για να κάνω το παράθυρο διάφανο, και άλλαξα τα default keybinds για τις εντολές Copy / Paste έτσι ώστε να λειτουργούν με Ctrl+C/V αντί για Ctrl+Shift+C/V.
Η διαφορά φαίνεται όταν το συγκρίνουμε με την όψη του Alacritty, όταν χρησιμοποιεί το default config:
<p float="left">
  <img src="https://github.com/Tarakhs/HCISupp/blob/master/Images/stock.png" width="500" />
  <img src="https://github.com/Tarakhs/HCISupp/blob/master/Images/custom.png" width="500" />
</p>
Terminal Config : `cat ~/.config/alacritty/alacritty.yml`


#### Εντολές / Εργαλεία / Πηγές
sudo | ls | cat | lshw

[alacritty](https://github.com/alacritty/alacritty) |
[nano](https://www.nano-editor.org/) |
[neofetch](https://github.com/dylanaraps/neofetch) |
[kate](https://kate-editor.org/) |

[How to customize the Bash prompt in Linux](https://phoenixnap.com/kb/change-bash-prompt-linux) |
[Changing Bash Prompt](https://bash.cyberciti.biz/guide/Changing_bash_prompt) |
[A complete guide to Linux Config Files](https://www.cbtnuggets.com/blog/technology/system-admin/a-complete-guide-to-linux-config-files) |


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

[todo.txt](http://todotxt.org/)
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

[netlify](https://app.netlify.com)
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
[wget](https://www.gnu.org/software/wget/) |

[wttr Help](https://wttr.in/:help)


# 6ο Παραδοτέο - Συμμετοχικό Περιέχομενο - Διαφάνειες / Χρονολόγιο

Ως επέκταση του παραδοτέου σχετικά με το διαδραστικό site του βιβλίου, σε αυτό το παραδοτέο έγιναν ενσωματώσεις των εικόνων στα αντίστοιχα σετ διαφανειών, καθώς και στο χρονολόγιο.

Slideshow: [Τρόποι Διάδρασης](https://p19pana-pibook.netlify.app//slides/styles/) | [Έξυπνες Διεπαφές Χρήστη](https://p19pana-pibook.netlify.app//slides/iui/)

Χρονολόγια: [Πολυμεσικά Συστήματα](https://p19pana-pibook.netlify.app//timeline/multimedia/) | [Τερματικό](https://p19pana-pibook.netlify.app//timeline/terminal/)

Markdown Αρχεία:

[Τρόποι Διάδρασης](https://github.com/p19pana/site/blob/master/_slides/styles.md) | [Έξυπνες Διεπαφές Χρήστη](https://github.com/p19pana/site/blob/master/_slides/iui.md) | [Πολυμεσικά Συστήματα](https://github.com/p19pana/site/blob/master/_timeline/multimedia.md) | [Τερματικό](https://github.com/p19pana/site/blob/master/_timeline/terminal.md)


# 7ο Παραδοτέο - Command Line Interface - TMUX

#### Εντολές / Εργαλεία / Πηγές


# Κλείσιμο

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










