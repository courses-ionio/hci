# Μάθημα: Επικοινωνία Ανθρώπου Υπολογιστή

### Ονοματεπώνυμο: Μάριος Κωνσταντίνου
### Αριθμός Μητρώου: Π2015002
### GitHub Profile: [mariosconsta] - https://github.com/mariosconsta
<br />

## Πίνακας με σύνοψη των παραδοτέων

| Εβδομάδα* | Παραδοτέο |
| --- | --- |
| 1 | [Εισαγωγή + Σύνοψη] |
| 2 | [Άσκηση προγραμματισμού: Mouse Eraser] |
| 3 | [Άσκηση γραμμής εντολών: Set-up the main dependencies and demonstrate your base system] |
| 4 | [~~Συμμετοχικό περιεχόμενο: Α1~~] |
| 5 | [Άσκηση προγραμματισμού: Mouse Option] |
| 6 | [~~Συμμετοχικό περιεχόμενο: Α2~~] |
| 7 | [Άσκηση γραμμής εντολών: Check the Weather] |
| 8 | [~~Συμμετοχικό περιεχόμενο: Β1~~] |
| 9 | [Άσκηση γραμμής εντολών: Organise the Terminal Window into Multiple Areas] |
| 10 | [~~Συμμετοχικό περιεχόμενο: Β2~~] |
| 11 | [Άσκηση γραμμής εντολών: Organise the Terminal Window into Multiple Areas] |
| 12 | [Επίλογος] |

# ΕΙΣΑΓΩΓΗ

## Οι Προσδοκίες μου από το Μάθημα και την Εργασία


# ΣΥΝΟΨΗ


# 2ο Παραδοτέο - Mouse Eraser

Για το δεύτερο παραδοτέο επέλεξα την άσκηση Mouse Eraser. Στο παράδειγμα του κώδικα, χρησιμοποιούμε το ποντίκι ως eraser. Υπάρχουν δύο εικόνες, η μία κάνει overlap με την άλλη. Όταν μετακινούμε το κέρσορα πάνω από την εικόνα που φαίνεται πρώτη, τότε αυτή η εικόνα διαγράφεται και ξεκίνα να εμφανίζεται η δεύτερη εικόνα. Το ζητούμενο της άσκησης είναι να αλλάξουμε μία από τις δύο εικόνες αλλά και το μέγεθος του eraser.


<p align="center">
<img src="https://i.imgur.com/Oqbx1NT.png">
</p>

Το πρώτο ζητούμενο ήταν να αλλάξω μία από τις δύο φωτογραφίες. Επέλεξα να αλλάξω και τις δύο. Πρώτα άλλαξα τον HTML κώδικα και συγκεκριμένα το src στο <img> function όπου έβαλα το URL της φωτογραφίας που επέλεξα να φαίνεται μετά την διαγραφή. Παράλληλα άλλαξα το width και το height για να ταιριάζει με την φωτογραφία που βρήκα. Τέλος άλλαξα στο width και το height στον καμβά όπου έβαλα τις ίδιες διαστάσεις με την φωτογραφία για να είναι η μία φωτογραφία ακριβός πάνω από την άλλη.
Στην συνέχεια έκανα το ίδιο πράγμα στο JavaScript κομμάτι. Άλλαξα το URL της φωτογραφίας στο img.src και μετά τις διαστάσεις για να ταιριάζουν με αυτές της φωτογραφίας.
Με αυτές τις αλλαγές κατάφερα να έχω δύο διαφορετικές εικόνες.


<p align="center">
<img src="https://i.imgur.com/JStw2xy.png">
</p>
Παράλληλα στο JavaScript κομμάτι της άσκησης άλλαξα μερικά πράγματα στο drawPoint function. Αυτό που παρατήρησα είναι πως το drawPoint είναι ουσιαστικά ο eraser. Αύξησα το μέγεθος στο ctx. και στο arc. κατά 25 πόντους (από 50 έγινε 75).


#### Τα αποτελέσματα μετά τις αλλαγές μου φαίνονται στο παρακάτω animated gif:
<p align="center">
<img src="https://i.imgur.com/LXrKdWA.gif" width="720px">
</p>

#### Link στο pen της άσκησης στο codepen.io: [MouseEraser P2015002](https://codepen.io/P2015002/pen/LYLpJQB)


# 3ο Παραδοτέο - Set-up the main dependencies and demonstrate your base system

Ως πρώτη εργασία γραμμής εντολών επέλεξα να πραγματοποιήσω την εργασία που ζητούσε να εγκαταστήσω τα βασικά απαιτούμενα και να δείξω τα χαρακτηριστικά του συστήματος μου.

#### Chaning my hostname to my AM: https://asciinema.org/a/433020 <br />
#### List of my Dot Files:  https://asciinema.org/a/433025 <br />
#### Showing Shell Config Files:  https://asciinema.org/a/433026 <br />
#### Showing System Config:  https://asciinema.org/a/433027 <br />

#### Η εργασία ουσιαστικά ζητούσε τα παρακάτω πράγματα:

### 1. Αλλαγή  του ονόματος μας με τον αριθμό μητρώου μας
Να αλλάξουμε το username μας με τον ΑΜ μας. Αυτό ήταν σχετικά εύκολο. Κόλλησα στο σημείο που έπρεπε να βάλουμε sudo μπροστά  από την εντολή. Κατάλαβα ότι το sudo παρέχει στον χρήστη Admin Permissions και για αυτό τον λόγο μου ζητήθηκε Password. Βέβαια αφού χρησιμοποίησα την εντολή το hostname δεν άλλαξε. Με λίγη αναζήτηση online έμαθα πως έπρεπε να κάνω restart το terminal. Τέλος θα ήθελα να αναφέρω πως υπήρχε τρόπος να γίνει η αλλαγή του ονόματος χωρίς να χρειαστεί restart το terminal. <br />

### 2. να προβάλουμε την λίστα τα dot files μας
Για να βρω τα .dot files χρησιμοποίησα 2 εντολές. Η πρώτη ήταν «ls –ld  .?*» η οποία εμφάνιζε μόνο τα κρυμμένα αρχεία και η δεύτερη ήταν «ls -a» η οποία εμφάνιζε όλα τα αρχεία.  

### 3. να προβάλουμε το shell configuration file
Σε αυτό το ζητούμενο χρησιμοποίησα δύο εντολές. Την «nano ~/.bashrc» και την «nano /etc/profile».

### 4. να προβάλουμε πληροφορίες για το σύστημα μας (hardware και software)
Σε αυτό το ζητούμενο χρησιμοποίησα δύο εντολές. Την « sudo lshw -short» και την «sudo lshw». 

#### Προβλήματα που χρειάστηκε να επιλυθούν μέχρι την εκτέλεση:

Τα προβλήματα που αντιμετώπισα ήταν το ότι έπρεπε να χρησιμοποιήσω την sudo εντολή μαζί με το hostname. Αυτό λύθηκε μετά από λίγο ψάξιμο στο διαδίκτυο. Στην συνέχεια μπερδεύτηκα αρκετά με τα .dot files. Online μου έβγαζε αρκετές εντολές που έδειχναν άλλα αρχεία αντί τα .dot files. Η εντολή lshw με δυσκόλεψε λίγο διότι έχει αρκετές παραμέτρους που έκαναν όλες κάτι διαφορετικό.
Τέλος μια γενική δυσκολία που είχα ήταν να κάνω το Virtual Box να δουλέψει. Έπρεπε να αλλάξω πράγματα στα BIOS του υπολογιστή μου, να αλλάξω τον αριθμό των διαθέσιμων processors και τον αριθμό της διαθέσιμης γραφικής μνήμης. Χωρίς αυτές τις αλλαγές δεν έκαναν boot τα ubuntu. Παράλληλα ήθελα κάποιο χρόνο να εξοικειωθώ με το καινούριο λογισμικό και το terminal.

### Συνδέσμοι πηγών:
[How do I change the hostname?](https://phoenixnap.com/kb/ubuntu-20-04-change-hostname) |
[How to show only hidden files in Terminal?](https://askubuntu.com/questions/468901/how-to-show-only-hidden-files-in-terminal) |
[Bash Shell: Display All Hidden Dot Files In a Directory](https://www.cyberciti.biz/faq/bash-shell-display-only-hidden-dot-files/) |
[Linux Commands for Beginners 07 - The Bash Configuration File](https://www.youtube.com/watch?v=esNITi0RkPE) |
[How do I check system specifications?](https://askubuntu.com/questions/55609/how-do-i-check-system-specifications) |
[Linux lshw Command](https://linuxhint.com/use-linux-lshw-command) |

# 5ο Παραδοτέο - Mouse option

Για το επόμενο παραδοτέο επέλεξα την Mouse Option άσκηση. Η άσκηση περιέχει ένα παράδειγμα κώδικα ο οποίος επιτρέπει στον χρήστη να αλλάξει το περιεχόμενο της σελίδας. Το ζητούμενο είναι να αλλάξουμε τον κώδικα του παραδείγματος με αποτέλεσμα να υπάρχουν περισσότερες επιλογές στην φόρμα. <br />

Αρχικά παρατήρησα στον κώδικα πως υπάρχει η γραμμή «<option value="content2">Περιεχόμενο 2</option>». Εκεί κατάλαβα αμέσως πως η γραμμές αυτές καθορίζουν τις επιλογές του drop down menu. Πρόσθεσα μία ακόμη επιλογή και άλλαξα τα ονόματα όλων των επιλογών. Με την υφιστάμενη γνώση που έχω στον προγραμματισμό κατάλαβα πως ποιο κάτω έχουμε την κλάση που έχει το περιεχόμενο για κάθε επιλογή.

<p align="center">
<img src="https://i.imgur.com/Cym6IGO.png" width="460px">
</p>

Στην συνέχεια άλλαξα το κείμενο της πρώτης επιλογής και πρόσθεσα ένα λίνκ. Έπειτα με λίγο ψάξιμο βρήκα πως βάζεις εικόνες σε html και πρόσθεσα δύο εικόνες στην δεύτερη επιλογή του μενού. Τέλος προσπάθησα να βάλω βίντεο και εκεί αντιμετώπισα ένα πρόβλημα. Ο player του Youtube μου έβγαζε ένα error. «www.youtube.com refused to connect». Μετά από λίγο ψάξιμο έμαθα πως πρέπει να κάνω embed το video με διαφορετικό URL.

<p align="center">
<img src="https://i.imgur.com/Uc8RXQW.png" width="460px">
</p>

#### Link στο pen της άσκησης στο codepen.io: [Mouse Option](https://codepen.io/P2015002/pen/eYRJwvo)

## Xρήσιμοι συνδέσμοι σχετικά με το παραδοτέο:
[w3 schools](https://www.w3schools.com/html/)
[YouTube Refused to Connect](https://forum.freecodecamp.org/t/youtube-refused-to-connect/245262)<br />

# 7ο Παραδοτέο - Download mp3

Η δεύτερη εργασία γραμμής εντολών που επέλεξα ζητούσε να αναζητήσουμε, να κατεβάσουμε και να ακούσουμε το αγαπημένο μας τραγούδι αυτού του μήνα. Όλα αυτά μέσα από το terminal του linux. Παρακάτω έχουμε τα links για της δυο διαφορετικές εκτελέσεις της εργασίας μου. <br>

#### Asciinema link Ver.1:  [Παραδοτέο 5 Ver.1](https://asciinema.org/a/cRdd29OBv2PV9RE6IhsHoC8tc)<br />
#### Asciinema link Ver.2:  [Παραδοτέο 5 Ver.2](https://asciinema.org/a/miOkejPaVBDcSwBUzFVEYaf11)

#### Η εργασία ουσιαστικά χωρίζετε στα εξής βήματα:

### 1. Αναζήτηση του τραγουδιού στο YouTube
Στην version 1 έκανα αναζήτηση στο YouTube μέσω του εργαλείου ytp, το εργαλείο (όπως και αρκετά άλλα) είχε κάποια προβλήματα που αναλύονται στην παράγραφο με τα προβλήματα που χρειάστηκε να επιλυθούν για την σωστή εκτέλεση. Το εργαλείο ytp σου προφέρει πολλές λειτουργείες όμως εγώ το χρησιμοποίησα ώστε να μπορέσω να κάνω αναζήτηση στην πλατφόρμα του youtube και να αντιγράψω το url του αντίστοιχου video για να μπορέσω να το κατεβάσω.

Γρανίτας λοιπόν ytp στο terminal ανοίγει το interface του και εμφανίζετε μια default αναζήτηση που κάνει το ytp με το keyword “Friday”. Εισάγοντας την εντολή “x” κάνουμε νέα αναζήτηση και μετά γράφουμε το όνομα του τραγουδιού που ψάχνουμε. Ο ytp θα εμφανίσει τα αποτελέσματα αριθμημένα και επιλέγοντας τον αντίστοιχο αριθμό διαλέγουμε το τραγούδι. Αμέσως μετά πατάω “Y” για την αντιγραφή του url του επιλεγμένου video.
Για να γίνει έξοδος από το interface του ytp πατάω Ctrl+C. Το url έχει αντιγραφεί επιτυχώς.

Στην version 2 η αναζήτηση γίνετε μέσω του mps-youtube. Το mps-youtube έχει αντίστοιχες λειτουργείες με το ytp όμως το interface του είναι πολύ πιο γραφικό. Η εντολή “sudo mpsyt” ανοίγει το interface και το sudo απαιτείται λόγο δικαιωμάτων. Η αναζήτηση γίνετε με την εντολή “/ VideoName” όπου VideoName το video που αναζητούμε. Αναζητώντας το mps-youtube εμφανίζει τα αποτελέσματα αριθμημένα και εισάγοντας την εντολή “x 1” αντιγράφετε το url του video που βρίσκετε στην θέση 1.

### 2. Κατέβασμα του τραγουδιού από το YouTube σε μορφή mp3
Για το κατέβασμα του video και την εξαγωγή του κομματιού ήχου σε μορφή mp3 από αυτό χρησιμοποίησα το εργαλείο youtube-dl.
Για να κατεβάσω το τραγούδι στον υπολογιστή μου χρησιμοποίησα την εντολή « youtube-dl –x –audio-format mp3 –o “GRIMOIRE.%(ext)s” https://www.youtube.com/watch?v=9a5Luy0h1Mg »

Η παράμετρος “–x” είναι ώστε ο youtube-dl να μην κατεβάσει απλά το video αλλά να κάνει extract μόνο τον ήχο. Μετά το “-audio-format mp3” χρησιμοποιείται για να δηλώσουμε τον τύπο του αρχείου. Τ “-o “GRIMOIRE.%(ext)s” είναι μια παράμετρος που σου επιτρέπει να ονομάσεις το αρχείο που κατεβάζεις, σε περίπτωση που δεν θέλουμε να του δωθεί ως όνομα ο τίτλος του video by default. (Ο τίτλος του τραγουδιού που κατεβάζω σε αυτό το παράδειγμα είναι GRIMOIRE)

Επειδή ήδη είχα εκτελέσει την εντολή “cd /home/kuhakuneko/Music” βρισκόμουν ήδη στο directory όπου κατεβάζω την μουσική μου και το youtube-dl κατεβάζει και τοποθετεί τα αρχεία στο directory που βρίσκεστε εκείνη την στιγμή by default.

Το mps-youtube σου δίνει την δυνατότητα να κατεβάσεις video με τον ίδιο τρόπο που έκανα αντιγραφή το url, όμως λόγο σφάλματος κάποιου server το video δεν μπόρεσε να κατέβει.


### 3. Αναπαραγωγή του τραγουδιού από το terminal
Για την αναπαραγωγή τραγουδιών μέσω terminal υπάρχουν πολλές επιλογές. Στις εκτελέσεις μου χρησιμοποίησα 3 διαφορετικά εργαλεία.
Στην version 1 έγινε χρήση του mpv. Με την εντολή “mpv” και ακριβώς από δίπλα την διαδρομή στο αρχείο ο mpv μπορεί να παίξει το αντίστοιχο αρχείο mp3 δείχνοντας στο terminal τα δευτερόλεπτα και την ποιότητα του Mp3.

Στην version 2 τα εργαλεία που χρησιμοποίησα έχουν πολύ καλύτερο γραφικό περιβάλλον και σου δίνουν περισσότερες πληροφορίες. Τα 2 αυτά εργαλεία είναι το sox και ο VLC.

Η εντολή για την αναπαραγωγή mp3 με τον sox είναι “play” και ακολουθείτε από το directory του mp3 αρχείου. Ο sox σου προφέρει ένα μικρό visualizer ήχου και εκτός από τις πληροφορίες που προσφέρει και το mpv έχει ακόμα File Size, Bit Rate, Encoding και σε ενημερώνει αν το Replay είναι on ή off.

Μετά ο VLC το γνωστό πολυμεσικό πρόγραμμα γίνετε να λειτουργήσει εντός του terminal με την εντολή “nvlc”. Το n μπροστά από το vlc ενεργοποιεί την terminal μορφή του. Ο VLC έχει ένα ωραίο γραφικό περιβάλλον εντός terminal με μεγάλη μπάρα χρόνου ενώ ακριβώς από κάτω δείχνει το playlist σου.

### Προβλήματα που χρειάστηκε να επιλυθούν μέχρι την εκτέλεση:
Ένα από τα προβλήματα που αντιμετώπισα είναι ότι τα εργαλεία mps-youtube και ytp χρησιμοποιούν την Data API του YouTube για να λειτουργήσουν, επομένως απαιτούν κάποια credentials και ένα συγκεκριμένο κλειδί για την χρήση του API. Τα default κλειδιά δεν λειτουργούσαν πλέων γι’ αυτό έπρεπε χρησιμοποιώντας το google account μου να μπω και να φτιάξω ένα project που να περιέχει το YouTube DATA API στην σελίδα https://console.developers.google.com. Παίρνοντας το κλειδί έπρεπε να το κάνω set στα αντίστοιχα αρχεία config για τον ytp, και για το mps-youtube μέσω της εντολής “set api_key”.

<p align="left">
<img src="https://github.com/KuhakuNeko/PicturesForLessons/blob/main/HCI%205o%20%CE%A0%CE%B1%CF%81%CE%B1%CE%B4%CE%BF%CF%84%CE%AD%CE%BF/YTPSetApiKey.gif" width="450px">
</p>

<p align="right">
<img src="https://github.com/KuhakuNeko/PicturesForLessons/blob/main/HCI%205o%20%CE%A0%CE%B1%CF%81%CE%B1%CE%B4%CE%BF%CF%84%CE%AD%CE%BF/MPSSetApiKey.gif" width="450px">
</p>

## Shell Scripting – YoutubeDLSS.sh

Ώσον αφορά το shell scripting για την συγκεκριμένη εργασία ασχολήθηκα αρκετά και έφτιαξα ένα πρόγραμμα το οποίο δημιουργεί κάποιο interface και επιτρέπει στον χρήστη να κατεβάσει, να ψάξει και να αναπαράγει μουσική και βίντεο χωρίς να χρειαστεί να γράψει καμία εντολή. <br/>
Το πρόγραμμα σε αφήνει να κάνεις search μέσω του ytp ή να του δόσεις κατευθείαν link για download και σε ρωτάει αν θέλεις να κάνεις extract τον ήχο ή όχι.
Ακόμη το script σου δίνει τη δυνατότητα να δεις τα αρχεία μουσικής και βίντεο του συγκεκριμένου directory. <br/>
Επιπλέων το YoutubeDLSS script αξιοποιεί αρκετούς video και music players και σου δίνει την επιλογή να διαλέξεις με ποιων από αυτούς θες να κάνεις αναπαραγωγή ενός ή ακόμη και όλων των αρχείων δημιουργώντας έμμεσα μια δική σου playlist! <br/>

#### YoutubeDLSS Demo: [Demo for YoutubeDLSS.sh by KuhakuNeko](https://asciinema.org/a/VlPMJ7XiUjUfVelGFS0s9JN3J)
#### YoutubeDLSS.sh shell script: [YoutubeDLSS.sh](https://github.com/KuhakuNeko/KuhakuNekoLinuxShellScripts/blob/main/YoutubeDLSS.sh)
#### Μπορείτε επίσης να επισκεφτείτε την σελίδα με όλα τα shell scripts μου για περισσότερα: [KuhakuNekoLinuxShellScripts](https://github.com/KuhakuNeko/KuhakuNekoLinuxShellScripts)

### Εργαλεία που χρησιμοποίησα:
ytp, youtube-dl, mpv, mps-youtube, sox, vlc

### Συνδέσμοι πηγών:
[How to download an MP3 track from a YouTube video](https://askubuntu.com/questions/178481/how-to-download-an-mp3-track-from-a-youtube-video) |
[Where does youtube-dl download the videos to?](https://askubuntu.com/questions/373336/where-does-youtube-dl-download-the-videos-to) |
[How to specify a filename while extracting audio using youtube-dl?](https://askubuntu.com/questions/630134/how-to-specify-a-filename-while-extracting-audio-using-youtube-dl) |
[How to play mp3 files from the command line?](https://askubuntu.com/questions/115369/how-to-play-mp3-files-from-the-command-line) |
[How to Play MP3 Files from Command Line](https://linuxhint.com/play_mp3_files_commandline/) |
[mps-youtube](https://github.com/mps-youtube/mps-youtube) |
[ytp](https://gitlab.com/uoou/ytp)

Μιας και είναι η πρώτη φορά που ασχολούμε με το shell scripting και pipelining αυτές είναι μερικές από τις πήγες που με βοήθησαν: <br/>
[How to write a bash script - OMGenomics](https://www.youtube.com/watch?v=F-gskSl4pwQ) |
[Writing your First Shell Script for Linux Tutorial - Kris Occhipinti](https://www.youtube.com/watch?v=eiBVlxxu3so) |
[Shell Scripting Tutorial: How to Create Shell Script in Linux/Unix - Guru99](https://www.guru99.com/introduction-to-shell-scripting.html) |
[When someone says “in your path,” what does this mean exactly? - SuperUser](https://superuser.com/questions/221926/when-someone-says-in-your-path-what-does-this-mean-exactly) |
[12. Pipeline commands in Linux. - Average Linux User](https://www.youtube.com/watch?v=5-wnAO5G7n0) |
[Linux pipe Command - LinuxHint](https://linuxhint.com/linux_pipe_command/) |
[Pipe, Grep and Sort Command in Linux/Unix with Examples - Guru99](https://www.guru99.com/linux-pipe-grep.html) |
[Piping in Unix or Linux - GeeksForGeeks](https://www.geeksforgeeks.org/piping-in-unix-or-linux/) |
[If Statements! - Ryans Tutorials](https://ryanstutorials.net/bash-scripting-tutorial/bash-if-statements.php) |
[While Loop - Linux Shell Scripting Tutorial Handbook](https://bash.cyberciti.biz/guide/While_loop) |
[Shell Scripting Tutorial (Variables) - Steve Parker](https://www.shellscript.sh/variables1.html) |
[Writting Shell Scripts - linuxcommand](https://linuxcommand.org/lc3_writing_shell_scripts.php) |
[Unix Shell Scripting - TutorialsPoint](https://www.tutorialspoint.com/unix/shell_scripting.htm) |
[What is the preferred method to echo a blank line in a shell script? - StackOverflow](https://stackoverflow.com/questions/37052899/what-is-the-preferred-method-to-echo-a-blank-line-in-a-shell-script) |
[Sleep Command in Linux - LinuxHint](https://linuxhint.com/sleep_command_linux/) |
[Using Shell Arrays - TutorialsPoint](https://www.tutorialspoint.com/unix/unix-using-arrays.htm) |
[Using for loops to traverse through an array in shell script [duplicate] - StackOverflow](https://stackoverflow.com/questions/33475592/using-for-loops-to-traverse-through-an-array-in-shell-script) |
[List files with certain extensions with ls and grep - StackOverflow](https://stackoverflow.com/questions/1447625/list-files-with-certain-extensions-with-ls-and-grep) 

# 9ο Παραδοτέο - Check the Weather

Για την 3η άσκηση γραμμής εντολών επέλεξα την εργασία που ζητούσε να δούμε το δελτίο καιρού της πόλης που γεννηθήκαμε και μιας πόλης που θέλουμε να ταξιδέψουμε μέσα από το terminal.

#### Asciinema link Ver.1: [Παραδοτέο 8 Ver.1](https://asciinema.org/a/mbzOxJBKhEHKyYoZQX0caNvBa)<br />
#### Asciinema link Ver.2: [Παραδοτέο 8 Ver.2](https://asciinema.org/a/BzJxzElE6z5HOyVfwY4jKKAAJ)

Στην version 1 χρησιμοποίησα το εργαλείο wttr.in που σου εμφανίζει το δελτίο καιρού εμφανίζοντας ένα ωραίο ascii art με το δελτίο, στο asciinema μου δείχνω το δελτίο της Άρτας και του Τόκιο. Ωστόσο εκτός από την εντολή “curl wttr.in/Tokyo” που σου δείχνει απλά το δελτίο προσθέτοντας μπροστά v2 δηλαδή “curl v2.wttr.in/Tokyo” το wttr σου εμφανίζει περισσότερες πληροφορίες και ένα meteogram του καιρού. Μετά προσθέτοντας el. μπροστά από το wttr μπορούμε να έχουμε το δελτίο στα ελληνικά. Επιπλέων με την εντολή “diff -Naur <(curl -s http://wttr.in/Αρτα ) <(curl -s http://wttr.in/Tokyo )” που εκτελώ είναι δυνατή η σύγκριση του καιρού δυο πόλεων. <br/>
<br/>
Στην version 2 έκανα χρήση του εργαλείου finger και inxi. Το finger γράφοντας την εντολή “finger City@graph.no” όπου city το όνομα της πόλης που αναζητάμε, μας εμφανίζει ένα ένα meteogram όπου κάθε σύμβολο αντιστοιχεί σε κάποιο καιρικό φαινόμενο. Τώρα το inxi είναι ένα tool που δεν είναι φτιαγμένο μόνο για τον καιρό όμως σου δίνει και αυτήν την δυνατότητα δίνοντας τη εντολή -W, οπότε γράφοντας “inxi –xxxW Tokyo,Japan”, το inxi σου εμφανίζει κάποια εκτεταμένα καιρικά δεδομένα για την περιοχή που του έδωσες. Το xxx μπροστά από το W είναι για να σου εμφάνιση ακόμα περισσότερες πληροφορίες (τυπος δελτιου). Το ξεχωριστό που έχει το inxi σε αυτό τον τομέα είναι ότι σε αφήνει να αναζητήσεις τον καρό σε μια περιοχή μέσω τον γεωγραφικών συντεταμένων τις οπότε στο asciinema μου έδωσα της γεωγραφικές συντεταμένες της Κέρκυρας “inxi -xxxW 39.6243,19.9217” και το inxi μου επέστρεψε τις αντίστοιχες πληροφορίες για τον καιρό σε αυτήν την περιοχή.<br/>
<br/>
### Προβλήματα που χρειάστηκε να επιλυθούν μέχρι την εκτέλεση:
Μια παρατήρηση που είχα να κάνω με το inxi είναι ότι επειδή πριν κάνω το asciinema είχα χρησιμοποιήσει πάλι τις παραπάνω εντολές, όταν πήγα να κάνω καταγραφή το inxi αποφάσισε το εξής, και πέταγε το σφάλμα: <br/>
"you have exceeded maximum limit for this source" <br/>
όπου στην ουσία επειδή είχα χρησιμοποίηση αρκετές φορές το source του καιρού το inxi μου απαγόρευσε για περίπου 2 μέρες την χρήση του. Δυστυχώς ακόμη και μετά από πολύ ψάξιμο δεν βρέθηκε άμεση λύση στο πρόβλημα, οπότε το μόνο που μπορούσα να κάνω είναι να περιμένω. Αργότερα κατάφερα να το επαναφέρω και να κάνω χρήση του source ώστε να το καταγράψω.

## Shell Scripting – TermWeather.sh
Αυτήν την φορά έφτιαξα ένα shell script με το οποίο μπορείς να πάρεις εκτεταμένες μετεωρολογικές πληροφορίες από τις αγαπημένες σου περιοχές. <br/>
Το shell script αυτό αξιοποιεί τα προγράμματα wttr.in, inxi και finger και έτσι μπορεί να δώσει πάρα πολλές πληροφορίες για τον καιρό σε πολύ λίγο χρόνο. Στο shell script έχω κατασκευάσει 2 πίνακες οι οποίοι περιέχουν τις τοποθεσίες από τις αγαπημένες περιοχές του χρήστη. Ο καθένας “πειράζοντας” λίγο τον πίνακα (μπορεί άνετα να βάλει και άλλες θέσεις χωρίς να χαλάσει το πρόγραμμα) μπορεί να δει μετεωρολογικά δεδομένα για μια από αυτές τις περιοχές, οι ακόμα και για όλες με την μια! <br/>

#### TermWeather.sh Demo: [Demo for TermWeather.sh by KuhakuNeko](https://asciinema.org/a/2LLhbLynRi6GJV2aMkwHjtQ4P)
#### TermWeather.sh shell script: [TermWeather.sh](https://github.com/KuhakuNeko/KuhakuNekoLinuxShellScripts/blob/main/TermWeather.sh)
#### Μπορείτε επίσης να επισκεφτείτε την σελίδα με όλα τα shell scripts μου για περισσότερα: [KuhakuNekoLinuxShellScripts](https://github.com/KuhakuNeko/KuhakuNekoLinuxShellScripts)

### Εργαλεία που χρησιμοποίησα:
curl, wttr.in, inxi, finger

### Συνδέσμοι πηγών:
[Weather from terminal - Ask Ubuntu](https://askubuntu.com/questions/390329/weather-from-terminal) |
[Wttr.in - Help Page](https://wttr.in/:help) |
[How To Check Weather Details From Command Line In Linux - OsTechnix](https://ostechnix.com/check-weather-details-command-line-linux/) |
[Get Your Weather Forecast From the Linux CLI - linuxconfig.org](https://linuxconfig.org/get-your-weather-forecast-from-the-linux-cli) |
[Retrieve Weather information using Linux command line - linuxconfig.org](https://linuxconfig.org/retrieve-weather-information-using-linux-command-line) |
[inxi -w fails to report weather conditions. [Solved]](https://forums.linuxmint.com/viewtopic.php?t=289751) |
[Finger command in Linux with Examples - GeeksForGeeks](https://www.geeksforgeeks.org/finger-command-in-linux-with-examples/) |
[Retro weather forecast (finger)](https://www.reddit.com/r/linux/comments/ouday/retro_weather_forecast_finger/) |
[graph.no - Weather forecast via finger](https://0p.no/2014/12/13/graph_no___weather_forecast_via_finger.html)

# 11ο Παραδοτέο - Άσκηση γραμμής εντολών



# Έξτρα Ασκήσεις Terminal

## Έξτρα Άσκηση Terminal 1 - Create Your Final Presentation
#### Asciinema link Ver.1: [Έξτρα Άσκηση Terminal 1 Ver.1](https://asciinema.org/a/sBTu1JJYaL8f0MxAlSH659TVE)<br />
#### Asciinema link Ver.2: [Έξτρα Άσκηση Terminal 1 Ver.2](https://asciinema.org/a/SHULbr7gsGChiAxQxEo6Q3N93)

Είχα κάνει και αυτή την επιπλέον άσκηση γραμμής εντολών όμως αποφασισα να την τοποθετίσω στις έξτρα ασκήσεις διότι δεν υπήρχε κατι ιδιαίτερο κάνω shell script. <br/>

Αυτή η εργασία ζητούσε να δημιουργήσουμε μια παρουσίαση που να ανοίγει εντός του terminal και να έχει 3 διαφάνειες, μια με το ΑΜ μας, μια λίστα με checkboxes από τα παραδοτέα που έχουμε κάνει, και μια ακόμη που αναφέρει κάποια πράγματα που δημιούργησα.

Στην version 1 χρησιμοποίησα το εργαλείο mdp το οποίο σου επιτρέπει να δημιουργήσεις μια παρουσίαση μέσω ενός αρχείου γραμμένο σε markdown. Γράφοντας mdp και το δίνοντας το path προς το text αρχείο το mdp αρχίζει την παρουσίαση. Το συγκεκριμένο εργαλείο χρησιμοποιεί  τον ίδιο τύπο markdown με το github επομένως η συγγραφή διαφανειών είναι πολύ εύκολη. Έχω προσθέσει link, checkboxes, και έχω κάνει highlight στην τελική διαφάνεια. (Δείχνω το αρχείο μέσο του nano editor)

Στην 2η version χρησιμοποιώ άλλα 2 εργαλεία για την δημιουργία της ίδιας διαφάνειας. Το πρώτο εργαλείο είναι το patat. Το patat όπως και το mdp αρχίζει την παρουσίαση με παρόμοια εντολή. Η διαφορά τους είναι ότι το patat επιτρέπει και την εισαγωγή εικονων και σου δίνει περισσότερες επιλογές όσον αφορά τα χρώματα και το layout. Χρησιμοποιεί και αυτό markdown όμως έχει και κάποιες προθήκες. Το τρίτο tool που χρησιμοποιώ είναι το present το οποίο κατά την γνώμη μου είναι το καλύτερο από τα προαναφερόμενα. Το present χρησιμοποιώντας markdown μπορεί και δημιουργεί επικεφαλίδες τύπου ascii art, σου επιτρέπει να αλλάξεις τα χρώματα των γραμμάτων και του background color, και πάνω από όλα σε αφήνει να βάλεις εφέ και custom transitions. Αυτά επιτυγχάνονται με εντολές markdown όπως τις “<!--fg=cyan bg=black -->” και “<!—effect=stars -->” οι οποίες φαίνονται πως γίνετε η σωστή χρήση τους και στο asciinema.

<p align="center">
<img src="https://github.com/KuhakuNeko/PicturesForLessons/blob/main/HCI%208o%20%CE%A0%CE%B1%CF%81%CE%B1%CE%B4%CE%BF%CF%84%CE%AD%CE%BF/FinalPresentPresent.gif" width="480px">
</p>

### Εργαλεία που χρησιμοποίησα:
Mdp, Patat, Present, Nano

### Συνδέσμοι πηγών:
[Ubuntu Manpage: mdp - A command line based presentation tool](http://manpages.ubuntu.com/manpages/focal/man1/mdp.1.html) |
[John Kennedy - mdp presentation - gitlab](https://gitlab.com/skebi69/mdp-presentation/-/blob/master/README.md) |
[mdp - Markdown Presentation tool video](https://www.youtube.com/watch?v=P7cjH-6nS_o) |
[About task lists - GitHub Docs](https://docs.github.com/en/free-pro-team@latest/github/managing-your-work-on-github/about-task-lists) |
[Patat Readme.md developer page](https://github.com/jaspervdj/patat) |
[Present Readme.md developer page](https://github.com/vinayak-mehta/present)

# ΕΠΙΛΟΓΟΣ

Τελειώνοντας την εργασία εξαμήνου έχω καταφέρει πολλούς από τους αρχικούς μου στόχους, και βρέθηκα ένα βήμα πιο κοντά στους απώτερους μεγαλύτερους στόχους μου. Με τις εργασίες στο terminal κατάφερα να εξοικειωθώ με ένα διαφορετικό λειτουργικό από τα πιο σύνηθες σε μένα, ενώ πλέων η οπτική μου για το terminal άλλαξε εντελώς και το έχω ενσωματώσει στην καθημερινή μου ζωή για συγκεκριμένες εργασίες. Χρησιμοποιώ πλέων με άνεση το terminal και ένα αρκετά μεγάλο ρεπερτόριο προγραμμάτων από τις ασκήσεις που έκανα και όχι μόνο. Ακόμη ξεκινώντας από το 0 παρόλο που δεν είχα ξανά-ασχοληθεί με το shell scripting και το pipelining κατάφερα να δημιουργήσω εφαρμογές με νόημα (και κάποιου είδους interface) οι οποίες είναι χρήσιμες στην καθημερινή ζωή, ακόμα και αν το γραφικό περιβάλλον τους δεν ήταν υψηλού επιπέδου. <br/>
<br/>
Κατάφερα να εξοικειωθώ πολύ με το GitHub και τελικά πραγματικά έγινα πολύ πιο ενεργός, ανεβάζοντας παλιές μου δημιουργίες, αλλά και αναπτύσσοντας καινούργιες και πρωτότυπες όπως τα shell scripts των ασκήσεών μου. Ταυτόχρονα είναι και ένας νέος τρόπος επικοινωνίας με άλλους προγραμματιστές και tech enthusiasts και μια νέα πηγή ιδεών. <br/>
<br/>
Επιπλέoν επέλεξα ασκήσεις προγραμματισμού οι οποίες σχετίζονται περισσότερο με τους στόχους μου. Έμαθα αρκετά μέσα από τις εργασίες προγραμματισμού τα οποία μπορώ να τα εφαρμόσω σε σελίδες που δημιουργώ (π.χ. να πραγματοποιούνε ενέργειες με βάση τα πλήκτρα, ή διαδραστικά μενού με πολλούς διαφορετικούς τύπους δεδομένων, μικρά βιντεοπαιχνίδια κ.α.). Μέσα από τις ασκήσεις όχι μόνο έμαθα την δομή αυτών των γλωσσών καλύτερα από ότι γνώριζα ως τώρα αλλά επέκτεινα πολύ τις γνώσεις μου στο πώς να τις συνδυάσω μεταξύ τους και να χρησιμοποιήσω τα ξεχωριστά εργαλεία τις κάθε μιας ώστε να δημιουργήσω κάτι πιο συνολικό. Παίρνοντας κάθε κομμάτι μπορώ πλέων να τα εφαρμόσω σε κάτι μεγαλύτερο, που είναι αυτό που ήθελα. Μέχρι τώρα ήμουν πιο εγκλωβισμένος στις στατικές σελίδες όμως οι εργασίες με βοήθησαν να ξεφύγω από αυτό και να αρχίσω να φτιάχνω πιο διαδραστικά και καλαίσθητα πράγματα. <br/>
<br/>
Ένας άλλος στόχος μου ήταν να μάθω περισσότερα για την διάδραση και για την εμπειρία από την μεριά του χρήστη. Σε αυτό το κομμάτι έμαθα πάρα πολλά όμως όχι τόσο για το πώς αντιλαμβάνεται την διάδραση ο χρήστης αλλά περισσότερο από την μεριά των δημιουργών των διαφορετικών τρόπων διάδρασης. Μέσα από τα εβδομαδιαία quiz, τις διαλέξεις αλλά και το συμμετοχικό περιεχόμενο όπου έκανα μια διευρυμένη έρευνα έμαθα πάρα πολλά για το πως δημιουργήθηκαν αυτοί οι διαφορετικοί τρόποι διάδρασης που χρησιμοποιούμε καθημερινά για να επικοινωνήσουμε με τις συσκευές. Όλα όσα έμαθα ήταν τόσο ενδιαφέροντα και με βοήθησαν να σχηματίσω μια πιο εμπεριστατωμένη γνώμη πάνω σε διάφορα θέματα. Ακόμα με έβαλαν και στην θέση των μεγάλων δημιουργών διάφορων συστημάτων και τρόπων διάδρασης, έμαθα για τα λάθη τους, τις μεγάλες συνεισφορές τους, τις οπτικές τους και έμαθα για την διαδρομή τους μέσα στα χρόνια. Αυτό το κομμάτι ήταν ίσως και το πιο ενδιαφέρων καθώς πιστεύω ότι όλα αυτά είναι πράγματα που πρέπει να ξέρω για να μπορέσω να πάω μπροστά σε αυτό τον τομέα. <br/>
<br/>
Κλείνοντας την εργασία του εξαμήνου μπορώ να πω ότι μεγάλο ποσοστό των στόχων μου ολοκληρώθηκε. Ακόμη έμαθα και υλοποίησα πράγματα που δεν είχα σκεπτεί ότι χρειαζόμουν. Όλα αυτά με βοήθησαν στην ολοκλήρωση των βασικών μου στόχων αλλά με έφεραν και ένα βήμα πιο κοντά στον μεγαλύτερο απώτερο σκοπό μου που είναι τελικά να δημιουργήσω κι εγώ κάποια στιγμή ένα νέο ή ξεχωριστό τρόπο διάδρασης. <br/>
