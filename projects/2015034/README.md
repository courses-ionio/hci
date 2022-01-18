Μπακογιάννης Ευάγγελος 
ΑΜ Π2015034

| Εβδομάδα* | Παραδοτέο | Σύνοψη |
| --- | --- | --- |
| <a href="#A">1</a> |<a href="#A">Εισαγωγή </a> | Φορκ του αποθετηρίου, δημιουργία του δικού μου branch, συγγραφή εισαγωγής |
| <a href="#B">2</a> | <a href="#B">Εγκατάσταση των Arch Linux</a> | Σύνοψη της εγκατάστασης των Arch Linux και των προβλημάτων που αντιμετώπισα |
| 3 | Εγκατάσταση των Arch Linux(Δείτε Παραδοτέο 2) | - |
| <a href="#C">4</a> | <a href="#C">Συμμετοχικό Περιεχόμενο 1A</a> | Επιλογή θεματικών ενοτήτων και εικόνων για το Συμμετοχικό Υλικό |
| 5 | Εγκατάσταση των Arch Linux(Δείτε Παραδοτέο 2)| - |
| <a href="#D">6</a> | <a href="#D">Συμμετοχικό Περιεχόμενο 2A</a> | Προσθήκη των εικόνων μου στο αντίστοιχο σετ διαφανειών και χρονολογίου |
| <a href="#E">7</a> | <a href="#E">Άσκηση γραμμής εντολών 1</a> | Λήψη κομματιού από το YouTube και αναπαραγωγή του μέσω terminal |
| <a href="#F">8</a> | <a href="#F">Συμμετοχικό Περιεχόμενο 1Β</a> | Συγγραφή case study σχετικά με τις εικόνες που πρόσθεσα |
| <a href="#G">9</a> | <a href="#G">Άσκηση γραμμής εντολών 2</a> | Χρήση org-mode στο emacs |
| <a href="#H">10</a> | <a href="#H">συμμετοχικό περιεχόμενο 2B</a> | Συγγραφή σύντομου βιογραφικού του Ralph H Baer |
| 11 | Άσκηση γραμμής εντολών | - |
| <a href="#I">10</a> | <a href="#I">Τελική αναφορά</a>| Επίλογος και αποτελέσματα με το πέρας του εξαμήνου |

# <a name="A">Εισαγωγή</a>
Οι στόχοι που έχω θέσει σε αυτό το μάθημα είναι αφενός η εξοικείωση μου με το περιβάλλον του github, καθώς είναι αδιαμφισβήτητα το πλέον απαραίτητο εργαλείο για κάθε προγραμματιστή που σέβεται τον εαυτό του, και αφετέρου η κατανόηση σε βάθος της αρμόζουσας διάδρασης ανθρώπου και υπολογιστή. Θεωρώ πως το συγκεκριμένο μάθημα μπορεί να μου προσφέρει πληθώρα γνώσεων που με την σειρά τους θα μου δώσουν βασικές αρχές προγραμματισμού φιλικού προς τον χρήστη(user friendly). Οι ανάγκες που έχω από το συγκεκριμένο μάθημα είναι, αρχικά, η συνεχής προσφορά γνώσης σε σύγχρονα θέματα που αφορούν το μάθημα, καθώς επίσης περιεχόμενο που θα είναι αρκετά πρακτικό. Τέλος, βασική μου ανάγκη είναι η αλληλεπίδραση με τους συμφοιτητές μου και με τους αρμόδιους καθηγητές/βοηθούς του μαθήματος, έχοντας ως σκοπό τον εντοπισμό των αδυναμιών μου και την εξάλειψη αυτών σε όσο μεγαλύτερο βαθμό είναι εφικτό.


# <a name="B">Εγκατάσταση των Arch Linux</a>
Αυτή την εβδομάδα ασχολήθηκα κυρίως με την εγκατάσταση των Arch Linux σε ένα παλιό υπολογιστή που έχω. Για αρχή, έφτιαξα ένα usb stick bootable με το πρόγραμμα Rufus. Εν συνεχεία, με βάση το installation guide από το Arch Wiki, έκανα τις απαραίτητες κινήσεις για να εγκαταστήσω το λειτουργικό σύστημα Arch Linux στον υπολογιστή. Επιγραμματικά, έκανα configure το internet connection μου, έκανα partitions, format και mount πάνω στον σκληρό δίσκο. Έπειτα έκανα το base install και εγκατέστησα μερικά packages που θα χρειαστώ αργότερα(πχ. nano). Έκανα generate το fstab file, μπήκα με chroot και ρύθμισα το timezone και έφτιαξα και τα locales. Άλλαξα το hostname σε archlinux και έφτιαξα και τα hosts files. Έπειτα, έφτιαξα ένα password για το root, και έκανα install το boot loader(με pacman και grub). Μετά έκανα reboot το σύστημα μου, έβγαλα το usb stick και έκανα activate το internet connection να ανοίγει αυτόματα κάθε φορά που ανοίγω τον υπολογιστή. Έφτιαξα τον user μου με όνομα p2015034(τον Αριθμό Μητρώου μου), του έδωσα sudo rights και έβαλα password και σε αυτόν. Εγκατέστησα τα graphics drivers και το display server(xorg). Έκανα install το display manager(lxdm). Τέλος έβαλα και ένα desktop environment(xfce4). O λόγος που έβαλα xfce ήταν επειδή το σύστημα που έχω είναι αρκετά παλιό και το xfce είναι αρκετά ελαφρύ.

### Προβλήματα που αντιμετωπίστηκαν

1) Τα περισσότερα tutorials, όπως και το ίδιο το Arch Wiki, προτείνουν να κάνεις την εγκατάσταση σε ένα σύστημα που να υποστηρίζει UEFI. Όπως είναι φυσικό, τα βήματα εγκατάστασης είναι και αυτά πάνω σε ένα σύστημα που υποστηρίζει UEFI. Όμως, όπως αναφέρω και πιο πάνω, ο υπολογιστής που έχω στην διάθεση μου είναι αρκετά παλιός, έχοντας ως αποτέλεσμα να μην υποστηρίζει UEFI, αλλά μόνο BIOS/MBR. Για να επιλύσω αυτό το πρόβλημα, έψαξα πιο παλιά tutorials για εγκατάσταση των Arch Linux σε περιβάλλον BIOS. Για καλή μου τύχη, υπήρχαν αρκετά διαθέσιμα forum threads, όπως και βιντεάκια στο YouTube, κάνοντας αυτή τη δυσκολία να ξεπεραστεί σχετικά γρήγορα. Βέβαια, χρειάστηκε να κάνω ένα fresh intall των Arch Linux, διότι την πρώτη φορά, δεν είχα σκεφτεί ότι το σύστημα μου μπορεί να μην υποστηρίζει UEFI και κατέληξα με ένα corrupted λογισμικό.
2) Στην δεύτερη προσπάθεια που έκανα να εγκαταστήσω τα Arch Linux, έκανα το installation με Gnome. Το Gnome λειτουργούσε άψογα, αλλά επειδή ήταν βαρύ για τον υπολογιστή μου, κατέληξα στο να μου freeze-άρει η οθόνη ανά τακτά μικρά χρονικά διαστήματα και ο υπολογιστής γενικότερα φαινόταν πως δυσκολευόταν να ανταπεξέλθει. Για να επιλύσω αυτό το πρόβλημα, έκανα πάλι fresh install των Arch Linux αυτή τη φορά χρησιμοποίησα xfce4, που ήταν αρκετά ελαφρύ και ο υπολογιστής μου μπορούσε να το "σηκώσει".
3) Σαν τελευταίο πρόβλημα, κατά την εγκατάσταση με το xfce4 κάτι πήγε στραβά με το generate των locales, έχοντας ως αποτέλεσμα διάφορες εντολές που ήθελα να τρέξω, όπως πχ. το asciinema, να μην τρέχουν μιας και έβλεπε το locale.gen και το locale.conf σαν corrupted αρχεία. Δοκίμασα διάφορες λύσεις που βρήκα online, μάταια όμως. Για να επιλυθεί και αυτό το πρόβλημα, έκανα για μια τελευταία φορά fresh install των Arch Linux, πάλι με xfce4 και έχοντας την εμπειρία από τα προηγούμενα installs, ήξερα ακριβώς τι έπρεπε να κάνω και λειτούργησαν όλα κανονικά.


# <a name="C">Συμμετοχικό Περιεχόμενο 1A </a>

## 1. Trackball
Το πρώτο σετ φωτογραφιών που πρόσθεσα είναι το Trackball. Το trackball επινοήθηκε ως μέρος ενός μεταπολεμικού συστήματος σχεδίασης ραντάρ της εποχής του Β΄ Παγκοσμίου Πολέμου, με το όνομα Comprehensive Display System (CDS) από τον Ralph Benjamin όταν εργαζόταν για την Επιστημονική Υπηρεσία του Βρετανικού Βασιλικού Ναυτικού. Από τότε, έχει μεγάλες χρησιμότητες σε πύργους ελέγχου αεροσκαφών, σε διάφορα video games που αξιοποιούν αυτή τη τεχνολογία και αργότερα προστέθηκε και στα ποντίκια, όπως φαίνεται στην φωτογραφία, παρέχοντας έναν εναλλακτικό τρόπο διαχείρησης του κέρσορα.

[Trackball image](https://github.com/p15bako/images/blob/2015034/Trackball.jpg) [Trackball thumbnail](https://github.com/p15bako/images/blob/2015034/Trackball-thumbnail.jpg) [Trackball Caption](https://github.com/p15bako/_gallery/blob/2015034/Trackball.md)


## 2. Joystick
Τα Joystick χρησιμοποιούνται συχνά για τον έλεγχο των βιντεοπαιχνιδιών και συνήθως έχουν ένα ή περισσότερα πλήκτρα τα οποία μπορούν να διαβαστούν από τον υπολογιστή. Μια δημοφιλής παραλλαγή του joystick που χρησιμοποιείται στις σύγχρονες κονσόλες βιντεοπαιχνιδιών είναι ο αναλογικός μοχλός.

[Joystick image](https://github.com/p15bako/images/blob/2015034/Joystick.jpg) [Joystick thumbnail](https://github.com/p15bako/images/blob/2015034/Joystick_thumbnail.jpg) [Joystick caption](https://github.com/p15bako/_gallery/blob/2015034/Joystick.md)

# <a name="D">Συμμετοχικό Περιεχόμενο 2A </a>

Για αυτό το παραδοτέο συμμετοχικού περιεχομένου πρόσθεσα τις εικόνες που έβαλα στο πρώτο παραδοτέο συμμετοχικού περιεχομένου σε ένα ήδη υπάρχων σετ διαφανειών, όπως επίσης και στο αντίστοιχο χρονολόγιο.

## 1. Trackball
Πρόσθεσα το Trackball στο σετ archetypes, όπως φαίνεται [εδώ](https://github.com/p15bako/site/blob/2015034/_slides/archetypes.md). Εδώ παρατίθεται το αντίστοιχο [χρονολόγιο](https://github.com/p15bako/site/blob/2015034/_timeline/computer.md)

## 2. Joystick
Για το Joystick, επέλεξα σαν κατηγορία διαφανειών τα videogames, όπως φαίνεται [εδώ](https://github.com/p15bako/site/blob/2015034/_slides/videogames.md). Αντίστοιχα, το πρόσθεσα και στο [χρονολόγιο](https://github.com/p15bako/site/blob/2015034/_timeline/videogames.md)


# <a name="E">Άσκηση γραμμής εντολών 1 </a>
Για την πρώτη άσκηση γραμμής εντολών ασχολήθηκα με το παραδοτέο του youtube-dl. Πιο συγκεκριμένα, στο link που παραθέτω παρακάτω, φαίνεται πως κάνω τα βήματα του search, download και play του αγαπημένου μου κομματιού αυτού του μήνα. Για αρχή, εγκατέστησα το youtube-dl, που θα μου επιτρέψει την λήψη του βίντεο από το YouTube, το ffmpeg, που μου επιτρέπει να μετατρέψω το βίντεο από μορφή webm σε mp3 και, τέλος, το mpv, που είναι ένας απλοϊκός media player με σκοπό την αναπαραγωγή του κομματιού σε mp3 μορφή.

Με την εντολή youtube-dl –x –audio-format mp3 "ytsearch: Foo Fighters The Pretender" γίνονται 3 ενέργειες.
1) Η εντολή youtube-dl κατεβάζει το επιλεγμένο μου βίντεο.
2) Η παράμετρος -x κρατάει μόνο τον ήχο με μορφή mp3.
3) Η εντολή ytsearch: ψάχνει το YouTube με ότι keyword δωθεί μετά. Στην συγκεκριμένη περίπτωση Foo Fighters The Pretender και επιλέγει το πρώτο βίντεο.

Έπειτα, με τη χρήση της εντολής mv αλλάζω το όνομα του αρχείου μου, σε κάτι πιο εύκολο με σκοπό την διευκόλυνση της επομενης εντολής.
Τέλος, με την χρήση του mpv κάνω αναπαραγωγή του mp3 αρχείου, αλλά για λόγους εξοικονόμησης χρόνου κάνω quit ενδιάμεσα.

[Asciinema Link](https://asciinema.org/a/S6eqynOrbEisrYReKIK87iBIo)

# <a name="F">Συμμετοχικό Περιεχόμενο 1Β </a>
Για το δεύτερο μέρος συμμετοχικού περιεχομένου έκανα μια νέα μελέτη περίπτωσης πάνω στα Controllers και πιο συγκεκριμένα στο Joystick και στο Trackball, με αφορμή ότι αυτά παρέδωσα στο πρώτο μέρος έχοντας ως σκοπό την αναλυτικότερη κατανόηση του πως φτάσαμε στην σημερινή μορφή των controller και τι στάδια πέρασαν και πως η διάδραση έγινε καλύτερη μέσα από το πέρασμα των χρόνων. Για την συγγραφή του παρακάτω case study χρειάστηκαν πολλές ώρες διαβάσματος επιστημονικών άρθρων, ανάλυση των ενοτήτων του μαθήματος και αναζήτηση ιστορίας της τεχνολογικής εξέλιξης των controller/joystick/trackball.

[md file](https://github.com/p15bako/site/blob/2015034/_case-study/Joystick-Trackball.md)

[Αναλυτικό case study](https://github.com/p15bako/extras/blob/2015034/cs-Joystick-Trackball.md)

### Πηγές
[The history of the video game controller](https://www.shortlist.com/lists/history-of-the-video-game-controller) | [Usability Testing of Video Game Controllers](https://sci-hub.se/10.1201/b21564-8) | [The Trackball Controller: Improving the Analog Stick](https://www.yorku.ca/mack/FuturePlay2010-1.pdf) | [Beyond the Gamepad: HCI and Game Controller Design and Evaluation](https://www.researchgate.net/publication/227144881_Beyond_the_Gamepad_HCI_and_Game_Controller_Design_and_Evaluation) | [Analog Stick Wiki](https://en.wikipedia.org/wiki/Analog_stick#History) | [Trackball Wiki](https://en.wikipedia.org/wiki/Trackball) | [Joystick Wiki](https://en.wikipedia.org/wiki/Joystick)

# <a name="G">Άσκηση γραμμής εντολών 2 </a>
Για την δεύτερη άσκηση γραμμής εντολών, ασχολήθηκα με το παραδοτέο emacs. Για αρχή, εγκατέστησα το emacs στον υπολογιστή μου και εκτέλεσα την εντολή emacs -nw για να ανοίξω το emacs editor σε μορφή τερματικού. Στη συνέχεια, πατώντας Ctrl+X+F άνοιξα ένα νέο αρχείο που το ονόμασα new notes. Με την χρήση του Alt+X και γράφοντας org-mode, άλλαξα τον editor σε org mode. Αρχικά, σχεδίασα το πρόγραμμα της επόμενης ημέρας μου με αστερίσκους χρησιμοποιώντας το Alt+Enter για τον ένα αστερίσκο και το Alt+Enter+Right Arrow για τους δύο αστερίσκους. Όρισα μερικές δραστηριότητες σαν DONE και μερικές σαν TODΟ με τη χρήση του Shift+Right Arrow. Εν συνεχεία, αντικατέστησα μερικούς αστερίσκους με - [ ] και πατώντας Ctrl+C+C συμπλήρωσα το ποσοστό σε 100%. Επιπλέον, με την ίδια εντολή πρόσθεσα μερικά ενδεικτικά tags σε κάποιες δραστηριότητες. Επιπλέον, πατώντας πάλι Alt+X και γράφοντας org-agenda, βλέπουμε πως εμφανίζονται διάφορες χρήσιμες συντομεύσεις. Τέλος, πατώντας Ctrl+C+D εμφανίζεται το ημερολόγιο με σκοπό την εισαγωγή ενός deadline. Αποθήκευσα το αρχείο μου με Ctrl+X+C και γύρισα πίσω στον τερματικό μου. Παρακάτω θα βρείτε το αντίστοιχο video από τον τερματικό μου.

[Asciinema Link](https://asciinema.org/a/hQDMD1XsIHVW6CaRrWAZrFm7r)

# <a name="H">Συμμετοχικό Περιεχόμενο 2Β </a>

Για αυτό το παραδοτέο, έκανα έρευνα για τον Ralph H Baer, τον εφευρέτη του Joystick και γνωστό έως και σήμερα ως "πατέρα των βιντεοπαιχνιδιών", λόγω του οραματός του.

[md file](https://github.com/p15bako/site/blob/2015034/_biography/Ralph-H-Baer.md) [image](https://github.com/p15bako/images/blob/2015034/Ralph-H-Baer.jpg) [Αναλυτικό βιογραφικό](https://github.com/p15bako/extras/blob/2015034/bio-baer.md)

### Πηγές
[Ralph H Baer at simulationinformation](https://www.simulationinformation.com/hall-of-fame/members/ralph-h-baer/) | [Ralph H Baer at Nation Inventors Hall of Fame](https://www.invent.org/inductees/ralph-h-baer) | [Ralph H Baer Wiki](https://en.wikipedia.org/wiki/Ralph_H._Baer) | [The Father of the Video Game: The Ralph Baer Prototypes and Electronic Games](https://americanhistory.si.edu/collections/object-groups/the-father-of-the-video-game-the-ralph-baer-prototypes-and-electronic-games) | [Video game history](https://www.ralphbaer.com/video_game_history.htm) | [Baer’s Odyssey: Meet the serial inventor who built the world’s first game console](https://arstechnica.com/gaming/2014/12/in-the-beginning-ralph-h-baer-and-the-birth-of-the-game-console/) | [Ralph Baer at Immigrant Enterpreneurship](https://www.immigrantentrepreneurship.org/entries/ralph-baer/)


# <a name="I">Τελική αναφορά</a>
Φτάνοντας στο τέλος αυτού του εξαμήνου και αυτού του μαθήματος, μπορώ να πω πως είμαι ένα σκαλοπάτι πιο κοντά στο να γίνω ο προγραμματιστής που οραματίζομαι. Μέσω αυτού του μαθήματος, κατάφερα να εξοικιωθώ και να καταλάβω καλύτερα το τι θεωρείται user friendly. Έλαβα πληθώρα γνώσεων τόσο από το ίδιο το μάθημα, όσο και από τα διαθέσιμα βίντεο-κουίζ, που μας δώθηκαν από το διδάσκοντα, τα οποία με εμπλούτισαν με βασικές γνώσεις πάνω στη διάδραση ανθρώπου και υπολογιστή. Γνώρισα διάφορες σημαντικές προσωπικότητες του χώρου και εμπνεύστηκα από αυτές. Ενδιαφέρον, ήταν, επίσης, οι ασκήσεις γραμμής εντολών που κλήθηκα να κάνω, καθώς γνώρισα ένα καινούριο λειτουργικό σύστημα, που είναι τα Arch Linux, που είναι πολυ διαφορετικό από τα πιο διαδεδομένα λειτουργικά συστήματα(Windows, iOS). Καθώς, ο χώρος του UX/UI Design θα με ενδιέφερε πάρα πολύ στο μέλλον, θεωρώ πως το μάθημα αυτό μου έχει δώσει όλες τις απαραίτητες βάσεις, ώστε να εξελίξω τις δυνατότητες μου πάνω στον τομέα αυτό. Τέλος, καθ όλη τη διάρκεια του εξαμήνου, βρήκα πολύ βοηθητική τη πλατφόρμα του GitHub και σίγουρα με βοήθησε να έρθω πιο κοντά με συμφοιτητές μου και να ανταλάξω ενδιαφέρουσες και εποικοδομητικές απόψεις.



## Extra Υλικό - Ασκήσεις Warm up

### 1η Άσκηση Warm up

Παρακάτω παραθέτω ένα warm-up παραδοτέο που κάνω neofetch και κάνω και list τα dot files μου. Το μόνο που δεν φαίνεται έιναι το πως άλλαξα το username μου στον ΑΜ μου, επειδή αυτό έγινε κατά την διαδικασία της εγκατάστασης και δεν μπορούσα να κάνω record.
 
[Asciinema Link](https://asciinema.org/a/LMjFsVWXbgGeY3eKe7FAV736A)

### 2η Άσκηση Warm up

Σε αυτό το σημείο φαίνεται το πως έκανα μία warm-up άσκηση με την εντολή curl wttr.in και βρήκα τον καιρό στην πόλη μόνιμης κατοικίας μου(Άρτα) και σε μία πόλη που θέλω πολύ να επισκεφθώ (Kyoto Ιαπωνίας).

[Asciinema Link](https://asciinema.org/a/4VkGwhESQpdTOr8NNhTV0MCx1)

### 3η Άσκηση Warm up

Σαν 3η άσκηση warm up, έφτιαξα ένα απλό journal με την εντολή jrnl, έτσι ώστε να θυμίσω στον ευατό μου μερικά από τα πράγματα που έχω να κάνω την ερχόμενη εβδομάδα.

[Asciinema Link](https://asciinema.org/a/PEfEBc6yLvCm1TAqpjtk0mrZL)


# Link προς τις συνεισφορές μου στις συζητήσεις

[#1536](https://github.com/courses-ionio/hci/discussions/1536) | [#1537](https://github.com/courses-ionio/hci/discussions/1537) | [#1580](https://github.com/courses-ionio/hci/discussions/1580) | [#1630](https://github.com/courses-ionio/hci/discussions/1630) | [#1695](https://github.com/courses-ionio/hci/discussions/1695)

Στα discussions που πήρα το σήμα "Marked as answer" : [#1657](https://github.com/courses-ionio/hci/discussions/1657)

[Pull request link](https://github.com/courses-ionio/hci/pull/1700)
