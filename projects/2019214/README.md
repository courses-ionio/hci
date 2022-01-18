# **Μάθημα: Επικοινωνία Ανθρώπου Υπολογιστή**

###  Ονοματεπώνυμο: ΧΑΡΑΛΑΜΠΟΣ ΜΑΚΡΥΛΑΚΗΣ
###  Αριθμός Μητρώου: Π2019214
###  GitHub Profile: [Xar-Me-Ison](https://github.com/Xar-Me-Ison)

<br />

## Πίνακας με σύνοψη των παραδοτέων
| Εβδομάδα* | Παραδοτέο |
| --- | --- |
| 1 | [Εισαγωγή + Σύνοψη](#εισαγωγή) |
| 2 | [Άσκηση γραμμής εντολών 1](#άσκηση-γραμμής-εντολών-1) |
| 3 | [Άσκηση γραμμής εντολών 2](#άσκηση-γραμμής-εντολών-2) |
| 4 | [Συμμετοχικό περιεχόμενο 1Α](#συμμετοχικό-περιεχόμενο-1α) |
| 5 | [Άσκηση γραμμής εντολών 3](#άσκηση-γραμμής-εντολών-3) |
| 6 | [Συμμετοχικό περιεχόμενο 2Α](#συμμετοχικό-περιεχόμενο-2α) |
| 7 | [Άσκηση γραμμής εντολών 4](#άσκηση-γραμμής-εντολών-4) |
| 8 | [Συμμετοχικό περιεχόμενο 1Β](#συμμετοχικό-περιεχόμενο-1β)|
| 9 | [Άσκηση γραμμής εντολών 5](#άσκηση-γραμμής-εντολών-5) |
| 10 | [Συμμετοχικό περιεχόμενο 2Β](#συμμετοχικό-περιεχόμενο-2β) |
| 11 | - |
| 12 | [Επίλογος - Αίτημα Ενσωμάτωσης](#επίλογος---αίτημα-ενσωμάτωσης) |



# Εισαγωγή
## Στόχοι / Ανάγκες
Σκοπός μου σε αυτό το μάθημα είναι η καλύτερη κατανόηση της διάδρασης μεταξύ ανθρώπου και υπολογιστή. Τι συμβαίνει στο παρασκήνιο, και πως επιτυγχάνεται μία καλύτερη και πιο αποδοτική συνεννόηση ανάμεσα υπολογιστή και ανθρώπου. Και πώς, κυρίαρχα, μπορώ εγώ, ως προγραμματιστής και χρήστης, να μειώσω αυτό το χάσμα.

Κρίνω κρίσημο λοιπόν, για την απάντηση των παραπάνω ερωτημάτων, την γνώση και εξοικείωση του διαδραστικού περιβάλλοντος του Arch Linux καθώς και των περαιτέρω εργαλείων/πακέτων που υπάρχουν και παρέχονται στις εβδομαδιαίες ασκήσεις ώστε να κατανοήσω καλύτερα, όπως λέει και το μάθημα, την επικοινωνία ανθρώπου και υπολογιστή.

Επιπλέον, θα ήθελα, μιας και ασχολούμαι με `jailbreak`[^1] εδώ και καιρό στην σειρά των iPhone (από [checkra1n](https://checkra.in/) μέχρι [unc0ver](https://unc0ver.dev/))[^2] να καταφέρω να δημιουργήσω πακέτα (ή 'tweaks' όπως λέγονται αλλιώς στο 'jailbreak community') τα οποία θα ήταν χρήσιμα για τον χρήστη (διαχειριστή πια) του τηλεφώνου και, κατά ένα τρόπο, στην βελτίωση της ζωή και/ή της καθημερινότητας του.


[^1]: `Jailbreak`: Στις συσκευές Apple με λειτουργικά συστήματα που βασίζονται σε iOS και/ή iPadOS, το jailbreaking αναφέρεται στην εκμετάλλευση κλιμάκωσης προνομίων που εκτελείται για την άρση των περιορισμών λογισμικού που επιβάλλονται από τον κατασκευαστή, που στην περίπτωση αυτή είναι η Apple.

[^2]: `checkra1n/unc0ver`: Αναφέρεται σε τεχνικές ή αλλιώς exploits που έχουν χρησιμοποιηθεί για την παράκαμψη και την κλιμάκωση δικαιωμάτων στις συσκευές Apple.



# Σύνοψη
Τα περισσότερα παραδοτέα υλοποιήθηκαν και εκτελέστηκαν στην ώρα τους, και βρίσκονται στα περιεχόμενα (και στο ιστορικό), με εξαίρεση των συμμετοχικών 1Β και 2Β και των τελευταίων ασκήσεων γραμμής εντολών.

Συγκεκριμένα, τα παραδοτέα 2 εώς 7 παραδόθηκαν εγκαίρως ενώ τα 8, 10 και 11 αργοπόρησα στην παράδοση τους καθώς δεν έβρισκα αξιόπιστες πηγές (για τα συμμετοχικά) και κάποια πακέτα από hci και λίστα warm-up, όπως το `glances`, `tmux` για παράδειγμα δεν μπορούσαν να εκτελέσω/καλέσω λόγω κάποιων dependencies πακέτων.



# Άσκηση γραμμής εντολών 1
Για πρώτη άσκηση γραμμής εντολών αποφάσισα να ασχοληθώ, πέρα από την εγκατάσταση του Arch Linux, με μία απλή άσκηση warm-up οπού καλώ το πακέτο `neofetch` (για να δούμε τις περαιτέρω πληροφορίες του λογισμικού και υλισμικού του συστήματος) και στην συνέχεια προβάλω τα directories και τα dot files με την βοήθεια της εντολή `ls`.

Πηγές: [neofetch](https://man.archlinux.org/man/neofetch.1) & [ls](https://man.archlinux.org/man/ls.1.en)
<br />
Σύνδεσμος: [asciicast - 1η άσκηση γραμμής εντολών](https://asciinema.org/a/QhhTkNJzDqPlHMEfdBZKy93fW)



# Άσκηση γραμμής εντολών 2
Για δεύτερη άσκηση γραμμής εντολών αποφάσισα να επιλέξω άλλη μία άσκηση από την λίστα warm-up, η οποία, όταν υλοποιηθεί σωστά, μπορεί να απεικονίσει μέσα στο τερματικό πληροφορίες για τον καιρό καθώς και άλλες επιπλέον πληροφορίες. Αυτό επιτυγχάνεται με την κλήση της εντολής `curl` η οποία έχει την δυνατότητα να μεταφέρει δεδομένα από διάφορες ιστοσελίδες/διακομιστές και την υπηρεσία `wttr.in` η οποία, με την σειρά της, δείχνει τον καιρό μίας επιλεγμένης τοποθεσίας.

Στην περίπτωση μου, εισάγω την πόλη από την οποία κατάγομαι και στην συνέχεια μία χώρα που θα ήθελα να επισκεφθώ στο κοντινό μέλλον.

Πηγές: [curl](https://curl.se/) & [wttr.in](https://github.com/chubin/wttr.in)
<br />
Σύνδεσμος: [asciicast - 2η άσκηση γραμμής εντολών](https://asciinema.org/a/81P6VR9UiV3mOMCzkLJ3aexsv)



# Συμμετοχικό περιεχόμενο 1Α
Για το συμμετοχικό περιεχόμενο 1Α, πήρα την απόφαση να ερευνήσω για την πρώτη συσκευή μουσικής αναπαραγωγής, το Sony Walkman TPS-L2, η οποία κατάφερε να συνδυάσει φορητότητα και προσιτή τιμή όλα σε ένα πακέτο για πρώτη φορά το 1979. Και στην συνέχεια, επέλεξα την πρώτη συσκευή μουσικής αναπαραγωγής της εταιρείας Apple, το iPod Mini, η οποία κατάφερε να αποσυρθεί από την παραγωγή και να αντικατασταθεί απο το διάδοχο του, το iPod Nano, ένα χρόνο αργότερα (2005) μετά από την κυκλοφορία του.

| Περιγραφή | Repository Link |
| --- | --- |
| Sony Walkman TPS-L2 | [sony-walkman.md](https://github.com/Xar-Me-Ison/_gallery/blob/2019214/sony-walkman.md) |
| iPod Mini | [ipod-mini.md](https://github.com/Xar-Me-Ison/_gallery/blob/2019214/ipod-mini.md) |

Πηγές: [Wikipedia - Walkman](https://en.wikipedia.org/wiki/Walkman) & [Sony Press Archive](https://www.sony.com/en/SonyInfo/News/Press_Archive/199907/99-059/) & [Wikipedia - iPod Mini](https://en.wikipedia.org/wiki/IPod_Mini) & [iPod Mini History](https://apple-history.com/ipod_mini)
<br />
Σύνδεσμοι .md: [sony-walkman.md](https://github.com/Xar-Me-Ison/_gallery/blob/2019214/sony-walkman.md) & [ipod-mini.md](https://github.com/Xar-Me-Ison/_gallery/blob/2019214/ipod-mini.md)
<br />
Σύνδεσμοι εικόνων: [sony-walkman.jpg](https://github.com/Xar-Me-Ison/images/blob/2019214/sony-walkman.jpg) & [sony-walkman-thumb.jpg](https://github.com/Xar-Me-Ison/images/blob/2019214/sony-walkman-thumb.jpg) & [ipod-mini.jpg](https://github.com/Xar-Me-Ison/images/blob/2019214/ipod-mini.jpg) & [ipod-mini-thumb.jpg](https://github.com/Xar-Me-Ison/images/blob/2019214/ipod-mini-thumb.jpg)



# Άσκηση γραμμής εντολών 3
Για τρίτη άσκηση γραμμής εντολών επέλεξα, και πάλι, μία άσκηση από την λίστα warm-up ώστε να εξοικειωθώ με το τερματικό περιβάλλον. Η συγκεκριμένη άσκηση ζητάει την ανάκτηση ειδήσεων μέσω της εντολής `curl` και την ιστοσελίδα `getnews.tech` η οποία μορφοποιεί τις ειδήσεις από διάφορες πηγές (κυρίως βασισμένες στις ΗΠΑ) για να εμφανίζονται στο τερματικό περιβάλλον.

Πηγές: [curl](https://curl.se/) & [getnews.tech](https://github.com/omgimanerd/getnews.tech)
<br />
Σύνδεσμος: [asciicast - 3η άσκηση γραμμής εντολών](https://asciinema.org/a/oaAnq7WYKWN2MmLlJtciE8WTl)


# Συμμετοχικό περιεχόμενο 2Α
Στο συμμετοχικό περιεχόμενο 2Α αποφάσισα να κατατάξω τις εικόνες που έβαλα σε ήδη υπάρχουσες θεματικές διαφάνειες και χρονολόγια. Συγκεκριμένα, το Sony Walkman TPS-L2 το ενέταξα στο set διαφανειών [technology](https://github.com/Xar-Me-Ison/site/blob/2019214/_slides/technology.md) και χρονολόγιο [multimedia](https://github.com/Xar-Me-Ison/site/blob/2019214/_timeline/multimedia.md) ένω για το iPod Mini το πρόσθεσα στο [technology](https://github.com/Xar-Me-Ison/site/blob/2019214/_slides/technology.md) και [apple](https://github.com/Xar-Me-Ison/site/blob/2019214/_timeline/apple.md) αντίστοιχα.

Slides: [Sony Walkman TPS-L2 & iPod Mini slides](https://github.com/Xar-Me-Ison/site/blob/2019214/_slides/technology.md)
<br />
Timeline: [Sony Walkman TPS-L2 timeline](https://github.com/Xar-Me-Ison/site/blob/2019214/_timeline/multimedia.md) & [iPod Mini timeline](https://github.com/Xar-Me-Ison/site/blob/2019214/_timeline/apple.md)



# Άσκηση γραμμής εντολών 4
Η τέταρτη άσκηση γραμμής εντολών που προτίμησα να κάνω, είναι από την λίστα hci όπου ζητάει να αναζητήσω, κατεβάσω το αγαπημένο τραγούδι του μήνα με το πακέτο `youtube-dl` και στην συνέχεια να παίξω το επιλεγμένο τραγούδι στο τερματικό με την βοήθεια του πακέτου `mpv`.


## Εγκατάσταση & χρήση των πακέτων
Η εγκατάσταση των πακέτων, μιας και υπάρχουν στο αποθετήριο του Arch, ήταν αρκετά εύκολη και έγινε με την χρήση της εντολής `pacman` ακολουθούμενη από τα δύο πακέτα μου μας αφορούν, `youtube-dl` & `mpv`.

Όσον αφορά την χρήση των πακέτων/εντολών, χρησιμοποίησα:
- `asciinema` & `giph`, για την βιντεοσκόπηση της επιφάνειας εργασίας μου
- `mkdir`, για την δημιουργία φακέλου στον οποίο εγκατέστησα το αρχείο mp3
- `cd`, για την αλλαγή του directory από φάκελο σε φάκελο
- `youtube-dl`, για την αναζήτηση και λήψη τραγουδιών
- `mpv`, για την αναπαραγωγή του αρχείου mp3 στο τερματικό

Και είχαν τα εξής flags/μορφή, αντίστοιχα:
- `asciinema rec -i 0.4`, όπου το `-i` είναι το όριο για τον περιορισμό καταγραφής αδράνειας στο τερματικό
- `giph -a youtube-dl-mpv.mp3`, όπου το `-a` είναι για την λήψη ήχου της επιφάνειας εργασίας
- `mkdir Music`, για την δημιουργία του φακέλου μουσικής
- `cd Music`, για την αλλαγή του directory σε αυτό της μουσικής
- `youtube-dl --extract-audio --audio-format mp3 <youtube-link>`, όπου το `--extract-audio` είναι για την εξαγωγή του ήχου, το `--audio-format mp3` είναι για την αποθήκευση σε μορφή mp3 και το `<youtube-link>` είναι ο σύνδεσμος του τραγουδιού/βίντεου που θέλουμε να κατεβάσουμε
- `mpv <filename>`, όπου το `<filename>` είναι το όνομα του τραγουδιού που θέλουμε να ακούσουμε


Πηγές: [asciinema](https://github.com/asciinema/asciinema) & [giph](https://github.com/phisch/giph) & [youtube-dl](https://github.com/ytdl-org/youtube-dl) & [youtube-dl flags](https://gist.github.com/umidjons/8a15ba3813039626553929458e3ad1fc) & [mpv](https://github.com/mpv-player/mpv)
<br />
Σύνδεσμοι: [YouTube - 4η άσκηση γραμμής εντολών](https://www.youtube.com/watch?v=ZuMI3D4SvFc)



# Συμμετοχικό περιεχόμενο 1Β
Για συμμετοχικό περιεχόμενο 1Β, αποφάσισα να κάνω μελέτη περίπτωσης του Video tape recorder. Συγκεκριμένα, επέλεξα την συσκευή Sony U-matic cassette, η οποία ήταν μια αναλογική μορφή βιντεοκασέτας εγγραφής που παρουσιάστηκε για πρώτη φορά από τη Sony.

| Περιγραφή | Repository Link |
| --- | --- |
| Sony U-matic | [sony-u-matic.md](https://github.com/Xar-Me-Ison/site/blob/2019214/_case-study/sony-u-matic.md) και [cs-sony-u-matic.md](https://github.com/Xar-Me-Ison/site/blob/2019214/_case-study/cs-sony-u-matic.md)|

Πηγές: [Wikipedia - Sony U-matic](https://en.wikipedia.org/wiki/U-matic) & [Wikipedia Image - Sony U-matic](https://commons.wikimedia.org/wiki/File:U-matic.jpg)
<br />
Σύνδεσμοι .md: [sony-u-matic.md](https://github.com/Xar-Me-Ison/site/blob/2019214/_case-study/sony-u-matic.md) & [cs-sony-u-matic.md](https://github.com/Xar-Me-Ison/site/blob/2019214/_case-study/cs-sony-u-matic.md)
<br />
Σύνδεσμοι εικόνων: [sony-u-matic.jpg](https://github.com/Xar-Me-Ison/images/blob/2019214/sony-u-matic.jpg) & [sony-u-matic-thumb.jpg](https://github.com/Xar-Me-Ison/images/blob/2019214/sony-u-matic-thumb.jpg)



# Άσκηση γραμμής εντολών 5
Για πέμπτη άσκηση γραμμής εντολών διάλεξα να κάνω το `surfraw` από την λίστα warm-up στην οποία ζητάει να δημιουργήσουμε ένα καινούργιο 'elvi'.

Στην ουσία, το πακέτο `surfraw` μας δίνει την δυνατότητα να αναζητήσουμε, διάφορες ιστοσελίδες και ιστοτόπους, στο διαδίκτυο μέσω του τερματικού περιβάλλοντος και την χρήση κάποιον πρόσθετων αναγνωριστικών λέξεων, γνωστές και ως elvi.


## Εγκατάσταση & χρήση των πακέτων
Η εγκατάσταση του πακέτου `surfraw` ήταν αρκετά εύκολη καθώς το πακέτο ήδη βρίσκεται στα προεπιλεγμένα repositories του Arch Linux, οπότε με την εντολή `pacman -S surfraw` έγινε απευθείας η εγκατάσταση.

Όσον αφορά την χρήση των πακέτων/εντολών, χρησιμοποίησα:
- `peek`, για την βιντεοσκόπηση της επιφάνειας εργασίας μου
- `mkdir`, για την δημιουργία φακέλου config για το αρχείο elvi
- `cp`, για την αντιγραφή ήδη υπάρχων elvi
- `nano`, για την επεξεργασία και αλλαγή του (αντιγραμένου) elvi αρχείου σε αυτό που θέλω
 
 <br />
 
 ![Peek_P2019214](https://user-images.githubusercontent.com/79524490/149962104-94780bf0-3584-4ecc-9118-991eebf84e63.gif)
 
 Το περιεχόμενο του elvi αρχείου που δημιούργησα είναι εδώ: [wsource.txt για download](https://github.com/Xar-Me-Ison/hci/files/7890039/wsource.txt) & [wsource.txt για προβολή (στο pastebin)](https://pastebin.com/bxV0cHgb)
  
  
  
# Συμμετοχικό περιεχόμενο 2Β
Όσον αφορά το για τελευταίο συμμετοχικό περιεχόμενο, αποφάσισα να ερευνήσω και να γράψω για τον Charles Ginsburg. Πρόκειται για ένα εφευρέτη, γνωστό και ως ο «πατέρας της βιντεοκασέτας», ο οποίος λέγεται ότι, με την δημιουργία της βιντεοκασέτας, έφερε την επανάσταση στην τηλεοπτική μετάδοση.

| Περιγραφή | Repository Link |
| --- | --- |
| Charles Ginsburg | [charles-ginsburg.md](https://github.com/Xar-Me-Ison/site/blob/2019214/_biography/charles-ginsburg.md) και [bio-ginsburg.md](https://github.com/Xar-Me-Ison/site/blob/2019214/_biography/bio-ginsburg.md) |

Πηγές: [Lemelson MIT - Charles Ginsburg](https://lemelson.mit.edu/resources/charles-ginsburg) & [ETHW - Charles P. Ginsburg](https://ethw.org/Charles_P._Ginsburg) & [ETHW Image - Charles P. Ginsburg](https://ethw.org/File:Charles_P._Ginsburg.jpg)
<br />
Σύνδεσμοι .md: [charles-ginsburg.md](https://github.com/Xar-Me-Ison/site/blob/2019214/_biography/charles-ginsburg.md) & [bio-ginsburg.md](https://github.com/Xar-Me-Ison/site/blob/2019214/_biography/bio-ginsburg.md)
<br />
Σύνδεσμος εικόνας: [charles-ginsburg.jpg](https://github.com/Xar-Me-Ison/images/blob/2019214/charles-ginsburg.jpg)



# Επίλογος - Αίτημα Ενσωμάτωσης
Φτάνοντας στο τέλος της εργασίας του εξαμήνου, πιστεύω, ότι κατάφερα πολλούς από τους στόχους που έθεσα στην αρχή του εξαμήνου και παραπάνω, βρήκα τον εαυτό μου πιο κοντά στην σκέψου του υπολογιστή-διαδραστικού συστήματος αυτού καθώς και του ανθρώπου και τις απαιτήσεις του.

Συγκεκριμένα, με τις ασκήσεις 'warm-up' κατάφερα να βλέπω τα χαρακτηριστικά του συστήματος μου, διαχειρίζομαι τα αρχεία μέσα από το τερματικό περιβάλλον, να κατεβάζω και να εγκαθιστώ πακέτα της αρεσκείας μου που με βοηθούν στην καθημερινή μου μέρα, όχι μόνο από τα προεπιλεγμένα repositories αλλά και από άλλα άλλων φίλων προγραμματιστών που πιθανώς, έχουν παρόμοιους σκοπούς με μένα.

Επιπλέον, από τα συμμετοχικά περιεχόμενα, ερεύνησα και έμαθα για άτομα, τιτάνες της τεχνολογίας, μεγαλύτερα από εμένα που με την ευφυία και επιρροή τους κατάφεραν να αλλάξουν τον τεχνολογικό κόσμο όπως τον ξέρουμε.


<br />

### Επιπρόσθετες Σημειώσεις
1. O λόγος που πιστεύω ότι το `jailbreak` είναι σχετικό με το συγκεκριμένο μάθημα και γενικότερα με τα Linux που ξέρουμε και αγαπάμε, είναι ότι και το `jailbreak` απαιτεί package manager (παρόμοιο με το `pacman` του Arch Linux) όπως το [Cydia](https://cydia.saurik.com/), [Sileo](https://getsileo.app/) ή [Zebra](https://getzbra.com/) για την εγκατάσταση πακέτων. Επιπρόσθετα, πολλά από τα πακέτα ('tweaks' που είπαμε και πριν) είναι βασισμένα και παρμένα από τα συστήματα Unix.




