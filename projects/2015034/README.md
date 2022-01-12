Μπακογιάννης Ευάγγελος 
ΑΜ Π2015034

| Εβδομάδα* | Παραδοτέο |
| --- | --- |
| <a href="#A">1</a> |<a href="#A">Εισαγωγή </a> |
| <a href="#B">2</a> | <a href="#B">Εγκατάσταση των Arch Linux</a> |
| 3 | Εγκατάσταση των Arch Linux(Δείτε Παραδοτέο 2) |
| <a href="#C">4</a> | <a href="#C">Συμμετοχικό Περιεχόμενο 1A</a> |
| 5 | Εγκατάσταση των Arch Linux(Δείτε Παραδοτέο 2)|
| <a href="#D">6</a> | <a href="#D">Συμμετοχικό Περιεχόμενο 2A</a> |
| <a href="#E">7</a> | <a href="#E">Άσκηση γραμμής εντολών 1</a> |
| <a href="#F">8</a> | <a href="#F">Συμμετοχικό Περιεχόμενο 1Β</a> |
| 9 | Άσκηση γραμμής εντολών |
| 10 | συμμετοχικό περιεχόμενο 2B |
| 11 | Άσκηση γραμμής εντολών |
| 12 | Τελική αναφορά και αίτημα ενσωμάτωσης για βαθμολόγηση |

# <a name="A">Εισαγωγή</a>
Οι στόχοι που έχω θέσει σε αυτό το μάθημα είναι αφενός η εξοικείωση μου με το περιβάλλον του github, καθώς είναι αδιαμφισβήτητα το πλέον απαραίτητο εργαλείο για κάθε προγραμματιστή που σέβεται τον εαυτό του, και αφετέρου η κατανόηση σε βάθος της αρμόζουσας διάδρασης ανθρώπου και υπολογιστή. Θεωρώ πως το συγκεκριμένο μάθημα μπορεί να μου προσφέρει πληθώρα γνώσεων που με την σειρά τους θα μου δώσουν βασικές αρχές προγραμματισμού φιλικού προς τον χρήστη(user friendly). Οι ανάγκες που έχω από το συγκεκριμένο μάθημα είναι, αρχικά, η συνεχής προσφορά γνώσης σε σύγχρονα θέματα που αφορούν το μάθημα, καθώς επίσης περιεχόμενο που θα είναι αρκετά πρακτικό. Τέλος, βασική μου ανάγκη είναι η αλληλεπίδραση με τους συμφοιτητές μου και με τους αρμόδιους καθηγητές/βοηθούς του μαθήματος, έχοντας ως σκοπό τον εντοπισμό των αδυναμιών μου και την εξάλειψη αυτών σε όσο μεγαλύτερο βαθμό είναι εφικτό.


# <a name="B">Εγκατάσταση των Arch Linux</a>
 Αυτή την εβδομάδα ασχολήθηκα κυρίως με την εγκατάσταση των Arch Linux σε ένα παλιό υπολογιστή που έχω. Για αρχή, έφτιαξα ένα usb stick bootable με το πρόγραμμα Rufus. Εν συνεχεία, με βάση το installation guide από το Arch Wiki, έκανα τις απαραίτητες κινήσεις για να εγκαταστήσω το λειτουργικό σύστημα Arch Linux στον υπολογιστή. Επιγραμματικά, έκανα configure το internet connection μου, έκανα partitions, format και mount πάνω στον σκληρό δίσκο. Έπειτα έκανα το base install και εγκατέστησα μερικά packages που θα χρειαστώ αργότερα(πχ. nano). Έκανα generate το fstab file, μπήκα με chroot και ρύθμισα το timezone και έφτιαξα και τα locales. Άλλαξα το hostname σε archlinux και έφτιαξα και τα hosts files. Έπειτα, έφτιαξα ένα password για το root, και έκανα install το boot loader(με pacman και grub). Μετά έκανα reboot το σύστημα μου, έβγαλα το usb stick και έκανα activate το internet connection να ανοίγει αυτόματα κάθε φορά που ανοίγω τον υπολογιστή. Έφτιαξα τον user μου με όνομα p2015034(τον Αριθμό Μητρώου μου), του έδωσα sudo rights και έβαλα password και σε αυτόν. Εγκατέστησα τα graphics drivers και το display server(xorg). Έκανα install το display manager(lxdm). Τέλος έβαλα και ένα desktop environment(xfce4). O λόγος που έβαλα xfce ήταν επειδή το σύστημα που έχω είναι αρκετά παλιό και το xfce είναι αρκετά ελαφρύ.



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
Πρόσθεσα το Trackball στο σετ archetypes, όπως φαίνεται [εδώ](https://github.com/p15bako/site/blob/2015034/_slides/archetypes.md). Εδώ παρατίθεται το αντίστοιχο [χρονολόγιο](https://github.com/p15bako/site/blob/master/_timeline/computer.md)

## 2. Joystick
Για το Joystick, επέλεξα σαν κατηγορία διαφανειών τα videogames, όπως φαίνεται [εδώ](https://github.com/p15bako/site/blob/2015034/_slides/videogames.md). Αντίστοιχα, το πρόσθεσα και στο [χρονολόγιο](https://github.com/p15bako/site/blob/master/_timeline/videogames.md)


# <a name="E">Άσκηση γραμμής εντολών 1 </a>
Για την πρώτη άσκηση γραμμής εντολών ασχολήθηκα με το παραδοτέο του youtube-dl. Πιο συγκεκριμένα, στο link που παραθέτω παρακάτω, φαίνεται πως κάνω τα βήματα του search, download και play του αγαπημένου μου κομματιού αυτού του μήνα. Για αρχή, εγκατέστησα το youtube-dl, που θα μου επιτρέψει την λήψη του βίντεο από το YouTube, το ffmpeg, που μου επιτρέπει να μετατρέψω το βίντεο από μορφή webm σε mp3 και, τέλος, το mpv, που είναι ένας απλοϊκός media player με σκοπό την αναπαραγωγή του κομματιού σε mp3 μορφή.

Με την εντολή youtube-dl –x –audio-format mp3 "ytsearch: Foo Fighters The Pretender" γίνονται 3 ενέργειες.
1) Η εντολή youtube-dl κατεβάζει το επιλεγμένο μου βίντεο.
2) Η παράμετρος -x κρατάει μόνο τον ήχο με μορφή mp3.
3) Η εντολή ytsearch: ψάχνει το YouTube με ότι keyword δωθεί μετά. Στην συγκεκριμένη περίπτωση Foo Fighters The Pretender και επιλέγει το πρώτο βίντεο.

Έπειτα, με τη χρήση της εντολής mv αλλάζω το όνομα του αρχείου μου, σε κάτι πιο εύκολο με σκοπό την διευκόλυνση της επομενης εντολής.
Τέλος, με την χρήση του mpv κάνω αναπαραγωγή του mp3 αρχείου, αλλά για λόγους εξοικονόμησης χρόνου κάνω quit ενδιάμεσα.

[Asciinema Link](https://asciinema.org/a/S6eqynOrbEisrYReKIK87iBIo)

## <a name="F">Συμμετοχικό Περιεχόμενο 1Β </a>
Για το δεύτερο μέρος συμμετοχικού περιεχομένου έκανα μια νέα μελέτη περίπτωσης πάνω στα Controllers και πιο συγκεκριμένα στο Joystick και στο Trackball, με αφορμή ότι αυτά παρέδωσα στο πρώτο μέρος έχοντας ως σκοπό την αναλυτικότερη κατανόηση του πως φτάσαμε στην σημερινή μορφή των controller και τι στάδια πέρασαν και πως η διάδραση έγινε καλύτερη μέσα από το πέρασμα των χρόνων. Για την συγγραφή του παρακάτω case study χρειάστηκαν πολλές ώρες διαβάσματος επιστημονικών άρθρων, ανάλυση των ενοτήτων του μαθήματος και αναζήτηση ιστορίας της τεχνολογικής εξέλιξης των controller/joystick/trackball.

[md file](https://github.com/p15bako/site/blob/2015034/_case-study/Joystick-Trackball.md)

[Αναλυτικό case study](https://github.com/p15bako/extras/blob/2015034/cs-Joystick-Trackball.md)

### Πηγές
[The history of the video game controller](https://www.shortlist.com/lists/history-of-the-video-game-controller) | [Usability Testing of Video Game Controllers](https://sci-hub.se/10.1201/b21564-8) | [The Trackball Controller: Improving the Analog Stick](https://www.yorku.ca/mack/FuturePlay2010-1.pdf) | [Beyond the Gamepad: HCI and Game Controller Design and Evaluation](https://www.researchgate.net/publication/227144881_Beyond_the_Gamepad_HCI_and_Game_Controller_Design_and_Evaluation) | [Analog Stick Wiki](https://en.wikipedia.org/wiki/Analog_stick#History) | [Trackball Wiki](https://en.wikipedia.org/wiki/Trackball) | [Joystick Wiki](https://en.wikipedia.org/wiki/Joystick)


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
