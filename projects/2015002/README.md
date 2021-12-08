# Μάθημα: Επικοινωνία Ανθρώπου Υπολογιστή
---

### Ονοματεπώνυμο: Μάριος Κωνσταντίνου
### Αριθμός Μητρώου: Π2015002
### GitHub Profile: [mariosconsta] - https://github.com/mariosconsta
---

## Πίνακας με σύνοψη των παραδοτέων

| Εβδομάδα* | Παραδοτέο |
| --- | --- |
| 1 | Φορκ του αποθετηρίου και δημιουργία της σελίδας της αναφοράς με τα προσωπικά στοιχεία σας, της σύνοψης με αυτόν τον πίνακα περιεχομένων, και συγγραφή της εισαγωγής με περιγραφή των αναγκών και των στόχων σας για το μάθημα |
| 2 | Άσκηση γραμμής εντολών |
| 3 | Άσκηση γραμμής εντολών |
| 4 | συμμετοχικό περιεχόμενο 1A |
| 5 | Άσκηση γραμμής εντολών |
| 6 | συμμετοχικό περιεχόμενο 2A |
| 7 | Άσκηση γραμμής εντολών |
| 8 | συμμετοχικό περιεχόμενο 1B |
| 9 | Άσκηση γραμμής εντολών |
| 10 | συμμετοχικό περιεχόμενο 2B |
| 11 | Άσκηση γραμμής εντολών |
| 12 | Τελική αναφορά και αίτημα ενσωμάτωσης για βαθμολόγηση |

# ΕΙΣΑΓΩΓΗ
--------
## Οι προσδοκίες μου από το μάθημα
Οι προσδοκίες μου από το μάθημα είναι να μάθω να χειρίζομαι τα Linux τα οποία είναι ένα πολύτιμο εργαλείο για έναν πληροφορικάριο! Πιο συγκεκριμένα αυτό που αποσκοπώ είναι να έχω μία πρώτη επαφή με τα Linux, GitHub και το terminal.

Επίσης θεωρώ πως το μάθημα είναι ένα πολύ καλό exposure στους φοιτητές. Τους εισάγει σε ένα περιβάλλον όπου μπορούν να αποκτήσουν δεξιότητες που μπορούν να χρησιμοποιηθούν σε ένα real-life scenario, ειδικά με το GitHub το οποίο είναι φανταστικό εργαλείο για source control το οποίο χρησιμοποιείτε από πολλές εταιρείες για Remote working κλπ, και για αυτό τον λόγο κατέβασα το Sourcetree και έκανα clone το Repository του μαθήματος έτσι ώστε να μπορώ να κάνω edit το README με vscode και commit τις αλλαγές από εκεί. Δεν ξέρω αν υπάρχουν καλύτερα προγράμματα για version control με git, ίσος πειραματιστώ με κάτι διαφορετικό στο μέλλον, ή αν έχετε να προτείνετε κάτι εσείς θα το εκτιμούσα.

![Workspace Overview](https://i.imgur.com/d9KsWFt.png)

# ΣΥΝΟΨΗ
Συνοπτικά το μάθημα είναι με απαλλακτική εργασία που είναι χωρισμένη σε 11 παραδοτέα διάρκειας 12 εβδομάδων και απαρτίζεται από 6 ασκήσεις γραμμής εντολών όπου οι 4 είναι ουσιαστικά η πρόοδός που κάναμε κατά την εγκατάσταση του απαιτούμενου λογισμικού (Arch Linux) και στην συνέχεια παραμένουν 2 ασκήσεις μεγαλύτερης πολυπλοκότητας. Ενδιάμεσα των ασκήσεων γραμμής εντολών έχουμε ασκήσεις συμμετοχικού περιεχομένου.

Για τις ασκήσεις γραμμής εντολών θα χρησιμοποιηθεί το εργαλείο Asciinema για την καταγραφή του terminal και για την ολοκλήρωση της εργασίας θα χρησιμοποιηθεί το vscode για την επεξεργασία του README αρχείου όπως και το Sourcetree για την επιμέλεια των αλλαγών / commits.

- [Markdown Cheat Sheet](https://www.markdownguide.org/cheat-sheet/)

# 2ο Παραδοτέο - Εγκατάσταση Arch Linux σε USB
Αρχικά έκανα μία μικρή έρευνα για τον πιο χρήσιμο τρόπο εγκατάστασης Arch Linux. USB ή Dual Boot; Κατέληξα σε USB για να μπορώ να έχω το λειτουργικό σύστημα μαζί μου σε όποια συσκευή είμαι. Στην συνέχεια ήθελα να δω την προτεινόμενη χωρητικότητα του USB η οποία δεν ήταν μεγάλη, στο τέλος αποφάσισα να πάρω ένα USB των 64GB για να είμαι άνετος και να μπορώ να πειραματιστώ εύκολα χωρίς να σκέφτομαι αν έχω αρκετό χώρο.

Γενικά για την εγκατάσταση χρειάστηκα 2 USBs. Ένα ήταν για το Arch iso και το άλλο είναι για την εγκατάσταση. Αφού έβαλα και τα 2 USB στον υπολογιστή μου, κατέβασα το Arch Linux 2021.11.01 -x86_64.iso από το official site του Arch Linux και έκανα burn το iso με το πρόγραμμα balenaEtcher στο μικρό USB που είχα.
Στην συνέχεια, έκανα restart τον υπολογιστή, μπήκα στα Bios και έκανα boot με το USB για να ξεκινήσω την εγκατάσταση του λογισμικού.

Για την εγκατάσταση ακολούθησα [αυτό](https://www.youtube.com/watch?v=yaThYGr37DI&t) το βίντεο. Παρόλα αυτά, αντιμετώπισα αρκετές δυσκολίες διότι πρώτη φορά κάνω εγκατάσταση λογισμικού με terminal. Έπρεπε να αφιερώσω αρκετό χρόνο στο να μάθω τις εντολές και ότι λάθος έκανα με ανάγκαζε να αρχίσω ξανά από την αρχή. Συγκεκριμένα κόλλησα στο σημείο που έπρεπε να δημιουργήσω Partitions στο USB που ήθελα να γίνει η εγκατάσταση και μετά να τα κάνω format. Πέρα από αυτά η εγκατάσταση έγινε ομαλά.

Στην συνέχεια έπρεπε να εγκαταστήσω αρκετά packages. Μερικά από αυτά ήταν το vim, linux, linux firmware και το base. Δεν θα μπω σε λεπτομέρεια για το installation, ουσιαστικά ακολούθησα το βίντεο. Θα αναφέρω μόνο τα σημεία που κόλλησα τα οποία ήταν τα partitions, η γενική χρήση του vim και στο κομμάτι που έπρεπε να δημιουργήσουμε έναν user και να του δώσουμε username.

Ολοκληρωματικά, αφού πλέον έχω ένα λειτουργικό Linux Distribution (Arch) μπορώ να αρχίσω να “παίζω” μαζί του και να πειραματιστώ. Για την επόμενη άσκηση θα δείξω τα configuration files του συστήματος και το system information για hardware και software.
## Πηγές:
- [Install Arch Linux on a removable medium](https://wiki.archlinux.org/title/Install_Arch_Linux_on_a_removable_medium)</br>
- [Arch Linux on a USB Stick](https://www.youtube.com/watch?v=yaThYGr37DI&t)</br>
- [VIM Tutorial](https://www.linuxfordevices.com/tutorials/linux/vim-tutorial)</br>
- [How do I exit the Vim Editor?](https://stackoverflow.com/questions/11828270/how-do-i-exit-the-vim-editor)</br>
- [useradd: invalid username username$](https://www.linuxquestions.org/questions/fedora-35/useradd-invalid-username-username%24-255871/)</br>
- [Arch Linux iso](http://ftp.cc.uoc.gr/mirrors/linux/archlinux/iso/2021.11.01/)</br>




# 3ο Παραδοτέο - Set-up the main dependencies and demonstrate your base system
Όπως ανάφερα παραπάνω, η εγκατάσταση ολοκληρώθηκε με επιτυχία. Αυτό **δεν** ίσχυε τελικά. Με την επανεκκίνηση του Arch παρατήρησα πολλά errors, system freezes και γενικά πάρα πολύ αργό boot time. Μου πήρε μέρες έντονης αναζήτησης για το κάθε error που μου έβγαζε(ήταν πολλά) το shell και παράλληλα χρειάστηκε να κάνω install τα Arch αρκετές φορές διότι το σύστημα δεν ήταν responsive με αποτέλεσμα να μην μπορώ ούτε boot να κάνω.

Μερικά από τα errors που χρειάστηκε να ψάξω ήταν kernel panic και κατά την διαδικασία εγκατάστασης packages το error “task blocked for more than 120 seconds”.
“task blocked for more than 120 seconds” ήταν το error που με βοήθησε να βρω το πρόβλημα. Συγκεκριμένα βρήκα αυτά τα τρία threads [#1](https://serverfault.com/questions/887440/how-should-we-understand-this-locked-for-more-than-120-seconds-call-trace), [#2](https://serverfault.com/questions/456980/server-hung-with-blocked-for-more-than-120-seconds-diskless) και [#3](https://unix.stackexchange.com/questions/181505/what-does-task-mysqldxxx-blocked-for-more-than-120-seconds-mean) στα οποία έλεγε για πιθανό προβληματικό USB. Μετά από περίπου 10 προσπάθειες εγκατάστασης του Arch σε ένα καινούριο USB 64GB που αγόρασα αποκλειστικά για το Arch, είπα να δοκιμάσω την εγκατάσταση σε ένα 32GB type C USB που είχα. 

Μετά από 10 εγκαταστάσεις του Arch δεν χρειάστηκα καν το tutorial. Κατά την διάρκεια της εγκατάστασης στο type C USB που είχα παρατήρησα πως η διαδικασία προχωρούσε υπερβολικά γρηγορότερα, το vim δεν κολλούσε σε κάθε αλλαγή που έκανα, τα packages κατέβαιναν αμέσως και γενικά όλα ήταν πιο ομαλά.
Ολοκληρωματικά, πλέον μπορώ να πω με σιγουριά πως έχω ένα λειτουργικό Linux Distribution (Arch) και μπορώ να συνεχίσω με τα παραδοτέα.

Στο συγκεκριμένο παραδοτέο θα δείξω το shell configuration, software και hardware specifications και τα .dot αρχεία του συστήματος:
| Title | Link |
| ----------- | ----------- |
| Shell configuration files | [link](https://asciinema.org/a/454543) |
| Software / Hardware Specs | [link](https://asciinema.org/a/454542) |
| Showing .dot files        | [link](https://asciinema.org/a/454540) |

## Πηγές:
- [How should we understand this 'locked for more than 120 seconds' call trace?](https://serverfault.com/questions/887440/how-should-we-understand-this-locked-for-more-than-120-seconds-call-trace)</br>
- [Server hung with "blocked for more than 120 seconds", diskless](https://serverfault.com/questions/456980/server-hung-with-blocked-for-more-than-120-seconds-diskless)</br>
- [What does "task mysqld:xxx blocked for more than 120 seconds" mean?](https://unix.stackexchange.com/questions/181505/what-does-task-mysqldxxx-blocked-for-more-than-120-seconds-mean)</br>

# 4ο Παραδοτέο - Συμμετοχικό περιεχόμενο: Α1
Σαν χόμπι έχω τα video games και για αυτό ήθελα να βρω κάτι σε αυτή την ενότητα. Η πρώτη εικόνα που βρήκα είναι η πρώτη κονσόλα για video games που δημιουργήθηκε το 1972 με όνομα Magnavox Odyssey!<br />

https://github.com/mariosconsta/_gallery/blob/master/First-generation-of-video-game-consoles.md<br />

Η δεύτερη εικόνα είναι το Xbox adaptive controller της Microsoft το οποίο είναι ένα εξαιρετικό εργαλείο για άτομα με ειδικές ανάγκες που θέλουν να παίξουν παιχνίδια.<br />

https://github.com/mariosconsta/_gallery/blob/master/Xbox-Adaptive-Controller.md

# 5ο Παραδοτέο -

# 6ο Παραδοτέο - 

# 7ο Παραδοτέο - Download mp3

Για την επόμενη εργασία γραμμής εντολών επέλεξα αυτήν που ήθελε να κάνουμε search στο YouTube, να κατεβάσουμε το τραγούδι και στην συνέχεια να το παίξουμε σε ενάν player. Μετά από πάρα πολύ ώρα βρήκα το εργαλείο ytfzf.<br/>

Έκανα install όλα τα dependencies με την εντολή sudo apt install <dependence name>, άλλαξα το working directory για το κατέβασμα των τραγουδιών, χρησιμοποίησα την εντολή ytfzf -d, μετά έγραψα Tash για να βρω το αγαπημένο μου τραγούδι και να το κατεβάσω στο working directory που έβαλα (/home/Marios/Deskstop/Music).<br/>

#### Asciinema link:  [Παραδοτέο 7](https://asciinema.org/a/433601)<br />

#### Η εργασία ουσιαστικά χωρίζετε στα εξής βήματα:

### 1. Αναζήτηση του τραγουδιού στο YouTube
Η αναζήτηση ήταν σχετικά εύκολη δεδομένου ότι το ytfzf εγκαταστάθηκε σωστά. Απλά γράφουμε ytfzf και μετά σε κάνει promt να γράψεις τι θα ήθελες να κάνει search. Στην συνέχεια αφού κάνεις την αναζήτηση σου βγάζει διάφορες επιλογές, διαλέγεις το κομμάτι σου και πατάς enter για αναπαραγωγή.<br/>

Θα αναφέρω πολλά προβλήματα που είχα με την αναζήτηση στο τέλος.

### 2. Κατέβασμα του τραγουδιού από το YouTube σε μορφή mp3
Το κατέβασμα είναι σχεδόν το ίδιο με την αναζήτηση. Στην αρχή για αναζήτηση γράψαμε ytfzf, τώρα για το κατέβασμα πρέπει να προσθέσουμε -d στο τέλος. Δηλαδή ytfzf -d.
Στην συνέχεια όπως και πριν, γράφουμε αυτό που θέλουμε να κατεβάσουμε και μας βγάζει μία λίστα από επιλογές. Διαλέγουμε το τραγούδι και ξεκινάει το κατέβασμα.<br/>

Θα ήθελα να σημειώσω δύο πράγματα. Το ytfzf χρησιμοποιεί το youtube-dl για το κατέβασμα. Για να μπορέσω να κατεβάσω ένα βίντεο έπρεπε πρώτα να γράψω sudo apt install youtube-dl. Έπειτα έπρεπε να αλλάξω το working directory του terminal έτσι ώστε το τραγούδι να κατέβει στο φάκελο που ήθελα και όχι στο default.

### 3. Αναπαραγωγή του τραγουδιού από το terminal
Η αναπαραγωγή του τραγουδιού ήταν σχετικά εύκολη. Χρειάστηκα δύο πράγματα. MPV και Mplayer. Αφού τα κατέβασα, έπρεπε να αλλάξω το working directory του terminal με την εντολή cd /home/Marios/Deskstop/Music. Για να βεβαιωθώ ότι είμαι στο σωστό directory έγραψα την εντολή pwd η οποία μου κάνει print το working directory του terminal. Στην συνέχεια έγραψα την εντολή ls η οποία που κάνει print τα contents του directory. Στον φάκελο είχα μόνο το τραγούδι που κατέβασα και έτσι για αναπαραγωγή έγραψα "mplayer 'όνομα αρχείου'". Πάτησα enter και ξεκίνησε το τραγούδι να παίζει. Στο asciinema δεν φαίνεται το βίντεο αλλά φαίνεται η αναπαραγωγή από το terminal.

### Προβλήματα που χρειάστηκε να επιλυθούν μέχρι την εκτέλεση:
Προβλήματα είχα πολλά. Αρχικά προσπάθησα να αναζητήσω τραγούδι με το εργαλείο ytp. Το API δεν ήθελε να συνεργαστεί και διάβασα πως πρέπει να κάνω δικό μου API μέσο Google Console. Το έκανα αλλά και πάλι, μου έβγαζε άλλα errors. Στην συνέχεια δοκίμασα το εργαλείο youtube-viewer αλλά και πάλι τίποτα, μετά από το youtube-viewer δοκίμασα ακόμη ένα εργαλείο αλλά και πάλι κάτι δεν του άρεσε. Τέλος βρήκα το ytfzf και κατάφερα να κάνω την αναζήτηση μου. Το άλλο πρόβλημα που είχα ήταν πως δεν ήξερα ότι έπρεπε να αλλάξω το directory του terminal για να κατέβει το τραγούδι εκεί που ήθελα. Έψαξα λίγο και έμαθα για τις εντολές cd, pwd και ls. Τέλος, το τελευταίο πρόβλημα που είχα ήταν τα errors που έβγαζε το ytfzf. Η λύση ήταν να δω αν είναι εγκατεστημένο το python3 με την εντολή whereis python3. Ήταν εγκατεστημένο, στην συνέχεια έπρεπε να δημιουργήσω ένα symlink με την εντολή sudo ln -s /usr/bin/python3 /usr/bin/python.

### Εργαλεία που χρησιμοποίησα:
ytfzf, youtube-dl, mpv, mplayer

### Συνδέσμοι πηγών:
[ytfzf - Search (With Thumbnails) And Play YouTube Videos From A Terminal](https://www.linuxuprising.com/2021/03/ytfzf-search-with-thumbnails-and-play.html) |
[youtube-dl](https://github.com/ytdl-org/youtube-dl) |
[ytfzf](https://github.com/pystardust/ytfzf) |
[How To Play Video From The Terminal In Linux With Mplayer](https://www.youtube.com/watch?v=D1lGmif0w94) |
[How to change directory in Linux terminal](https://www.cyberciti.biz/faq/how-to-change-directory-in-linux-terminal/) |
[mplayer](https://github.com/philipl/mplayer) |
[mpv](https://github.com/mpv-player/mpv) |
[ubuntu /usr/bin/env: python: No such file or directory](https://stackoverflow.com/questions/3655306/ubuntu-usr-bin-env-python-no-such-file-or-directory/61608129?fbclid=IwAR2Jah5CiPubxsJW2HsH3Td1LvLRTtSLNPZ9-Wv3QpzCbSUKBhrrjcbQ4T0) |

# 9ο Παραδοτέο - Organise todo list
Για την επόμενη άσκηση προγραμματισμού αποφάσισα να οργανώσω τις σημειώσεις μου με το emacs. <br/>
  
Αρχικά εγκατέστησα το emacs γράφοντας sudo apt-get install emacs, άφησα το terminal να κάνει τα δικά του και σε μερικά δευτερόλεπτα ήταν έτυμο.
Στην συνέχεια, άνοιξα το emacs και δημιούργησα ένα αρχείο todo.org . Επειδή έβαλα .org στο τέλος, αυτόματα το αρχείο θα είναι σε org mode.
Έπειτα άρχισα το γράψιμο της λίστας μου. Γενικά δεν ήμουν/είμαι καθόλου εξοικειωμένος με το emacs. Χρειάστηκα αρκετή εξάσκηση για να μάθω τα hot keys και πολύ διάβασμα του manual/documentation. <br/>
  
##Προβλήματα δεν αντιμετώπισα
Η εγκατάσταση πήγε ομαλά και η λίστα δημιουργήθηκε χωρίς κανένα θέμα. Στο μόνο σημείο που κόλλησα ήταν στο ότι αν έγραφα emacs άνοιγε GUI αντί στο terminal με αποτέλεσμα το asciinema να μην μπορεί να το κάνει record. Αυτό το έλυσα με την προσθήκη του -nw (emacs -nw) που ουσιαστικά λέει στο emacs να ανοίξει χωρίς παράθυρο. Παράλληλα έπρεπε να γράψω κάπου τα hotkeys διότι ήταν αρκετά και δεν μπορούσα να τα αποστηθίσω.


#### Asciinema link: [Παραδοτέο 9](https://asciinema.org/a/433950)<br />

### Εργαλεία που χρησιμοποίησα:
emacs

### Συνδέσμοι πηγών:
[Emcas Documentation](https://www.gnu.org/software/emacs/documentation.html) |
[The Emacs Editor](https://www.gnu.org/software/emacs/manual/html_node/emacs/index.html) |
[Running Shell Commands from Emacs](https://www.gnu.org/software/emacs/manual/html_node/emacs/Shell.html) |
[How to open Emacs inside Bash](https://stackoverflow.com/questions/8746227/how-to-open-emacs-inside-bash) |

# 11ο Παραδοτέο - Άσκηση γραμμής εντολών

Για την τελευταία άσκηση γραμμής εντολών επέλεξα να κάνω αυτήν που ζητούσε να χωρίσουμε το terminal σε πολλαπλά παράθυρα. Για την εργασία θα χρησιμοποιήσω το tmux το οποίο εγκατέστησα με την εντολή sudo apt-get install tmux. Παράλληλα κατέβασα το glances για να κάνω monitor τον υπολογιστή μου. 
Αφού εγκατέστησα όλα τα εργαλεία ξεκίνησα με το tmux γράφοντας tmux στο terminal. Έπειτα χρησιμοποίησα τα hotkeys CTRL + b και μετά “ ή % για να διαχωρίσω τα παράθυρα. Επέλεξα το τέρμα δεξία παράθυρο με το hotkey CTRL + b και μετά το δεξιά βελάκι. Έγραψα glances για να ξεκινήσει το monitoring program και έπειτα με τον ίδιο τρόπο πήγα στο αριστερά παράθυρο και να παίξω ένα βίντεο στο YouTube. Βέβαια το asciinema κάνει record μόνο το terminal αλλά φαίνεται από το buffering πως γίνετε αναπαραγωγή. Τέλος ήθελα να παίξω και ένα τραγούδι που είχα κατεβασμένο από μια άλλη εργασία και δημιούργησα ακόμη ένα παράθυρο στο terminal με τα ίδια hotkeys. Όπως είπα πριν, το βίντεο δεν φαίνεται αλλά φαίνεται το buffering. <br />

#### Asciinema link: [Παραδοτέο 11](https://asciinema.org/a/433960)<br />
  
### Συνδέσμοι πηγών:
[Tmux Command Examples To Manage Multiple Terminal Sessions](https://ostechnix.com/tmux-command-examples-to-manage-multiple-terminal-sessions/) |
[Glances - An eye on your system](https://github.com/nicolargo/glances) |
[Glances - Quickstart](https://glances.readthedocs.io/en/latest/quickstart.html) |


# ΕΠΙΛΟΓΟΣ
Μου άρεσαν αρκετά οι εργασίες του μαθήματος. Το μάθημα σου δίνει την επιλογή να διαλέξεις ποιες εργασίες θες να κάνεις για το κάθε παραδοτέο και έχει εργασίες για κάθε level. Παράλληλα δεν είχα την ευκαιρία μέχρι τώρα να έρθω σε επαφή με το Linux και το GitHub και μπορώ να πω πως τα βρήκα πάρα πολύ ωραία και χρήσιμα εργαλεία (ειδικά το GitHub).
