# **Μάθημα: Επικοινωνία Ανθρώπου Υπολογιστή**

## **Ονοματεπώνυμο: Παπαγεωργίου Ισαβέλλα**
## **ΑΜ: 2019235**


# **Εισαγωγή**
### Μετά το τέλος αυτού του εξαμήνου, θα ήθελα να έχω εξοικειωθεί με την χρήση του terminal, αν και ήδη υπάρχει μια σχετική εξοικείωση, λόγω της ασχολίας μου με προγραμματισμό σε linux συστήματα χωρίς την χρήση IDE. Για εμένα το πιο σημαντικό που θα μπορούσα να μάθω πως να κάνω, από αυτό το μάθημα, θα ήταν η δημιουργία δικών μου interfaces, σε απλές εφαρμογές που μπορώ να υλοποιήσω, με τις υπάρχουσες γνώσεις προγραμματισμού. 

# Πίνακας Παραδοτέων

| Εβδομάδα* | Παραδοτέο |
| --- | --- |
| 1 |Intro to HCI and basic github |
| 2 | [Interactive text](#Παραδοτέο-2) | 
| 3 | **Getting familiar with bash** <br/> [Student ID on bash](https://github.com/IsabellaPap/hci/blob/2019235/2019235/README.md#getting-familiar-with-bash)<br/> [Show dot files, shell configuration and system info](https://github.com/IsabellaPap/hci/blob/2019235/2019235/README.md#%CE%B5%CE%BC%CF%86%CE%AC%CE%BD%CE%B9%CF%83%CE%B7-dot-files-shell-configuration-file-%CE%BA%CE%B1%CE%B9-system-information)|
|   | [Search/Download Torrents through bash](https://github.com/IsabellaPap/hci/blob/2019235/2019235/README.md#searchdownload-torrents-through-bash)|
| 4 | [Keyboard input](#Παραδοτέο-4) |
| 5 | **Convert between different text formats** <br/>[Getting a text editor, Vim or Emacs?](https://github.com/IsabellaPap/hci/blob/2019235/2019235/README.md#getting-a-text-editor-vim-or-emacs)<br/>[Figuring out Vim](https://github.com/IsabellaPap/hci/blob/2019235/2019235/README.md#figuring-out-vim)<br/>[Installing Pandoc](https://github.com/IsabellaPap/hci/blob/2019235/2019235/README.md#installing-pandoc)<br/>[Using pandoc to change format](https://github.com/IsabellaPap/hci/blob/2019235/2019235/README.md#using-pandoc-to-change-format)<br/>[Track formatting with git](https://github.com/IsabellaPap/hci/blob/2019235/2019235/README.md#track-formatting-with-git)|
| 6 | **Συμμετοχικό Περιεχόμενο**<br/>[Matlab](https://github.com/IsabellaPap/hci/blob/2019235/2019235/README.md#%CE%B5%CE%B9%CE%BA%CF%8C%CE%BD%CE%B1-1%CE%B7)<br/>[Unity](https://github.com/IsabellaPap/hci/blob/2019235/2019235/README.md#%CE%B5%CE%B9%CE%BA%CF%8C%CE%BD%CE%B1-2%CE%B7) |
| 7 | [Image Processing](#Παραδοτέο-6) |
| 8 | **Download mp3**<br/>[Creating a config file](https://github.com/IsabellaPap/hci/blob/2019235/2019235/README.md#creating-a-config-file)<br/>[Downloading and Playing the song](https://github.com/IsabellaPap/hci/blob/2019235/2019235/README.md#downloading-and-playing-the-song) |
| 9 |[SVG Image](https://github.com/IsabellaPap/hci/blob/2019235/2019235/README.md#%CF%80%CE%B1%CF%81%CE%B1%CE%B4%CE%BF%CF%84%CE%AD%CE%BF-9) |
| 10 |[pending](https://github.com/IsabellaPap/hci/blob/2019235/2019235/README.md#%CF%80%CE%B1%CF%81%CE%B1%CE%B4%CE%BF%CF%84%CE%AD%CE%BF-10) |
| 11 |**Συμμετοχικό Περιεχόμενο** |
| 12 | Τελική αναφορά* |

# Παραδοτέο 2
## Interactive text
Η πρώτη μου απόπειρα σε άσκηση προγραμματισμού δεν ήταν ιδιαίτερα επιτυχημένη.
[![preview](https://www.dropbox.com/s/zldbjb2herot7zr/Screenshot_20201222_180851.png?raw=1)](https://p19papa11.netlify.app/remix/interactive-text/)
 
# Παραδοτέο 3
## Getting familiar with bash
### Αλλαγή ονόματος σε Student ID στο bash
Με τη βοήθεια αυτού του πολύ κατατοπιστικού [οδηγού](https://phoenixnap.com/kb/change-bash-prompt-linux)

[![asciicast](https://asciinema.org/a/Ta70L3oqMnG3h1dC22qb92CPX.svg)](https://asciinema.org/a/Ta70L3oqMnG3h1dC22qb92CPX)

### Εμφάνιση dot files, shell configuration file και System information 
(hardware + software)
Για το System Information συμβουλεύτηκα [αυτό το άρθρο](https://vitux.com/get-linux-system-and-hardware-details-on-the-command-line/)

[![asciicast](https://asciinema.org/a/mpUVCTOO176TLj2dd1MR8gU0s.svg)](https://asciinema.org/a/mpUVCTOO176TLj2dd1MR8gU0s)

# Bonus
## Search/Download Torrents through bash
(Λόγω μειωμένης δυσκολίας του προηγούμενου.)
### Search/Download torrent μέσω τερματικού.
Για την εργασία αυτή, χρειάστηκε να εγκαταστήσω openvpn σε Arch Linux Σύστημα. Με τη βοήθεια που έλαβα από ένα [**issue**](https://github.com/epidrome/dokey/issues/1#issue-732227411) που άνοιξα στο αντίστοιχο [**αποθετήριο**](https://github.com/epidrome/dokey.git), κατάφερα να εγκαταστήσω το openvpm μέσω ενός GUI για systemd based συστήματα ([qopenvpn](https://github.com/xmikos/qopenvpn)).
Το torque δυστυχώς έκανε fail-to-build στο σύστημα μου, τόσο από το AUR, όσο και από terminal ([yay](https://github.com/Jguer/yay)). Χρησιμοποίησα το [**we-get**](https://ostechnix.com/search-torrents-command-line-linux/) αρχικά για να δω αν μπορώ να κάνω bypass την απογόρευση της [ΕΔΠΠΙ](https://opi.gr/edppi_block/edppi_block.html) πράγμα που δε δούλεψε, και αφού έβαλα VPN, το χρησιμοποιήσα για να αποφύγω τα adware/malware των browser αλλά και από περιέργεια για αυτή τη νέα δυνατότητα. Για το download χρησιμοποίησα το transmission-daemon, για το οποίο το torque είναι ένα TUI.

[![asciicast](https://asciinema.org/a/25xfOzXjVqURCtDU9EpV6ThoH.svg)](https://asciinema.org/a/25xfOzXjVqURCtDU9EpV6ThoH)

# Παραδοτέο 4
## Keyboard input
### Άσκηση 1: Τροποποιήστε το παράδειγμα έτσι ώστε όταν το αυτοκίνητο κινείται όπισθεν να έχει μικρότερη (τη μισή) ταχύτητα από το όταν κινείται έμπροσθεν.
Ολοκληρώθηκε το πρώτο ζητούμενο αλλάζοντας την τιμή του dy στο πλήκτρο με κωδικό 40, στο μισό.
Το δεύτερο ζητούμενο πραγματοποιήθηκε με την εισαγωγή ενός codeblock που εμπόδιζε την αλλαγή του x αν το αυτοκίνητο βρισκόταν σε μία συγκεκριμένη θέση. έτσι το αυτοκίνητο φαίνεται να σταματάει επί τόπου.

[![preview](https://www.dropbox.com/s/g9bebujm0yerf72/thumbnailCAR.png?raw=1)](https://p19papa11.netlify.app/remix/keyboard-input/)


# Παραδοτέο 5

## Getting a text editor, Vim or Emacs?
![γραφήματα](https://www.dropbox.com/s/4fkjf5pm85kkyy4/1-1.jpg?raw=1)

Με βάση αυτό το γράφημα επέλεξα το Vim ως text editor, αν και το Emacs φαίνεται σαν ένα ωραίο challenge, για μια άλλη φορά ίσως. Το Linux community το περιγράφει ως ένα "sandbox χωρίς διακριτό σημείο έναρξης".

Σημείωση: Προς έκπληξή μου ήταν ήδη εγκατεστημένο στο σύστημά μου.
[![asciicast](https://asciinema.org/a/9ieOlRRPqB06Y0NhVLU4IjG2U.svg)](https://asciinema.org/a/9ieOlRRPqB06Y0NhVLU4IjG2U)

### Figuring out Vim
Παρά τους οδηγούς που βρήκα online, δυσκολεύτηκα να συνηθήσω τον χειρισμό του Vim. Το πιο δύσκολο να ανακαλύψω ήταν πως να σβήνω μόνο ένα γράμμα σε περίπτωση typo. Τα shortcuts για αυτό τα βρήκα σχεδόν κατά τύχη, οπότε υποψιάζομαι πως υπάρχει βέλτιστος τρόπος και δεν ήταν αυτός που χρησιμοποιούσα (αργότερα ανακάλυψα πως με το Backspace μπορώ να αντικαταστήσω έναν από τους προηγούμενους χαρακτήρες ενώ εγώ πατούσα Esc -> x -> a)

[![asciicast](https://asciinema.org/a/qAygov6XVFRVWq9a22Hk6pydR.svg)](https://asciinema.org/a/qAygov6XVFRVWq9a22Hk6pydR)

### Installing Pandoc
Δεν βρήκα το Pandoc στο AUR οπότε πήγα back to basics και το εγκατέστησα ως tarball.

[![asciicast](https://asciinema.org/a/0k4y6AVTUqmLp0hRjF6u8Yk1Z.svg)](https://asciinema.org/a/0k4y6AVTUqmLp0hRjF6u8Yk1Z)

### Configuring git and and commiting changes
Θα δείτε πολλά λάθη κατά τη διάρκεια του configuration. (this serves as a good guide: What not to do while setting up Git)

[![asciicast](https://asciinema.org/a/jQbShyhuiYlMqABO03ClAnHrc.svg)](https://asciinema.org/a/jQbShyhuiYlMqABO03ClAnHrc)

[![asciicast](https://asciinema.org/a/cM3nldhKOYHSmduHzXeSpyaLU.svg)](https://asciinema.org/a/cM3nldhKOYHSmduHzXeSpyaLU)

### Using pandoc to change format
Το pandoc αποδείχτηκε μια πολύ χρήσιμη εφαρμογή, καθώς μπορεί πολύ εύκολα να μετατρέψει, ακόμα και plaintext σε html, ή άλλο format. Αυτό γίνεται σε ελάχιστο χρόνο μέσα από απλές εντολές στο terminal.
 
 [![asciicast](https://asciinema.org/a/aEfZbDI3b4jo2N8GoT1NwHZeB.svg)](https://asciinema.org/a/aEfZbDI3b4jo2N8GoT1NwHZeB)
 
 ### Track formatting with git
 
 [![asciicast](https://asciinema.org/a/4y8uLlwlUDMtbqSqjGgwjytaY.svg)](https://asciinema.org/a/4y8uLlwlUDMtbqSqjGgwjytaY)
 
 # Παραδοτέο 6
 
## Για το συμμετοχικό υλικό (ζητούμενο Α1) προστέθηκαν 2 εικόνες μαζί με τις λεζάντες τους στα αποθετήρια [images](https://github.com/IsabellaPap/images.git) και [gallery](https://github.com/IsabellaPap/_gallery.git) αντίστοιχα.
### Εικόνα 1η
![matlab](https://www.dropbox.com/s/p5smm9f6n80yfyd/matlab.jpg?raw=1)

To MatLab(1981) ήταν, σύμφωνα με τον Cleve Moler, ένα χόμπι ή ενας πειραματισμός του με μια νέα πτυχή του προγραμματισμού.Ο τότε καθηγητής του University of New Mexico, ήθελε οι μαθητές του να έχουν πρόσβαση στις μαθηματικές βιβλιοθήκες της εποχής(LINPACK,EISPACK) χωρίς να χρειάζεται να προγραμματίζουν σε Fortran. Το MatLab αποτελεί τώρα προϊόν της εταιρίας Mathworks με τεράστια ζήτηση, σε Πανεπιστήμια και ερευνητικά εργαστήρια.

### Εικόνα 2η
![unity](https://www.dropbox.com/s/juahxeqf2s6dvb2/unity.png?raw=1)
Το Unity(2005), δημιουργήθηκε με σκοπό να δώσει ένα τέλος στο μονοπώλιο των εταιριών στο game development. Παρόλα αυτά, αναγνωρίστηκε ως το πρόγραμμα που αξιοποιεί τα γραφικά του Mac OS X καλύτερα από οποιοδήποτε άλλο λογισμικό. Το Unity μέσα σε 2 χρόνια επεκτάθηκε σε άλλα λειτουργικά και εξελίχθηκε ραγδαία. Σήμερα η γραφική διεπαφή του δεν χρησιμοποιείται μόνο για game development αλλά για ένα εύρος λειτουργιών (Σχεδίαση αυτοκινήτων, δημιουργία εικονικής πραγματικότητας, Animation).

# Παραδοτεο 7
[![preview](https://www.dropbox.com/s/nz1j1p2pojnnsp3/Screenshot_20201222_180642.png?raw=1)](https://p19papa11.netlify.app/remix/image-filter/)

# Παραδοτέο 8

Για την αναζήτηση και λήψη βίντεο χρησιμοποίησα το [youtube-dl](https://github.com/ytdl-org/youtube-dl). Για την αναπαραγωγή των τραγουδιών χρησιμοποίησα το [CMus](https://cmus.github.io/), ένα console music player γραμμένο σε C(lightweight).

### Creating a config file
Για την διευκόλυνσή μου, δημιούργησα, με βάση τις οδηγίες του README στο αποθετήριο του youtube-dl, ένα configuration file, με εντολές που θα ήθελα να εκτελούνται κάθε φορά που τρέχω το youtube-dl. Συγκεκριμένα το έβαλα να κάνει πάντα extract τον ήχο, να μην αντιγράφει το mtime και να αποθηκεύει τα αρχεία στον φάκελο "music" με ένα δεδομένο format. Τέλος, δημιούργησα ένα .netrc αρχείο που πέρασα ως argument στο configuration αρχείο μου για να κάνει αυτόματα login όποτε χρειάζεται. Λόγω αδυναμίας απόκρυψης των κωδικών μου στο αρχείο .netrc έχω χρησιμοποιήσει ψεύτικο κωδικό.

[![asciicast](https://asciinema.org/a/26aPiStOLOfSfTVI9CC9DDyz9.svg)](https://asciinema.org/a/26aPiStOLOfSfTVI9CC9DDyz9)

### Downloading and Playing the song
Δεν υπάρχει ήχος για το asciicast αυτό, όμως το τραγούδι έπαιξε κανονικά, χωρίς πρόβλημα.

[![asciicast](https://asciinema.org/a/47RzGxjMY8fNrIZzKsXZsdP7X.svg)](https://asciinema.org/a/47RzGxjMY8fNrIZzKsXZsdP7X)

# Παραδοτέο 9
[![Netlify link](https://www.dropbox.com/s/olxiwrwubhd8etd/Screenshot_20201222_181522.png?raw=1)](https://p19papa11.netlify.app/remix/image/)

Σημείωση: Λόγω του μεγέθος του embed, δεν τα εμφανίζει δίπλα δίπλα, ενώ είναι.

# Παραδοτέο 10
Συναντώ δυσκολίες όταν πρέπει να επεξεργαστώ config files, επειδή οι περισσότερες οδηγίες αναφέρουν τα paths για debian λειτουργικά, και το δικό μου είναι arch.
Έτσι πολλές φορές δεν μπορω να βρω το config file που ψάχνω. Σε αυτή τη περίπτωση νομίζω επηρρέασε την εργασία μου επειδή δημιούργησε καινούριο αρχείο σε άσχετο directory.

Προσωρινό Asciinema: [![asciicast](https://asciinema.org/a/dQtpmitKTQ9Ld8hwVC0DxCsH6.svg)](https://asciinema.org/a/dQtpmitKTQ9Ld8hwVC0DxCsH6)

# Παραδοτέο 11
### Συμμετοχικό Περιεχόμενο
Προστέθηκαν 2 καινούρια χρονολόγια στον φάκελο [_timelines](https://github.com/IsabellaPap/site/tree/master/_timeline) και 2 καινούργια σετ διαφανειών στον φάκελο [slides](https://github.com/IsabellaPap/site/tree/master/_slides)
