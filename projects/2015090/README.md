## ΤΙΤΛΟΣ

ΙΟΝΙΟ ΠΑΝΕΠΙΣΤΗΜΙΟ

Μάθημα : Eπικοινωνία Ανθρώπου-Υπολογιστή

Επιβλέπων Καθηγητής : Χωριανόπουλος Κωνσταντίνος

Όνομα : Γκουντενούδη Βασιλική-Ολυμπία

ΑΜ : Π2015090

https://github.com/p15gkou/hci

## ΕΙΣΑΓΩΓΗ

Πραγματοποιήθηκαν 4 ασκήσεις σε linux terminal.Οι εργασίες έγιναν σε περιβάλλον linux Ubuntu 18.04.3 LTS x86_64, μέσω Virtualbox.Για όλες τις εργασίες στην αναφορά υπάρχουν τα αντίστοιχα link στο asciinema.Για την δημιουργία των εργασιών παρακολούθησα ορισμένα βίντεο στο youtube,τα οποία αναφέρονται σε βασικές ασκήσεις με linux τερματικό.

## ΑΝΑΛΥΣΗ ΕΡΓΑΛΕΙΩΝ

Αρχικά έγινε εγκατάσταση του Virtualbox που υποστηρίζει την ταυτόχρονη λειτουργία ενός ή περισσότερων λειτουργικών συστημάτων στον ίδιο υπολογιστή,καθώς το asciinema τρέχει σε linux.Στη συνέχεια δημιούργησα λογαριασμό στο asciinema,το πρόγραμμα που θα χρησιμοποιηθεί για την καταγραφή των βίντεο,αφού χωρίς λογαριασμό τα βίντεο διαγράφονται σε εφτά μέρες μετα την δημιουργία τους.
 
## ΜΕΘΟΔΟΣ ΚΑΙ ΤΕΧΝΙΚΕΣ

Άσκηση 1 : https://asciinema.org/a/ZXc69li58KCyTePQMU9WWnu4a

Set-up the main dependencies and demonstrate your base system

Στην πρώτη άσκηση για την μόνιμη αλλαγή του command prompt με τον αριθμό μητρώου πληκτρολόγησα την εντολή sudo gedit ~/.bashrc,στη συνέχεια τον κωδικό και άλλαξα στη γραμμή 60 το \u@\h με 2015090.Έπειτα εμφάνισα όλα τα αρχεία με την εντολή ls και τα κρυφά αρχεία με την εντολή ls -a.Για την εμφάνιση μόνο των κρυφών πληκτρολογήθηκε η εντολή ls -ad .* Τέλος έδειξα τις πληροφορίες hardware software με την εντολή neofetch.

Για τη συγκεκριμένη εργασία πήρα πληροφορίες από το εξής βίντεο : https://www.youtube.com/watch?v=bPKTRvlx5t8

Άσκηση 2 : https://asciinema.org/a/NtZJCyVnwecJYL4ochxPUzidh

Get familiar with basic commands, reading documentation and editing files

Επεξεργάστηκα ενα αρχείο κειμένου με το nano και το vim και το ανοιξα με το ranger.Πιο συγκεκριμένα έδειξα το manual του ranger με την εντολή man ranger και το manual του vim με την εντολή man vim.Δημιούργησα κατάλογο με ονομα valia με την εντολή mkdir valia και για να πάω σε συγκεκριμένο φάκελο πληκτρολόγησα cd foldervalia.Μέσα σε αυτόν με τον nano editor δημιουργησα το αρχείο exercise2.txt με την εντολή nano exercise2.txt.Επεξεργάστηκα το αρχείο με το vim με την εντολή vim exercise2.txt γράφοντας το όνομα μου.Τέλος αναζήτησα το αρχείο με την εντολή ranger.

Άσκηση 3 : https://asciinema.org/a/3JPigwQcXSHG0P9j2piXNLMuP

Become productive with a todo list

Χρησιμοποίησα το taskwarrior για να φτιάξω μια λίστα με 4 εργασίες και να τις επεξεργαστώ.Πρόσθεσα τις εργασίες Ι have to go to work,gym,homework,clean.Eπεξεργάστηκα την 1η εργασία σε διάρκεια,προτεραιότητα high και περιγραφή office με την εντολή task 1 modify +work due:P1D priority:H office.To ίδιο έκανα και με τις υπόλοιπες διαγράφοντας στο τέλος την 1 και 3.

Άσκηση 4 : https://asciinema.org/a/5qaW3ruBV4DeK1wHWXlpygRNK

Plan your time with a calendar

Εμφάνιση του manual με την εντολή man calcurse.Έπειτα δημιουργία και επεξεργασία των ραντεβού με την εντολή calcurse.Αφού επιλεγεί από το ημερολόγιο η κατάλληλη ημερομηνία πατώντας το a=add εισάγουμε την ώρα έναρξης και λήξης του event,στην συνέχεια περιγραφή πχ. meet mya friend Betty.Μπορούμε να εισάγουμε όσα appointment θέλουμε σε διαφορετικές ώρες και ημέρες,να τα επεξεργαστούμε και να τα διαγράψουμε.

Άσκηση 5 :https://asciinema.org/a/Us8GulZS4W3pnq7JLrs7DceEb

Organise the terminal window into multiple areas

Εγκατάσταση του tmux με την εντολή sudo apt install tmux.Για τη διαίρεση του τερματικού σε δύο παράθυρα χρησιμοποιήθηκε η εντολή
ctrl b +%.To δεξί παράθυρο χρησμιμοποιήθηκε για performance monitoring με την εντολή htop και το αριστερό για επεξεργασία αρχείου με τις εντολές που χρησιμοποίησα στην άσκηση 2.Δημιουργία φακέλου foldervalia2,επεξεργασία με την εντολή nano,αναζήτηση με την εντολή ranger,διαγραφή του περιχομένου.Tέλος για την έξοδο χρησιμοποιήθηκε η εντολη ctrl b +d.

*Προσπάθησα να δημιουργήσω και περισσότερα παράθυρα για να εισάγω και την εντολή calcurse και glances αλλά κράσαρε και δεν μπορούσα να κάνω εγγραφή βίντεο.

Για τη συγκεκριμένη εργασία πήρα πληροφορίες από το εξής βίντεο : https://www.youtube.com/watch?v=srakeCXCITw

Άσκηση 6 : https://asciinema.org/a/IOMTkcq8Bn04ukjWKIGthJRyD

Track your expenses

Εμφάνιση των αρχείων,επιλογή του αρχείου ledger το οποίο δημιούργησα νωρίτερα και μέσα στo budget.txt πρόσθεσα τα έξοδα και τις συναλλαγές.Με την εντολή nano budget.txt μπορώ να εμφανίσω τις συναλλαγές και να προσθέσω καινούργιες.Με την εντολή ledger -f budget.txt bal εμφανίζω το σύνολο των εξόδων,το εισοδημα,το αρχικό κεφάλαιο και τα περιουσιακά στοιχεία.Με την εντολή ledger -f budget.txt bal expenses εμφανίζω τα νέα έξοδα μετά την προσθήκη νέου εξόδου.Με την εντολή ledger -f budget.txt -M reg εμφανίζω το μηνιαίο σύνολο ,στη συνέχεια το μηνιαίο εισόδημα  με ledger -f budget.txt -M reg income και τέλος τα μηνιαία έξοδα για λαχανικά από 3/6/2020 με την εντολή
ledger -f budget.txt bal groceries --p "since 2020/06/03".

Για τη συγκεκριμένη εργασία πήρα πληροφορίες από το εξής βίντεο: https://www.youtube.com/watch?v=cjoCNRpLanY&t=1007s

Άσκηση 7 : https://asciinema.org/a/7owMR5W5xJjfOAmwKuP5PQ3gl change your default shell to zsh
           https://asciinema.org/a/lvwQBeOjrw2kgXAdIU0ET5fzn configure zsh
           
Try a different shell

Στο πρώτο βίντεο γίνεται εγκατάσταση του zsh με την εντολή sudo apt intall zsh και εμφανίζεται η έκδοση.Στη συνέχεια για την αλλαγή του shell από bash σε zsh εκτελείται η εντολή chsh -s $(which zsh).Έπειτα γίνεται restart ώστε να γίνει η αλλαγή γι΄αυτό και χώρισα την άσκηση σε δύο βίντεο.

Στο δεύτερο βίντεο με την εντολή sudo nano /etc/passwd δείχνω την αλλαγή του shell σε zsh shell.Στη συνέχεια πραγματοποιώ αλλαγή του θέματος.Με την εντολη sudo nano .zshrc επεξεργάζομαι το .zshrc και αλλάζω το θέμα σε "agnoster".Με την εντολή source ~/.zshrc εμφανίζω την αλλαγή του θέματος.Έπειτα αφού έχω εγκαταστήσει το plugin autosuggestions κάνοντας επικόλληση το εξής: git clone https://github.com/zsh-users/zsh-autosuggestions ${ZSH_CUSTOM:-~/.oh-my-zsh/custom}/plugins/zsh-autosuggestions,με την εντολή sudo nano .zshrc προσθέτω στα plugins zsh-autosuggestions.To ίδιο πραγματοποιώ και για το plugin syntax highlighting κάνοντας επικόλληση το εξής : git clone https://github.com/zsh-users/zsh-syntax-highlighting.git ${ZSH_CUSTOM:-~/.oh-my-zsh/custom}/plugins/zsh-syntax-highlighting και με την εντολή sudo nano.zshrc προσθέτω στα plugins zsh-syntax-highlighting.Tέλος με την εντολή  source ~/.zshrc εμφανίζονται οι αλλαγές.

Για τη συγκεκριμένη εργασία πήρα πληροφορίες από τα εξής βίντεο:

https://www.youtube.com/watch?v=BwFlp2b9MPU&t=412s

https://www.youtube.com/watch?v=4KBuPCeF9Gc&t=512s 

https://www.youtube.com/watch?v=CPTWbWXcVp8&t=1s

## ΣΥΜΠΕΡΑΣΜΑΤΑ

Mε τις παραπάνω ασκήσεις χρησιμοποίησα το λειτουργικό linux και τις βασικές εντολές του linux terminal.Εξοικιώθηκα με την εγκατάσταση των Ubuntu μέσω virtualBox,το περιβάλλον του τερματικού και κάποιες από τις βασικές δυνατότητες που προσφέρει.

## ΣΥΜΜΕΤΟΧΙΚΟ ΕΚΠΑΙΔΕΥΤΙΚΟ ΥΛΙΚΟ

Α. Δυο εικόνες με λεζάντα

https://github.com/p15gkou/gr/blob/2015090/_gallery/fingerprint-scanner.md

Σαρωτής δακτυλικών αποτυπωμάτων στο πίσω μέρος ενός smartphone.Mε αυτόν τον τρόπο επιτρέπεται το γρήγορο ξεκλείδωμα της συσκευής και μηδενίζει την πιθανότητα να πατήσει λάθος κωδικό ο χρήστης ή να επιτραπεί η είσοδος σε μη εξουσιοδοτημένους χρήστες .

https://github.com/p15gkou/gr/blob/2015090/_gallery/webex%20meetings.md

Aποτελούν μια προσπάθεια ανθρώπινης συνεργασίας από απόσταση μέσω υπολογιστή.Υπάρχει η δυνατότητα οπτικής επαφής των χρηστών,συνομιλίας μέσω του μικροφώνου αλλά και γραπτής,διαμοιρασμού περιεχομένου.

 Φάκελος images:

https://github.com/p15gkou/gr/blob/2015090/images/fingerprint_scanner-thumb.jpg
https://github.com/p15gkou/gr/blob/2015090/images/fingerprint_scanner.jpg
https://github.com/p15gkou/gr/blob/2015090/images/Webex_Meeting.jpg
https://github.com/p15gkou/gr/blob/2015090/images/Webex_Meeting-thumb.jpg

B. Διαδραστικά παραδείγματα 

Link στο εκτελέσιμο 

https://p15gkou.github.io/gr/

https://codepen.io/p15gkou/pen/zYrNJze

https://codepen.io/p15gkou/pen/gOPgBKd

Γ.Βιογραφίες

https://github.com/p15gkou/gr/blob/2015090/_biography/bio-William%20English.md
https://github.com/p15gkou/gr/blob/2015090/_biography/William%20English.md

https://github.com/p15gkou/gr/blob/2015090/_biography/bio-Hinton.md
https://github.com/p15gkou/gr/blob/2015090/_biography/Hinton.md
