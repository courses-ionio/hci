# Μάθημα: Επικοινωνία Ανθρώπου - Υπολογιστή

### Κυριακή Μουταφίδου
### ΑΜ Π2013097

## Εργασία Ανάπτυξης: Οπτικοποίηση Δεδομένων

## Παραδοτέο 1
### Ο σύνδεσμος της σελίδας με την εφαρμογή.
https://kikh.github.io/D3js-US-educational-attainment/

### Αποθετήριο κώδικα.
https://github.com/kikh/D3js-US-educational-attainment

#### 1) Αλλάξτε τα χρώματα στα 3 γραφήματα.
Για την αλλαγή των χρωμάτων στα 3 γραφήματα χρησιμοποίησα τη σελίδα https://coolors.co/ όπου μπορείς να κάνεις generate color schemes. Προσπάθησα να χρησιμοποιήσω χρώματα που να μπορεί ο χρήστης να διαβάσει κείμενο με μαύρα γράμματα. Η αλλαγή των χρωμάτων έγινε από τα scripts στον φάκελο assets/scripts

#### 2) Αντικαταστήστε τις διεπαφές στα "κουμπιά" του 2ου και 3ου γραφήματος με άλλες της επιλογής σας.
Άλλαξα χρώματα, μέγεθος γραμματοσειράς, πρόσθεσα padding και box shadow. Για το drop shadow χρησιμοποίησα τη σελίδα https://www.cssmatic.com/box-shadow. 

#### 3) Όταν το ποντίκι διέρχεται επάνω από κάθε επιλογή του menu στην κορυφή της σελίδας, να ακούγεται κάποιος ήχος της επιλογής σας.
Δημιουργήθηκε φάκελος sounds μέσα στον φάκελο assets με το αρχείο menu.mp3 που το κατέβασα από τη σελίδα http://www.pacdv.com/sounds/interface_sounds.html. H αναπαραγωγή του ήχου όταν περνάει το ποντίκι πάνω από τα menu items έγινε με τη χρήση javascript.

#### 4) Όταν το ποντίκι διέρχεται πάνω από κάποια πρόταση/κείμενο της σελίδας ή περιοχή που περιλαμβάνει γραπτή πληροφορία (π.χ. κάποιο τμήμα γραφήματος), να ακούγεται αυτόματα η αφήγηση του κειμένου (text-to-speech).
Χρησιμοποιήθηκε το plugin responsive voice σε συνδυασμό με jquery. Για να δουλέψει σωστά η jquery έπρεπε να αλλάξω το link της από http σε https. ΠΡΟΣΟΧΗ ίσως υπάρχει πρόβλημα με τον chrome. βλ https://www.chromestatus.com/feature/5687444770914304.

#### 5) Εφαρμόστε responsive design στη σελίδα και κυρίως στο αρχικό menu έτσι ώστε να προσαρμόζεται σε οθόνες διαφορετικών διαστάσεων (π.χ. Bootstrap).
Κέντραρα το αρχικό μενού και αφαίρεσα το margin από το πρώτο li element, αφαίρεσα τα default html padding και margin της σελίδας. Για τα κουμπιά του δεύτερου και του τρίτου γραφήματος έφτιαξα media query και από inline είναι πάνω κάτω όταν η οθόνη είναι στα 1100px width, και έχουν όλα το ίδιο μέγεθος. Για το δεύτερο chart αφαίρεσα τα margin σε media query και κατάφερα να το κάνω responsive κάνοντας όμως refresh τη σελίδα. Δεν κατάφερα να κάνω responsive τα άλλα 2 charts.

## Εργασία Περιεχομένου: Συμμετοχική μελέτη και προσθήκη εκπαιδευτικού υλικού

### Ο σύνδεσμος της σελίδας με την εφαρμογή.
https://kikh.github.io/gr/

### Αποθετήριο κώδικα.
https://github.com/kikh/gr

## Παραδοτέο Α

#### link αρχείου config.yml: https://github.com/kikh/gr/blob/gh-pages/_config.yml
#### link 1ης εικόνας: https://kikh.github.io/gr/gallery/amstrad/
#### link 2ης εικόνας: https://kikh.github.io/gr/gallery/google_home/
#### link 3ης εικόνας: https://kikh.github.io/gr/gallery/oculus/
#### link 4ης εικόνας: https://kikh.github.io/gr/gallery/esp8266/
#### link 5ης εικόνας: https://kikh.github.io/gr/gallery/pacman/

## Παραδοτέο B
## Βιογραφία
https://kikh.github.io/gr/biography/elon-musk/


