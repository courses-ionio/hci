Εργασία Γεώργιος Βρούζος - Π2019026

| Εβδομάδα | Παραδοτέο | Αυτοαξιολόγηση σύμφωνα με τα κριτήρια της αντίστοιχης άσκησης | |
| --- | --- | --- | --- |
| 1 | Εισαγωγή | Ζητούμενα ✅ / Προθεσμία ✅ / Αναλυτικότητα ☆☆☆ | | |
| 2 | Άσκηση γραμμής εντολών (arch linux install on VM) | Ζητούμενα ✅ / Προθεσμία ✅ / Αναλυτικότητα ☆☆☆☆☆ | |
| 3 | Συμμετοχικό περιεχόμενο A1 |Ζητούμενα ✅ / Προθεσμία  / Αναλυτικότητα ☆☆☆ | |
| 4 | Άσκηση γραμμής εντολών | Ζητούμενα ✅ / Προθεσμία  / Αναλυτικότητα ☆☆☆☆☆ | |
| 5 | Συμμετοχικό περιεχόμενο A2 |Ζητούμενα ✅ / Προθεσμία  / Αναλυτικότητα ☆☆☆ | |
| 6 | Κατασκευή του βιβλίου Α | Έλλειψη χρόνου | |
| 7 | Συμμετοχικό περιεχόμενο B1 |Ζητούμενα ✅ / Προθεσμία  / Αναλυτικότητα ☆☆☆ | |
| 8 | Άσκηση γραμμής εντολών | Ζητούμενα ✅ / Προθεσμία  / Αναλυτικότητα ☆☆☆☆☆ | |
| 9 | Συμμετοχικό περιεχόμενο B2 |Ζητούμενα ✅ / Προθεσμία  / Αναλυτικότητα ☆☆☆ | |
| 10 | Άσκηση γραμμής εντολών | Ζητούμενα ✅ / Προθεσμία  / Αναλυτικότητα ☆☆☆☆☆| |
| 11 | Κατασκευή του βιβλίου Β | Έλλειψη χρόνου | |
| 12 | Τελική αναφορά | Ζητούμενα ✅ / Προθεσμία ✅ / Αναλυτικότητα ☆☆☆☆☆ | |
| bonus | Αναφορά 1000 λέξεων | Ζητούμενα ✅ / Προθεσμία ✅ / Αναλυτικότητα ☆☆☆☆☆ | |


# Παραδοτέο 1 | Εισαγωγή

Είμαι πολύ ενθουσιασμένος για το μάθημα επικοινωνίας-ανθρώπου-υπολογιστή. Το να μπορεί ο άνθρωπος να συνεργάζεται ευχάριστα με τον υπολογιστή είναι πραγματικά ενδιαφέρον και αποτελεί μια σημαντική προσπάθεια στην ανάπτυξη της τεχνολογίας. Επιπλέον, είμαι πολύ ενθουσιασμένος να εργαστώ σε αυτό το μάθημα και να μάθω περισσότερα για αυτόν τον τομέα.

Επίσης νιώθω τυχερός που μπήκα στην ομάδα [XorisOnoma](https://github.com/XorisOnoma)

# Παραδοτέο 2 | Άσκηση Γραμμής Εντολών

# Εγκατάσταση Arch Linux

## Βήμα 1: Διαμόρφωσα τον σκληρό δίσκο

## Εγκατάσταση Arch Linux χρησιμοποιώντας το VMWare (περιληπτικά)

1. Στην αρχή, κατεβάσα το Arch Linux ISO από το επίσημο site. Επέλεξα να κατεβάσω την τελευταία διαθέσιμη έκδοση.

2. Στη συνέχεια, δημιούργησα μία νέα εγκατάσταση στο VMWare και επιλέξα το Arch Linux ISO που κατέβασα προηγουμένως.

3. Στην επόμενη οθόνη, επιλέξα την επιλογή "Boot Arch Linux (x86_64)" για να ξεκινήσω την εγκατάσταση.

4. Έπειτα, δημιούργησα έναν προσωρινό χώρο αποθήκευσης για το σύστημα και επιλέξα να καταστήσω το / και το swap στον σκληρό δίσκο.

5. Επιλέγω να χρησιμοποιήσω το LVM για να διαχειρίζομαι τους δίσκους μου.

6. Επέλεξα να δημιουργήσω ένα προσωρινό παράθυρο συστήματος για να εγκαταστήσω το Arch Linux.

7. Εγκατέστησα τους οδηγούς VMware και ενεργοποίησα την υποστήριξη για clipboard & window resizing.


### Βήμα 1: Εκκίνηση της εικονικής μηχανής Arch Linux και σύνδεση στη γραμμή εντολών

Ξεκίνησα την εικονική μου μηχανή Arch Linux και συνδεθήκα στη γραμμή εντολών.

### Βήμα 2: Ενημέρωση του συστήματος

Ελέγχα την ενημέρωση του συστήματος με την εντολή:

``sudo pacman -Syu``

### Βήμα 3: Εγκατάσταση του X Window System

Εγκατέστησα το X Window System χρησιμοποιώντας την εντολή:

``sudo pacman -S xorg-server xorg-xinit``

### Βήμα 4: Εγκατάσταση ενός γραφικού περιβάλλοντος

Επιλέξα να εγκαταστήσω το Gnome ως γραφικό περιβάλλον με την εντολή:

``sudo pacman -S gnome``

## [Neofetch](https://asciinema.org/a/thHyd1vzQlT7sAzThzvBddweK)
## [journalctl](https://asciinema.org/a/oxjaT0VJnD7k588vrROIibXPW)


## Παραδοτέο 3 | Α1
[Εικόνα 1](https://github.com/p19vrou/images/blob/master/education.jpg)
[Εικόνα 2](https://github.com/p19vrou/images/blob/master/desc-and-education.png)

# Παραδοτέο 4 | Άσκηση Γραμμής Εντολών

[Άσκηση "create your own static site and blog generator with pandoc"](https://asciinema.org/a/MRXNSvOmnLAWMrRbE0rLJ8HDl
)

### Βήματα που θα μπορούσαμε να κάνουμε μετά από το κομμάτι που ανέβασα για να επεξεργαστούμε όλο το site:

1. Δημιουργία ευρετηρίου για το site:
    ```
    mkdir mysite
    cd mysite
    ```
2. Δημιουργία ευρετηρίου για τις σελίδες:
    ```
    mkdir pages
    ```
3. Δημιουργία ευρετηρίου για τα posts:
    ```
    mkdir posts
    ```
4. Δημιουργία ευρετηρίου για τα templates:
    ```
    mkdir templates
    ```
5. Δημιουργία index.md file για την σελίδα main, μέσα στο pages ευρετήριο:
    ```
    touch pages/index.md
    ```
6. Δημιουργία template file για τις σελίδες, μέσα στο ευρετήριο templates:
    ```
    touch templates/page.html
    ```
7. Δημιουργία αρχείου template για τα  posts, μέσα στο ευρετήριο templates:
    ```
    touch templates/post.html
    ```
8. Δημιουργία Makefile:
    ```
    PAGES=$(patsubst %.md,%.html,$(wildcard pages/*.md))
    POSTS=$(patsubst %.md,%.html,$(wildcard posts/*.md))

    all: $(PAGES) $(POSTS)

    %.html: %.md
        pandoc -s -o $@ $<

    .PHONY: clean
    clean:
        rm $(PAGES) $(POSTS)
    ```
9. Τρέχουμε το command για να δημιουργηθει το site:
    ```
    make
    ```
10. Επιβεβαίωση πως οι σελίδες και τα post έχουν δημιουργηθεί σαν HTML αρχεία μέσα στις σελίδες και σαν post directories αντίστοιχα.

## Παραδοτέο 5 | Α2

Επέλεξα να πρσοθέσω θέματα για την περιγραφή και εκπαίδευση

[slide](https://github.com/p19vrou/site/blob/master/_slides/descandeducation.md)
[timeline](https://github.com/p19vrou/site/blob/master/_timeline/education.md)

# Παραδοτέο 7 | Β1

[case study](https://github.com/p19vrou/site/blob/master/_case-study/educationstudy.md)


## Παραδοτέο 8 | Άσκηση Γραμμής Εντολών

[Άσκηση "convert between different text formats"](https://asciinema.org/a/Pt5DN4pLjTjvGV8RDbdfrNqT7)

Έκανα την άσκηση όπως έπρεπε αλλά έχει αφερεθεί το login support στο τερματικό όπως βλέπετε και στο asciinema.

## Παραδοτέο 9 | B2

[biography](https://github.com/p19vrou/site/blob/master/_biography/yves-guiard.md)

## Παραδοτέο 10 | Άσκηση Γραμμής Εντολών

[Άσκηση "use the terminal as an IDE"](https://asciinema.org/a/HdMqMmWThqpSrtSRzVy6g4J2P)

Έφτιαξα ένα απλό script μέσω terminal για να δείξω ότι μπορώ να χρησιμοποιήσω το vim ως IDE.

## Bonus

Σενάριο χρήσης και λειτουργικό σχέδιο για ένα εργαλείο εικονικής πραγματικότητας για αρχιτεκτονικό σχεδιασμό και οπτικοποίηση


Α. Σενάριο χρήσης

Η εφαρμογή, ένα εργαλείο VR για αρχιτεκτονικό σχεδιασμό και οπτικοποίηση, στοχεύει στη βελτίωση της διαδικασίας του σχεδιασμού για τους αρχιτέκτονες, επιτρέποντάς τους να εξερευνήσουν και να χειριστούν εικονικά μοντέλα κτιρίων σε ένα ρεαλιστικό και καθηλωτικό περιβάλλον. Το εργαλείο θα συνθέσει έννοιες τόσο από τη μηχανική όσο και από τις ανθρωπιστικές επιστήμες για να προωθήσει τη συμμετοχή της κοινότητας και τον βιώσιμο σχεδιασμό.

Το τεχνολογικό βιβλίο που θα χρησιμοποιηθεί ως αναφορά για τη μηχανική πτυχή της εφαρμογής είναι το "Virtual Reality for Architecture, Design, and Construction" των Anthony Steed και Sharon C. Smith. Το βιβλίο αυτό, παρέχει μια επισκόπηση της τρέχουσας κατάστασης της τεχνολογίας VR και των πιθανών εφαρμογών της στον τομέα της αρχιτεκτονικής. Καλύπτει θέματα όπως ο σχεδιασμός και η κατασκευή εικονικών περιβαλλόντων, η αλληλεπίδραση των χρηστών και η συνεργασία που βασίζεται σε VR.

Το βιβλίο ανθρωπιστικών επιστημών που θα χρησιμοποιηθεί ως αναφορά για την πτυχή της δέσμευσης της κοινότητας της εφαρμογής είναι "Ο θάνατος και η ζωή των μεγάλων αμερικανικών πόλεων" της Jane Jacobs. Αυτό το βιβλίο περιέχει κριτική στις πολιτικές αστικής ανανέωσης των μέσων του 20ου αιώνα και υποστηρίζει μια πιο βασισμένη στην κοινότητα προσέγγιση του αστικού σχεδιασμού. Καλύπτει θέματα όπως η σημασία της ανάπτυξης μικτής χρήσης, ο ρόλος των πεζοδρομίων και της ζωής στους δρόμους στη δημιουργία ζωντανών κοινοτήτων και η σημασία της διατήρησης των ιστορικών γειτονιών.

Συνθέτοντας έννοιες και από τα δύο αυτά βιβλία, η εφαρμογή θα μπορεί να προωθήσει τη συμμετοχή της κοινότητας και τον βιώσιμο σχεδιασμό, επιτρέποντας στους αρχιτέκτονες να δοκιμάσουν διαφορετικές επιλογές σχεδίασης σε πραγματικό χρόνο και να τις αναλύσουν ως προς την ενεργειακή απόδοση, το κόστος και τη συμμετοχή της κοινότητας.

Β. Λειτουργικό Σχέδιο

1. Εικονική πραγματικότητα: Ο πυρήνας της εφαρμογής είναι ένα περιβάλλον εικονικής πραγματικότητας (VR) που επιτρέπει στους αρχιτέκτονες να εξερευνούν και να χειρίζονται εικονικά μοντέλα κτιρίων. Το περιβάλλον VR θα είναι εξαιρετικά λεπτομερές και ρεαλιστικό, επιτρέποντας στους αρχιτέκτονες να αποκτήσουν μια αίσθηση του πώς θα φαίνεται και θα αισθάνεται ένα κτίριο στην πραγματική ζωή.

2. Τρισδιάστατη μοντελοποίηση: Η εφαρμογή θα περιλαμβάνει ένα εργαλείο τρισδιάστατης μοντελοποίησης που επιτρέπει στους αρχιτέκτονες να δημιουργούν και να επεξεργάζονται εικονικά μοντέλα κτιρίων. Αυτό το εργαλείο θα περιλαμβάνει μια ποικιλία διαφορετικών σχημάτων και μορφών που μπορούν να χρησιμοποιηθούν για τη δημιουργία διαφορετικών τύπων κτιρίων, όπως ουρανοξύστες, σπίτια και εμπορικά κτίρια.

3. Συνεργασία: Η εφαρμογή θα περιλαμβάνει εργαλεία συνεργασίας, επιτρέποντας στους αρχιτέκτονες και σε άλλα μέλη της ομάδας σχεδιασμού να έχουν πρόσβαση στο εικονικό μοντέλο και να συνεργάζονται στο σχέδιο από οπουδήποτε και ανά πάσα στιγμή.

4. Δέσμευση κοινότητας: Η εφαρμογή θα περιλαμβάνει χαρακτηριστικά που επιτρέπουν στους αρχιτέκτονες να δοκιμάσουν διαφορετικές επιλογές σχεδίασης σε πραγματικό χρόνο και να τις αναλύσουν ως προς τη συμμετοχή της κοινότητας, την ενεργειακή απόδοση και το κόστος.

5. Βασισμένη σε εικονική πραγματικότητα: Η εφαρμογή θα περιλαμβάνει μια δυνατότητα περιήγησης βασισμένη σε VR, η οποία θα επιτρέπει στους αρχιτέκτονες και σε άλλους ενδιαφερόμενους να περιηγηθούν μέσα από το εικονικό κτίριο και να το εξερευνήσουν με ρεαλιστικό τρόπο. Αυτό θα τους βοηθήσει να αποκτήσουν μια καλύτερη αίσθηση του πώς θα φαίνεται το κτίριο στην πραγματική ζωή.

6. Διεπαφή χρήστη: Η εφαρμογή θα έχει μια φιλική προς το χρήστη διεπαφή που επιτρέπει στους χρήστες να πλοηγούνται εύκολα στο εικονικό περιβάλλον και να έχουν πρόσβαση σε διάφορες λειτουργίες. Η διεπαφή θα περιλαμβάνει μια γραμμή εργαλείων με εργαλεία για τον χειρισμό του εικονικού μοντέλου, όπως η κίνηση, η περιστροφή και η κλιμάκωση αντικειμένων. Θα περιλαμβάνει επίσης ένα μενού για πρόσβαση σε διάφορα μέρη του εικονικού κτιρίου, όπως διαφορετικούς ορόφους ή δωμάτια. Η διεπαφή θα σχεδιαστεί ώστε να είναι διαισθητική και εύκολη στη χρήση, ακόμη και για χρήστες με μικρή ή καθόλου εμπειρία στην τεχνολογία VR.

7. Cloud – based : Η εφαρμογή θα βασίζεται σε τεχνολογία cloud, πράγμα που σημαίνει ότι όλα τα δεδομένα και τα μοντέλα θα αποθηκεύονται σε απομακρυσμένους διακομιστές και θα είναι προσβάσιμα από οποιαδήποτε συσκευή με πρόσβαση στο διαδίκτυο.


## Τελική αναφορά

Μετά από την εργασία στο μάθημα επικοινωνία ανθρώπου-υπολογιστή, μπορώ να πω ότι είμαι πολύ ικανοποιημένος με τα αποτελέσματά μου. Κατάφερα να μάθω πολλά και να ανακαλύψω νέες τεχνολογίες και ιδέες.

Οι εργασίες για το Arch Linux Terminal ήταν πολύ σημαντικές για μένα και μπόρεσα να μάθω πολλά, κυρίως μέσω της διαδικασία εγκατάστασης. Ήταν περίεργο να διαπιστώσω ότι το "system-d" είναι απαράδεκτο και είναι πολύ ευκολότερο να δουλέψεις με το Arch Linux Terminal. Μπορώ να πω ότι είμαι πολύ ικανοποιημένος με τις γνώσεις που έλαβα κατά τη διάρκεια αυτού του εξαμήνου

Επίσης, μου αρέσει πολύ να παρατηρώ τον τρόπο με τον οποίο ο καθηγητής μου δουλεύει στην ιστοσελίδα του. Βρήκα τον τρόπο με τον οποίο επιλέγει και χειρίζεται τον κώδικά του πολύ ενδιαφέροντα και δεν το είχα δει ποτέ πριν. Μπορώ να πω ότι έχω αποκτήσει πολλές νέες γνώσεις και ιδέες για τον τρόπο που οι προγραμματιστές δουλεύουν.

Τέλος, λυπάμαι πολύ που δεν τήρησα το χρονικό περιθώριο στα παραδοτέα, ήμουν πολύ απασχολημένος με τη δουλειά και τα μαθήματα που έχουν μαζευτεί θέλοντας να τελειώσω όσο περισσότερα  μπορούσα μιας και είμαι επί πτυχίο. Ωστόσο, προσπάθησα πολύ με την εργασία μου και να εξασφαλίσω ότι είμαι πλήρως ικανοποιητικός στο μάθημα. Στην πραγματικότητα, ξεπέρασα τις δυνατότητες μου και θεωρώ πως ήταν ένα πολύ επιτυχημένο εξάμηνο.
Αξίζει να σημειωθεί πως έχουν ολοκληρωθεί και τα video quiz, τα οποία θεωρώ πως ήταν πολύ χρηστικά για την εξάπλωση των γνωσεών μου στον τομέα, μιας και οι ομιλητές είναι όλοι εξαιρετικοι.
