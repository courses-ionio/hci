<h1>ΕΠΙΚΟΙΝΩΝΙΑ ΑΝΘΡΩΠΟΥ-ΥΠΟΛΟΓΙΣΤΗ<h1>

<h4>ΌΝΟΜΑ : ΣΩΤΗΡΙΟΣ ΚΟΥΤΟΠΟΥΛΗΣ<h4>

<h4>ΑΡΙΘΜΟΣ ΜΗΤΡΩΟΥ : Π2018143<h4>

<h4>Edpuzzle profile : p18kout Π2018143<h4>

<h4>Actively Learn profile : p18kout P2018143<h4>

<h4>asciinema profile : https://asciinema.org/~p18kout<h4>

# Παραδοτέα

| Εβδομάδα* | Παραδοτέο | Εγκυρότητα | Ολοκλήρωση |
| --- | --- | --- | --- |
| 1 | <sup><a href="#1"> Φορκ του αποθετηρίου,δημιουργία της σελίδας της αναφοράς και εισαγωγή με περιγραφή των αναγκών και στόχων για το μάθημα </a></sup> | ΕΓΚΥΡΟ | 100%
| 2 | <sup><a href="#2"> Εγκατάσταστη Archlinux / Άσκηση γραμμής εντολών : set-up the main dependencies and demonstrate your base system(warmup) </a></sup> | ΕΓΚΥΡΟ | 100%
| 3 | <sup><a href="#3"> Άσκηση γραμμής εντολών : get familiar with basic commands, reading documentation and editing files(warmup) </a></sup> | ΕΓΚΥΡΟ | 100%
| 4 | <sup><a href="#4"> συμμετοχικό περιεχόμενο 1A </a></sup> | ΕΓΚΥΡΟ | 100%
| 5 | <sup><a href="#5"> Άσκηση γραμμής εντολών : check the weather(warmup) </a></sup> | ΕΓΚΥΡΟ | 100%
| 6 | <sup><a href="#6"> Συμμετοχικό περιεχόμενο 2A </a></sup> | ΕΓΚΥΡΟ | 100%
| 7 | <sup><a href="#7"> Άσκηση γραμμής εντολών : download mp3(hci) </a></sup> | ΕΓΚΥΡΟ | 100%
| 8 | <sup><a href="#8"> συμμετοχικό περιεχόμενο 1B </a></sup> | ΕΓΚΥΡΟ | 100%
| 9 | <sup><a href="#9"> Άσκηση γραμμής εντολών : text editor and plug-ins for code highlighting and autocompletion(hci) </a></sup> | ΕΓΚΥΡΟ | 100%
| 10 | <sup><a href="#10"> συμμετοχικό περιεχόμενο 2B </a></sup> | ΕΓΚΥΡΟ | 100%
| 11 | <sup><a href="#11"> Άσκηση γραμμής εντολών : organise the terminal window into multiple areas(hci) </a></sup> | ΕΓΚΥΡΟ | 100%
| 12 | <sup><a href="#12"> Τελική αναφορά και αίτημα ενσωμάτωσης για βαθμολόγηση </a></sup> | ΕΓΚΥΡΟ | 100%

##### [1]    


Οι στόχοι-ανάγκες που έχω για το συγκεκριμένο μάθημα είναι να έρθω όσο πιο κοντά μπορώ με τον υπολογιστή ,να κατανοήσω την εξέλιξη των υπολογιστών στις σύχγρονες μέρες 
που διανύουμε,όσο αναφορά την επικοινωνία του ανθρώπινου είδους με την υπολογιστική μηχανή , και γενικότερα να χρησιμοποιήσω διαφορετικά εργαλεία πληροφόρησης και 
υπολογισμού ,ωστε να διερύνω τους ''πνευματικούς'' μου ορίζοντες.Θα ήθελα να εξοικειωθώ περισσότερο με αυτές τις γλώσσες προγραμματισμου και να μπορώ να φτιάξω σελίδες πιο φιλόξενες στον χρήστη, με περισσότερη διάδραση αλλά και ακόμα καλύτερο γραφικό περιβάλλον.Με τις ακήσεις γραμμής εντολών έχω ως στόχο την εξεικειωσή μου με το terminal,να αξιοποιήσω τις λειτουργείες του λειτουργικού linux.Γενικά θα ήθελα μέσω του μαθήματος να φέρω τις εφαρμογές μου οσο πιο κοντά μπορώ στον άνθρωπο.


##### [2]

## Εγκατάσταστη Archlinux :

Διαδικασία :

• Λήψη κατάλληλου αρχείου ISO των Arch Linux

• Λήψη και setup του Oracle VM

• Ενεργοποίηση VM και επιλογή του ISO ως boot option

• Πληκτρολόγηση python -m archinstall guided για έναρξη εγκατάστασης

• Επιλογή γλώσσας και τοποθεσίας

• Επιλογή κατάλληλου partition για την εγκατάσταση λειτουργικού

• Επιλογή btrfs ως file system για Arch

• Διαμόρφωση hostname και κωδικού

• Επιλογή desktop ως προφίλ εγκατάστασης

• Επιλογή gnome ως γραφικό περιβάλλον

• Επιλογή all open source ως graphics adapter

• Εγκατάσταση pipewire ως audio server

• Επιλογή linux ως kernel εγκατάστασης

• Επιλογή Network Manager για σύνδεση στο διαδίκτυο

• Επιλογή κατάλληλου timezone

• Αναμονή για λήψη και εγκατάσταση πακέτων

• Πληκτρολόγηση shutdown για απενεργοποίηση session

• Πρώτο boot ως root user και εγκατάσταση απαραίτητων πακέτων για τα ζητούμενα των ασκήσεων sudo pacman -S git, asciinema

## Αποτελέσματα : 

![arch](https://github.com/p18kout/hci-images/blob/main/arch.png)

## Άσκηση γραμμής εντολών : set-up the main dependencies and demonstrate your base system (warmup)

asciinema link : https://asciinema.org/a/446263 

## Aποτελέσματα : 

![neofetch](https://github.com/p18kout/hci-images/blob/main/neofetch_2018143.png)

Διαδικασία :

• Έναρξη εγγραφής terminal **asciinema rec -i 0.2**

• List αρχείων με την εντολή **ls**

• List κρυφών αρχείων με την εντολή **ls -a**

• Προβολή του base system με την εντολή **neofetch**

• Εγκατάσταση πακέτου dotfiles με την εντολή **pip install dotfiles**

• Aνάγνωση διαθέσιμων εντολών του παραπάνω πακέτου **dotfiles -h**

• Τέλος εγγραφής terminal **exit**

Πηγή :

https://github.com/dylanaraps/neofetch/wiki/Installation#arch

https://github.com/jbernard/dotfiles



##### [3]

## Άσκηση γραμμής εντολών : get familiar with basic commands, reading documentation and editing files (warmup)

asciinema link : https://asciinema.org/a/447206

## Αποτελεσματα

![thefuck](https://github.com/p18kout/hci-images/blob/main/2018143_thefuck.gif)

Διαδικασία : 

• Λήψη πακέτου **sudo pacman -S man**

• Λήψη πακέτου **pip install thefuck**

• Έναρξη εγγραφής terminal **asciinema rec -i 0.2**

• Προβολή manual vim **man vim**

• Προβολή του base system **neofetch**

• Προβολή manual man **man man**

• Διόρθωση λανθασμένης εντολής **fuck**

• Τέλος εγγραφής terminal **exit**

Πηγή :https://github.com/nvbn/thefuck

##### [4] 

## Συμμετοχικό περιεχόμενο 1Α

Διαδικασία : 

Έγινε η δημιουργία των απαραίτητων submodule με βάση τις οδηγίες, μετά το fork τις ιστοσελίδας του βιβλίου μαθήματος και των αποθετηρίων **images** , **_gallery** .

# Εικόνα 1 : JavaScript

Εικόνα στο προσωπικό site : https://p18kout.netlify.app/gallery/javascript/

Αποθετήριο εικόνας : https://github.com/p18kout/_gallery/blob/master/javascript.md

Αποθετήριο thumbnail : https://github.com/p18kout/images/blob/master/javascript-thumb.jpg

# Εικόνα 2 : PHP

Εικόνα στο προσωπικό site : https://p18kout.netlify.app/gallery/php/

Αποθετήριο εικόνας : https://github.com/p18kout/_gallery/blob/master/php.md

Αποθετήριο thumbnail : https://github.com/p18kout/images/blob/master/php-thumb.png


##### [5]


## Άσκηση γραμμής εντολών : check the weather (warmup) 

asciinema link : https://asciinema.org/a/449720

Διαδικασία :

• Έναρξη εγγραφής terminal **asciinema rec -i 0.2**

• Εγκατάσταση απαραίτητων πακέτων **sudo pacman -S curl**

• Προβολή στοιχείων καιρού της πόλης μου **curl wttr.in/Karditsa**

• Τέλος εγγραφής terminal **exit**

## Αποτελέσματα : 

![wttr.in](https://github.com/p18kout/hci-images/blob/main/2018143_wttr.png)

Πηγή : https://github.com/chubin/wttr.in#usage

##### [6]

## Συμμετοχικό περιεχόμενο 2Α

Διαδικασία : 

• Προσθήκη των αρχείων εικόνων στα αντίστοιχα αποθετήρια **_slides** , **_timeline** 

## Διαφάνειες 

Διαφάνειες στο προσωπικό site : https://p18kout.netlify.app/slides/programming/

Αποθετήριο διαφανειών : https://github.com/p18kout/site/blob/master/_slides/programming.md

## Χρονολόγιο 

Χρονολόγιο στο προσωπικό site : https://p18kout.netlify.app/timeline/programming/

Αποθετήριο χρονολογίου : https://github.com/p18kout/site/blob/master/_timeline/programming.md

##### [7]

## Άσκηση γραμμής εντολών : download-mp3 (hci)

asciinema link : https://asciinema.org/a/444197 

## Αποτελέσματα : 

![download-mp3](https://github.com/p18kout/hci-images/blob/main/2018143_download-mp3.gif)

Διαδικασία : 

• Λήψη πακέτου youtube-dl  **sudo pacman -S youtube-dl**

• Λήψη πακέτου mpg123 **sudo pacman -S mpg123**

• Έναρξη εγγραφής terminal **asciinema rec -i 0.2**

• Aναζήτηση και λήψη κομματιού **youtube-dl -x --audio-format mp3 "ytsearch:donda"**

• Μετακίνηση στο location του αρχείου **cd Desktop**

• Αναπαραγωγή κομματιού **mpg123 donda.mp3**

• Τέλος εγγραφής terminal **exit**

Πηγή : https://github.com/ytdl-org/youtube-dl/blob/master/README.md#readme

##### [8]

## Συμμετοχικό περιεχόμενο 1Β

## Μελέτη περίπτωσης : Χρήση PHP για δημιουργία διαδραστικών ιστοσελίδων

Μελέτη περίπτωσης στο προσωπικό site : https://p18kout.netlify.app/case-study/php/

Αποθετήριο μελέτης περίπτωσης : https://github.com/p18kout/site/blob/master/_case-study/php.md

Αποθετήριο κειμένου μελέτης : https://github.com/p18kout/site/blob/master/_case-study/cs-php.md

##### [9]

## Άσκηση γραμμής εντολών : text editor and plug-ins for code highlighting and autocompletion (hci) 

asciinema link : https://asciinema.org/a/454647

Script που χρησιμοποιήθηκε : https://github.com/p18kout/hci-images/blob/main/testscript.py

Διαδικασία : 

• Έναρξη εγγραφής terminal **asciinema rec -i 0.2**

• Εγκατάσταση απαραίτητων πακέτων **sudo pacman -S vim** , **sudo pacman -S vi**

• Χρήση απλού print script **vim testscript.py**

• Είσοδος INSERT mode με το πλήκτρο Ι 

• Είσοδος σε READ-ONLY mode με το πλήκτρο Esc 

• Πληκτρολόγηση **syntax off/on** και ενεργοποίηση highlighting του κώδικα 

• Πληκτρολόγηση **:w** για αποθήκευση του αρχείου 

• Πληκτρολόγηση **:q** για έξοδο στο terminal 

• Τέλος εγγραφής terminal **exit**

## Αποτελέσματα : 

![testscript](https://github.com/p18kout/hci-images/blob/main/testscript.png)

Πηγή : https://www.vim.org/

##### [10]

## Συμμετοχικό περιεχόμενο 2Β

## Βιογραφία : Brendan Eich

Βιογραφία στο προσωπικό site : https://p18kout.netlify.app/biography/brendan-eich/

Αποθετήριο βιογραφίας : https://github.com/p18kout/site/blob/master/_biography/brendan-eich.md

Αποθετήριο κειμένου βιογραφίας : https://github.com/p18kout/site/blob/master/_biography/bio-eich.md

Πηγή : http://www.edubilla.com/inventor/brendan-eich/

##### [11] 

## Άσκηση γραμμής εντολών : organise the terminal window into multiple areas(hci)

asciinema link : https://asciinema.org/a/458384

Script που χρησιμοποιήθηκε : https://github.com/p18kout/hci-images/blob/main/testscript.py

Διαδικασία : 

• Έναρξη εγγραφής terminal **asciinema rec -i 0.2**

• Εγκατάσταση απαραίτητων πακέτων **sudo pacman -S tmux** , **sudo pacman -S sysstat**

• Έναρξη νέου session **tmux**

• Χρήση απλού print script **vim testscript.py**

• Είσοδος INSERT mode με το πλήκτρο Ι 

• Επεξεργασία κειμένου script 

• Είσοδος σε READ-ONLY mode με το πλήκτρο Esc 

• Αλλαγή σε νέο session με τα πλήκτρα Ctrl-B , S

• Προβολή ενεργών session **tmux ls**

• Δημιουργία νέου παραθύρου με τα πλήκτρα Ctrl-B , C

• Performance monitoring **sudo vmstat**

• Έξοδος απο όλα τα ενεργά sessions με τα πλήκτρα Ctrl-B , D

• Τέλος εγγραφής terminal **exit**

## Αποτελέσματα : 

![vmstat](https://github.com/p18kout/hci-images/blob/main/vmstat.png)

Πηγή : 

https://computingforgeeks.com/linux-tmux-cheat-sheet/

https://linoxide.com/best-linux-performance-monitoring-tools/

##### [12]

## Τελική αναφορά :

| Συμμετοχή σε συζητήσεις : | 
  | --- | 
  | [#1627](https://github.com/courses-ionio/hci/discussions/1627) |
  | [#1688](https://github.com/courses-ionio/hci/discussions/1688) |
  
### Σύντομη ανάλυση εργαλείων : 

Για την υλοποίηση των παραδοτέων χρησιμοποιήθηκαν το github για την ενημέρωση της αναφοράς , το asciinema για την καταγραφή terminal και το netlify για το deploy του 
προσωπικού site στα παραδοτέα συμμετοχικού περιεχομένου.

### Συμπεράσματα : 

Με την ολοκλήρωση του μαθήματος "Eπικοινωνία Aνθρώπου Yπολογιστή", θεωρώ πως έχω επιτύχει σε σημαντικό βαθμό τους αρχικούς στόχους της εισαγωγής.
Γνώρισα και εξοικειώθηκα με την πλατφόρμα του Github όσο και με την χρήση Linux terminal , ήρθα σε επαφή για πρώτη φορά με το εργαλείο Asciinema για την καταγραφή 
terminal, καθώς και το Netlify για deploy του προσωπικού μου site.
Στο σύνολό τους τα παραδοτέα με βοήθησαν να αναπτύξω σημαντικές δεξιότητες στο κομμάτι του προγραμματισμού στη γραμμή εντολών με εφαρμογή της γνώσης στην πράξη στις 
διάφορες εργασίες , καθώς και στην συνεργασία με τους βοηθούς του μαθήματος και τους συμφοιτητές μου στo github.
Οι δυσκολίες που αντιμετώπισα εντοπίστηκαν κυρίως στα παραδοτέα του συμμετοχικού περιεχομένου , ειδικότερα στην δημιουργία και χρήση των submodule ,όμως τελικά 
επιλύθηκαν με την βοήθεια των βίντεο στις οδηγίες του μαθήματος.
Όσο αφορά την καταχώρηση των παραδοτέων , αισθάνομαι αρκετά ικανοποιημένος καθώς όλες οι υποβολές πραγματοποιήθηκαν στην ώρα τους.
Οι παρουσιάσεις προόδου της εργασίας αποδείχθηκαν ιδιαίτερα χρήσιμες για την διαμόρφωση και βελτίωση της τελικής αναφοράς.
Η δομή του μαθήματος ήταν άκρως ενδιαφέρουσα καθώς τα εβδομαδιαία παραδοτέα βοήθησαν στην διαρκή ενασχόληση με το αντικείμενο του μαθήματος.
Τέλος , τα εβδομαδιαία βίντεο κουίζ και κείμενα κρατούν τον φοιτητή απασχολημένο ενώ παράλληλα διευρύνουν τις θεωρητικές γνώσεις του , σε ένα εύχρηστο γι'αυτόν 
περιβάλλον.

### Βιβλιογραφία : 

[ArchWiki](https://wiki.archlinux.org/)
  
[Adding a submodule](https://asciinema.org/a/9vhZSNlQkO0KwH6lY6gPdWWB8)

[Updating a submodule](https://asciinema.org/a/bUMPJqXb9sepWRdlJPyToMpwl)

[Deleting a submodule](https://asciinema.org/a/3gFABL73VAJ21UoA4SVzlfRaf)
