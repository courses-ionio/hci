### Ονοματεπώνυμο: ΑΡΓΥΡΗΣ ΠΑΠΑΡΓΥΡΙΟΥ
### ΑΜ:Π2019218 
### EMAIL:P19papa8@ionio.gr
### Edpuzzle:p19papa8

# Επικοινωνία Ανθρώπου-Υπολογιστή
| Εβδομάδα | [Όλα τα παραδοτέα βρίσκονται στην ίδια σελίδα της τελικής αναφοράς](https://courses-ionio.github.io/help/deliverables/) με τα προσωπικά στοιχεία σας (Όνομα, ΑΜ, github profile) και μαζί με αυτόν εδώ τον πίνακα περιεχομένων | Σύνδεσμος στην [εβδομαδιαία παρουσίαση προόδου στις συζητήσεις](https://github.com/courses-ionio/help/discussions/categories/show-and-tell) | Αυτοαξιολόγηση σύμφωνα με τα κριτήρια της αντίστοιχης άσκησης |
| --- | --- | --- | --- |
| 1 |  [Δημιουργία ομάδας](https://github.com/courses-ionio/hci/discussions/1794) + [Φορκ και δημιουργία σελίδας τελικής αναφοράς](https://courses-ionio.github.io/help/guide/), [προσθήκη πίνακα περιεχομένων](https://raw.githubusercontent.com/courses-ionio/hci/master/README.md), [συγγραφή της εισαγωγής](https://courses-ionio.github.io/help/intro/), αποστολή της εισαγωγής [για σχολιασμό στην συζήτηση](https://github.com/courses-ionio/help/discussions/categories/show-and-tell) και καταγραφή του συνδέσμου συζήτησης δίπλα --> |[Oμάδα](https://github.com/Millennials-2), [Συζήτηση](https://github.com/courses-ionio/help/discussions/867) | |
| 2 | Άσκηση γραμμής εντολών (linux install) |[Συζήτηση 2](https://github.com/courses-ionio/help/discussions/1102) | |
| 3 | Συμμετοχικό περιεχόμενο A1 | [Συζήτηση 3](https://github.com/courses-ionio/help/discussions/1411) | |
| 4 | Άσκηση γραμμής εντολών (warm up cli) |[Συζήτηση 4](https://github.com/courses-ionio/help/discussions/1411) | |
| 5 | Συμμετοχικό περιεχόμενο A2 | [Συζήτηση 5](https://github.com/courses-ionio/help/discussions/1502) | |
| 6 | Κατασκευή του βιβλίου Α | | |
| 7 | Συμμετοχικό περιεχόμενο B1 | | |
| 8 | Άσκηση γραμμής εντολών | | |
| 9 | Συμμετοχικό περιεχόμενο B2 | | |
| 10 | Άσκηση γραμμής εντολών | | |
| 11 | Κατασκευή του βιβλίου Β | | |
| 12 | Τελική αναφορά* | | |


## ΕΙΣΑΓΩΓΗ-ΠΑΡΑΔΟΤΕΟ 1
Σαν νέος χρήστης του github αρχικά σκοπέυω να εξοικιωθώ με αυτό γιατί είναι ένα εργαλείο που έχει να μου προσφέρει πολλά κυρίως στο μέλλον, ενώ ταυτόχρονα θα αποκτήσω την ικανότητα της ομαδικής συνεργασίας για την δημιουργία ενός προτζεκτ.Επίσης επειδή έχω σαν στόχο να ασχοληθώ επαγγελματικά με το cyber security οι γνώσεις Linux είναι απαραίτητες.Αρα μέσω του μαθήματος Επικοινωνία Ανθρώπου-Υπολογιστή επιδιώκω να μάθω να χειρίζομαι και τα δύο.Tέλος σε προσωπικό επίπεδο το Arch Linux θα μου υπενθυμίσει οτι δεν πρέπει να μένεις στάσιμος σε κάτι επειδή σου έχει γίνει συνήθειο και δεν θες να ξεβολευτείς(στην περίπτωση μας τα windows). 
## Παραδοτέο 2 

Η εγκατάσταση του λογισμικού συστήματος Arch Linux έγινε αρχικά στο λάπτοπ για dual boot αλλά αντιμετώπισα προβλήματα τα οποία προσπάθησα να λύσω αλλά δεν τα κατάφερα οπότε συνέχισα με την εγκατάσταση του σε `bootable USB`.H εγκατάσταση έγινε ακολουθώντας τους οδηγούς του archwiki και ενος πολύ χρήσιμου βίντεο στο Youtube(το οποίο ήταν με διεκόλυνε πιο πολύ απο το archlinux).Χρησιμοποίησα δύο usb, στο ένα εγκατέστησα το iso και στο δεύτερο έκανα την εγκατάσταση.Χρησιμοποίησα το εργαλείο iwd για να συνδεθώ στο διαδίκτυο και να κατεβάσω κάποια σημαντικά πακέτα όπως το `NetworkManager`.Στην συνέχεια έγινε η αλλαγή του timezone με την εντολή `set-timezone Europe/Athens` η προσθήκη γλώσσας `(LANG=en_US.UTF-8)` και η προσθήκη `sudoer` χρήστη.

Τέλος έτρεξα την εντολή [journalctl -b](https://asciinema.org/a/LN10g1Hflka3lkJbtztpJV4sT) η οποία μας εμφανίζει στο τερματικό το systemd και τα journal logs και την [neofetch](https://asciinema.org/a/Q1TA6sGCwiWhXRK1nkyLhE0Fb) που μας εμφανίζει τα specs του υπολογιστή.
 
 ## ΠΑΡΑΔΟΤΕΟ 3
 Στο συγκεκριμένο παραδοτέο, καλούμαστε να συμβάλλουμε ομαδικά και ατομικά στην ανάπτυξη του ήδη υπάρχοντος site.
 ## Περιγραφή Kaizala
 
 ![IMAGE](https://github.com/P2019218/images/blob/master/Microsoft-Kaizala-thumb.png)
 Το Microsoft Kaizala είναι μια ασφαλής εφαρμογή λογισμικού ανταλλαγής μηνυμάτων και διαχείρισης εργασίας για συνεργασία μεταξύ χρηστών εντός και εκτός οργανισμών συμπεριλαμβανομένης της δυνατότητας αποστολής και λήψης άμεσων μηνυμάτων, συντονισμού εργασιών και υποβολής τιμολογίων. Κυκλοφόρησε στην Ινδία το 2017, στη συνέχεια επεκτάθηκε σε 28 χώρες και κυκλοφόρησε παγκοσμίως τον Απρίλιο του 2019 ως μέρος του πακέτου του Office 365. Είναι διαθέσιμο διεθνώς, ως δωρεάν εφαρμογή Android, iOS και web
 ## Περιγραφή Microsoft Office 
 
 ![IMAGE](https://github.com/P2019218/images/blob/master/office365-thumb.png) 
Το Microsoft Office είναι μια σουίτα εφαρμογών γραφείου και αποτελείται από εφαρμογές επιφάνειας εργασίας, εφαρμογές για servers και υπηρεσίες για τα λειτουργικά συστήματα Microsoft Windows και Mac OS X. Το Microsoft Office ανακοινώθηκε για πρώτη φορά από τον Μπιλ Γκέιτς της Microsoft την 1η Αυγούστου 1988 στην έκθεση COMDEX στο Λας Βέγκας. Αρχικά, ήταν ένας απλός όρος μάρκετινγκ που χρησιμοποιήθηκε για ένα πακέτο εφαρμογών. Η πρώτη έκδοση του Office περιείχε μόνο το Microsoft Word, Microsoft Excel και το Microsoft PowerPoint. Με την πάροδο των ετών, οι εφαρμογές του Office έχουν αυξηθεί σημαντικά και με νέες λειτουργίες, όπως ο ορθογραφικός έλεγχος κ.α.

Στις 10 Ιουλίου 2012, αναφέρθηκε ότι το Office χρησιμοποιείται πάνω από ένα δισεκατομμύριο ανθρώπους σε όλο τον κόσμο.

 
 
 
 
| Περιγραφή | Repository Link |
 | --- | --- |
 |_gallery Kaizala|[KAIZALA.MD](https://github.com/P2019218/_gallery/blob/6d0f86d95b33e8df84ffab3c695e202c8e1f13ad/Microsoft-Kaizala.md)| 
 |images Kaizala|[THUMB](https://github.com/P2019218/images/blob/master/Microsoft-Kaizala-thumb.png) & [FULL QUALITY](https://github.com/P2019218/images/blob/master/Microsoft-Kaizala.png)|
 |_gallery Office|[OFFICE.MD](https://github.com/P2019218/_gallery/blob/6d0f86d95b33e8df84ffab3c695e202c8e1f13ad/office365.md)|
 |images Office|[THUMB](https://github.com/P2019218/images/blob/master/office365-thumb.png) & [FULL QUALITY](https://github.com/P2019218/images/blob/master/office365.png)|
 
 
 
 
 ## ΠΑΡΑΔΟΤΕΟ 4
 
 Για το 4ο παραδοτέο της αναφοράς μου αποφάσισα να επιλέξω 2 ασκήσεις warm-up.Η πρώτη είχε ως στόχο να με ενημερώσει για τον καιρό στον τόπο μου και αυτό το κατάφερα με την εντολή `curl wttr.in`. [asciinema](https://asciinema.org/a/WRYzcYuKqnrdQf9FBFiaYnFJx)
 
 <a href="https://asciinema.org/a/WRYzcYuKqnrdQf9FBFiaYnFJx" target="_blank"><img src="https://asciinema.org/a/WRYzcYuKqnrdQf9FBFiaYnFJx.svg" /></a>
 
 
 
 H δεύτερη είχε ως στόχο το κατέβασμα ενός `Mp3` τραγουδιού το οποίο το κατάφερα με την εντολή `youtube-dl -x --audio-format mp3`. [asciinema](https://asciinema.org/a/MGIAhHjT47V34YxdXjtxR2hi3)
 
 <a href="https://asciinema.org/a/MGIAhHjT47V34YxdXjtxR2hi3" target="_blank"><img src="https://asciinema.org/a/MGIAhHjT47V34YxdXjtxR2hi3.svg" /></a>
 ## ΠΑΡΑΔΟΤΕΟ 5 
 
 Χρονολόγιο :  [Microsoft Office 365](https://2019218.netlify.app/timeline/microsoft/) & [Kaizala](https://2019218.netlify.app/timeline/microsoft/)
Διαφάνειες : [Microsoft Office 365](https://2019218.netlify.app/slides/tools/) & [Kaizala](https://2019218.netlify.app/slides/tools/)
Για το 5ο παραδοτέο πρόσθεσα το υλικό μου σε ήδη υπάρχοντα slides και timelines μέχρι να φτιαχτεί ενα δικό μας σετ με το υλικό όλης της ομάδας
 
