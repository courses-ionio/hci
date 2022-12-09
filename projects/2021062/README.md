# Μάθημα: Επικοινωνία Ανθρώπου-Υπολογιστή

### Ονοματεπώνυμο: Θεοδωρίδης Τηλέμαχος
### Αριθμός Μητρώου: inf2021062
### Github Profile: [inf2021062](https://github.com/inf2021062)
<br />

## Πίνακας Παραδοτέων
| Εβδομάδα | [Όλα τα παραδοτέα βρίσκονται στην ίδια σελίδα της τελικής αναφοράς](https://courses-ionio.github.io/help/deliverables/) με τα προσωπικά στοιχεία σας (Όνομα, ΑΜ, github profile) και μαζί με αυτόν εδώ τον πίνακα περιεχομένων | Σύνδεσμος στην [εβδομαδιαία παρουσίαση προόδου στις συζητήσεις](https://github.com/courses-ionio/help/discussions/categories/show-and-tell) | Αυτοαξιολόγηση σύμφωνα με τα κριτήρια της αντίστοιχης άσκησης |
| --- | --- | --- | --- |
| 1 |  [Δημιουργία ομάδας](https://github.com/courses-ionio/hci/discussions/1794) + [Φορκ και δημιουργία σελίδας τελικής αναφοράς](https://courses-ionio.github.io/help/guide/), [προσθήκη πίνακα περιεχομένων](https://raw.githubusercontent.com/courses-ionio/hci/master/README.md), [συγγραφή της εισαγωγής](https://courses-ionio.github.io/help/intro/), αποστολή της εισαγωγής [για σχολιασμό στην συζήτηση](https://github.com/courses-ionio/help/discussions/categories/show-and-tell) και καταγραφή του συνδέσμου συζήτησης δίπλα --> [Σχολιασμός της Εισαγωγής](https://github.com/courses-ionio/help/discussions/827) | | |
| 2 | Άσκηση γραμμής εντολών (linux install) | | |
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

# ΕΙΣΑΓΩΓΗ - ΠΑΡΑΔΟΤΕΟ 1

## ΣΤΟΧΟΙ ΜΑΘΗΜΑΤΟΣ
Οι προσδοκίες μου από το μάθημα της επικοινωνίας του ανθρώπου -υπολογιστή είναι αρχικά να εξοικειωθώ με το περιβάλλον του github που είναι κάτι πρωτόγνωρο για εμένα.Έπειτα, να καταλάβω τον σκοπό του μαθήματος και τι θα μου προσφέρει όλη η διαδικασία στο τέλος του εξαμήνου.

##  ΕΓΚΑΤΑΣΤΑΣΗΣ ARCH LINUX
Στόχος της δεύτερης εβδομάδας ήταν η εγκατάσταση των Arch Linux κάτι το οποίο ήταν πρωτόγνωρο και δύσκολο.
Βήματα εγκατάστασης Arch Linux
1. Η ληψη της εικόνας .Iso και η εγκατάσταση του λειτουργικού συστήματος μέσω ενός usb-stick.
2. Το επόμενο βήμα ήταν να μπορέσω να δημιουργήσω χώρο στον σκληρό δίσκο για να εγκαταστήσω τα Arch Linux.
3. Έπειτα έπρεπε να γίνει επανεκίννηση για προχωρημένους με σκοπό την εισαγωγή του usb-stick.
4. Αφού έκανε boot ο υπολογιστής η εγκατάσταση ξεκίνησε.
5. Έγινε έλεγχος αρχείων στο EFI system.
6. Έχοντας πια χώρο στον σκληρό δίσκο και εκτελώντας την εντολή cfdisk δημιουργήθηκε Arch Linux filesystem και Arch Linux swap.
7. Η επόμενη εντολή για την εγκατάσταση των Arch Linux ήταν η εξής:pacstrap/mnt-base linux linux-firmware.
8. Αφού έχει γίνει η εγκατάσταση του λειτουργικού συστήματος αλλά και των αρχείων έγινε η δημιουργία χρηστών και μέσω του grub menu εμφανίζεται η επιλογή  των Arch Linux ή των Windows.
9. Τελευταίο βήμα ήταν η αφαίρεση του usb-stick και η επιλογή των Arch Linux.

ΔΥΣΚΟΛΙΕΣ ΣΤΗΝ ΕΚΑΤΑΣΤΑΣΗ ΤΩΝ ARCH LINUX:
Αρχικά η εγκατάσταση των Arch Linux έγινε μέσω του virtual box καθώς δεν υποστήριζε κάτι διαφορετικό ο φορητός υπολογιστής μου. Μετά απο κάποια παραδοτέα τα οποία έκανα απο το virtual box και ξέροντας ότι δεν μπορώ μέσω αυτού να πάρω τον μέγιστο βαθμό αποφάσισα απο τον νέο φορητό υπολογιστή μου να  εγκαταστήσω από την αρχή τα Arch Linux υλοποίοντας τα βήματα που προανέφερα και εκτελόντας τα παραδοτέα από εκεί.

## ΑΣΚΗΣΕΙΣ ΓΡΑΜΜΗΣ ΕΝΤΟΛΩΝ(journalctl-b,neofetch) - ΠΑΡΑΔΟΤΕΟ 2
Αφού έκανα την εγκατάσταση των Arch Linux όπως είπα κανονίκα πλέον και όχι σε virtual box έπρεπε να εκτελέσουμε τις εντολές journalctl-b,neofetch στο Konsole.

[![asciicast](https://asciinema.org/a/1Nkljf2kUsFsEoPAWiwHnv1EZ.svg)](https://asciinema.org/a/1Nkljf2kUsFsEoPAWiwHnv1EZ)
[![asciicast](https://asciinema.org/a/gJsGILhQytgp2T3QPSLLFjgzt.svg)](https://asciinema.org/a/gJsGILhQytgp2T3QPSLLFjgzt)

## ΣΥΜΜΕΤΟΧΙΚΟ ΠΕΡΙΕΧΟΜΕΝΟ Α1 - ΠΑΡΑΔΟΤΕΟ 3
Ο στόχος του τρίτου παραδοτέου ήταν η αρχή της δημιουργίας της ιστοσελίδας του βιβλίου και η εισαγωγή δύο φωτογραφιών μέσω των submodules και jekyll στο βιβλίο.

| Περιγραφή | Image link | Gallery link |
| --- | --- | --- |
| Keyboard | [keyboard image](https://github.com/inf2021062/images/blob/master/keyboard.jpg) | [keyboard gallery](https://github.com/inf2021062/_gallery/blob/inf2021062/keyboard.md) |
| mouse | [mouse image](https://github.com/inf2021062/images/blob/master/mouse.jpg) | [mouse gallery](https://github.com/inf2021062/_gallery/blob/inf2021062/mouse.md)

## ΑΣΚΗΣΗ ΓΡΑΜΜΗΣ ΕΝΤΟΛΩΝ(warm-up) - ΠΑΡΑΔΟΤΕΟ 4
Ο σκοπός του τέταρτου παραδοτέου ήταν η επιλογή από το warm-up category η λήψη και η αναπαραγωγή ενός τραγουδιού μέσω του command line.

Το link από την αναπαραγωγή του τραγουδιού από το asciinema είναι το εξής: https://asciinema.org/a/krpHvGSTOjRcey8om2EKqbVKa

## ΣΥΜΜΕΤΟΧΙΚΟ ΠΕΡΙΕΧΟΜΕΝΟ Α2 - ΠΑΡΑΔΟΤΕΟ 5
Στο πέμπτο παραδοτέο μας ζητήθηκε η δημιουργία των slides και timelines στο αποθετήριο της ιστοσελίδας του βιβλίου.

Το link για την δημιουργία των slides: https://github.com/inf2021062/site/blob/master/_slides/input-device.md

Το link για την δημιουργια των timelines: https://github.com/inf2021062/site/blob/master/_timeline/scanner.md

## Η ΚΑΤΑΣΚΕΥΗ ΤΟΥ ΒΙΒΛΙΟΥ ΤΟΥ ΜΑΘΗΜΑΤΟΣ - ΠΑΡΑΔΟΤΕΟ 6
Στο έκτο παραδοτέο μας ζητήθηκε να δημιουργήσουμε αρχικά το πρώτο παραδοτέο για την κατασκευή του βιβλίου. Αυτό το παραδοτέο βασίζεται σε εργαλεία γραμμής εντολών και πιο συγκεκριμένα στην εντολή pandoc. Στο παραδοτέο αυτό οι απαιτήσεις και οι δυσκολίες ήταν πολύ πιο έντονες συγκριτικά με τα προηγούμενα παραδοτέα καθώς οι εντολές της γραμμής εντολών ήταν κάτι το οποίο συνάντησα για πρώτη φορά και θα έπρεπε να τις ψάξω πόλυ βαθύτερα ως προς την λειτουργία    τους με σκοπό να κατανοήσω το τι ακριβώς κάνουν.

| Κατασκευή βιβλίου | Links |
| --- | --- |
| contribution4.lua | https://github.com/inf2021062/kallipos/blob/master/contribution4.lua |
| contribution.md | https://github.com/inf2021062/kallipos/blob/master/contribution4.md |

## ΣΥΜΜΕΤΟΧΙΚΟ ΠΕΡΙΕΧΟΜΕΝΟ Β1 - ΠΑΡΑΔΟΤΕΟ 7
Σε αυτό το παραδοτέο μας ζητήθηκε να συνεχίσουμε την άσκηση για την ισοσελίδα του βιβλίου για το μάθημα αυτό με το συμμετοχικό περιεχόμενο Β1. 

| Μελέτη περίπτωσης | Links | Βιβλιογραφία |
| --- | --- | --- |
| case-study | https://github.com/inf2021062/site/blob/master/_case-study/monitor.md | https://el.wikipedia.org/wiki/%CE%9F%CE%B8%CF%8C%CE%BD%CE%B7_%CF%85%CF%80%CE%BF%CE%BB%CE%BF%CE%B3%CE%B9%CF%83%CF%84%CE%AE |
| includes | https://github.com/inf2021062/site/blob/master/_includes/cs-monitor.md | https://el.wikipedia.org/wiki/%CE%9F%CE%B8%CF%8C%CE%BD%CE%B7_%CF%85%CF%80%CE%BF%CE%BB%CE%BF%CE%B3%CE%B9%CF%83%CF%84%CE%AE |
| images | https://github.com/inf2021062/images/blob/1ec24892a4dbe26a4c8014691b01c946436c5335/monitor.jpg |

## ΑΣΚΗΣΗ ΓΡΑΜΜΗΣ ΕΝΤΟΛΩΝ - ΠΑΡΑΔΟΤΕΟ 8
Σε αυτό το παραδοτέο θα έπρεπε να επεξεργαστώ έναν κώδικα στην γραμμή εντολών κάτι το οποίο φαίνεται παρακάτω:[![asciicast](https://asciinema.org/a/FP1WNqvBMPNL8WmXI7XPnUWQK.svg)](https://asciinema.org/a/FP1WNqvBMPNL8WmXI7XPnUWQK)
