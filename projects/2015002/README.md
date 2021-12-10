# Μάθημα: Επικοινωνία Ανθρώπου Υπολογιστή
---

### Ονοματεπώνυμο: Μάριος Κωνσταντίνου
### Αριθμός Μητρώου: Π2015002
### GitHub Profile: [mariosconsta] - https://github.com/mariosconsta
[![Netlify Status](https://api.netlify.com/api/v1/badges/93ebd915-a3fd-4b02-a8ed-2c5c92b11e92/deploy-status)](https://app.netlify.com/sites/p2015002/deploys)
---

## Πίνακας με σύνοψη των παραδοτέων

| Εβδομάδα* | Παραδοτέο |
| --- | --- |
| 1 | Φορκ του αποθετηρίου και δημιουργία της σελίδας της αναφοράς με τα προσωπικά στοιχεία σας, της σύνοψης με αυτόν τον πίνακα περιεχομένων, και συγγραφή της εισαγωγής με περιγραφή των αναγκών και των στόχων σας για το μάθημα |
| 2 | Άσκηση γραμμής εντολών |
| 3 | Άσκηση γραμμής εντολών |
| 4 | συμμετοχικό περιεχόμενο 1A |
| 5 | Άσκηση γραμμής εντολών |
| 6 | συμμετοχικό περιεχόμενο 2A |
| 7 | Άσκηση γραμμής εντολών |
| 8 | συμμετοχικό περιεχόμενο 1B |
| 9 | Άσκηση γραμμής εντολών |
| 10 | συμμετοχικό περιεχόμενο 2B |
| 11 | Άσκηση γραμμής εντολών |
| 12 | Τελική αναφορά και αίτημα ενσωμάτωσης για βαθμολόγηση |

# ΕΙΣΑΓΩΓΗ
--------
## Οι προσδοκίες μου από το μάθημα
Οι προσδοκίες μου από το μάθημα είναι να μάθω να χειρίζομαι τα Linux τα οποία είναι ένα πολύτιμο εργαλείο για έναν πληροφορικάριο! Πιο συγκεκριμένα αυτό που αποσκοπώ είναι να έχω μία πρώτη επαφή με τα Linux, GitHub και το terminal.

Επίσης θεωρώ πως το μάθημα είναι ένα πολύ καλό exposure στους φοιτητές. Τους εισάγει σε ένα περιβάλλον όπου μπορούν να αποκτήσουν δεξιότητες που μπορούν να χρησιμοποιηθούν σε ένα real-life scenario, ειδικά με το GitHub το οποίο είναι φανταστικό εργαλείο για source control το οποίο χρησιμοποιείτε από πολλές εταιρείες για Remote working κλπ, και για αυτό τον λόγο κατέβασα το Sourcetree και έκανα clone το Repository του μαθήματος έτσι ώστε να μπορώ να κάνω edit το README με vscode και commit τις αλλαγές από εκεί. Δεν ξέρω αν υπάρχουν καλύτερα προγράμματα για version control με git, ίσος πειραματιστώ με κάτι διαφορετικό στο μέλλον, ή αν έχετε να προτείνετε κάτι εσείς θα το εκτιμούσα.

![Workspace Overview](https://i.imgur.com/d9KsWFt.png)

# ΣΥΝΟΨΗ
Συνοπτικά το μάθημα είναι με απαλλακτική εργασία που είναι χωρισμένη σε 11 παραδοτέα διάρκειας 12 εβδομάδων και απαρτίζεται από 6 ασκήσειςdawdwadaw γραμμής εντολών όπου οι 4 είναι ουσιαστικά η πρόοδός που κάναμε κατά την εγκατάσταση του απαιτούμενου λογισμικού (Arch Linux) και στην συνέχεια παραμένουν 2 ασκήσεις μεγαλύτερης πολυπλοκότητας. Ενδιάμεσα των ασκήσεων γραμμής εντολών έχουμε ασκήσεις συμμετοχικού περιεχομένου.

Για τις ασκήσεις γραμμής εντολών θα χρησιμοποιηθεί το εργαλείο Asciinema για την καταγραφή του terminal και για την ολοκλήρωση της εργασίας θα χρησιμοποιηθεί το vscode για την επεξεργασία του README αρχείου όπως και το Sourcetree για την επιμέλεια των αλλαγών / commits.

- [Markdown Cheat Sheet](https://www.markdownguide.org/cheat-sheet/)

# 2ο Παραδοτέο - Εγκατάσταση Arch Linux σε USB
Αρχικά έκανα μία μικρή έρευνα για τον πιο χρήσιμο τρόπο εγκατάστασης Arch Linux. USB ή Dual Boot; Κατέληξα σε USB για να μπορώ να έχω το λειτουργικό σύστημα μαζί μου σε όποια συσκευή είμαι. Στην συνέχεια ήθελα να δω την προτεινόμενη χωρητικότητα του USB η οποία δεν ήταν μεγάλη, στο τέλος αποφάσισα να πάρω ένα USB των 64GB για να είμαι άνετος και να μπορώ να πειραματιστώ εύκολα χωρίς να σκέφτομαι αν έχω αρκετό χώρο.

Γενικά για την εγκατάσταση χρειάστηκα 2 USBs. Ένα ήταν για το Arch iso και το άλλο είναι για την εγκατάσταση. Αφού έβαλα και τα 2 USB στον υπολογιστή μου, κατέβασα το Arch Linux 2021.11.01 -x86_64.iso από το official site του Arch Linux και έκανα burn το iso με το πρόγραμμα balenaEtcher στο μικρό USB που είχα.
Στην συνέχεια, έκανα restart τον υπολογιστή, μπήκα στα Bios και έκανα boot με το USB για να ξεκινήσω την εγκατάσταση του λογισμικού.
Για την εγκατάσταση ακολούθησα [αυτό](https://www.youtube.com/watch?v=yaThYGr37DI&t) το βίντεο. Παρόλα αυτά, αντιμετώπισα αρκετές δυσκολίες διότι πρώτη φορά κάνω εγκατάσταση λογισμικού με terminal. Έπρεπε να αφιερώσω αρκετό χρόνο στο να μάθω τις εντολές και ότι λάθος έκανα με ανάγκαζε να αρχίσω ξανά από την αρχή. Συγκεκριμένα κόλλησα στο σημείο που έπρεπε να δημιουργήσω Partitions στο USB που ήθελα να γίνει η εγκατάσταση και μετά να τα κάνω format. Πέρα από αυτά η εγκατάσταση έγινε ομαλά.

Στην συνέχεια έπρεπε να εγκαταστήσω αρκετά packages. Μερικά από αυτά ήταν το vim, linux, linux firmware και το base. Δεν θα μπω σε λεπτομέρεια για το installation, ουσιαστικά ακολούθησα το βίντεο. Θα αναφέρω μόνο τα σημεία που κόλλησα τα οποία ήταν τα partitions, η γενική χρήση του vim και στο κομμάτι που έπρεπε να δημιουργήσουμε έναν user και να του δώσουμε username.

Ολοκληρωματικά, αφού πλέον έχω ένα λειτουργικό Linux Distribution (Arch) μπορώ να αρχίσω να “παίζω” μαζί του και να πειραματιστώ. Για την επόμενη άσκηση θα δείξω τα configuration files του συστήματος και το system information για hardware και software.
## Πηγές:
- [Install Arch Linux on a removable medium](https://wiki.archlinux.org/title/Install_Arch_Linux_on_a_removable_medium)</br>
- [Arch Linux on a USB Stick](https://www.youtube.com/watch?v=yaThYGr37DI&t)</br>
- [VIM Tutorial](https://www.linuxfordevices.com/tutorials/linux/vim-tutorial)</br>
- [How do I exit the Vim Editor?](https://stackoverflow.com/questions/11828270/how-do-i-exit-the-vim-editor)</br>
- [useradd: invalid username username$](https://www.linuxquestions.org/questions/fedora-35/useradd-invalid-username-username%24-255871/)</br>
- [Arch Linux iso](http://ftp.cc.uoc.gr/mirrors/linux/archlinux/iso/2021.11.01/)</br>




# 3ο Παραδοτέο - Set-up the main dependencies and demonstrate your base system
Όπως ανάφερα παραπάνω, η εγκατάσταση ολοκληρώθηκε με επιτυχία. Αυτό **δεν** ίσχυε τελικά. Με την επανεκκίνηση του Arch παρατήρησα πολλά errors, system freezes και γενικά πάρα πολύ αργό boot time. Μου πήρε μέρες έντονης αναζήτησης για το κάθε error που μου έβγαζε(ήταν πολλά) το shell και παράλληλα χρειάστηκε να κάνω install τα Arch αρκετές φορές διότι το σύστημα δεν ήταν responsive με αποτέλεσμα να μην μπορώ ούτε boot να κάνω.

Μερικά από τα errors που χρειάστηκε να ψάξω ήταν kernel panic και κατά την διαδικασία εγκατάστασης packages το error “task blocked for more than 120 seconds”.
“task blocked for more than 120 seconds” ήταν το error που με βοήθησε να βρω το πρόβλημα. Συγκεκριμένα βρήκα αυτά τα τρία threads [#1](https://serverfault.com/questions/887440/how-should-we-understand-this-locked-for-more-than-120-seconds-call-trace), [#2](https://serverfault.com/questions/456980/server-hung-with-blocked-for-more-than-120-seconds-diskless) και [#3](https://unix.stackexchange.com/questions/181505/what-does-task-mysqldxxx-blocked-for-more-than-120-seconds-mean) στα οποία έλεγε για πιθανό προβληματικό USB. Μετά από περίπου 10 προσπάθειες εγκατάστασης του Arch σε ένα καινούριο USB 64GB που αγόρασα αποκλειστικά για το Arch, είπα να δοκιμάσω την εγκατάσταση σε ένα 32GB type C USB που είχα. 

Μετά από 10 εγκαταστάσεις του Arch δεν χρειάστηκα καν το tutorial. Κατά την διάρκεια της εγκατάστασης στο type C USB που είχα παρατήρησα πως η διαδικασία προχωρούσε υπερβολικά γρηγορότερα, το vim δεν κολλούσε σε κάθε αλλαγή που έκανα, τα packages κατέβαιναν αμέσως και γενικά όλα ήταν πιο ομαλά.
Ολοκληρωματικά, πλέον μπορώ να πω με σιγουριά πως έχω ένα λειτουργικό Linux Distribution (Arch) και μπορώ να συνεχίσω με τα παραδοτέα.

Στο συγκεκριμένο παραδοτέο θα δείξω το shell configuration, software και hardware specifications και τα .dot αρχεία του συστήματος:
| Title | Link |
| ----------- | ----------- |
| Shell configuration files | [link](https://asciinema.org/a/454543) |
| Software / Hardware Specs | [link](https://asciinema.org/a/454542) |
| Showing .dot files        | [link](https://asciinema.org/a/454540) |

## Πηγές:
- [How should we understand this 'locked for more than 120 seconds' call trace?](https://serverfault.com/questions/887440/how-should-we-understand-this-locked-for-more-than-120-seconds-call-trace)</br>
- [Server hung with "blocked for more than 120 seconds", diskless](https://serverfault.com/questions/456980/server-hung-with-blocked-for-more-than-120-seconds-diskless)</br>
- [What does "task mysqld:xxx blocked for more than 120 seconds" mean?](https://unix.stackexchange.com/questions/181505/what-does-task-mysqldxxx-blocked-for-more-than-120-seconds-mean)</br>

# 4ο Παραδοτέο - Συμμετοχικό περιεχόμενο: Α1
Από μικρός πάντα μου άρεσαν τα βίντεο παιχνίδια. Ήταν ένας τρόπος να ξεφύγεις και να βιώσεις εμπειρίες που θα ήταν αδύνατον να βιώσεις στην πραγματικότητα. Αυτό σε πολλά άτομα δίνει μία ελευθερία και ένα τρόπο να ξεφύγουν από τα προβλήματα και την ρουτίνα της καθημερινότητας.

Για αυτό αποφάσισα οι δύο εικόνες που διάλεξα να έχουν θέμα τα παιχνίδια. Ήθελα να δείξω το ξεκίνημα αυτής της πλέον τεράστιας βιομηχανίας με το Pong του Atari το οποίο έκανε την αρχή και στην συνέχεια ήθελα να δείξω το Xbox Controller της Microsoft που θεωρώ πως είναι ένα απίθανο εργαλείο διότι επιτρέπει σε άτομα με αναπηρία να απολαύσουν τον κόσμο του video gaming και να λάβουν μέρος σε μια δραστηριότητα χωρίς να τους εμποδίζει η αναπηρία τους.

#### Θεωρώ πως το gaming πρέπει να είναι προσβάσιμο σε όλους.

| Θέμα | Εικόνα | Πληροφορίες |
| ----------- | ----------- | ----- |
| Atari Pong | [Εικόνα](https://github.com/mariosconsta/images/blob/master/TeleGames-Atari-Pong.jpg) - [Thumbnail](https://github.com/mariosconsta/images/blob/master/TeleGames-Atari-Pong_thubmnail.jpg) | [MD Αρχείο](https://github.com/mariosconsta/_gallery/blob/master/atari-pong.md)
| Xbox adaptive controller | [Εικόνα](https://github.com/mariosconsta/images/blob/master/Xbox_Adaptive_Controller.jpeg) - [Thumbnail](https://github.com/mariosconsta/images/blob/master/Xbox_Adaptive_Controller_thumbnail.jpeg) | [MD Αρχείο](https://github.com/mariosconsta/_gallery/blob/master/adaptive-xbox-controller.md)

# 5ο Παραδοτέο - Try a different Shell
Για το 5ο παραδοτέο αποφάσισα να δοκιμάσω το Shell ZSH. Η διαδικασία εγκατάστασης είναι αρκετά εύκολη και το wiki τα εξηγεί όλα αναλυτικά. Μπορώ να πω πως μου άρεσε αρκετά το zsh και το customizability του. Μπορεί ο κάθε χρήστης να το φτιάξει στα δικά του μέτρα με μία πληθώρα από themes και plugins.

Αντί να κάνω ένα μεγάλο asciinema με την διαδικασία εγκατάστασης, είπα να το σπάσω σε κομμάτια τα οποία μπορείτε να βρείτε παρακάτω.

|Βήμα | Asciinema |
| --- | ----------|
| Setup ZSH       | [link](https://asciinema.org/a/454859)  |
| Setup promtinit | [link](https://asciinema.org/a/454864)  |
| Setting up prompt | [link](https://asciinema.org/a/454867)|
| Installing ohmyzsh framework | [link](https://asciinema.org/a/454870) |
| Setup theme and plugins | [link](https://asciinema.org/a/454878) |
| Setup auto suggestions | [link](https://asciinema.org/a/454884) |

Αφού ολοκλήρωσα την διαδικασία και ρύθμισα το Shell στα δικά μου γούστα, το αποτέλεσμα είναι φανταστικό και το functionality που σου προσφέρει είναι αρκετά χρήσιμο!
# 6ο Παραδοτέο - Συμμετοχικό περιεχόμενο 2A

# 7ο Παραδοτέο - Download mp3

# 8ο Παραδοτέο - Συμμετοχικό περιεχόμενο 1B

# 9ο Παραδοτέο - Organise todo list

# 10ο Παραδοτέο - Συμμετοχικό περιεχόμενο 2B

# 11ο Παραδοτέο - Άσκηση γραμμής εντολών

# ΕΠΙΛΟΓΟΣ

