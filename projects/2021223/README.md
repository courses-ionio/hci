# ΕΠΙΚΟΙΝΩΝΙΑ ΑΝΘΡΩΠΟΥ-ΥΠΟΛΟΓΙΣΤΗ

### ΟΝΟΜΑΤΕΠΩΝΥΜΟ: ΤΖΟΥΝΗΣ ΠΑΝΑΓΙΩΤΗΣ
### Α.Μ: inf2021223
### Github:[inf2021223](https://github.com/inf2021223)


### ΠΙΝΑΚΑΣ ΠΑΡΑΔΟΤΕΩΝ

| Εβδομάδα | [Όλα τα παραδοτέα βρίσκονται στην ίδια σελίδα της τελικής αναφοράς](https://courses-ionio.github.io/help/deliverables/) με τα προσωπικά στοιχεία σας (Όνομα, ΑΜ, github profile) και μαζί με αυτόν εδώ τον πίνακα περιεχομένων | Σύνδεσμος στην [εβδομαδιαία παρουσίαση προόδου στις συζητήσεις](https://github.com/courses-ionio/help/discussions/categories/show-and-tell) | Αυτοαξιολόγηση σύμφωνα με τα κριτήρια της αντίστοιχης άσκησης |
| --- | --- | --- | --- |
| 1 |  [Δημιουργία ομάδας](https://github.com/courses-ionio/hci/discussions/1794) + [Φορκ και δημιουργία σελίδας τελικής αναφοράς](https://courses-ionio.github.io/help/guide/), [προσθήκη πίνακα περιεχομένων](https://raw.githubusercontent.com/courses-ionio/hci/master/README.md), [συγγραφή της εισαγωγής](https://courses-ionio.github.io/help/intro/), αποστολή της εισαγωγής [για σχολιασμό στην συζήτηση](https://github.com/courses-ionio/help/discussions/categories/show-and-tell) και καταγραφή του συνδέσμου συζήτησης δίπλα -->[Εισαγωγή](https://github.com/courses-ionio/help/discussions/942) | | |
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

# ΕΙΣΑΓΩΓΗ

## ΣΤΟΧΟΙ
Μέσα από το μάθημα Επικοινωνίας Ανθρώπου-Υπολογιστή θα ήθελα να γνωρίσω την διεπαφή του χρήστη με το εργαλείο που ονομάζεται υπολογιστής.
Να μπορέσω να έρθω πιο κοντα με ένα νεο για μένα λειτουργικό σύστημα το Arch Linux και να το χρησιμοποιήσω στο έπακρο για το μάθημα και όχι μόνο.
Στο τέλος θα ήθελα να έχω αποκομμίσει όλα αυτά τα εφόδια ώστε να αναβαθμίσω τις ικανότητες μου στον προγραμματισμό και γενικότερα στην Επιστήμη της Πληροφορικής.

# Παραδοτέο 2ο

## Εγκατάσταση Arch Linux
### Για την εγκατάσταση των Arch Linux ακολούθησα τα εξής βήματα:

1) Αρχικά, κατέβασα στον υπολογιστή μου την εικόνα .iso των Arch Linux και έπειτα διαμόρφωσα το USB Flashdrive στην συσκεύη μου (laptop) με σκοπό την εγκατάσταση των Arch Linux.

2) Στην συνέχεια, έκανα διαμόρφωση του σκληρού δίσκου και με τις κατάλληλες αλλαγές δημιούργησα χώρο στον σκληρό δίσκο για την εγκατάσταση των Arch Linux.

3) Έπειτα, μέσω των ρυθμίσεων έκανα επαννεκίνηση για προχωρημένους και έβαλα το USB Flashdrive στην συσκεύη μου (laptop).

4) Μετά την επιλογή η συσκεύη μου (laptop) να κάνει boot, ξεκίνησε η εγκατάσταση μέσω του USB Flashdrive.

5) Πρώτα ελέχθηκε το σύστημα EFI και ειδικότερα τα αρχεία του αν είναι έγκυρα.

6) Αφού, έδωσα την απαιτούμενη μνήμη στον σκληρό δίσκο της συσκεύη μου (laptop),με την εντολή cfdisk δημιούργησα το Linux Firesystem και το Linux Swap. 

7) Με την χρήση αρκετών εντολών συνέχησα στην εγκατάσταση των Arch Linux με την εντολή  pacstrap /mnt -base linux linux-firmware.

8) Έπειτα με την εγκατάσταση των αρχείων προχώρησα στην δημιουργία χρήστη και εφάρμοσα ένα grub menu το οποίο δίνει την επιλογή στον χρήστη αν θα επιλέξει τα Arch Linux ή τα Windows.

9) Τέλος,αφαίρεσα το USB Flashdrive και τα Arch Linux ήταν εγκαταστημένα στήν συσκεύη μου (laptop).

## Άσκηση Γραμμής Εντολών

Αφού ολοκλήρωσα την εγκατάσταση των Arch Linux και χρησιμοποιόντας το asciinema στο Konsole, έβγαλα δύο βίντεο στα οποία δοκίμασα τις δύο εντολές που μας δώθηκαν (neofetch,journalctl -b):

1) [journalctl -b](https://asciinema.org/a/H4TPxhmgc95SQCMGHKA1rghp3)

2) [neofetch](https://asciinema.org/a/3mYprMpQnrbVCjQ4JbKJdBgEG)

# Παραδοτέο 3ο

## Συμμετοχικό περιεχόμενο Α1 

Για αυτό το παραδοτέο έπρεπε να δημιουργήσουμε το νέο περιεχόμενο για την ιστοσελίδα του βιβλίου με την τεχνολογία jekyll και με τα submodules μέσω του Konsole στα οποία έβαλα δύο εικόνες και έγραψα λίγα λόγια για αυτές τις φωτογραφίες με σκοπό να ξεκινήσουμε την την κατασκεύη του βιβλίου.Οι εικόνες αυτές βρίσκονται στον κατάλογο /images και με ο σχολιασμός τους στον κατάλογο /gallery.

| Περιγραφή | Link for images | Link for gallery|
| --- | --- | --- |
| IBM_PC_5150 | [IBM_PC_5150_image](https://github.com/inf2021223/images/blob/master/IBM_PC_5150(1).png) | [IBM_PC_5150_gallery](https://github.com/inf2021223/_gallery/blob/master/IMB_PC_5150.md) |
| Windows 7 | [Win7_image](https://github.com/inf2021223/images/blob/master/Win7-gr.png) | [Win7_gallery](https://github.com/inf2021223/_gallery/blob/master/Win7-gr.md) |

## Πηγές

https://www.google.com/url?sa=t&rct=j&q=&esrc=s&source=web&cd=&cad=rja&uact=8&ved=2ahUKEwjv-oi09637AhWfnf0HHcZNA3UQFnoECCkQAQ&url=https%3A%2F%2Fel.wikipedia.org%2Fwiki%2FIBM_PC&usg=AOvVaw1OtJqE95HC3CPw6UbOJsvu 

https://www.google.com/url?sa=t&rct=j&q=&esrc=s&source=web&cd=&cad=rja&uact=8&ved=2ahUKEwjjoLeR-K37AhU4_rsIHYTvDKIQFnoECCMQAQ&url=https%3A%2F%2Fel.wikipedia.org%2Fwiki%2FWindows_7&usg=AOvVaw1l7drr5OeBKhRAI6zfwwOn

# Παραδοτέο 4ο

## Άσκηση Γραμμής Εντολών (Warm up) 

Το θέμα που επέλεξα για το 4ο παραδοτέο ήταν να κατεβάσω ένα τραγούδι από το youtube μέσω του konsole.Έπειτα, μέσω του Κonsole το ίδιο τραγούδι έπρεπε να το άκουσω και με την βοήθεια του asciinema βρίσκεται στο παρακάτω [link](https://asciinema.org/a/aq72OPKzMwe2a4GrBApzRhyqI)

# Παραδοτέο 5ο 

## Συμμετοχικό περιεχόμενο Α2

Για το συμμετοχικό περιεχόμενο Α2 έπρεπε να δημιουργήσουμε ένα χρονολόγιο και μια διαφάνεια σχετικό με τις δύο φωτογραφίες που ανεβάσαμε για την δημιουργία του βιβλίου (Συμμετοχικό περιεχόμενο Α1), όπου βρίσκονται στον κατάλογο timeline και στον κατάλογο slides.

| Link for timeline | Link for slides |
| --- | --- |
| [timeline](https://github.com/inf2021223/site/blob/master/_timeline/informatics.md) | [slides](https://github.com/inf2021223/site/blob/master/_slides/new_techology.md) |

## Πηγές 

https://www.google.com/url?sa=t&rct=j&q=&esrc=s&source=web&cd=&cad=rja&uact=8&ved=2ahUKEwiS8N2C_q37AhUTjaQKHXLeDsEQFnoECBMQAQ&url=https%3A%2F%2Fel.wikipedia.org%2Fwiki%2F%25CE%25A0%25CE%25BB%25CE%25B7%25CF%2581%25CE%25BF%25CF%2586%25CE%25BF%25CF%2581%25CE%25B9%25CE%25BA%25CE%25AE&usg=AOvVaw0FG1mWKU6eQAsY8W8dW8dH

# Παραδοτέο 6ο

## Κατασκεύη του βιβλίου Α

Σε αυτό το παραδοτέο μας ζητήθηκε να γίνει το πρώτο παραδοτέο για την κατασκεύη του βιβλίου,όπου βασιζόταν σε εργαλεία γραμμής εντολών και ειδικότερα στην εντολή pandoc.Ακόμη σε αυτό το παραδοτέο πρέπει να σχολιάσουμε το βιβλίο που μας δόθηκε και να βάλουμε το δικό μας σχόλιο σε μια από τις παραγράφους που περιείχε το βιβλίο.

1) [contribution223.lua](https://github.com/inf2021223/kallipos/blob/master/contribution223.lua)

2) [contribution223.md](https://github.com/inf2021223/kallipos/blob/master/contribution223.md)

## Δυσκολίες που αντιμετωπίστηκαν

Η βασικότερη δυσκολία που αντιμετώπησα ήταν ότι δεν κατάφερα να κάνω το βιβλίο σε μορφή tex και δεν κατάφερα να κάνω το βιβλίο σε μορφή pdf μέσω make-latex.sh και δεν κατάφερα να βάλω το σχόλιό μου μέσα στο pdf του βιβλίου.

# Παραδοτέο 7ο 

## Συμμετοχικό περιεχόμενο Β1

## Πηγές

# Παραδοτέο 8ο

## Ασκηση γραμμής εντολών

# Παραδοτέο 9ο

## Συμμετοχικό περιεχόμενο Β2

## Πηγές

