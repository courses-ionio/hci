
# Μάθημα: Επικοινωνία Ανθρώπου Υπολογιστή HCI (DCS147)



### Ονοματεπώνυμο: Κοσμίδης Νέστορας
### Αριθμός Μητρώου: Π2018020
### Προφίλ στο github https://github.com/NestorasKosmidi

## Σύνοψη: 
Η παρούσα αναφορά έχει να κάνει με τα αποτελέσματα των εργασιών που υλοποιήθηκαν στα πλαίσια του μαθήματος Επικοινωνία Ανθρώπου Υπολογιστή (HCI). Στις ενότητες που ακολουθούν παρουσιάζονται: οι εργασίες που υλοποιήθηκαν, οι στόχοι τους επιτυχημένοι ή μη, τα εργαλεία που χρησιμοποιήθηκαν σε αυτές αλλά και για την καταγραφή τους στο terminal. Γενικότερος στόχος του μαθήματος αλλά και των εργασιών είναι η κατανόηση των όσων μπορεί να μας προσφέρει το GitHub και ιστοσελίδες παρόμοιες με αυτό, αλλά και να διευρύνουν οι μαθητές τις προγραμματιστικές τους δυνατότηες μέσω απλών εντολών σε κάποιο command line, κατά προτίμηση των Linux μιας και οι δυνατότητες τους προς τους προγραμματιστές είναι περισσότερες σε σύγκριση με άλλα λογισμικά.

## Σύντομη εισαγωγή : 
Η τελική αναφορά χωρίζεται σε Παραδοτέο Α και Παραδοτέο Β. Κάθε παραδοτέο πρέπει να εμπεριέχει εργασίες που υλοποιήθηκαν στο terminal καθώς και το το συμμετοχικό υλικό των παραδοτέων, το οποίο είναι η προσθήκη 5 νέων εικόνων με ελεύθερα πνευματικά δικαιώματα για το Παραδοτέο Α και μία βιογραφία (του Jef Raskin στην παρούσα εργασία) αντίστοιχα για το Παραδοτέο Β. Οι παρακάτω 4 ασκήσεις δημιουργήθηκαν σε terminal των Ubuntu με την χρήση VMware Workstation. Μετά τις απαραίτητες ενημερώσεις λογισμικού και εγκαταστάσεις γλωσσών όπως python. Κάθε εργασία σήμαινε νέες εντολές τις οποίες συμβουλεύτηκα από την σελίδα https://github.com/courses-ionio/dokey είτε από άλλες ιστοσελίδες αλλά και  μέσω βίντεο στο youtube. Πριν από κάθε καταγραφή, έχει γίνει λήψη αυτών των εντολών και εγκατάσταση τους μέσα από το terminal των ubuntu όπως θα δείτε και σε αρκετές από τις καταγραφές με προσθήκη σχολίων.

## Σύντομη ανάλυση σχετικών έργων και εργαλείων:
(Σημειώνεται ότι ο χρόνος σε κάποιες καταγραφές είναι περισσότερος καθώς δεν ήξερα την εντολή asciinema -i 0.5)
Στην πρώτη εργασία έγιναν δοκιμές εντολών όπως tldr, lesss, source, neofetch και cheat. Στην άσκηση ωστόσο έγινε χρήση της εντολής echo για σχολιασμό καθώς και της hostnamectl για την ανάδειξη του ID μου. Ακολούθησε επεξεργασία (με την εντολή nano) του αρχείου ~/.bashrc ώστε να τροποποιηθεί το όνομα του terminal όπως ζητήθηκε. Η αλλαγή αυτή έγινε με την χρήση PS1 εντός και στο τέλος του προαναφερόμενου αρχείου. Στην συνέχεια με εντολές ls-a και ls-l ανέδειξα τα αρχεία του στο λειτουργικό που χρησιμοποιώ καθώς και τα κρυμμένα αρχεία που υπάρχουν (dot files). Τέλος έγινε χρήση του screenfetch αντίστοιχο του neofetch για την ανάδειξη λογισμικού.  Στη δεύτερη άσκηση χρησιμοποιήθηκαν αρχικά εντολές της προηγούμενης καταγραφής (όπως ls-l, ls-a), ενώ στην συνέχεια δημιούργησα φακέλους και αρχεία, αντέγραψα κάποια από αυτά και τα διέγραψα με τις εντολές mkdir, touch, nano, rm, rmdir. Επίσης έγινε χρήση εντολών όπως cd, cd .. και φυσικά της εντολής ranger για την γρήγορη περιήγηση στα αρχεία μου. Στην τρίτη εργασία έγινε χρήση του calcurse και εμφάνιση μίας λίστας την οποία είχα πραγματοποιήσει. Μάλιστα για την καλύτερη εφαρμογή και επεξεργασία μίας todo list έγινε χρήστη του taskbook το οποίο μετέτρεψα σε συντομογραφία tb. Με το taskbook δημιουργήθηκε μία λίστα με διάφορα to do things τα οποία έθεσα σε εκτέλεση, εκκίνηση, ολοκλήρωση και διαγραφή. Στην τελευταία άσκηση έγινε χρήση του ΤMUX καθώς και εμφάνιση του τρόπου με τον οποίο το εγκατέστησα. Μέσα από το tmux δημιούργησα ένα session με παράθυρα κάθε ένα από τα οποία είχε μία διαφορετική λειτουργία. Ένα από αυτά περιείχε το αποτέλεσμα της εντολής htop (η οποία αφορά μία αναβαθμισμένη έκδοση της top), ενώ σε ένα από τα άλλα παράθυρα έγινε περιήγηση με το ranger και στο άλλο σχολιασμός και γενικές εντολές.

## Παραδοτέο 1

## Εργασία 1: "set-up the main dependencies and demonstrate your base system" 
	asciinema link: https://asciinema.org/a/289433
	
## **Συμμετοχικό περιεχόμενο**
- [Virtual-Reality]	https://github.com/NestorasKosmidis/gr/blob/gh-pages/_gallery/Virtual-Reality.md 
- [Virtual-Reality image]	https://github.com/NestorasKosmidis/gr/blob/gh-pages/images/Virtual%20Reality%20.jpg (1)
- [Virtual-Reality 160p]	https://github.com/NestorasKosmidis/gr/blob/gh-pages/images/Virtual%20Reality-thumb.jpg


- [Augment-Reality]	https://github.com/NestorasKosmidis/gr/blob/gh-pages/_gallery/Augmented-reality.md
- [Augment-Reality image] https://github.com/NestorasKosmidis/gr/blob/gh-pages/images/Augmented-reality.jpg (2)
- [Augment-Reality 160p]  https://github.com/NestorasKosmidis/gr/blob/gh-pages/images/Augmented-reality-thumb.jpg


- [DuckDuckGo]	https://github.com/NestorasKosmidis/gr/blob/gh-pages/_gallery/DuckDuckGo.md
- [DuckDuckGO image] https://github.com/NestorasKosmidis/gr/blob/gh-pages/images/DuckDuckGo.jpg (3)
- [DuckDuckGo 160p] https://github.com/NestorasKosmidis/gr/blob/gh-pages/images/DuckDuckGo-thumb.jpg


- [Internet of things]	https://github.com/NestorasKosmidis/gr/blob/gh-pages/_gallery/Internet-of-things
- [internet of things image] https://github.com/NestorasKosmidis/gr/blob/gh-pages/images/Internet%20of%20things.jpg (4)
- [internet of things 160p]	https://github.com/NestorasKosmidis/gr/blob/gh-pages/images/Internet%20of%20things-thumb.jpg


- [git] https://github.com/NestorasKosmidis/gr/blob/gh-pages/_gallery/git
- [git image] https://github.com/NestorasKosmidis/gr/blob/gh-pages/images/git.jpg (5)
- [git 160p] https://github.com/NestorasKosmidis/gr/blob/gh-pages/images/git-thumb.jpg


## *Παραδοτέο 2*

## Εργασία 2: "browse and view files on your system"
	asciinema link: https://asciinema.org/a/288131
	
## Εργασία 3: "create a list of todos, edit, delete, and check some of them" 
	asciinema link: https://asciinema.org/a/284573

## Εργασία 13: "use one window to search-edit local files or browse the web and another window for performance monitoring" 
	asciinema link: https://asciinema.org/a/293012
	
## Συμμετοχικό υλικό:
Η βιογραφία του Jef Raskin του ιδρυτή του Macintosh
	_biography/bio-Raskin.md
	
### [Jef Raskin](https://github.com/NestorasKosmidis/gr/blob/gh-pages/_biography/bio-Raskin.md)

## Συμπεράσματα:
Αποτέλεσμα της εργασίας του μαθήματος Επικοινωνίας Ανθρώπου Υπολογιστή είναι η κατανόηση της λειτουργίας του GitHub η οποία αρχικά είχε φανεί δύσκολη και μπερδεμένη, καθώς και ο εμπλουτισμός γνώσεων και προγραμματιστικού περιεχομένου μέσω των ασκήσεων στο τερματικό των ubuntu. Αρνητικό κομμάτι ήταν σίγουρα οι οδηγίες για τις εργασίες του μαθήματος και του τρόπου παράδοσης τους. Ωστόσο, μέσα από τα παραδοτέα και το συμμετοχικό τους υλικό πιστεύω ότι οι μαθητές βγήκαν εν τέλη κερδισμένοι αφού χωρίς ξεκάθαρη απάντηση από τις οδηγίες αναγκάστηκαν να ερευνήσουν περισσότερο για τα ζητούμενα, επομένως να αποκτήσουν ιστορικές γνώσεις αλλά και προγραμματιστική εμπειρία αφού το terminal και το GitHub είναι βασικά για έναν αρχάριο αλλά και επαγγελματία προγραμματιστή.
	
## Παραπομπές
https://el.wikipedia.org/wiki/%CE%95%CE%B9%CE%BA%CE%BF%CE%BD%CE%B9%CE%BA%CE%AE_%CF%80%CF%81%CE%B1%CE%B3%CE%BC%CE%B1%CF%84%CE%B9%CE%BA%CF%8C%CF%84%CE%B7%CF%84%CE%B1

https://el.wikipedia.org/wiki/%CE%95%CF%80%CE%B1%CF%85%CE%BE%CE%B7%CE%BC%CE%AD%CE%BD%CE%B7_%CF%80%CF%81%CE%B1%CE%B3%CE%BC%CE%B1%CF%84%CE%B9%CE%BA%CF%8C%CF%84%CE%B7%CF%84%CE%B1

https://el.wikipedia.org/wiki/DuckDuckGo

https://el.wikipedia.org/wiki/%CE%94%CE%B9%CE%B1%CE%B4%CE%AF%CE%BA%CF%84%CF%85%CE%BF_%CF%84%CF%89%CE%BD_%CF%80%CF%81%CE%B1%CE%B3%CE%BC%CE%AC%CF%84%CF%89%CE%BD

https://el.wikipedia.org/wiki/Git_(%CE%BB%CE%BF%CE%B3%CE%B9%CF%83%CE%BC%CE%B9%CE%BA%CF%8C)#%CE%99%CF%83%CF%84%CE%BF%CF%81%CE%B9%CE%BA%CF%8C

https://en.wikipedia.org/wiki/Jef_Raskin
