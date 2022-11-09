<!--- Headings  --->
# Μάθημα: Επικοινωνία Ανθρώπου Υπολογιστή

<!-- Strong -->
**Ονοματεπώνυμο:Ελευθέριος Πιπιλακίδης**

**Αριθμός Μητρώου:Π2018129**
<!-- Links -->
**GitHub Profile:[ΕλευθέριοςΠιπιλακίδηςΠ2018129](https://github.com/comanter)**

**Asciinema profile:[comanter](https://asciinema.org/~comanter)**


| Εβδομάδα | [Όλα τα παραδοτέα βρίσκονται στην ίδια σελίδα της τελικής αναφοράς](https://courses-ionio.github.io/help/deliverables/) με τα προσωπικά στοιχεία σας (Όνομα, ΑΜ, github profile) και μαζί με αυτόν εδώ τον πίνακα περιεχομένων | Σύνδεσμος στην [εβδομαδιαία παρουσίαση προόδου στις συζητήσεις](https://github.com/courses-ionio/help/discussions/categories/show-and-tell) | Αυτοαξιολόγηση σύμφωνα με τα κριτήρια της αντίστοιχης άσκησης |
| --- | --- | --- | --- |
| 1 |  Δημιουργία ομάδας + [Φορκ και δημιουργία σελίδας τελικής αναφοράς](https://courses-ionio.github.io/help/guide/), [προσθήκη πίνακα περιεχομένων](https://raw.githubusercontent.com/courses-ionio/sw/master/README.md), [συγγραφή της εισαγωγής](https://courses-ionio.github.io/help/intro/), αποστολή της εισαγωγής [για σχολιασμό στην συζήτηση](https://github.com/courses-ionio/help/discussions/categories/show-and-tell) και καταγραφή του συνδέσμου συζήτησης δίπλα--> | | |
| 2 | Άσκηση γραμμής εντολών:use the terminal as an IDE-(hci) | | Έμαθα να γράφω άμεσα κώδικα και να τον εκτελώ στο τερματικό |
| 3 | Συμμετοχικό περιεχόμενο A1 | | |
| 4 | Άσκηση γραμμής εντολών:format your report-(hci) | | Έμαθα να χρησιμοποιώ το groff για να φτιαχνω pdf κσι man pages |
| 5 | Συμμετοχικό περιεχόμενο A2 | | |
| 6 | Κατασκευή του βιβλίου Α | | |
| 7 | Συμμετοχικό περιεχόμενο B1 | | |
| 8 | Άσκηση γραμμής εντολών -organise the terminal window into multiple areas-(warmup)| | Καταφερα με ενα τερματικό να κάνω πολλές διεργασίες |
| 9 | Συμμετοχικό περιεχόμενο B2 | | |
| 10 | Άσκηση γραμμής εντολών -set-up the main dependencies and demonstrate your base system-(warmup)| | Γνώρισα ένα νέο τρόπο να μαζεύω πληροφορίες για ενα σύστημα |
| 11 | Άσκηση γραμμής εντολών -organize your notes with emacs-(warmup)| | Ένας νέος ενδιαφέρον τρόπος περιήγησης |
| 12 | Άσκηση γραμμής εντολών -text editor and plug-ins for code highlighting and autocompletion-(warmup)| | Ήρθα σε επαφή με ένα πολύ γνωστό εργαλείο για εγραφή κειμένου |
| 13 | Κατασκευή του βιβλίου Β | | |
| 14 | Τελική αναφορά* | | Απέκτησα ένα νέο set γνώσεων |

# ΕΙΣΑΓΩΓΗ
Σκοπός μου σε αυτό το μάθημα είναι η καλύτερη κατανόηση της διάδρασης μεταξύ ανθρώπου και υπολογιστή. Τι συμβαίνει στο παρασκήνιο, και πως επιτυγχάνεται μία καλύτερη και πιο αποδοτική συνεννόηση ανάμεσα στον υπολογιστή και τον ανθρώπου. Και πώς,εντελη,ως προγραμματιστής και χρήστης, να εχω ενα αρκετα καλο χειρισμό τερματικων.

## **1ο παραδοτέο - Use the terminal as an IDE-(hci)**
1.Αρχικά έκανα εγκατάσταση το spacevim με την εντολη: curl -sLf https://spacevim.org/install.sh | bash

2.Έπειτα εκανα Enable language layer και επέλεξα Python interpreter δηλαδη πρόσθεσα στο SpaceVim configuration file το :

  [[layers]]
  
  name = 'lang#python'
  
  python_interpreter = 'D:\scoop\shims\python.exe'
  
3.Αφού ολοκλήροσα την εγκατάσταση του spacevim,δημιούργισα το helloworld.py με την εντολή nvim helloworld.py

4.Έτρεξα το helloworld μια φορά λάθος και μια σωστά με την εντολή python helloworld.py ώστε να διακρίνω τα errors.

[![asciicast](https://asciinema.org/a/523117.svg)](https://asciinema.org/a/523117)

Asciinema:Παραδοτέο 1ο https://asciinema.org/a/523117

## **2ο παραδοτέο - Format your report-(hci)**
1.Αρχικά εγκατέστησα το groff με την  εντολή apt-get install groff

2.Έπειτα δημιούργησα το test.ms με το nvim test.ms και έγραψα στο αρχείο με 
τις groff εντολές .AU .SH κτλ.

3.Στη συνέχεια έτρεξα το groff -ms -Tpdf test.ms > test.pdf για να φτιάξω το test.pdf και να του αποθηκεύω τυχών αλλαγές

4.Μετά εμφανίζω το pdf με την εντολή  zathura test.pdf



[![asciicast](https://asciinema.org/a/523532.svg)](https://asciinema.org/a/523532)

Asciinema:Παραδοτέο 2ο https://asciinema.org/a/523532

## **3ο παραδοτέο - Organise the terminal window into multiple areas-(warmup)**
Για το 3ο παραδοτέο επέλεξα την άσκηση που απαιτεί να οργανώσω το terminal  με την χρήση ενός προγράμματος και έπειτα να παρουσιάσω την απόδοση του υπολογιστή μου ενώ παράλληλα κάνω browse το web στο άλλο παράθυρο.

1.Αρχικά για να διαχωρίσω το terminal σε διαφορετικά windows χρησιμοποιώ το tmux , αφού τρέξω τo shortcut cntrl+b και % έχω ένα νέο terminal window . Στη συνέχεια μετακινούμε σε window τις επιλογής μου με το shortcut cntrl+b και το αντίστοιχο βελάκι. Φυσικά μπορώ να κλείσω το παράθυρο με την εντολή "exit".

2.Για να κάνω browse το web μέσω του terminal στο πρώτο παράθυρο ,τρέχω το lynx το οποίο είναι ένα text-based web browser όπου με το shortcut g κάνω search καθώς με το A αποδέχομαι όλα τα cookies τις ιστοσελίδας.

3.Τέλος για να κάνω Performance monitoring του υπολογιστή μου, στο δεύτερο window εκτελώ glances το οποίο μου προσφέρει την δυνατότητα να δω διάφορες πληροφορίες όπως την απόδοση του υπολογιστή μου και άλλα παρεμφερή.

[![asciicast](https://asciinema.org/a/463732.svg)](https://asciinema.org/a/463732)

Asciinema:Παραδοτέο 3ο https://asciinema.org/a/463732

## **4ο παραδοτέο - Set-up the main dependencies and demonstrate your base system-(warmup)**
Πρώτη είναι η εργασία όπου ζητείται να γίνει εγκατάσταση τον βασικών απαιτούμενων και να παρουσιάσω τα χαρακτηριστικά του συστήματος μου.

1.Αρχικά αλλάζω το όνομα του command prompt στον αριθμό μητρώου μου και τρέχω το command PS1="Π2018129:~#. 

2.Έπειτα προβάλω την λίστα με τα dot files ώστε να εμφανιστούν τα dot αρχεία μου με την εντολή "ls -a".

3.Στη συνεχεία παρουσίασα το shell configiratiuon file μου χρησιμοποιώντας την εντολής "nano ~/.bashrc" για την προβολή του bashrc.

4.Τέλος παρουσιάζω πληροφορίες του συστήματος μου ,με την χρήση του neofetch εμφανίζονται πληροφορίες που αφορούν το hardware καθώς και το software. Επιπλέον με την επεξεργασία του  config.conf του neofetch έχουμε δυνατότητα για διαφορές ρυθμίσεις με τις οποίες μπορούμε να κάνουμε customize το neofetch όπως να προσθέσουμε την λειτουργιά που εμφανίζει το ποσοστό της μπαταρίας μας ή επιπρόσθετα μπορούμε να αλλάξουμε το icon.

[![asciicast](https://asciinema.org/a/463711.svg)](https://asciinema.org/a/463711)

Asciinema:Παραδοτέο 4ο https://asciinema.org/a/463711

Εργαλεία :ls,sudo,nano,vim,neofetch

## **5ο παραδοτέο - Organize your notes with emacs-(warmup)**
1.Εγκαταστώ το emacs με την εντολή apt-get install emacs

2.Έτρεξα το emacs org-mode -nw

[![asciicast](https://asciinema.org/a/288086.svg)](https://asciinema.org/a/288086)

Asciinema:Παραδοτέο 5ο https://asciinema.org/a/288086

## **6ο παραδοτέο - Text editor and plug-ins for code highlighting and autocompletion-(warmup)**
1.Απλά τρέχω το vim vimrc και κινούμαι μέσα σε αυτό

2.Δείχνω άλλα μέσα που είναι αυτό εφικτό

[![asciicast](https://asciinema.org/a/284617.svg)](https://asciinema.org/a/284617)

Asciinema:Παραδοτέο 6ο https://asciinema.org/a/284617

----------------------------------------------------------------------------------------------------------------------------------------
## Συμμετοχικό υλικό - Βιογραφια:
https://github.com/comanter/gr/blob/gh-pages/_biography/bio_Elon_Musk

  Ο Ίλον Μασκ (πλήρες όνομα Ίλον Ριβ Μασκ Elon Reeve Musk, Πρετόρια, 28 Ιουνίου 1971) είναι επιχειρηματίας με καταγωγή από τη Νότια Αφρική  και με νοτιοαφρικανική, καναδική και αμερικανική υπηκοότητα, καθώς μηχανικός και εφευρέτης. Είναι ο γενικός διευθυντής και επικεφαλής τεχνολογίας για τη διαστημική εταιρεία SpaceX, της οποίας είναι επίσης ο ιδρυτής, καθώς και ο γενικός διευθυντής και επικεφαλής τεχνολογικού σχεδιασμού της εταιρείας Tesla, Inc. (πρώην Tesla Motors), και ο πρόεδρος της SolarCity. Είναι επίσης συνιδρυτής των Tesla, Inc. και Zip2 και PayPal. Ανάμεσα στις διάφορες δραστηριότητες του, έχει επίσης οραματιστεί ένα σύστημα μεταφοράς υψηλής ταχύτητας με την ονομασία Hyperloop, έχει προτείνει ένα υπερηχητικό αεροσκάφος με ηλεκτρική προώθηση, καθώς επίσης είναι και ένας από τους πιο θερμούς υποστηρικτές της ανθρώπινης εξερεύνησης του πλανήτη Άρη.
 
  Γεννήθηκε στην Πρετόρια το 1971, με τους γονείς του να είναι η Μάγιε Χάλντεμαν, μοντέλο από τον Καναδά και ο Έρολ Μασκ, Νοτιοαφρικανός ηλεκτρολόγος και μηχανολόγος μηχανικός. Μεγάλωσε μαζί με τον νεότερο αδελφό του τον Κίμπαλ και τη νεότερη αδελφή του, την Τόσκα. Οι γονείς του χώρισαν το 1980 και έκτοτε ο Μασκ ζούσε περισσότερο με τον πατέρα του στη Νότια Αφρική.Στην ηλικία των 10 ετών άρχισε να πειραματίζεται με ένα υπολογιστή Commodore VIC-20, και κατόπιν στην ηλικία των 12 έμαθε μόνος του προγραμματισμό ηλεκτρονικών υπολογιστών και πούλησε τον κώδικα που έγραψε για ένα παιχνίδι που είχε φτιάξει σε γλώσσα BASIC σε ένα περιοδικό υπολογιστών για περίπου 500 δολάρια Αμερικής.
 
  Με την αποφοίτησή του από το Λύκειο στη Νότια Αφρική, μετακόμισε στον Καναδά το 1989, όπου και απέκτησε την Καναδική υπηκοότητα μέσω της μητέρας του.Εκεί γράφτηκε στο πανεπιστήμιο Κουίνς (Queen's University) στο Οντάριο και κατόπιν συνέχισε τις σπουδές του στη Φυσική στο Πανεπιστήμιο της Πενσυλβάνια στις ΗΠΑ και αργότερα απέκτησε ένα πτυχίο Οικονομικών Επιστημών στη Σχολή Οικονομικών Ουάρτον (Wharton School of Economics) του ίδιου Πανεπιστημίου. Κατά την διάρκεια των σπουδών του ο Μασκ μαζί με έναν άλλο συμφοιτητή του αγόρασαν ένα κτήριο 10 δωματίων, το οποίο και το προσάρμοσαν ως νυχτερινό κέντρο διασκέδασης για άλλους φοιτητές. Το 1995 μετακόμισε στην Καλιφόρνια για να ξεκινήσει το διδακτορικό του στην Εφαρμοσμένη Φυσική στο Πανεπιστήμιο του Στάνφορντ, ωστόσο πολύ σύντομα εγκατέλειψε τις σπουδές του, ώστε να επικεντρωθεί στις επιχειρηματικές του δραστηριότητες στο διαδίκτυο, τις ανανεώσιμες πηγές ενέργειας και το διάστημα. Το 2002 απέκτησε την Αμερικανική υπηκοότητα.
 
==========================================================================

## Συμμετοχικό υλικό - Οι Πεντε Εικονες και οι πληροφοριες τους

[Smart Tv](https://github.com/comanter/gr/blob/gh-pages/images/Smart-tv.jpg)
[Smart Tv-160px](https://github.com/comanter/gr/blob/gh-pages/images/Smart-tv-thumb.png)
[Smart Tv Info](https://github.com/comanter/gr/blob/gh-pages/_gallery/Smart-tv.md)

[Smartphone jpg](https://github.com/comanter/gr/blob/gh-pages/images/Smartphone.jpeg)
[Smartphone 160px](https://github.com/comanter/gr/blob/gh-pages/images/smartphone-thumb.jpeg)
[Smartphone Info](https://github.com/comanter/gr/blob/gh-pages/_gallery/Smartphone.md)

[Smartwatch](https://github.com/comanter/gr/blob/gh-pages/images/smart%20watch.jpeg)
[Smartwatch 160px](https://github.com/comanter/gr/blob/gh-pages/images/smart%20watch-thumb.jpeg)
[Smartwatch Info](https://github.com/comanter/gr/blob/gh-pages/_gallery/Smartwatch.md)

[Mhxaniko](https://github.com/comanter/gr/blob/gh-pages/images/mhxaniko.jpeg)
[Mhxaniko 160pc](https://github.com/comanter/gr/blob/gh-pages/images/keyboard-thumb.jpeg)
[Mhxaniko Info](https://github.com/comanter/gr/blob/gh-pages/_gallery/mhxaniko.md)

[alexa](https://github.com/comanter/gr/blob/gh-pages/images/aleja.jpg)
[Alexa 160px](https://github.com/comanter/gr/blob/gh-pages/images/aleja-thumb.jpeg)
[Alexa Info](https://github.com/comanter/gr/blob/gh-pages/_gallery/aleja.md)
## Επίλογος:
Πιστεύω πως εκπληρώθηκαν οι προσωπικοί στόχοι που είχα θέσει για το μάθημα. Έμαθα την χρησιμότητα του τερματικού και είδα πως είναι να συμετέχει κάποιος σε ένα μεγάλο και ολοκληρωμένο project. 

note:Το μοναδικό μάθημα για να μπορέσω να δηλώσω πτυχιακή!
