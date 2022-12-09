# ΕΠΙΚΟΙΝΩΝΙΑ ΑΝΘΡΩΠΟΥ-ΥΠΟΛΟΓΙΣΤΗ

### ΟΝΟΜΑΤΕΠΩΝΥΜΟ: ΛΙΟΝΤΟΣ ΓΕΩΡΓΙΟΣ
### Α.Μ: INF2021122
### Github:[inf2021122](https://github.com/inf2021122)


# ΠΙΝΑΚΑΣ ΠΑΡΑΔΟΤΕΩΝ:
| Εβδομάδα | [Όλα τα παραδοτέα βρίσκονται στην ίδια σελίδα της τελικής αναφοράς](https://courses-ionio.github.io/help/deliverables/) με τα προσωπικά στοιχεία σας (Όνομα, ΑΜ, github profile) και μαζί με αυτόν εδώ τον πίνακα περιεχομένων | Σύνδεσμος στην [εβδομαδιαία παρουσίαση προόδου στις συζητήσεις](https://github.com/courses-ionio/help/discussions/categories/show-and-tell) | Αυτοαξιολόγηση σύμφωνα με τα κριτήρια της αντίστοιχης άσκησης |
| --- | --- | --- | --- |
| 1 |  [Δημιουργία ομάδας](https://github.com/courses-ionio/hci/discussions/1794) + [Φορκ και δημιουργία σελίδας τελικής αναφοράς](https://courses-ionio.github.io/help/guide/), [προσθήκη πίνακα περιεχομένων](https://raw.githubusercontent.com/courses-ionio/hci/master/README.md), [συγγραφή της εισαγωγής](https://courses-ionio.github.io/help/intro/), αποστολή της εισαγωγής [για σχολιασμό στην συζήτηση](https://github.com/courses-ionio/help/discussions/categories/show-and-tell) και καταγραφή του συνδέσμου συζήτησης δίπλα -->[ΕΙΣΑΓΩΓΗ](https://github.com/courses-ionio/help/discussions/952) | | |
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
Οι στόχοι μου στο μάθημα της Επικοινωνίας Ανθρώπου-Υπολογιστή είναι η κατανόηση του πυρήνα του μαθήματος.
Ένας από τους απότερους σκοπούς μου είναι η εξεικοίωση με το λειτουργικό σύστημα Arch Linux καθώς και η μελέτη του εκτος από τα πλαίσια του μαθήματος.
Επιπλέον θα ήθελα να μάθω μέσω των προγραμματιστικών ασκήσεων περισσότερα σχετικά με το αντικείμενο μου και εν τέλει να αναπτύξω τις ικανότητες μου.


# Εβδομάδα 2η

## Εγκατάσταση Arch Linux
### Για την εγκατάσταση ακολούθησα τα εξής βήματα:
1:Αρχικά κατέβασα την εικόνα .Iso των Arch και στην συνέχεια διαμόρφωσα ένα στικάκι σε συσκευή boot ώστε να γίνει η εγκατάσταση.

2:Έπειτα έψαξα στο διαδίκτυο για την διαμόρφωση και δημιουργία σκληρού δίσκου κάνωντας τις απαραίτητες αλλαγές για να δεσμεύσω χώρο (περίπου 40 gb) στον  σκληρό δίσκο για την εγκατάσταση.

3:Στην συνέχεια,μπήκα στις ρυθμίσεις,επέλεξα επαννεκίνηση για προχωρημένους και έβαλα το στικάκι.

4:Μετά την επιλογή να κάνει boot ο υπολογιστής απο το στικάκι ξεκίνησε η εγκατάσταση τους.

5:Μέσα απο την εντολή (ls /cys/firmware/efi/efivars) έλεγξα την εγκυρώτητα των αρχείων του συστήματος  EFI.

6:Απο το βήμα 2 εφόσον έδωσα την απαιτούμενη μνήμη απο τον σκληρό,με την εντολή cfdisk δημιούργησα ενα Linux Filesystem και ενα Linux Swap.

7:Μετά απο πολλές  προσπάθειες και γράφωντας αρκετό κώδικα συνέχισα την εγκατάσταση των Arch με την εντολή pacstrap/mnt-base linux linux-firmware

8:Εφόσον,έγινε η εγκατάσταση όλων των απαραίτητων αρχείων προχώρησα στην δημιουργία χρηστών και στην συνέχεια προχώρησα στην εφαρμογή ενός grub menu το οποίο όταν ανοίγει ο υπολογίστης θα έχει την επιλογή είτε των Arch Linux είτε των Windows.

9:Τέλος είμαστε πλέον έτοιμοι να χρησιμοποιήσουμε τα Arch Linux.

## Ασκήσεις στην γραμμή εντολών(journalctl -b,neofetch):
 
 Μετά την εγκατάσταση του Arch Linux,χρησιμοποιήσα στο command line για εγγραφή οθόνης το (asciinema)όπου δοκίμασα τις 2 εξής εντολές του παραδοτέου για την εμφανιση σημαντικών πληροφοριών(bootlog,informations).

1. [journalctl -b](https://asciinema.org/a/aQdGYmE3kEzofJirine9q5Dxt)

2. [neofetch](https://asciinema.org/a/1vncGBcGC75mw1naweSyBJO5a)


# Εβδομάδα 3η

## Συμμετοχικό περιεχόμενο ( Α1 ):

Για το 3ο παραδοτέο μας ζητήθηκε να συνεργαστούμε με την ομάδα μας, ώστε να κατασκευάσουμε την ιστοσελίδα του βιβλίου μέσα από τις τεχνολογίες jekyll, submodules.
Στην συνέχεια μέσω αυτών των τεχνολογιών έπρεπε να προσθέσουμε 4 εικόνες τις δύο σε κανονική διάσταση και τις άλλες δυο σε πλάτος 160 pixel για το (thumb).
Τέλος δημιούργησα ένα .md αρχείο για κάθε μια εικόνα στον φάκελο _gallery, οπου υπήρχαν τα στοιχεία (author, title, year, image_url, caption, license_url, license_text, categories, tags).
## Οι εικόνες (png,md):
1.[playStation.png](https://github.com/inf2021122/images/blob/master/playStation.png)

2.[typewriter.png](https://github.com/inf2021122/images/blob/master/typewriter.png)

3.[playStation.md](https://github.com/inf2021122/_gallery/blob/master/playStation.md)

4.[typewriter.md](https://github.com/inf2021122/_gallery/blob/master/typewriter.md)


# Εβδομάδα 4η

## Άσκηση γραμμής εντολών (warm up):

Για το 4ο Παραδοτέο επέλεξα απο τις ασκήσεις γραμμής εντολών, να εξασκηθώ στο να κατεβάσω ενα τραγούδι απο το youtube μέσω του konsole και εν συνεχεία χρησιμοποιήσα το asciinema για να κάνω εγγραφή οθόνης.

[youtube-dl](https://asciinema.org/a/Li1HvnJu9Ixs43xW5iRrMpHwA)


# Εβδομάδα 5η

## Συμμετοχικό περιεχόμενο ( Α2 ):

 Έχωντας πλέον εξοικειωθεί με το (git, GitHub, jekyll, cli) που είδαμε στα προηγούμενα παραδοτέα φτάνωντας στο 5ο παραδοτέο μας ζητήθηκε  ένα σετ από θεματικές διαφάνειες και ένα χρονολόγιο από το  παραδοτέο Α1 της 3ης εβδομάδας.
 Πρόσθεσα στα χρονολόγια (playStation.md & game_technology.md) τα αρχεία που δημιούργησα.
 
 ## Slides game_technology:
   
   ### link:https://github.com/inf2021122/site/blob/master/_slides/game_technology.md
   
 ## Timeline playStation:
 
 ### link:https://github.com/inf2021122/site/blob/master/_timeline/playStation.md
 
 
 # Εβδομάδα 6η
 
 ## Κατασκευή βιβλίου ( Α ):
 
 Για το 6ο Παραδοτέο ζητήθηκε  να προσθέσουμε μια νέα ετικέτα (markdown tag) δικής μας έμπνευσης και το αντίστοιχο φίλτρο pandoc lua για την προσθήκη εκτενών σημειώσεων στο σώμα του βιβλίου.Επίσης σε αυτο το παραδοτέο αντιμετώπισα κάποιες δυσκολίες και δεν κατάφερα να ολοκληρώσω όλο το παραδοτέο σωστά.
 
 ## contribution.md:
   ### link:https://github.com/inf2021122/kallipos/blob/master/contribution.md
   
 ## contribution3.lua:
   ### link:https://github.com/inf2021122/kallipos/blob/master/contribution3.lua
   
   
 ## Οι δυσκολίες που αντιμετώπισα:
 
### 1.Δεν μπόρεσα να μετατρέψω το βιβλίο σε .text.
 
### 2.Δεν μπόρεσα να επεξεργαστώ το make-latex.sh.
 
### 3.Δεν μπόρεσα να προσθέσω το σχόλιο μου μέσα στο βιβλίο.


# Εβδομάδα 7η

## Συμμετοχικό Περιεχόμενο ( Β1 ):

Βάση των προηγούμενων Παραδοτέων (Α1,Α2) μας ζητήθηκε να δουλέψουμε πάλι στο ομαδικό μας αποθετήριο  για την ιστοσελίδα του βιβλίου του μαθήματος όπου χρειαζότανε να βρούμε μια νέα μελέτη περίπτωσης.

## _case-study:
 ### link:https://github.com/inf2021122/site/blob/master/_case-study/Tekken.md
 
## _includes:
### link:https://github.com/inf2021122/site/blob/master/_includes/cs-Tekken.md

## images:
 ### link:https://github.com/inf2021122/images/blob/cb0beb3ed92d68497ff89728d0af15bebc6f4c27/Tekken_series_logo_as_of_2012.png
 
 ## Οι Πηγές που χρησιμοποιήσα ( _case-study , _includes , images ):
1.[_case-study](https://en.wikipedia.org/wiki/Tekken)

2.[_includes](https://en.wikipedia.org/wiki/Tekken)

3.[images](https://en.wikipedia.org/wiki/Tekken)


# Εβδομάδα 8η

## Άσκηση γραμμής εντολών 

Για αυτό το Παραδοτέο μας ζητήθηκε ,να ασχοληθούμε με την πλέον γνώριμη γραμμή εντολών (απο το 4ο Παραδοτέο) και ιδιαίετερα να χρησιμοποιήσουμε έναν  editor για να επεξεργαστούμε ένα κομμάτι κώδικα.Τέλος μέσω του konsole χρησιμοποιήσα το asciinema για εγγραφή οθόνης.
 
### Asciinema:
[![asciicast](https://asciinema.org/a/C2X0p91cqUzJNL6wQZI8yND4v.svg)](https://asciinema.org/a/C2X0p91cqUzJNL6wQZI8yND4v)
      


 
   
 
 






