# Μάθημα: Επικοινωνία Ανθρώπου Υπολογιστή

### Ονοματεπώνυμο: ΔΗΜΗΤΡΙΟΣ ΣΑΒΒΙΔΗΣ
### Αριθμός Μητρώου: Π2016085
### GitHub Profile: [dejuresavv](https://github.com/dejuresavv)
### Asciinema Profile: [p2016085](https://asciinema.org/~p2016085)

## Πίνακας Παραδοτέων

| Εβδομάδα* | Παραδοτέο |
| --- | --- |
| 1 | [Εισαγωγή](#εισαγωγη) |
| 2 | [Warm-Up / Check The Weather](#άσκηση-warm-up---check-the-weather)
| 3 | [Warm-Up / Fetch Information](#άσκηση-warm-up---fetch-information)
| 4 - 6 | [Συμμετοχικό Περιεχόμενο Α1 - A2](#συμμετοχικό-περιεχόμενο-α1-και-α2)
| 5 | [Warm-Up / Become Productive With a To-Do List](#άσκηση-warm-up---become-productive-with-a-to-do-list) 
| 7 | [Search, Download and Play a YouTube Video](#άσκηση-γραμμής-εντολών---search-download-and-play-a-youtube-video)
| 8 - 10 | [Συμμετοχικό Περιεχόμενο 1B - 2Β](#συμμετοχικό-περιεχόμενο-1β---2β)
| 9 | [Organise The Terminal Window Into Multiple Areas](#organise-the-terminal-window-into-multiple-areas)  |
| 11 | [Organize Your Notes With emacs](#organise-your-notes-with-emacs) |
| 12 | Τελική αναφορά και αίτημα ενσωμάτωσης για βαθμολόγηση |

# ΕΙΣΑΓΩΓΗ

## Στόχοι και Ανάγκες Μαθήματος

Ο κύριος στόχος μου, είναι αρχικά η ατομική εξέλιξη των γνώσεών μου σχετικά με τις λειτουργίες γραμμών εντολής
και την χρησιμότητα αυτών. Επιπλέον, η ανάπτυξη και η διατριβή με κώδικα, μέσω των εβδομαδιαίων εργασιών και παραδοτέων,
ευελπιστώ πως θα λειτουργήσει σαν ακρογωνιαίος λίθος στην μετέπειτα επαγγελματική μου σταδιοδρομία στον κλάδο της πληροφορικής.
Επίσης, με τη χρήση του GitHub, θα μάθω πως να αξιοποιώ ένα εύχρηστο εργαλείο, το οποίο μετέπειτα θα συμβάλει στην αρμονική
λειτουργία μίας ομάδας ατόμων που δουλεύουν σε κοινά έργα.

# Warm - Up ασκήσεις
## Άσκηση Warm Up - Check The Weather
Link της άσκησης στο Asciinema: [Warm Up - Check The Weather](https://asciinema.org/a/450516)

### ΠΕΡΙΓΡΑΦΗ

Γράφοντας στο terminal ``curl wttr.in/Thessaloniki`` εμφανίζεται η πρόγνωση της σημερινής ημεράς, καθώς και των δύο επόμενων. Επιπλέον, για κάθε ημέρα μας δίνεται η
πρόγνωση για τα διάστηματα: Πρωί, Μεσημέρι, Απόγευμα και Βράδυ
Προφανώς, μπορούμε να επιλέξουμε οποιαδήποτε πόλη επιθυμούμε για να μάθουμε την πρόγνωση του καιρού, αρκεί να είναι με λατινικούς χαρακτήρες.


## Άσκηση Warm Up - Fetch Information

Link της άσκησης στο Asciinema: [Παραδοτέο 3 / Warm - Up / Fetch Information](https://asciinema.org/a/445914)

### ΠΕΡΙΓΡΑΦΗ

Γράφοντας στο terminal curl ``getnews.tech/business``, εμφανίζονται σαν λίστα όλα τα αποτελέσματα τα οποία συσχετίζονται με ειδήσεις σχετικά με business. Η συγκεκριμένη εντολή
μπορεί να χρησιμοποιηθεί για οποιαδήποτε κατηγορία εμφάνισης ειδήσεων επιθυμούμε.

## Άσκηση Warm Up - Become Productive with a To-Do List

Link της άσκησης στο Asciinema: [Παραδοτέο 5 / Become Productive With a To-Do List](https://asciinema.org/a/448919)

Εργαλείο που χρησιμοποιήθηκε: [Taskwarrior](https://taskwarrior.org/)

### ΠΕΡΙΓΡΑΦΗ

Ο στόχος της συγκεκριμένης άσκησης ήταν να δημιουργηθεί μία To-Do λίστα, μέσω του terminal. Με τη βοήθεια του Taskwarrior ο μπόρεσα να δημιουργήσω tasks μέσω του 
terminal, χρησιμοποιώντας την εντολή ```task add Buy Milk```, όπως φαίνεται και στο video του Asciinema δημιουργείται το συγκεκριμένο task.
Στην παρούσα άσκηση δημιούργησα τρια tasks. Εάν εισάγουμε την εντολή ```task list``` μπορούμε να εμφανίσουμε στο terminal ποια task είναι ακόμα ενεργά. Δίπλα από κάθε
task υπάρχει και το ID του, το οποίο μας βοηθάει σε περίπτωση που θέλουμε να επεξεργαστούμε / διαγράψουμε ένα task.

Για να επεξεργαστούμε ένα task, στην προκειμένη περίπτωση,
γράφουμε ```task append task 2 before they suffer from dehydration``` και το απότελεσμα,
εάν εμφανίσουμε τη λίστα με τα tasks με την εντολή ```task list``` είναι να δούμε την ανανεωμένη ονομασία του task με ID=2.
Τέλος, για να διαγράψουμε ένα task, γράφουμε ```task delete task (task's ID number)```.

Συγκεντρωτικά, όλες οι εντολές που χρησιμοποιήθηκαν με το [Taskwarrior](https://taskwarrior.org/).

|Ενέργεια| Εντολή| Παράδειγμα |
| --- | --- | --- |
| Εισαγωγή νέου task | ```task add (Task's Name)``` | ```task add Buy Milk``` |
| Εκπλήρωση task | ```task (task ID Number) done``` | ``` task 3 done``` |
| Πρόσαψη λέξεων σε task | ```task append task (task's ID number) word word word``` | ```task append task 2 before 9 o'clock```|
| Διαγραφή task | ```task delete task (task ID number)``` | ```task delete task 1``` ή και πολλαπλή διαγραφή tasks ```task delete task 1 2 3 4``` |
| Προβολή λίστας task | ```task list```|


# Συμμετοχικό Περιεχόμενο Α1 και Α2

| Περιγραφή | Repository Link |
| --- | --- |
| Gallery Playstation VR | [playstation-vr.md](https://github.com/dejuresavv/_gallery/blob/2016085/playstation-vr.md)|
| Gallery Sony Playstation | [sony-playstation.md](https://github.com/dejuresavv/_gallery/blob/2016085/sony-playstation.md)|
| Sony Playstation Images | [Full Size](https://github.com/dejuresavv/images/blob/2016085/sony-playstation.jpg) + [Thumbnail](https://github.com/dejuresavv/images/blob/2016085/sony-playstation-thumbnail.jpg) |
| Playstation VR Images | [Full Size](https://github.com/dejuresavv/images/blob/2016085/playstation-vr.jpg) + [Thumbnail](https://github.com/dejuresavv/images/blob/2016085/playstation-vr-thumbnail.png) |
| Videogame Slides | [playstation-vr and sony-playstation slides](https://github.com/dejuresavv/site/blob/2016085/_slides/videogames.md)
| Timeline | [playstation-vr and sony-playstation timeline](https://github.com/dejuresavv/site/blob/2016085/_timeline/videogames.md)


# Άσκηση Γραμμής Εντολών - Search Download and Play a YouTube Video

Link της άσκησης στο Asciinema: [Παραδοτέο 2 - Search Download and Play a YouTube Video](https://asciinema.org/a/444295)

## ΠΕΡΙΓΡΑΦΗ

Η παρούσα άσκηση γραμμής εντολών απαιτούσε την χρήση terminal για την αναζήτηση και αναπαραγωγή ενός video από το YouTube και μετέπειτα
το κατέβασμά του.

Για την εκπόνηση της συγκεκριμένης εργασίας χρησιμοποιήθηκαν τα εργαλεία ytfzf και youtube-dl.
Με το εργαλείο ytfzf δίνεται η δυνατότητα στον χρήστη να πραγματοποιεί αναζήτηση στο YouTube μέσω του terminal και ανάλογα με τις παραμέτρους που
έχει θέσει, να του εμφανίζει τα αποτελέσματα σε λίστα. Στη λίστα φαίνονται ο τίτλος του video, οι προβολές του εκάστοτε video και διάφορες βασικές πληροφορίες.
Εφόσον έχει εμφανιστεί η λίστα στο terminal, ο χρήστης μπορεί να πλοηγηθεί με τα βέλη του πληκτρολογίου για να μετακινηθεί πάνω στη λίστα και εφόσον έχει βρει
το video που τον ενδιαφέρει, μπορεί να πατήσει το enter και το video θα αναπαραχθεί σε ένα pop-up παράθυρο το οποίο έχει και τις "κλασσικές" επιλογές ενός player.
(pause, fast-forward, rewind...). Άρα, καταλήγουμε στο γεγονός ότι το συγκεκριμένο εργαλείο, καλύπτει τις δύο από τις τρεις απαιτήσεις της άσκησης, δηλαδή την αναζήτηση
και την αναπαραγωγή.

Με το δεύτερο εργαλείο, το youtube-dl, δίνεται η δυνατότητα στον χρήστη να κατεβάσει ένα video από το YouTube. Με αυτόν τον τρόπο ολοκληρώνεται και η τρίτη απαίτηση της
άσκησης, δηλαδή το κατέβασμα του video.

## ΛΕΙΤΟΥΡΓΙΚΟΤΗΤΑ

Ανοίγοντας το terminal, αν πληκτρολογήσουμε "ytfzf" και πατήσουμε enter μας δίνεται η δυνατότητα να πληκτρολογήσουμε το video που ψάχνουμε στο YouTube. Με το που
ολοκληρώσουμε την αναζήτηση, μπορούμε να πλοηγηθούμε στη λίστα και να αναπαράξουμε ένα video, όπως προαναφέρθηκε.
Με την εντολή "youtube-dl -x [URL]" μπορούμε να κατεβάσουμε το video σε μορφή .m4a (για αυτο το γεγονός ευθύνεται η εντολή -x) και στο URL εισάγουμε το YouTube link του video 
που θέλουμε να κατεβάσουμε. Σε συνδυασμό με το ytfzf, το οποίο μας εμφανίζει το YouTube link του video που αναπαράγουμε, μπορούμε να κάνουμε copy-paste το URL απευθείας στην 
εντολή "youtube-dl -x [URL]".

# Συμμετοχικό Περιεχόμενο 1Β - 2Β

|Περιγραφή| Repository Link |
|---| --- |
|Μελέτη Περίπτωσης| [Η εκπαιδευτική διαδικασία μέσω της διάδρασης με VR](https://github.com/dejuresavv/site/blob/2016085/_case-study/cs-education_via_vr_interaction.md) + [education_via_vr_interaction.md](https://github.com/dejuresavv/site/blob/2016085/_case-study/education_via_vr_interaction.md)|
| Η βιογραφία για τον Daniel J. Sandin | [daniel-sandin.md](https://github.com/dejuresavv/site/blob/2016085/_biography/daniel-sandin.md) + [Βιογραφία του Daniel Sandin](https://github.com/dejuresavv/site/blob/2016085/_biography/bio-sandin.md)|


# Organise The Terminal Window Into Multiple Areas

Link της άσκησης στο Asciinema: [Παραδοτέο 9 - Organise The Terminal Window Into Multiple Areas](https://asciinema.org/a/461184)


Για να ολοκληρωθεί η παρούσα άσκηση, έπρεπε να εγκατασταθεί το tmux. Με τη χρήση της εντολής ```sudo pacman -S tmux```

Πληκτρολογόντας στο terminal ```tmux``` ενεργοποιείται το tmux και με τη χρήση ctrl+b+% ανοίγει δεύτερο τερματικό στο ίδιο παράθυρο με μία οριζόντια γραμμή να τα χωρίζει. Εάν πατήσουμε ctrl+b+; αλλάζει παράθυρο ο κέρσορας. Μόλις αλλάξουμε παράθυρο, εάν πατήσουμε ```glances``` εμφανίζονται ορισμένα στοιχεία του υπολογιστικού μας συστήματος.

Για την εκπλήρωση της άσκησης εγκατέστησα και το w3m, ένα εργαλείο το οποίο δίνει τη δυνατότητα να περιηγηθούμε στο διαδίκτυο μέσω του terminal. Γράφοντας ```w3m google.com``` φορτώνει την μηχανή αναζήτησης της google. Με τα βελάκια του πληκτρολογίου φέρνουμε τον κέρσορα στο σημείο για να αναζητήσουμε αυτό που θέλουμε. Πρέπει πρώτα πατήσουμε enter και μετά να γράψουμε, αλλίως δεν το αναγνωρίζει σαν εισαγωγή κειμένου. Στο παρόν asciinema έχω γράψει news σαν κριτήριο αναζήτης και έχω περιηγηθεί σε μία ιστοσελίδα με ειδήσεις

# Organise Your Notes with emacs


Link της Άσκησης στο Asciinema: Παραδοτέο 11 - [Organize Your Notes With emacs](https://asciinema.org/a/461957)


Για να ολοκληρωθεί η άσκηση, εγκατέστησα το emacs με τη χρήση ```sudo pacman -S emacs-nox``` καθώς η απλή ```-S emacs``` επέστρεφε errors και δεν κατέβαζε όλα τα απαραίτητα πακέτα.
Ανοίγοντας το terminal, γράφοντας ```emacs -nw``` ανοίγει το emacs στο terminal. Πλητρολογούμε ctrl+x+f για να δημιουργηθεί ένα νέο αρχείο και έπειτα alt+x σε συνδυασμό με το
```org mode```. Αlt+enter για να προσθέσουμε νέο task με τη μορφή χρώματος και αστερίσκων για να είναι με χρώματα, αστερίσκο και συνεπώς πιο φιλικό σαν UI. Με τη χρήση alt + enter + δεξί βέλος, προσθέτουμε επιπλέον αστερίσκους για να μπορέσουμε να κάνουμε διαχωρισμούς σε κατηγορίες ή οτιδήποτε επιθυμεί ο καθένας να κάνει με αυτή τη χρήση. Επιπλέον εάν γράψουμε ```- [ ]``` αντι για αστερίσκο, το task πάνω από αυτή την εντολή θα έχει τη δυνατότητα να εμφανίσει ένα ποσοστό % ολοκλήρωσης το οποίο ανάλογα με τα tasks που έχουν εκπληρωθεί, μεταβάλλεται. Ολοκληρώνουμε ένα task πατώντας ctrl+c+c
