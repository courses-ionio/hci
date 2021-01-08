**Επικοινωνία Ανθρώπου-Υπολογιστή**

**Θεόδωρος Κοντός**            

**Α.Μ.: Π2019193**

[Netlify](https://hci-p2019193.netlify.app/)
| Εβδομάδα* | Παραδοτέο | 
| --- | --- | 
| 1 | [Εισαγωγή](#Εισαγωγή) | 
| 2 | [Άσκηση Προγραμματισμού Form Validation](#Άσκηση-Προγραμματισμού-Form-Validation) |  
| 3 | [Άσκηση γραμμής εντολών Set-up the main dependencies and demonstrate your base system](#Άσκηση-γραμμής-εντολών-εισαγωγή-στο-bash)| 
| 4 | [Άσκηση προγραμματισμού Sortable List](#Άσκηση-Προγραμματισμού-Sortable-List) | 
| 5 | [Άσκηση γραμμής εντολών Download mp3](#Άσκηση-γραμμής-εντολών-Download-mp3) | 
| 6 | [Συμμετοχικό περιεχόμενο A1 A2](#Συμμετοχικό-περιεχόμενο-Α1-Α2) | 
| 7 | [Άσκηση προγραμματισμού Mouse Form](#Άσκηση-Προγραμματισμού-Mouse-form) | 
| 8 | [Άσκηση γραμμής εντολών Organize notes with emacs](#Άσκηση-γραμμής-εντολών-Οrganize-Εmacs) | 
| 9 | [Άσκηση προγραμματισμού Button](#Άσκηση-Προγραμματισμού-Button) | 
| 10 | [Άσκηση γραμμής εντολών text-editor-and plug-ins for code highlighting and autocompletion](#Άσκηση-γραμμής-εντολών-Text-Editor-Vim) | 
| 11 | [Συμμετοχικό περιεχόμενο Β1 Β2](#Συμμετοχικό-περιεχόμενο-Β1-Β2) | 
| 12 | [Τελική αναφορά](#Τελική-Αναφορά) | 

# Εισαγωγή
**Περιγραφή των αναγκών και των στόχων μας για το μάθημα "Επικοινωνία Ανθρώπου-Υπολογιστή"**

Αρχικά, κρίνεται επιτακτική ανάγκη να κατανοηθεί η λειτουργία του Github κάτι που είναι αρκετά χρήσιμο τόσο για το μέλλον, όσο και για την επιτυχή εξέταση του μαθήματος.
Είναι σημαντικό να μάθουμε την λειτουργία του Github από το Γ' εξάμηνο.

Ένας ακόμη στόχος είναι να εξοικιωθούμε με command prompt και να κατανοήσουμε τις ασκήσεις γραμμής εντολών. Ως μελλοντικοί προγραμματιστές, αυτό το κομμάτι θα είναι αρκετά χρήσιμο, αφού όπως αναφέρεται και στις σημειώσεις του μαθήματος είναι ο πλέον αποδοτικός τρόπος διάδρασης. Η εξοικείωση με λειτουργικά linux είναι ένα αρκετά ενδιαφέρον κομμάτι, τόσο σε αυτό το διάστημα της φοιτησής μας όσο και γενικότερα στο μέλλον. 

Φυσικά, είναι αναγκαίο το θεωρητικό κομμάτι του μαθήματος να κατανοηθεί πλήρως, όχι όμως στείρα, δηλαδή θα πρέπει να υπάρχει μία ενεργή συμμετοχή, τόσο στα μαθήματα όσο και μέσω του βιβλίου που θα μας δωθεί. Μάλιστα, αποκτά ενδιαφέρον ότι μας δίνεται η ευκαιρία να συμμετέχουμε στην παραγωγή επιπλέον υλικού για το βιβλίο και την επέκτασή του.

Τέλος, σημαντική είναι η ολοκήρωση ασκήσεων προγραμματισμού, αφού θα χρειαστεί να κατανοήσουμε και κάποιες γλώσσες που δεν έχουμε χρησιμοποιήσει μέχρι στιγμής. 

# Άσκηση Προγραμματισμού Form Validation
[Netlify Form Validation](https://hci-p2019193.netlify.app/remix/form-validation/)

[Codepen](https://codepen.io/2019193/pen/QWEEoxd)

Ολοκλήρωση της άσκησης Form Validation, όπου ζητείται να επεκταθεί ο κώδικας για να ελέγχει σφάλματα εισόδου του χρήστη για email, credit card και ελληνικό τηλεφωνικό νούμερο. Οι αλλαγές ήταν απαραίτητες στον κώδικα html, ενώ ήταν προαιρετικές στον κώδικα css. Έκανα επίσης κάποιες επιπλέον επεκτάσεις.  

Εφόσον είχαμε έτοιμο τον κώδικα για τον έλεγχο σφάλματος για τηλέφωνο δεν χρειάστηκαν ιδιαίτερες αλλαγές για το ελληνικό τηλέφωνο, μόνο η τοποθέτηση του +30, ακολουθούμενου από ένα 2 (που υπάρχει σε κάθε σταθερό τηλέφωνο της χώρας) και στην συνέχεια ο υπόλοιπος αριθμός (που εξαρτάται από την περιοχή). Για το email, ας υποθέσουμε πως ο χρήστης είναι φοιτητής ή διδάσκων του πανεπιστημίου. Επομένως το email του θα πρέπει να έχει την κατάληξη @ionio.gr. Για την credit card, χρειάστηκε να τοποθετηθούν 3 διαφορετικοί αριθμοί από τον χρήστη, ο αριθμός της κάρτας, ο τριψήφιος αριθμός ασφαλείας και η ημερομηνία λήξης της(τοποθετήθηκε ημερολόγιο). Ορισμένες εντολές της html επειδή ήταν άγνωστες, αναζητήθηκαν στο διαδίκτυο. 

![form_validation](https://i.imgur.com/BK2Djj4.jpg)

Βιβλιογραφία: [HTML](https://www.w3schools.com/html/html_intro.asp) [CSS](https://www.w3schools.com/css/css_intro.asp)

# Άσκηση γραμμής εντολών εισαγωγή στο bash
Η πρώτη άσκηση γραμμής εντολών είναι χωρισμένη σε 2 μέρη.

[1ο μέρος](https://asciinema.org/a/382940)

Έκανα μία μικρή αλλαγή στο command prompt μέσω του bash mode. Χρειάστηκε να γίνει μία μελέτη στο διαδίκτυο ([εδώ](https://www.cyberciti.biz/tips/howto-linux-unix-bash-shell-setup-prompt.html))

[![asciicast](https://asciinema.org/a/382940.svg)](https://asciinema.org/a/382940)

[2ο μέρος](https://asciinema.org/a/382948)

Κατά σειρά κάνω list τα dot files, εμφανίζω το αρχείο config, ενώ για να εμφανιστούν οι πληροφορίες του συστήματός μου χρειάστηκε πάλι μελέτη ([εδώ](https://flaviocopes.com/linux-command-uname/))

[![asciicast](https://asciinema.org/a/382948.svg)](https://asciinema.org/a/382948)

# Άσκηση Προγραμματισμού Sortable List
[Netlify Sortable List](https://hci-p2019193.netlify.app/remix/sortable-list/)

[Codepen](https://codepen.io/2019193/pen/mdELzYm)

Ολοκλήρωση της άσκησης Sortable List, όπου ζητείται να αλλάξουν το χρώμα, το ύψος και οι αποστάσεις μεταξύ των στοιχείων της λίστας που δίνεται. 
Οι μόνες αλλαγές που χρειαζόνταν ήταν στην γλώσσα CSS. Άλλαξα τόσο το μήκος και το πλάτος των αντικειμένων, όσο και το χρώμα τους, αλλά και το χρώμα της γραμματοσειράς. Επίσης, μεγάλωσα την απόσταση των αντικειμένων. Εδώ δεν χρειάστηκε συμβουλή κάποιας επιπλέον βιβλιογραφίας.

![sortable_list](https://i.imgur.com/rv5zZIV.jpg)

# Άσκηση γραμμής εντολών Download mp3
[Link του asciicast](https://asciinema.org/a/382617)

Αν και αρχικά με δυσκόλεψε η άσκηση, κατάλαβα πως χρειάζεται να δημιουργήσω ένα δικό μου bash sh script (φαίνεται στο asciicast μετά την εντολή vi youtube.sh).
Με την βοήθεια του bash script λοιπόν, ζητείται από τον χρήστη να πληκτρολογήσει τον τίτλο του τραγουδιού, ο οποιός αποθηκεύεται και το youtube-dl εκτελεί αναζήτηση και download. 
Βιβλιογραφία για την δημιουργία και τη χρήση του bash sh script [εδώ](https://www.taniarascia.com/how-to-create-and-use-bash-scripts/)

[![asciicast](https://asciinema.org/a/382617.svg)](https://asciinema.org/a/382617)

# Συμμετοχικό περιεχόμενο Α1 Α2
**Α1**

Έγινε προσθήκη για τον πρωτοπώρο σχεδιαστή της Nintendo [Shigeru Miyamoto](https://github.com/TheodorosKontos/_gallery/blob/master/shigeru-miyamoto.md). Thumbnail [εδώ](https://github.com/TheodorosKontos/images/blob/master/shigeru-miyamoto-thumb.jpg) και κανονική εικόνα [εδώ](https://github.com/TheodorosKontos/images/blob/master/shigeru-miyamoto.jpg). Μία σύντομη βιογραφία του με πηγή από [εδώ](https://www.thefamouspeople.com/profiles/shigeru-miyamoto-8697.php).

Έγινε προσθήκη για το παιχνίδι [Super Mario](https://github.com/TheodorosKontos/_gallery/blob/master/super-mario.md) δημιουργός του οποίου είναι ο Miyamoto. Thumbnail [εδώ](https://github.com/TheodorosKontos/images/blob/master/super-mario-thumb.png) και κανονική εικόνα [εδώ](https://github.com/TheodorosKontos/images/blob/master/super-mario.png). Η βιβλιογραφία της σύντομης αναφοράς στο παιχνίδι [εδώ](https://en.wikipedia.org/wiki/Super_Mario)

**A2**
Από τον φάκελο _slides πρόσθεσα τα entry μου στο [videogames.md](https://github.com/TheodorosKontos/site/blob/master/_slides/videogames.md)

Από τον φάκελο _timeline πρόσθεσα επίσης τα entry μου στο [videogames.md](https://github.com/TheodorosKontos/site/blob/master/_timeline/videogames.md)

Δυστυχώς παρά το γεγονός ότι έκανα όλες τις απαραίτητες αλλαγές που είχαν ζητηθεί τόσο στο [_config.yml](https://github.com/TheodorosKontos/site/blob/master/_config.yml) όσο και στο [.gitmodules](https://github.com/TheodorosKontos/site/blob/master/.gitmodules) οι αλλαγές δεν έγιναν σωστά ορατές στο [Netlify](https://hci-p2019193.netlify.app/). Λογικά κάτι δεν έχει γίνει σωστά με τα git submodules. 

# Άσκηση Προγραμματισμού Mouse form
[Netlify Mouse form](https://hci-p2019193.netlify.app/remix/mouse-form/)

[Codepen](https://codepen.io/2019193/pen/NWrQjOR)

Ολοκλήρωση της άσκησης Mouse form, όπου σε μία φόρμα που ζητάει ημερομηνία γέννησης, πρέπει να προστεθεί επίσης κελί που να ζητάει το φύλο. 
Το κελί και τα διάφορα στοιχεία του προστέθηκαν μέσω της HTML, ενώ έγιναν κάποιες αλλαγές στο χρώμα, το ύψος, την απόσταση των κελιών και το μέγεθος της γραμματοσειράς μέσω της CSS.
![mouse_form](https://i.imgur.com/vVWpVbo.jpg)

Βιβλιογραφία: [HTML](https://www.w3schools.com/html/html_forms.asp)

# Άσκηση γραμμής εντολών Οrganize Εmacs
[Link του asciicast](https://asciinema.org/a/382768)

Στην επόμενη άσκηση γραμμής εντολών ασχολούμαστε με την οργάνωση των σημειώσεων μας μέσω του emacs. Αρχικά έγινε εγκατάσταση του emacs στο σύστημά μου. Στην συνέχεια δημιούργησα το αρχείο todolist.org. Το επεξαργάστηκα και το έτρεξα στο τερματικό με την εντολή emacs todolist.org -nw. Στην αρχή το πρόγραμμα με δυσκόλεψε καθώς δεν μπορούσα να το επεξεργαστώ, αλλά το διαδίκτυο μου έδωσε τις απαντήσεις που έψαχνα. Στο asciicast λοιπόν βλέπουμε την "σημερινή" λίστα προϊόντων, την οποία επεξεργάζομαι και αποθηκεύω για να χρησιμοποιήσω την τροποποιημένη λίστα την επόμενη ημέρα. Το πρόγραμμα αποθηκεύεται και γίνεται έξοδος από αυτό.

Βιβλιογραφία [εδώ](https://www.digitalocean.com/community/tutorials/how-to-use-the-emacs-editor-in-linux).

[![asciicast](https://asciinema.org/a/382768.svg)](https://asciinema.org/a/382768)

# Άσκηση Προγραμματισμού Button
[Netlify Button](https://hci-p2019193.netlify.app/remix/button/)

[Codepen](https://codepen.io/2019193/pen/dypmXQy)

Στην άσκηση προγραμματισμού Button, απαιτείται να αλλάξουμε την λειτουργία του κουμπιού. Έτσι, με την τροποποίηση μου, το κουμπί έχει λειτουργία σίγασης και τα αντίστοιχα εικονίδια, είτε πατηθεί είτε όχι. Για να αλλάξουν τα εικονίδια, το κείμενο του κουμπιού καθώς και η εμφάνιση έγιναν αλλαγές στην HTML και στην SCSS, ενώ δεν χρειάστηκαν αλλαγές στην Coffescript αλλά απλή μελέτη. 

![button](https://media1.tenor.com/images/744463c108ba6d11bc5e2e1c2ec2c8b1/tenor.gif?itemid=19875675)

Βιβλιογραφία: [CoffeScript](https://www.tutorialspoint.com/coffeescript/index.htm)

# Άσκηση γραμμής εντολών Text Editor Vim
[Link του asciicast](https://asciinema.org/a/382954)

Στην τελευταία άσκηση γραμμής εντολών γίνεται μία επιφανειακή χρήση του Vim text editor. Με την εντολή sudo vi και την θέση του αρχείου config, εισέρχομαι σε αυτό όπου του κάνω μία μικρή επεξεργασία. 

[![asciicast](https://asciinema.org/a/382954.svg)](https://asciinema.org/a/382954)
Βιβλιογραφία [εδώ](https://opensource.com/article/19/3/getting-started-vim)
# Συμμετοχικό περιεχόμενο Β1 Β2
**Β1**

[Μελέτη περίπτωσης](https://github.com/TheodorosKontos/site/blob/master/_case-study/nintendo-entertainment-system) του Nintendo Entertainment system, της κονσόλας των πρωτοπόρων παιχνιδιών στα μέσα της δεκαετίας του 1980.

Βιβλιογραφία: [Wikipedia](https://en.wikipedia.org/wiki/Nintendo_Entertainment_System)
[Videogamecritic](https://videogamecritic.com/nesinfo.htm)

**B2**

[Βιογραφία](https://github.com/TheodorosKontos/site/blob/master/_biography/Takashi-Tezuka.md) του Takashi Tezuka, σχεδιαστή των θρυλικών παιχνιδιών Super Mario και The Legend of Zelda, μαζί με τον Shigeru Miyamoto. 

Βιβλιογραφία: [Wikipedia](https://en.wikipedia.org/wiki/Takashi_Tezuka)
[Nintendo.fandom](https://nintendo.fandom.com/wiki/Takashi_Tezuka)
[Mariowiki](https://www.mariowiki.com/Takashi_Tezuka)

Δυστυχώς πάλι δεν έχει γίνει σωστά η απεικόνιση των προσθήκων στο [Netlify](https://hci-p2019193.netlify.app/). Όπως τόνισα και στο α' μέρος του συμμετοχικού περιεχομένου, είχα κάνει όλες τις απαραίτητες αλλαγές στο [_config.yml](https://github.com/TheodorosKontos/site/blob/master/_config.yml) όσο και στο [.gitmodules](https://github.com/TheodorosKontos/site/blob/master/.gitmodules) αλλά απ'ότι φαίνεται δεν αρκεί μόνο αυτό. 

# Τελική Αναφορά
Δεν μπορούμε να αμφισβητήσουμε ότι μάθαμε πάρα πολλά από αυτό το μάθημα. Αρχικά, εξοικειωθήκαμε σε σημαντικό βαθμό με το Github, ένα εργαλείο που θα μας χρειαστεί οπωσδήποτε στο μέλλον, οπότε ήταν ευχάριστο και κρίσιμο που ασχοληθήκαμε ήδη από το 2ο έτος με αυτό. 

Ύστερα, χρειάστηκε η μελέτη νέων γλωσσών προγραμματισμού για την ολοκλήρωση των ασκήσεων. Μάλιστα, ήταν αρκετά θετικό να δουλέψουμε σε έναν ήδη σχεδιασμένο κώδικα, κάτι που επίσης θα συναντάμε στο μέλλον. 

Στη συνέχεια μας δώθηκε η δυνατότητα να ασχοληθούμε με τις ασκήσεις γραμμής εντολών. Ήταν η πρώτη μου εμπειρία με τα λειτουργικά συστήματα Unix, μιας και δεν είχα ασχοληθεί ξανά στο παρελθόν. Αν και συνάντησα αρκετές δυσκολίες στην εγκατάσταση τελικά κατάφερα να φέρω εις πέρας τις ασκήσεις. Η χρήση του asciinema αποδείχθηκε ιδιαίτερα ενδιαφέρουσα. 

Όσον αφορά το συμμετοχικό περιεχόμενο, χρειάστηκε μία μελέτη του βιβλίου, διότι εφόσον δουλέψαμε για την επέκτασή του έπρεπε να έχουμε ένα παρόμοιο ύφος. Αν και η διανομή του βιβλίου καθυστέρησε, τελικά πέτυχα έστω και καθυστερημένα τα ζητούμενα.

Το εργαλείο του Netlify, ήταν από αυτά που με εντυπωσίασαν, μιας και λειτούργησε πλήρως με την προσθήκη των ασκήσεων προγραμματισμού στην ιστοσελίδα. Δυστυχώς δεν λειτούργησε με το συμμετοχικό περιεχόμενο, λόγω ίσως των submodules. Αν και ασχολήθηκα αρκετές ώρες και έψαξα λύσεις κυρίως στο stack overflow, δεν κατάφερα να επιλύσω το σφάλμα.

Τέλος, μάθαμε πάρα πολλά πράγματα από τα video quiz αλλά και τα quiz κατά την διάρκεια του μαθήματος. Ήταν αρκετά ενδιαφέρον που μας παρουσιάστηκαν τα πρώτα λειτουργικά συστήματα, οι πρώτοι υπολογιστές και τα πρώτα βιντεοπαιχνίδια.

Παρά τις δυσκολίες που έχει η εξ αποστάσεως εκπαίδευση, θεωρώ πως πήραμε πολλά από το μάθημα. 
