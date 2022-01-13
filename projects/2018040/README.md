# Τμήμα Πληροφορικής Ιονίου Πανεπιστημίου

### Μάθημα: Επικοινωνία Ανθρώπου-Υπολογιστή

#### Στοιχεία Φοιτητή
* Ονοματεπώνυμο: ΙΩΑΝΝΗΣ ΚΑΝΑΚΗΣ
* Αριθμός Μητρώου: Π2018040 

#### Επιβλέπων Καθηγητής
* Κωνσταντίνος Χωριανόπουλος

# Παραδοτέα

| Εβδομάδα* | Παραδοτέο |
| --- | --- |
| 1 | <sup><a href="#1"> Φορκ του αποθετηρίου και δημιουργία της σελίδας της αναφοράς με τα προσωπικά στοιχεία σας, της σύνοψης με αυτόν τον πίνακα περιεχομένων, και συγγραφή της εισαγωγής με περιγραφή των αναγκών και των στόχων σας για το μάθημα </a></sup> |
| 2 | <sup><a href="#2"> Εγκατάσταση ArchLinux/Άσκηση γραμμής εντολών: get familiar with basic commands, reading documentation and editing files (warmup) </a></sup> |
| 3 | <sup><a href="#3"> Άσκηση γραμμής εντολών: set-up the main dependencies and demonstrate your base system (warmup) </a></sup> |
| 4 | <sup><a href="#4"> Συμμετοχικό περιεχόμενο 1A </a></sup> |
| 5 | <sup><a href="#5"> Άσκηση γραμμής εντολών (warmup) </a></sup> |
| 6 | <sup><a href="#6"> Συμμετοχικό περιεχόμενο 2A </a></sup> |
| 7 | <sup><a href="#7"> Άσκηση γραμμής εντολών: download-mp3(hci) </a></sup> |
| 8 | <sup><a href="#8"> Συμμετοχικό περιεχόμενο 1B </a></sup> |
| 9 | Άσκηση γραμμής εντολών |
| 10 | Συμμετοχικό περιεχόμενο 2B |
| 11 | <sup><a href="#11"> Άσκηση γραμμής εντολών: text editor and plug-ins for code highlighting and autocompletion (hci) </a></sup> |
| 12 | Τελική αναφορά και αίτημα ενσωμάτωσης για βαθμολόγηση |


###### [1]

Μέσα απο το μάθημα "Eπικοινωνία Aνθρώπου Yπολογιστή" θα ήθελα να γνωρίσω περισσότερα για την διάδραση που υπάρχει μεταξύ ανθρώπου και υπολογιστή καθώς πλεον ολοι μας βρισκόμαστε μπροστά απο μια οθόνη σχεδόν όλη μέρα.Βασικός στόχος μου για το μάθημα είναι η εξοικείωση με την πλατφόρμα του Github η οποία φαίνεται μια ενδιαφέρουσα πλατφόρμα καθώς λειτουργεί πολύ βοηθητικά για την οργάνωση και την σύνταξη real time αλλαγών σε κώδικα.Θεωρώ οτι είναι ένα αρκετά ενδιαφέρον μάθηα στο οποίο θα χρησημοποιήσουμε διάφορες γλώσσες,πράγμα που θα βελτιώσει την εμπειρία μου στον χώρο της πληροφορικής.Τέλος,θεωρώ οτι η παρακολούθηση των μαθημάτων θα με βοηθήσουν να κατανοήσω και να μάθω την ιστορία της διάδραση του ανρθώπου με τον υπολογιστή αλλά και την πλατφόρμα καθώς είναι μια οχι και τόσο εύκολα κατανοητή εφαρμογή.

##### [2]

## Εγκατάσταση Arch linux

**Βήματα:**

Ξεκινώ με ληψη και εγκατάσταση του oracle vm. Επιλέγω στην συνέχεια το κατάλληλο αρχειο iso των arch linux και το θετω ως boot option. Πληκτρολογω ``python -m archinstall guided`` για έναρξη της εγκατάστασης.

Επιλέγω γλώσσα, τοποθεσια και το κατάλληλο partition για την εγκατάσταση λογισμικού.

Επιλέγω btrfs file system και διαμορφνωνω hostname και password.

Επιλέγω το desktop ως προφιλ εγκατάστασης και το gnome ως γραφικο περιβαλλον.

Επιλέγω το all open source ως graphics adapter και το pipewire ως audio server.

Τελος επιλέγω το linux ως kernel εγκαταστασης,το network manager για την συνδεση στο διαδικτυο και το καταλληλο timezone.

Αναμένω την ληξη και εγκατασταση ολων των απαραιτητων πακετων και πληκτρολογω ``shutdown``.

Προχορώ σε boot ως root user και εγκαθιστω packages για τα ζητουμενα των ασκησεων ``sudo pacman -S git asciinema``.

**Αποτελέσματα:**

![arch1](https://github.com/p18kana/HCI-files/blob/main/arch1.png)

![arch2](https://github.com/p18kana/HCI-files/blob/main/arch2.png)

## Άσκηση γραμμής εντολών: get familiar with basic commands, reading documentation and editing files (warmup)

asciinema: https://asciinema.org/a/447448

**Βήματα:**

Κανω εγκατάσταση των απαραίτητων πακέτων  ``sudo pacman -S thefuck``, ``sudo pacman -S man``.

Με το ``asciinema rec -i 0.2`` ξεκιναω το record του terminal.

Με την εντολή ``man man`` κανω αναγνωση των οδηγιων του πακετου man.

Με την εντολή ``man vim`` κανω αναγνωση των οδηγιων του πακετου vim.

Με την εντολή ``neofetch`` κανω αναγνωση των χαρακτηριστικων του συστηματος.

Με την εντολή ``fuck`` εμφανιζεται η διορθωμενη εντολη.

Με την εντολή ``exit`` ολοκλήρωσα το recording του terminal.

**Αποτελέσματα:**

![fuck](https://github.com/p18kana/HCI-files/blob/main/2018040_thefuck.gif)

**Πηγή:** https://github.com/nvbn/thefuck


##### [3]

## Άσκηση γραμμής εντολών: set-up the main dependencies and demonstrate your base system (warmup)

asciinema: https://asciinema.org/a/446281

**Βήματα:**

Κάνω εγκατάσταση των απαραίτητων πακέτων ``sudo pacman -S neofetch``

Με το ``asciinema rec -i 0.2`` ξεκιναω το record του terminal.

Εγκατάσταση του πακέτου dotfiles ``pip install dotfile``

Προβολή διαθέσιμων εντολών dotfiles ``dotfiles -h``

Προβολή λίστας αρχείων ``ls -a``

Εμφάνιση χαρακτηριστικών συστήματος ``neofetch``

Με την εντολή ``exit`` ολοκλήρωσα το recording του terminal.

**Αποτελέσματα:**

![neofetch](https://github.com/p18kana/HCI-files/blob/main/neofetch_2018040.png)

**Πηγή:** 

https://github.com/dylanaraps/neofetch

https://wiki.archlinux.org/title/Dotfiles

##### [4]

## Συμμετοχικο περιεχομενο 1α

**Βηματα:**

Κανω fork τα απαραιτητα αποθετηρια και δημιουργια των καταλληλων submodule με βαση τις οδηγιες του συμμετοχικου.

## Εικονα 1: UNIX

Εικονα στο προσωπικο site: https://p18kana.netlify.app//gallery/unix/

Αποθετηριο εικονας: https://github.com/p18kana/_gallery/blob/master/unix.md

Αποθετηριο thumbnail: https://github.com/p18kana/images/blob/master/unix-thumb.jpg

## Εικονα 2: Swift

Εικονα στο προσωπικο site: https://p18kana.netlify.app//gallery/swift/

Αποθετηριο εικονας: https://github.com/p18kana/_gallery/blob/master/swift.md

Αποθετηριο thumbnail: https://github.com/p18kana/images/blob/master/swift-thumb.png

Ενημέρωση του images submodule μεσω terminal: https://asciinema.org/a/449292

##### [5]

## Ασκηση γραμμης εντολων: check the weather (warmup)

Asciinema: https://asciinema.org/a/450875

**Βηματα:**

Με το ``asciinema rec -i 0.2`` ξεκιναω το record του terminal.

Κάνω εγκατάσταση των απαραίτητων πακέτων ``sudo pacman -S curl`` 

Προβολη καιρικων συνθηκων στην πολη μου ``curl wttr.in/Volos``

Με την εντολή ``exit`` ολοκλήρωσα το recording του terminal.

## Αποτελεσματα: 

![curl](https://github.com/p18kana/HCI-files/blob/main/wttr.in_p2018040.png)

**Πηγή:** https://github.com/chubin/wttr.in

## Ασκηση γραμμης εντολων: text editor and plug-ins for code highlighting and autocompletion (hci)

Asciinema: https://asciinema.org/a/450774 

**Βηματα:** 

Με το ``asciinema rec -i 0.2`` ξεκιναω το record του terminal.

Κάνω εγκατάσταση των απαραίτητων πακέτων ``sudo pacman -S vim``

Ανοιγμα αρχειου config ``sudo vim /home/p2018040/config`` 

Επεξεργασια αρχειου config και αποθηκευση αυτου ``:w, :q``

Με την εντολή ``exit`` ολοκλήρωσα το recording του terminal.

## Αποτελεσματα: 

![vim](https://github.com/p18kana/HCI-files/blob/main/vim_p2018040.png)

**Πηγή:** https://www.vim.org/docs.php

##### [6]

## Συμμετοχικο περιεχομενο 2α

## Διαφανειες και χρονολογιο:

Διαφανειες στο προσωπικο site:

Αποθετηριο διαφανειων: https://github.com/p18kana/site/blob/master/_slides/programming.md

Χρονολογιο στο προσωπικο site:

Αποθετηριο χρονολογιου: https://github.com/p18kana/site/blob/master/_timeline/programming.md

##### [7]

## Άσκηση γραμμής εντολών: download-mp3(hci)

asciinema: https://asciinema.org/a/444859 

**Βήματα:**

Κανω εγκατάσταση των απαραίτητων πακέτων  ``sudo pacman -S youtube-dl``, ``sudo pacman -S mpg123``.

Με το ``asciinema rec -i 0.2`` ξεκιναω το record του terminal.

Με την εντολή ``youtube-dl -x --audio-format mp3 "ytsearch:shallow"`` κάνω αναζήτηση και λήψη του κομματιού σε mp3.

Με την εντολή ``cd Downloads`` κατευθυνθήκαμε στο location του αρχείου mp3.

Με την εντολή ``mpg123 shallow.mp3`` έκανα αναπαραγωγή του αρχείου mp3.

Με την εντολή ``exit`` ολοκλήρωσα το recording του terminal.

**Αποτελέσματα:**

![download-mp3](https://github.com/p18kana/HCI-files/blob/main/2018040_download-mp3.gif)

**Πηγή:** https://www.youtube.com/watch?v=VMy-lb7Y-7k

##### [8]

## Συμμετοχικο περιεχομενο 1β

## Μελετη περιπτωσης: Swift, Swift Playgrounds και Διάδραση

Μελετη περιπτωσης στο προσωπικο site: https://p18kana.netlify.app//case-study/swift/

Αποθετηριο μελετης περιπτωσης: https://github.com/p18kana/site/blob/master/_case-study/swift.md

Αποθετηριο κειμενου μελετης: https://github.com/p18kana/site/blob/master/_case-study/cs-swift.md

##### [9]

##### [10]

## Συμμετοχικο περιεχομενο 2β 

## Βιογραφια: Chris Lattner

Βιογραφια στο προσωπικο site: https://p18kana.netlify.app//biography/chris-lattner/

Αποθετηριο βιογραφιας: https://github.com/p18kana/site/blob/master/_biography/chris-lattner.md

Αποθετηριο κειμενου βιογραφιας: https://github.com/p18kana/site/blob/master/_biography/bio-lattner.md

**Πηγη:** https://handwiki.org/wiki/Biography:Chris_Lattner

##### [11]

## Άσκηση γραμμής εντολών : text editor and plug-ins for code highlighting and autocompletion (hci)

asciinema: https://asciinema.org/a/457788

script: https://github.com/p18kana/HCI-files/blob/main/script.py

**Βήματα:**

Κανω εγκατάσταση των απαραίτητων πακέτων  ``sudo pacman -S vim``, ``sudo pacman -S vi``.

Με το ``asciinema rec -i 0.2`` ξεκιναω το record του terminal.

Επιλογη ενος print script σε python **script.py**

Ανοιγμα script ``vim script.py`` 

Χρηση INSERT mode με το πληκτρο ``I `` 

Χρηση READ-ONLY mode με το πληκτρο ``esc``

Ενεργοποιηση highlighting κωδικα ``syntax off``,``syntax on``

Αποθηκευση του αρχειου ``:w`` 

Εξοδος στο terminal  ``:q``

Με την εντολή ``exit`` ολοκλήρωσα το recording του terminal.

**Αποτελέσματα:** 

![syntax](https://github.com/p18kana/HCI-files/blob/main/syntax.png)

**Πηγή:** https://www.vim.org/about.php

##### [12] 

## Τελικη αναφορα: 

#### Σύνοψη Παραδοτέων:

| Παραδοτέο | Εγκυρότητα | Ολοκλήρωση |
| --- | --- | --- |
| Φορκ του αποθετηρίου και δημιουργία της σελίδας της αναφοράς με τα προσωπικά στοιχεία σας, της σύνοψης με αυτόν τον πίνακα περιεχομένων, και συγγραφή της εισαγωγής με περιγραφή των αναγκών και των στόχων σας για το μάθημα | ΕΓΚΥΡΟ | 100% |
| Εγκατάσταση ArchLinux/Άσκηση γραμμής εντολών: get familiar with basic commands, reading documentation and editing files (warmup) | ΕΓΚΥΡΟ | 100% |
| Άσκηση γραμμής εντολών: set-up the main dependencies and demonstrate your base system (warmup) | ΕΓΚΥΡΟ | 100% |
| Συμμετοχικό περιεχόμενο 1A | ΕΓΚΥΡΟ | 100% |
| Άσκηση γραμμής εντολών: check the weather (warmup) | ΕΓΚΥΡΟ | 100% |
| Συμμετοχικό περιεχόμενο 2A | ΕΓΚΥΡΟ | 100% |
| Άσκηση γραμμής εντολών: download-mp3(hci) | ΕΓΚΥΡΟ | 100% |
| Συμμετοχικό περιεχόμενο 1B | ΕΓΚΥΡΟ | 100% |
| Άσκηση γραμμής εντολών | ΕΓΚΥΡΟ | 100% |
| Συμμετοχικό περιεχόμενο 2B | ΕΓΚΥΡΟ | 100% |
| Άσκηση γραμμής εντολών: text editor and plug-ins for code highlighting and autocompletion (hci) | ΕΓΚΥΡΟ | 100% |
| Τελική αναφορά και αίτημα ενσωμάτωσης για βαθμολόγηση | ΕΓΚΥΡΟ | 100% |

#### Αναφορα στα εργαλεια που χρησιμοποηθηκαν:

#### Συμπερασματα: 

Ανακεφαλαιώνοντας, έχοντας ολοκληρώσει το σύνολο των παραδοτέων του μαθήματος "χ", θεωρώ πως οι αρχικοί στόχοι της εισαγωγής έχουν επιτευχθεί στο μέγιστο βαθμό.
Σημαντική είναι οι εξοικείωση που έλαβα με στην πλατφόρμα του Github για τη συγγραφή και ενημέρωση της αναφοράς μου, στο Netlify για το deploy και hosting του
προσωπικού μου site, καθώς και στη γραμμή εντολών των Arch Linux με τα διάφορα νέα packages στα ζητούμενα των ασκήσεων. Δυσκολίες παρατηρήθηκαν κυρίως στο
κομμάτι του συμμετοχικού περιεχομένου, λόγω σύνταξης και οργάνωσης των εκάστοτε submodule με βάση τα branches κάθε ζητούμενου repository. Βέβαια όλες μου οι
απορίες επιλύθηκαν με τη βοήθεια του διδακτικού προσωπικού, μέσω των παρουσιάσεων προόδου αλλά και μέσω των discussion issues στο repository του μαθήματος.
Συνολικά, τα παροδοτέα θεωρώ πως προσδίδουν πλήρη ανάπτυξη γνώσεων και δεξιοτήτων στο κομμάτι της πληροφορικής, ίσως τη σημαντικότερη παράμετρο-στόχο που
έθεσα στην εισαγωγική παράγραφο στις αρχές του εξαμήνου. Πάρα τις συχνές δυσκολίες που αντιμετώπισα στην πάροδο του χρόνου, κατάφερα να είμαι συνεπής στις
υποβολές κάθε εβδομαδιαίου παραδοτέου, συμπεριλαμβανομένης της τελικής αναφοράς. Δομικά το μάθημα αποδείχτηκε άρτιο, καθώς ο φοιτητής έιναι απασχολημένος
σε όλη τη διάρκεια του εξαμήνου με διαφορετικό αντικείμενο κάθε φορά. Κρίσιμο παράγοντα στα παραπάνω αποτελούν και τα εβδομαδιαία video quiz και κείμενα
που εμπλουτίζουν τις θεωρητικές γνώσεις γύρω από το αντικείμενο του μαθήματος και όλα αυτά σε μια φιλική-στον-φοιτητή πλατφόρμα.

#### Βιβλιογραφια:

[Linux Commands](https://www.guru99.com/linux-commands-cheat-sheet.html)

[Adding a submodule](https://asciinema.org/a/9vhZSNlQkO0KwH6lY6gPdWWB8)

[Updating a submodule](https://asciinema.org/a/bUMPJqXb9sepWRdlJPyToMpwl)

[Deleting a submodule](https://asciinema.org/a/3gFABL73VAJ21UoA4SVzlfRaf)
