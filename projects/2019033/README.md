<h1 align=center>Επικοινωνία Ανθρώπου Υπολογιστή</h1>

<h2 align=center> Τσιμπλιαράκης Μιχαήλ | ΑΜ:Π2019033 </h2>

 
-------------------------------------------------------------------------------------------------------------------------------------

| Εβδομάδα* | Παραδοτέο |
| --- | --- |
| 1 | [Εισαγωγή](#εισαγωγή) |
| 2 | [Validation-form](#validation-form) *GUI* |
| 3 | [Setup the main dependencies and demonstrate base system](#setup-the-emain-dependencies-and-demonstrate-base-syste) *CLI* |
| 4 | [Menu Scroll](#menu-scroll) *GUI* |
| 5 | [Organise the terminal window into multiple areas](#organise-the-terminal-window-into-multiple-areas) *CLI* |
| 6 | [Συμμετοχικό περιεχόμενο](#συμμετοχικό-περιεχόμενο) *Site* |
| 7 | [Mouse Form](#mouse-form) *GUI* |
| 8 | [MP3 Download](#mp3-download) *CLI* |
| 9 | [Plyr video player](#plyr-video-player) *GUI* |
| 10 | [Todo list (emacs)](#todo-list-emacs) *CLI* |
| 11 | [Συμμετοχικό περιεχόμενο](#συμμετοχικό-περιεχόμενο-1) *Site* |
| 12 | [Τελική αναφορά](#τελική-αναφορά) |

-------------------------------------------------------------------------------------------------------------------------------------

## Εισαγωγή

 Μέσα απο το μάθημα της επικοινωνίας ανθρώπου-υπολογιστή, έχω στόχο να μάθω για την αλληλεπίδραση του ανθρώπου με την μηχανή, τόσο σε θεωρητικό όσο και σε πρακτικό επίπεδο. Θα ήθελα να καταφέρω να σχεδιάζω διαπαφές χρηστών (User Interfaces) με τον καλύτερο δυνατό τρόπο, κάνοντας την χρήση του υπολογιστή μία πιο ευχάριστη εμπειρία αλλά και να γνωρίσω ακόμα καλύτερα τον τρόπο λειτουργίας του τερματικού. Τέλος, χάρη στον τρόπο διεξαγωγής του μαθήματος θα έχω τη δυνατότητα να εξοικειωθώ με το GitHub, ένα πολύ χρήσιμο εργαλείο για όλους το προγραμματιστές που δεν είχα χρησιμοποιήσει μέχρι τώρα.
 
## Validation Form

Netlify Link: https://hci-p2019033.netlify.app/remix/form-validation/

Στην συγκεκριμένη άσκηση κλήθηκα να προσθέσω παραπάνω validation forms για πιστωτική κάρτα, ελληνικό αριθμό τηλεφώνου και email. Στο κομμάτι της HTML προστέθηκαν περισσότερα inputs όπως ήταν και στον αρχικό κώδικα, με διαφοροποιημένα ονόματα και παραμέτρους. Στο κομμάτι της CSS άλλαξα την εμφάνιση των input και του κουμπιού submit. 

![Validation Form](https://imgur.com/jCKuajl.png)

Για την συγκεκριμένη εργασία έλαβα βοήθεια απο [w3schools](w3schools.com) καθώς και το [geeksforgeeks](geeksforgeeks.org), πέρα απο τις προϋπάρχουσες γνώσεις που είχα.

## Setup the main dependencies and demonstrate base system 

Περιήγηση αρχείων εντός του τερματικού και εμφάνιση πληροφοριών του συστήματος.

[![asciicast](https://asciinema.org/a/368186.svg)](https://asciinema.org/a/368186)

Asciinema link: https://asciinema.org/a/368186

## Menu Scroll

Στην άσκηση αυτή προστέθηκε ένα ακόμα section με δικό της κείμενο, καθώς και η αντίστοιχη επιλογή στην μπάρα περιήγισης που κάνει scroll στο εκάτσοτε section. Ακόμη, στο τέλος της σελίδας τοποθετίθηκε ένα κουμπί back to top το οποίο επιστρέφει τον χρήστη στην κορυφή της σελίδας. Όλα αυτά δημιουργήθηκαν στην HTML, τροποποιήθηκε η εμφάνισή τους με CSS και πραγματοποιούντε οι λειτουργίες τους με την βοήθεια της javascript.

![menuscroll](https://i.imgur.com/YsVktD4.gif)

Link άσκησης στο Netlify: https://hci-p2019033.netlify.app/remix/menu-scroll/

## Organise the terminal window into multiple areas

Στην συγκεκριμένη άσκηση έπρεπε να οργανωθεί το τέρμιναλ σε 2 (ή και περισσότερα) παράθυρα. Στο 1ο θα εμφανίζεται με το εργαλείο glances τα resources που χρησιμοποιεί ο υπολογιστής εκείνη την στιγμή, ενώ στο άλλο παράθυρο γίνεται περιήγηση στο διαδίκτυο μέσω του w3m.

[![asciicast](https://asciinema.org/a/371655.svg)](https://asciinema.org/a/371655)

Asciinema link: https://asciinema.org/a/371655

## Συμμετοχικό Περιεχόμενο 

Στα παρακάτω Link βρίσκονται οι εικόνες με την λεζάντα τους για τα εξής θέματα:

Amazon Alexa:

Η Alexa είναι η ψηφιακή βοηθός της Amazon που ενσωματώνεται στις συσκευές Echo αλλά και όχι μόνο. Έχει πολλές δυνατότητες όπως πραγματοποίηση κλήσεων, ανάγνωση μηνυμάτων, ενημέρωση για τον καιρό καθώς και χιλιάδες άλλες λειτουργείες.

 - Εικόνα: https://hci-p2019033.netlify.app//gallery/amazon-alexa/
 - Χρονολόγιο: https://hci-p2019033.netlify.app//timeline/artificial-intelligence/

Joystick:

Το joystick είναι μία νέα μορφή χειρισμού βιντεοπαιχνιδιών, που ξεφεύγει απο τα όρια του πληκτρολογίου και του ποντικιου και προσφέρει αναλογικό χειρισμό στα παιχνίδια.

 - Εικόνα: https://hci-p2019033.netlify.app//gallery/joystick/
 - Χρονολόγιο: https://hci-p2019033.netlify.app//timeline/videogames/

Microvision<br/>
Η πρώτη φορητή κονσόλα.<br/>

 - Εικόνα: https://hci-p2019033.netlify.app//gallery/microvision/
 - Χρονολόγιο: https://hci-p2019033.netlify.app//timeline/videogames/

Osborne1<br/>
Ο πρώτος 'φορητός' υπολογιστής.<br/>

 - Εικόνα: https://hci-p2019033.netlify.app//gallery/osborne1/
 - Χρονολόγιο: https://hci-p2019033.netlify.app//timeline/personal/

## Mouse Form

Στην άσκηση Mouse Form προστέθηκε μία ακόμα επιλογή για να επιλέξει ο χρήστης φύλο (Αρσενικό ή θυλικό) στον κώδικα html όπως ήταν και τα προηγούμενα πεδία.

![Mouse Form](https://imgur.com/6n78p87.png)

Netlify Link: https://hci-p2019033.netlify.app/remix/mouse-form/

## MP3 Download

Η άσκηση mp3 download μέσω γραμμής εντολών, πραγματοποιήθηκε με την βοήθεια ενός σύντομου shell script στο οποίο ο χρήστης όταν το τρέξει, του ζητείται να δώσει τον τίτλο του τραγουδιού που θέλει να κατεβάσει και στην συνέχεια γίνεται κατέβασμα σε μορφή mp3 και στο τέλος γίνεται αναπαραγωγή του τραγουδιού εντός του τερματικού. Το script μπορεί να βρεθεί στο τέλος του asciinema.

[![asciicast](https://asciinema.org/a/375956.svg)](https://asciinema.org/a/375956)

Asciinema Link: https://asciinema.org/a/375956

## Plyr video player

Στην άσκηση αυτή πήραμε μία υπάρχουσα τεχνολογία αναπαραγωγής βίντεο σε μία ιστοσελίδα (plyr) και χρειάστηκε να προσθέσουμε τα πλήκτρα δημιουργόντας ένα περιβάλον αναπαραγωγής βίντεο με πλήκτρα πάυσης,αναπαραγωγής,πλήρους οθόνης κ.ά.

![Plyr video player](https://imgur.com/hQFpsvA.png)

Netlify Link: https://hci-p2019033.netlify.app/remix/plyr-video-player/

## Todo List (emacs)

Το emacs είναι ένας πολύ γνωστός text editor, ο οποίος ανάμεσα στις πολλές λειτουργείες του, προσφέρει και ένα mode που ονομάζεται Org-mode. Εντός του org-mode ο χρήστης μπορεί να δημιουργήσει πολύ εύκολα μία todo list. Αυτό λοιπόν πραγματοποιείται και στην άσκηση αυτή. 

[![asciicast](https://asciinema.org/a/379309.svg)](https://asciinema.org/a/379309)

Asciinema Link: https://asciinema.org/a/379309

## Συμμετοχικό περιεχόμενο

Στο 2ο συμμετοχικό περιεχόμενο αναπτύχθηκε μία μελέτη περίπτωσης πάνω στον Osborne 1 που είναι για πολλούς ο πρώτος φορητός υπολογιστής καθώς και μία βιογραφία για τον . Στα παρακάτω link βρίσκονται οι έρευνες στο site.

Μελέτη περίπτωσης Osborne 1: https://hci-p2019033.netlify.app//case-study/osborne1/
 Πηγές:
Βιογραφία:
 Πηγές:

## Τελική αναφορά

Κατα την διάρκεια του εξαμήνου έμαθα πολλά για το πως δουλεύουν διάφορα εργαλία όπως είναι το github, εξοικηώθηκα με το τερματικό και τα linux σαν λειτουργικό σύστημα. Ακόμη μου τράβηξε το ενδιαφέρον το Web development μέσω των πειραμάτων μου με τις ασκήσεις που μου δόθηκαν, με αποτέλεσμα να ψαχτώ περισσότερο πάνω σε αυτό και εκτός του μαθήματος.

Για την υλοποίηση της αναφοράς και την επίληση όλων των ασκήσεων προγραμματισμού αλλά και γραμμής εντολών, έλαβα βοήθεια απο τα παρακάτω site (Πηγές):

Udemy <br/>
GeeksForGeeks <br/>
Stackoverflow <br/>
W3Schools <br/>
Reddit (σε ανάλογα subreddits) <br/>
Github (μέσω ερωτήσεων των χρηστών) <br/>
καθώς και βίντεο tutorial στο youtube
