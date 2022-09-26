# Μάθημα: Επικοινωνία Ανθρώπου Υπολογιστή

### Ονοματεπώνυμο: Αλέξανδρος Λένης 
### Αριθμός Μητρώου: Π2019015


| Εβδομάδα* | Παραδοτέο|
| --- | --- |
| 1 | [Εισαγωγή](#εισαγωγή) |
| 2 | Άσκηση γραμμής εντολών|
| 3 | [Άσκηση γραμμής εντολών: Check the weather](#check-the-weather)|
| 4 | [Συμμετοχικό περιεχόμενο 1A](#παραδοτέο-4)|
| 5 | [Άσκηση γραμμής εντολών: Manage your bookmarks](#manage-your-bookmarks)|
| 6 | [Συμμετοχικό περιεχόμενο 2A](#παραδοτέο-6)|
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

# Συμμετοχικό περιεχόμενο

## Παραδοτέο 4

Για το συμμετοχικό περιεχόμενο Α επέλεξα δύο handheld κονσόλες βιντεοπαιχνιδιών, το Atari Lynx(1989-1995) και το Game Boy(1989-2003). Αν και είμαι fan της Nintendo, το Atari Lynx μου κέντρισε το ενδιαφέρον καθώς ήταν η πρώτη handheld κονσόλα παιχνιδιών στον κόσμο με έγχρωμη οθόνη LCD. Παρόλα αυτά δεν είχε την ίδiα επιτυχία με το Game Boy της Nintendo. Συνολικά 16 εκατομμύρια Game Boy πουλήθηκαν μέχρι το 1995 (όπου και σταμάτησε η παραγωγή και πώληση του Lynx) ενώ οι πωλήσεις του Lynx ανέρχονται σε λιγότερες από 7 εκατομμύρια συνολικά. Η στιβαρότητα, η μισή τιμή πώλησης, η πολύ μεγαλύτερης διάρκειας μπαταρία, ο συνδυασμός με το Tetris και η εξαιρετική βιβλιοθήκη παιχνιδιών  του Game Boy ήταν το αποτέλεσμα αυτής της διαφοράς στις πωλήσεις. Το Game Boy είναι μια από τις πιο αναγνωρίσιμες συσκευές της δεκαετίας του 1990, που έγινε πολιτιστικό σύμβολο τα χρόνια που ακολούθησαν την κυκλοφορία του. Διάφοροι επανασχεδιασμοί κυκλοφόρησαν κατά τη διάρκεια ζωής της κονσόλας, συμπεριλαμβανομένου του Game Boy Pocket το 1996 και του Game Boy Light το 1998 (μόνο στην Ιαπωνία). Η παραγωγή του Game Boy συνεχίστηκε στις αρχές της δεκαετίας του 2000, ακόμη και μετά την κυκλοφορία του δεύτερου διαδόχου του, του Game Boy Advance, το 2001, η παραγωγή του σταμάτησε το 2003.

https://github.com/alexl14/_gallery/blob/master/atari-lynx-I-handheld.md

https://github.com/alexl14/images/blob/master/atari-lynx-I-handheld.jpg

https://github.com/alexl14/images/blob/master/atari-lynx-I-handheld-thumb.jpg

https://github.com/alexl14/_gallery/blob/master/game-boy-original.md

https://github.com/alexl14/images/blob/master/game-boy-original.jpg

https://github.com/alexl14/images/blob/master/game-boy-original-thumb.jpg


## Παραδοτέο 6

Παρακάτω υπάρχουν link για  τα Slides και το Timeline που έφτιαξα για τις κονσόλες βιντεοπαιχνιδιών Game Boy και Atari Lynx. Επειδή δεν κατάφερα να συνδέσω το netlify σωστά χωρίς προβλήματα και errors, είδα απο την ιστοσελίδα του pibook τις εικόνες και πιστεύω πως ταιριάζουν με τις δικιές μου.

[Slides](https://github.com/alexl14/site/blob/master/_slides/videogamesconsole.md)

[Timeline](https://github.com/alexl14/site/blob/master/_timeline/videogamesconsole.md)



# Extra

### Check the weather

**Asciinema link: [Check the weather](https://asciinema.org/a/g3IovGMnCZrzFmPmJbukdJiMN)<br />**


 ### Fetch Information

**Asciinema link: [Fetch Information](https://asciinema.org/a/VWHIVecDTsKgmfSYTTbpHsXEG)<br />**


### Manage your bookmarks

**Asciinema link: [Manage your Bookmarks](https://asciinema.org/a/nQIq6jmeB8oT3Yr9d8ttXdek8)<br />**



# Τελική αναφορά
Τελειώνοντας το εξάμηνο πιστέυω πως έχω κάνει μία οκ προσπάθεια καθώς δεν κατάφερα να συμπληρώσω όλα τα παραδοτέα παρά μόνο τις ασκήσεις γραμμής εντολών. Έμαθα αρκετά πράγματα μέσα απο το μάθημα όπως το να χρησιμοποιώ αρκετά καλά το Github, εξικιώθηκα με το terminal μέσα απο τις ακήσεις γραμμής εντολών καθώς και με τα linux γενικά αφού κατάφερα να  προσαρμόσω τα arch όπως ήθελα. Έμαθα επίσης την χρήση του Asciinema, μίας αρκετά χρήσιμης εφαρμοφής. Τέλος τα βίντεο κουιζ αλλά και το βιβλίο στο Actively learn μου φάνηκαν πολύ ενδιαφέρον και σίγουρα διεύρυναν τις γνώσεις μου.

