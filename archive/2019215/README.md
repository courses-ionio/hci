# Μάθημα: Επικοινωνία Ανθρώπου Υπολογιστή

### Ονοματεπώνυμο: ΝΤΑΡΛΑΓΙΑΝΝΗΣ ΔΗΜΗΤΡΙΟΣ
### Αριθμός Μητρώου: Π2019215
### GitHub Profile: [p19ntar](https://github.com/p19ntar)
### Netlify Site: [2019215.netlify.app](https://2019215.netlify.app/) 
### Site Repository [p19ntar/Site](https://github.com/p19ntar/site.git)
<br />

## Πίνακας παραδοτέων

| Εβδομάδα* | Παραδοτέο |
| --- | --- |
| 1 | [Εισαγωγή](#εισαγωγη) |
| 2 | [Άσκηση γραμμής εντολών: Neofetch & Journalctl](#2ο-παραδοτέο---neofetch-και-journalctl) |
| 3 | [Άσκηση γραμμής εντολών: Googler](#3ο-παραδοτέο---googler) |
| 4 | [Συμμετοχικό περιεχόμενο 1A](#4ο-παραδοτέο---συμμετοχικό-περιεχόμενο-1α) |
| 5 | [Άσκηση γραμμής εντολών: WTTR](#5ο-παραδοτέο---wttr) |
| 6 | [Συμμετοχικό περιεχόμενο 2A](#6ο-παραδοτέο---συμμετοχικό-περιεχόμενο-2α) |
| 7 | [Άσκηση γραμμής εντολών: PacVim](#7ο-παραδοτέο---pacvim) |
| 8 | [Συμμετοχικό περιεχόμενο 1B](#8ο-παραδοτέο---συμμετοχικό-περιεχόμενο-1β) |
| 9 | [Άσκηση γραμμής εντολών HCI: Download mp3](#9ο-παραδοτέο---hci-download-mp3) |
| 10 | [Συμμετοχικό περιεχόμενο 2B](#10ο-παραδοτέο---συμμετοχικό-περιεχόμενο-2β) |
| 11 | [Άσκηση γραμμής εντολών HCI: Tmux & Glances](#11ο-παραδοτέο---hci-tmux-glances) |
| 12 | [Επίλογος](#12ο-παραδοτέο---επίλογος) |

# ΕΙΣΑΓΩΓΗ

## Προσδοκίες Μαθήματος
Βλέποντας με μία πρώτη ματιά τα περιεχόμενα του μαθήματος βλέπω πως θα διεξαχθεί μέσω του github, το οποίο είναι κάτι πρωτόγνωρο για μένα, οπότε περιμένω να με δυσκολέψει αρχικά, αλλά σπό την άλλη θα μου προσφέρει εμπειρία πάνω στην εφαρμογή αυτή. Επίσης, υπάρχουν ασκήσεις γραμμής εντολών οι οποίες θα με βοηθήσουν να εξοικειωθώ με το terminal, το οποίο είναι ένα πολύ χρήσιμο και ενδιαφέρον εργαλείο για κάποιον που ξέρει να το χρησιμοποιεί και θα χρειαστεί να κάνω για πρώτη φορά καθαρή εγκατάσταση linux λειτουργικού. Τέλος περιμένω να διδαχθώ το ρόλο της αλληλεπίδρασης του ανθρώπου με τον υπολογιστή και πως μπορεί αυτή να τον επιρεάση αλλά και πόσο σημαντική είναι.

## Εγκατάσταση ArchLinux
Η αλήθεια είναι πως στην αρχή όταν ξεκίνησα τη διαδικασία της εγκατάστασης των ArchLinux η διαδικασία μου φάνηκε αρκέτα περίπλοκη κάθως είναι η πρώτη φορά που κάνω manual installation λειτουργικού. Αρχικά, αποφάσισα να κάνω την εγκατάσταση σε ένα usb stick καθώς δεν ήθελα να ρισκάρω και να διαλέξω την επιλογή του dual boot μην τυχόν και κάνω κάποιο μη αναστρέψιμο λάθος. Έπειτα, διάβασα το installation guide στο archwiki και με την βοήθεια ενός πολύ χρήσιμου βίντεο στο youtube το οποίο αφορά την εγκατάσταση των arch σε usb stick ([Youtube video](https://www.youtube.com/watch?v=yaThYGr37DI&t=1237s)) ξεκίνησα την εγκατάσταση του λειτουργικού. Χρησιμοποίησα δύο usb sticks τα οποία τα έκανα και τα δύο bootable, στο ένα εγκατέστησα το ISO των ArchLinux και στο άλλο έκανα την εγκατάσταση. Δεδομένου ότι τα usb stick έχουν μειωμένο περιθώριο εγγραφών σε σύγκριση με ένα σκληρό δίσκο ή έναν ssd έκανα μία μετατροπή ώστε το journal να γράφεται στη μνήμη RAM. Επίσης, εγκατέστησα drivers για όλες τις κάρτες γραφικών (Nvidia, AMD, Intel κλπ) έτσι ώστε αφού είναι σε usb να μπορώ να το χρησιμοποιώ σε διάφορα μηχανήματα χωρίς πρόβλημα.

<br />

# 2ο Παραδοτέο - Neofetch και Journalctl

Για το δεύτερο παραδοτέο έτρεξα το neofetch στο terminal του archlinux, ώστε να εμφανίσει τα χαρακτηριστικά του υπολογιστή μου όπως θα δείτε και στο asciinema.
#### Asciinema link: https://asciinema.org/a/448858
<a href="https://asciinema.org/a/448858" target="_blank"><img src="https://asciinema.org/a/448858.svg" /></a>
<br />

Επίσης, έτρεξα την εντολή journalctl -b η οποία μας εμφανίζει στο τερματικό το systemd, kernal και τα journal logs. Προσωπικά, έκανα την εγκατάσταση του archlinux σε usb stick και επειδή ήθελα να μειώσωσω τις εγγραφές σε αυτό λόγω του μειωμένου χρόνου ζωής σε σχέση με ένα σκληρό δίσκο, αποφάσισα να αποθηκεύονται τα logs στη μνήμη RAΜ. Αυτό το υλοποίησα φτιάχνοτας αρχικά ένα directory και ένα configuration file όπου έθεσα το storage=volatile και έθεσα το runtimemaxuse=30M όπως προτείνει και το archwiki.
#### Asciinema link: https://asciinema.org/a/448906
<a href="https://asciinema.org/a/448906" target="_blank"><img src="https://asciinema.org/a/448906.svg" /></a>
<br />

# 3ο Παραδοτέο - Googler

Στο τρίτο παραδοτέο διάλεξα να εγκαταστήσω το googler το οποίο σου δίνει τη δυνατότητα να αναζητείς κάτι στο ίντερνετ μέσω του τερματικού. Το βρήκα αρκετά χρήσιμο καθώς είναι αρκετά γρήγορο αφού δεν αναγκάζεσαι να ανοίξεις κάποιο browser αφού το κάνει μόνο του. Αποθετήριο googler: https://github.com/jarun/googler
#### Asciinema link: https://asciinema.org/a/448904
<a href="https://asciinema.org/a/448904" target="_blank"><img src="https://asciinema.org/a/448904.svg" /></a>
<br />

# 4ο Παραδοτέο - Συμμετοχικό περιεχόμενο 1Α

Ως λάτρης των βιντεοπαιχνιδιών, για το Α συμμετοχικό περιεχόμενο του τέταρτου παραδοτέου επέλεξα να ασχοληθώ με δύο κονσόλες βιντεοπαιχνιδιών το Atari 2600 και το Playstation 1. Το Atari 2600 μου κέντρησε το ενδιαφέρον διότι την εποχή που κυκλοφόρησε έκανε μεγάλη επιτυχία, σε τέτοιο επίπεδο μάλιστα που το όνομα Atari συνδυάστηκε με τις κονσόλες βιντεοπαιχνιδιών γενικότερα. Σχεδιάστηκε από την εταιρία Atari και κυκλοφόρησε το Σεπτέμβριο του 1997. Ακόμα, ερχόταν με δύο παιχνίδια, το Combat και το αργότερα το Pac-Man σε μορφή κασέτας. Τέλος, παρόλο την αρχική επιτυχία, δεν κράτησε για πολλά χρόνια και δεν έφταιγε η κονσόλα, αλλά τα όχι και τόσο καλά παιχνίδια που φτιάξαν γιαυτό. Το playstation 1 τώρα, το διάλεξα διότι ήταν η πρώτη κονσόλα που έπιασα στα χέρια μου, μία κονσόλα που δημιουργήθηκε από την Sony και κυκλοφόρησε πρώτα το 1994 στην Ιαπωνία και μετά από ένα χρόνο στην Αμερική, Ευρώπη και Αυστραλία. Η επιτυχία της κονσόλας ήταν πολύ μεγάλη που κυκλοφόρησαν πολλές εκδόσεις οι οποίες πουλούσαν σε πάρα πολύ μεγάλους αριθμούς. Η επιτυχία του βασίστηκε στα πολύ όμορφα γραφικά που πρόσφερε για την εποχή, για τα πολυάριθμα αξεσουάρ αλλά και για την τεράστια γκάμα παιχνιδιών που πρόσφερε (7,918).

| Περιγραφή | Repository Link | Netlify Link |
| --- | --- | --- |
| Gallery Atari 2600 | [atari 2600.md](https://github.com/p19ntar/_gallery/blob/master/atari-2600.md) | [Atari 2600 Summary](https://2019215.netlify.app//gallery/atari-2600/)
| Images Atari 2600 | [Full Quality](https://github.com/p19ntar/images/blob/master/atari-2600.jpg) + [Thumbnail](https://github.com/p19ntar/images/blob/master/atari-2600-thumb.jpg) |  |
| Gallery Playstation 1 | [playstation 1.md](https://github.com/p19ntar/_gallery/blob/master/playstation1.md) | [Playstation 1 Summary](https://2019215.netlify.app//gallery/playstation1/)
| Images Playstation 1 | [Full Quality](https://github.com/p19ntar/images/blob/master/playstation1.jpg) + [Thumbnail](https://github.com/p19ntar/images/blob/master/playstation1-thumb.jpg)
<br />

# 5ο Παραδοτέο - wttr

Στο 5ο παραδοτέο, αποφάσισα να ελέγξω το καιρό στη πόλη μου την Κατερίνη και στο αγαπημένο μου Άμστερνταμ που θα ήθελα να ξαναεπισκεφτώ κάποια στιγμή στο μέλλον, χρησιμοποιόντας το wttr στο τερματικό. Αρχικά, όπως θα δείτε και στο asciinema εκτελώντας την εντολή $curl wttr.in/Katerini εμφανίζει τα προγνωστικά του καιρού για πρωί, μεσημέρι, απόγευμα και βράδυ για τρεις ημέρες και αντίστοιχα για το Άμστερνταμ. Ακόμα, χρησιμοποιόντας την εντολή $curl v2.wttr.in/Katerini εμφανίζονται στο τερματικό ακόμα πιο αναλυτικές πληροφορίες καιρού. Τέλος, με την εντολή $ diff -Naur <(curl -s http://wttr.in/Katerini) <(curl -s http://wttr.in/Amsterdam) γίνεται σύγκριση του καιρού ανάμεσα στις δύο πόλεις. Γενικά η χρήση του wttr ήταν πολύ απλή και δεν αντιμετώπισα κάποιο πρόβλημα.

#### Asciinema link: https://asciinema.org/a/448882
<a href="https://asciinema.org/a/448882" target="_blank"><img src="https://asciinema.org/a/448882.svg" /></a>
<br />

# 6ο Παραδοτέο - Συμμετοχικό περιεχόμενο 2Α

Παρακάτω παραθέτω τα Slides και το Timeline που έφτιαξα για τις κονσόλες βιντεοπαιχνιδιών playstation 1 και atari 2600. Υπάρχουν και τα αντίστοιχα λινκς του αποθετηρίου αλλά και του netlify. Όπως το βλέπω ότι έχω προσθέσει εμφανίζεται κανονικά και στο netlify οπότε πιστεύω δεν υπαράρχει κάποιο σφάλμα. Επίσης πρόσθεσα τις φωτογραφίες στις ήδη υπάρχουσες διαφάνειες Βιντεοπαιχνιδιών καθώς πιστεύω πως ταιριάζει.

| Περιγραφή | Repository Link | Netlify Link |
| --- | --- | --- |
| Slides | [Διαφάνειες Κονσολών Βιντεοπαιχνιδιών(Slides)](https://github.com/p19ntar/site/blob/master/_slides/videogamesconsole.md) | [Διαφάνειες Κονσολών Βιντεοπαιχνιδιών(Slides)](https://2019215.netlify.app//slides/videogamesconsole/)
| Timeline | [Χρονολόγιο Κονσολών Βιντεοπαιχνιδιών (Timeline)](https://github.com/p19ntar/site/blob/master/_timeline/videogamesconsole.md) | [Χρονολόγιο Κονσολών Βιντεοπαιχνιδιών (Timeline)](https://2019215.netlify.app//timeline/videogamesconsole/)
<br />

# 7ο Παραδοτέο - PacVim

Στο 7ο παραδοτέο εγκατέστησα και έτρεξα το παιχνίδι PacVim, το οποίο σου μαθαίνει διάφορα vim commands. Tο αποθετήριο του παιχνιδιού είναι το εξής: https://github.com/jmoon018/PacVim.git το οποίο και έκανα git clone. Επίσης, θα ήθελα να αναφέρω πως μπορείς να διαλέξεις το επίπεδο που θες να παίξεις και πως ο τρόπος παιχνιδιού είναι αρκετά δύσκολος στην αρχή μέχρι να συνηθίσεις τι κάνουν τα κουμπιά, καθώς είναι αρκετά διαφορετικά απ΄ ότι είναι στα παιχνίδια συνήθως.

| key | what it does |
| --- | --- |
| q   | quit the game |
| h   | move left |
| j   | move down |
| k   | move up |
| l   | move right |
| w   | move forward to next word beginning |
| W   | move forward to next WORD beginning |
| e   | move forward to next word ending |
| E   | move forward to next WORD ending |
| b   | move backward to next word beginning |
| B   | move backward to next WORD beginning |
| $   | move to the end of the line |
| 0   | move to the beginning of the line |
| gg/1G | move to the beginning of the first line |
| *number*G | move to the beginning of the line given by *number* |
| G   | move to the beginning of the last line |
| ^   | move to the first word at the current line |
| &   | 1337 cheatz (beat current level)

#### Asciinema link: https://asciinema.org/a/448902
<a href="https://asciinema.org/a/448902" target="_blank"><img src="https://asciinema.org/a/448902.svg" /></a>
<br />

# 8ο Παραδοτέο - Συμμετοχικό περιεχόμενο 1Β

Στο 8ο παραδοτέο το οποίο ηταν το συμμετοχικό περιεχόμενο 1Β έφτιαξα μία καινούργια μελέτη περίπτωσης η οποία αφορά εξαρτήματα κονσολών βιντεοπαιχνδιών. Παρακάτω παραθέτω τα ανάλογα link του αποθετηρίου μου, αλλά και του netlify.

| Περιγραφή | Repository Link | Netlify Link |
| --- | --- | --- |
| case-study | [Μελέτη περίπτωσης εξαρτημάτων κονσολών βιντεοπαιχνιδιών](https://github.com/p19ntar/site/blob/master/_case-study/videogame-consoles-accessories.md) | [Μελέτη περίπτωσης εξαρτημάτων κονσολών βιντεοπαιχνιδιών](https://2019215.netlify.app//case-study/videogame-consoles-accessories/)
<br />

# 9ο Παραδοτέο - HCI download mp3

Για το 9ο παραδοτέο που απαιτούσε άσκηση γραμμής εντολών επέλεξα το download mp3 assignment απο τις HCI ασκήσεις.
Αρχικά εγκατέστησα το youtube-dl με το οποίο κατέβασα ένα τραγούδι απο το youtube στον υπολογιστή.
#### Asciinema link: https://asciinema.org/a/448894
<a href="https://asciinema.org/a/448894" target="_blank"><img src="https://asciinema.org/a/448894.svg" /></a>

και έπειτα εγκατέστησα το mpv το οποίο αναπαράγει τραγούδια από το τερματικό και έτσι έπαιξα το τραγούδι που κατέβασα προηγουμένος
#### Asciinema link: https://asciinema.org/a/448899
<a href="https://asciinema.org/a/448899" target="_blank"><img src="https://asciinema.org/a/448899.svg" /></a>
<br />

# 10ο Παραδοτέο - Συμμετοχικό περιεχόμενο 2Β

Στο 10ο παραδοτέο το οποίο ηταν το συμμετοχικό περιεχόμενο 2Β έφτιαξα μία καινούργια βιογραφία η οποία αφορά τον Nolan Bushnell. Παρακάτω παραθέτω τα ανάλογα link του αποθετηρίου μου, αλλά και του netlify.

| Περιγραφή | Repository Link | Netlify Link |
| --- | --- | --- |
| Biography | [Βιογραφία του Nolan Bushnell](https://github.com/p19ntar/site/blob/master/_biography/nolan-bushnell.md) | [Βιογραφία του Nolan Bushnell](https://2019215.netlify.app//biography/nolan-bushnell/)
<br />

# 11ο Παραδοτέο - HCI tmux, glances

Για το 11ο παραδοτέο υλοποίησα μία άσκηση γραμμής εντολών από την κατηγορία HCI, στην άσκηση αυτή εγκατέστησα το tmux και το glances. Αρχικά, χρησιμοποιώντας το tmux χώρισα τον τερματικό στη μέση, στο ένα παράθυρο έτρεξα το glances το οποίο δείχνει τις επιδόσεις του υπολογιστή σε πραγματική ώρα και στο άλλο παράθυρο ταυτόχρονα έτρεξα ένα τραγούδι που είχα κατεβάσει.

#### Asciinema link: https://asciinema.org/a/456402
<a href="https://asciinema.org/a/456402" target="_blank"><img src="https://asciinema.org/a/456402.svg" /></a>
<br />

# 12ο Παραδοτέο - Επίλογος

Τελειώνοντας την εργασία πιστεύω πως έχω κάνει μια αξιόλογη προσπάθεια καθώς συμπλήρωσα όλα τα παραδοτέα. Από την υλοποίηση αυτής της εργασίας έμαθα να χρησιμοποιώ πολύ καλά το github και να εξοικειωθώ με το terminal μέσα από τις εργασίες γραμμών εντολών καθώς μέχρι τώρα χρησιμοποιούσα κυρίως windows. Επίσης, έκανα για πρώτη φόρα καθαρή εγκατάσταση λογισμικού (archlinux) κάτι το οποίο στην αρχή μου φαινόταν απίστευτα δύσκολο καθώς δεν το είχα ξανακάνει, παρόλα αυτά με αρκετό ψάξιμο και προσπάθειες κατάφερα να το εγκαταστήσω και να το προσαρμόσω στις προτιμήσεις μου. Κλείνοντας, έμαθα αρκετά καινούργια πράγματα τα οποία πιστεύω θα μου φανούν χρήσιμα στο άμεσο μέλλον και ανυπομονώ να τα χρησιμοποιήσω και επίσης έμαθα πολλά για το πως εξελίχθηκαν οι τρόποι διάδρασης μέσα από τα βίντεο quiz και το βιβλίο.