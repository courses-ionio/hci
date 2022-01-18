# Μάθημα: Επικοινωνία Ανθρώπου Υπολογιστή

### Ονοματεπώνυμο: Αλέξανδρος Λένης 
### Αριθμός Μητρώου: Π2019015


| Εβδομάδα* | Παραδοτέο |
| --- | --- |
| 1 | [Εισαγωγή](#εισαγωγή) |
| 2 | Άσκηση γραμμής εντολών|
| 3 | [Άσκηση γραμμής εντολών: Check the weather](#check-the-weather)|
| 4 | συμμετοχικό περιεχόμενο 1A |
| 5 | [Άσκηση γραμμής εντολών: Manage your bookmarks](#manage-your-bookmarks)|
| 6 | συμμετοχικό περιεχόμενο 2A |
| 7 | [Άσκηση γραμμής εντολών: Fetch Information](#fetch-information)|
| 8 | συμμετοχικό περιεχόμενο 1B |
| 9 | [Άσκηση γραμμής εντολών: Download mp3](#download-mp3)|
| 10 | συμμετοχικό περιεχόμενο 2B |
| 11 | [Άσκηση γραμμής εντολών: Organise the terminal window into multiple areas](#organise-the-terminal-window-into-multiple-areas)|
| 12 | [Τελική αναφορά και αίτημα ενσωμάτωσης για βαθμολόγηση](#τελική-αναφορά) |


# Εισαγωγή

### Στόχοι και προσδοκίες <br />
Στόχος μου για το μάθημα είναι να μάθω να χρησιμοποιώ τα linux, να κατανοήσω την αλληλεπίδραση ανθρώπου-υπολογιστή καθώς και να μάθω να χρησιμοποιώ το Github. Επίσης, με τις ασκήσεις γραμμής εντολών έχω ως στόχο να εξοικειωθώ με το terminal.

### Εγκατάσταση Arch Linux
Αρχικά η διαδικασία μου φάνηκε αρκέτα δύσκολη και περίπλοκη καθώς δεν είχα ξανακάνει κάτι αντίστοιχο. Έκανα την εγκατάσταση του λειτουργικού σε ενα usb stick [ακολουθώντας ένα πολύ χρήσιμο βίντεο στο Youtube](https://www.youtube.com/watch?v=yaThYGr37DI), στο οποίο παρέχονται αναλυτικές οδηγίες για την εγκατάσταση του λειτουργικού σε usb stick. Αποφάσισα να ακολουθήσω το βίντεο και όχι το Arch Wiki καθώς μου φάνηκε πιο απλό και κατανοητό σε σχέση με το wiki. Χρησιμοποίησα δύο usb sticks, στο ένα εγκατέστησα το iso και στο δεύτερο έκανα την εγκατάσταση. Τέλος, ακολουθώντας της οδηγίες του βίντεο έκανα το journal να γράφεται στη μνήμη RAM διότι τα usb stick έχουν μειωμένο περιθώριο εγγραφών σε σχέση με έναν hdd ή ssd.

Παρακάτω υπάρχουν link για το neofetch και journalctl που δείχουν τις πληροφορίες του συστήματός μου.

[Neofetch](https://asciinema.org/a/450962)

[Journalctl](https://asciinema.org/a/461984)



#  Παραδοτέα

## Παραδοτέο 9
### Download mp3
 Για αυτό το παραδοτέο επέλεξα να κάνω την άσκηση γρραμμής εντολών "Download mp3" στην οποία πρέπει να ψάξουμε,να κατεβάσουμε και να παίξουμε το αγαπημένο μας τραγούδι απο το Youtube με την χρήση του terminal. Εγκατέστησα το youtube-dl, ενός command-line πρόγραμμα με το οποίο μπορείς να κατεβάσεις βίντεο απο το Youtube και μερικά άλλα sites, με την χρήση των εξής δύο commands: 
|     |     |
| --- | --- |
| sudo curl -L https://yt-dl.org/downloads/latest/youtube-dl -o /usr/local/bin/youtube-dl|
| sudo chmod a+rx /usr/local/bin/youtube-dl|
  
 
   
 
Έπειτα κατέβασα το αγαπημένο μου τραγούδι όπως φαίνεται και στο asciinema, δεν κατάφερα όμως να εγκαταστήσω το mpv όυτε με την χρήση του git clone αλλά ούτε και με pacman -S mpv.
 
**Asciinema link: [Download mp3](https://asciinema.org/a/461978)<br />**

## Παραδοτέο 11
### Organise the terminal window into multiple areas
Σε αυτό το παραδοτέο επέλεξα την άσκηση " Organise the terminal window into multiple areas " όπου έπρεπε να χωρίσω το παράθυρο σε δύο μέρη, το ένα για να ψάξω και να επεξεργαστώ αρχεία και το άλλο για performance monitoring. Αρχικά εγκατέστησα το tmux, ένα πρόγραμμα που επιτρέπει πολλαπλά  terminal sessions, χρησιμοποιώντας τα commands:
|     |    |
| --- |--- |
|git clone https://github.com/tmux/tmux.git|
|cd tmux|
|sh autogen.sh|
|./configure && make|

Στην συνέχεια εγκατέστησα το glances με sudo pacman -S glances.

**Asciinema link: [Organise the terminal window into multiple areas](https://asciinema.org/a/462023)<br />**


# Extra

### Check the weather

**Asciinema link: [Check the weather](https://asciinema.org/a/g3IovGMnCZrzFmPmJbukdJiMN)<br />**


 ### Fetch Information

**Asciinema link: [Fetch Information](https://asciinema.org/a/VWHIVecDTsKgmfSYTTbpHsXEG)<br />**


### Manage your bookmarks

**Asciinema link: [Manage your Bookmarks](https://asciinema.org/a/nQIq6jmeB8oT3Yr9d8ttXdek8)<br />**



# Τελική αναφορά
Τελειώνοντας το εξάμηνο πιστέυω πως έχω κάνει μία οκ προσπάθεια καθώς δεν κατάφερα να συμπληρώσω όλα τα παραδοτέα παρά μόνο τις ασκήσεις γραμμής εντολών. Έμαθα αρκετά πράγματα μέσα απο το μάθημα όπως το να χρησιμοποιώ αρκετά καλά το Github, εξικιώθηκα με το terminal μέσα απο τις ακήσεις γραμμής εντολών καθώς και με τα linux γενικά αφού κατάφερα να  προσαρμόσω τα arch όπως ήθελα. Έμαθα επίσης την χρήση του Asciinema, μίας αρκετά χρήσιμης εφαρμοφής. Τέλος τα βίντεο κουιζ αλλά και το βιβλίο στο Actively learn μου φάνηκαν πολύ ενδιαφέρον και σίγουρα διεύρυναν τις γνώσεις μου.

