# Επικοινωνία Ανθρώπου-Υπολογιστή

Ονοματεπώνυμο: Παύλος Τσολακίδης

ΑΜ: 2018154

| Εβδομάδα | [Όλα τα παραδοτέα βρίσκονται στην ίδια σελίδα της τελικής αναφοράς](https://courses-ionio.github.io/help/deliverables/) με τα προσωπικά στοιχεία σας (Όνομα, ΑΜ, github profile) και μαζί με αυτόν εδώ τον πίνακα περιεχομένων | Σύνδεσμος στην [εβδομαδιαία παρουσίαση προόδου στις συζητήσεις](https://github.com/courses-ionio/help/discussions/categories/show-and-tell) | Αυτοαξιολόγηση σύμφωνα με τα κριτήρια της αντίστοιχης άσκησης |
| --- | --- | --- | --- |
| 1 |  [Δημιουργία ομάδας](https://github.com/courses-ionio/hci/discussions/1794) + [Φορκ και δημιουργία σελίδας τελικής αναφοράς](https://courses-ionio.github.io/help/guide/), [προσθήκη πίνακα περιεχομένων](https://raw.githubusercontent.com/courses-ionio/hci/master/README.md), [συγγραφή της εισαγωγής](https://courses-ionio.github.io/help/intro/), αποστολή της εισαγωγής [για σχολιασμό στην συζήτηση](https://github.com/courses-ionio/help/discussions/categories/show-and-tell) και καταγραφή του συνδέσμου συζήτησης δίπλα --> |   [Συζήτηση](https://github.com/courses-ionio/help/discussions/866), [Ομάδα](https://github.com/Millennials-2/main)| |
| 2 | Άσκηση γραμμής εντολών (linux install) | [Συζήτηση](https://github.com/courses-ionio/help/discussions/1046) | |
| 3 | Συμμετοχικό περιεχόμενο A1 | | |
| 4 | Άσκηση γραμμής εντολών (warm up cli) | | |
| 5 | Συμμετοχικό περιεχόμενο A2 | | |
| 6 | Κατασκευή του βιβλίου Α | | |
| 7 | Συμμετοχικό περιεχόμενο B1 | | |
| 8 | Άσκηση γραμμής εντολών | | |
| 9 | Συμμετοχικό περιεχόμενο B2 | | |
| 10 | Άσκηση γραμμής εντολών | | |
| 11 | Κατασκευή του βιβλίου Β | | |
| 12 | Τελική αναφορά* | | |


## ΠΑΡΑΔΟΤΕΟ 1 | ΕΙΣΑΓΩΓΗ

Μέσα από το μάθημα θα ήθελα να μάθω να χρησιμοποιώ το github περισσότερο, με μεγαλύτερη εξοικείωση και τις δυνατότητες που παρέχει για συνεργασία πάνω σε ένα project. Επίσης θα ήθελα να εξοικειωθώ περισσότερο με τα λειτουργικά συστήματα linux και κυρίως του ArchLinux και μέσα από τις εργασίες που θα πραγματοποιήσω θα καταλάβω ότι δεν χρειάζομαι έτοιμα προγράμματα για καθημερινές λειτουργίες στον υπολογιστή καθώς υπάρχουν πολλές εναλλακτικές οι οποίες είναι μικρές σε μέγεθος και opensource στο github.

## ΠΑΡΑΔΟΤΕΟ 2 | Arch Linux Installation

Για την εγκατάσταση του Arch Linux επέλεξα την εγκατάσταση και τοποθέτηση λογισμικού σε USB Stick. Χρησιμοποιήθηκαν 2 USB Sticks όπου στο ένα τοποθέτησα το ISO file που απέκτησα από [εδώ](https://archlinux.org/download/) και στο δεύτερο έγινε η τοποθέτηση του λογισμικού. Συνέχισα στην σύνδεση του wifi χρησιμοποιώντας το εργαλείο [iwd](https://wiki.archlinux.org/title/iwd), δημιούργησα τα κατάλληλα partitions στο δεύτερο usb, εγκατέστησα τα κατάλληλα πακέτα που χρειαζόντουσαν και γενικά ακολούθησα τις οδηγίες από το [installation guide](https://wiki.archlinux.org/title/installation_guide) όπως και τις οδηγίες εγκατάστασης λογισμικού σε usb του [wiki](https://wiki.archlinux.org/title/USB_flash_installation_medium). Επιπλέον ως user name επέλεξα 'pav' και host name 'archusb'. Τέλος έγινε update της έκδοσης του kernel στην τελευταία έκδοση με την εντολή pacman -Syu. 


### Αλλαγή του prompt μου
Για αυτήν την αλλαγή έκανα edit το αρχείο .bashrc και άλλαξα την γραμμή PS1 με την παρακάτω επεξεργασία:

     PS1='\e[40;1;37m-(2018154)-(\e[40;1;35m\u\e[40;1;37m@\e[40;1;34m\h\e[40;1;37m)-\$ '

### Εκτέλεση εντολών
Κάνοντας record του τερματικού χρησιμοποιώντας το asciinema εκτέλεσα τις εντολές journalctl -b και neofetch όπου δείχνουν το boot log και system info αντίστοιχα.

[Asciinema](https://asciinema.org/a/528538)
<a href="https://asciinema.org/a/528538" target="_blank"><img src="https://asciinema.org/a/528538.svg" /></a>

### Neofetch Customization/Configuration
Η αλλαγή του logo που εμφανίζεται στο neofetch έγινε με την επεξεργασία του αρχείου config.conf το οποίο βρίσκεται στο directory /home/$USER/.config/neofetch όπου $USER είναι το user name του καθενός(π.χ. pav στην περίπτωση μου). Για την συγκεκριμένη αλλαγή έγινε η αλλαγή του τομέα Ascii Distro και συγκεκριμένα στην γραμμή ascii_distro="Arch_old". Οι αλλαγές των χρωμάτων έγινε με την επεξεργασία στον τομέα Text Colors και συγκεκριμένα άλλαξα την γραμμή colors=(4 7 2 1 1 6) όπου η σειρά των αριθμών είναι: title, @, underline, subtitle, colon/spacing, info. Οι [κωδικοί](https://en.wikipedia.org/wiki/ANSI_escape_code#8-bit) κάθε χρώματος.
