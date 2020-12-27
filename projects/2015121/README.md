<h1>ΕΠΙΚΟΙΝΩΝΙΑ ΑΝΘΡΩΠΟΥ-ΥΠΟΛΟΓΙΣΤΗ</h1>

<h4>ΟΝΟΜΑΤΕΠΩΝΥΜΟ: ΑΠΟΣΤΟΛΟΣ ΚΑΜΠΛΙΩΝΗΣ</h4>

<h4>ΑΜ: Π2015121</h4>

<h4>Netlify: https://p15kabl.netlify.app/</h4>

<h4>Αποθετήριο site: https://github.com/apostoloskp/site</h4>

# Παραδοτέα και Τελική αναφορά

## Πίνακας με σύνοψη των προθεσμιών και των παραδοτέων

| Εβδομάδα* | Παραδοτέο |
| --- | --- |
| 1 | <sup><a href="#1"> Προσωπικοί μου στόχοι για το μάθημα </a></sup> |
| 2 | <sup><a href="#2"> Άσκηση προγραμματισμού: button </a></sup> | 
| 3 | <sup><a href="#3"> Άσκηση γραμμής εντολών: (1) warmup: get familiar with basic commands, reading documentation and editing files, (2) hci: add a status bar to your shell/editor and configure a color-theme </a></sup> |
| 4 | <sup><a href="#4"> Άσκηση προγραμματισμού: mouse-form </a></sup> |
| 5 | <sup><a href="#5"> Άσκηση γραμμής εντολών: organize your notes with emacs </a></sup> |
| 6 | <sup><a href="#6"> Συμμετοχικό περιεχόμενο: A1 και Α2 </a></sup> |
| 7 | <sup><a href="#7"> Άσκηση προγραμματισμού: form-validation </a></sup> |
| 8 | <sup><a href="#8"> Άσκηση γραμμής εντολών: download mp3 </a></sup> |
| 9 | <sup><a href="#9"> Άσκηση προγραμματισμού: image-filter </a></sup> |
| 10 | <sup><a href="#10"> Άσκηση γραμμής εντολών: text editor and plug-ins for code highlighting and autocompletion </a></sup>|
| 11 | <sup><a href="#11"> Συμμετοχικό περιεχόμενο: Β1 και Β2 </a></sup> |
| 12 | <sup><a href="#12"> Τελική αναφορά και αίτημα ενσωμάτωσης για βαθμολόγηση </a></sup> |
<br/>

###### [1]

## Προσωπικοί μου στόχοι για το μάθημα/Εισαγωγή:
<p>Μέσα από το μάθημα **"Eπικοινωνία Aνθρώπου Yπολογιστή"**, επιθυμώ να κατανοήσω τη σχεδίαση των συστημάτων διάδρασης ανθρώπου και υπολογιστή μέσω των σύγχρονων τεχνολογιών, 
με την συνεχή  πρακτική εξάσκηση στην σχεδίαση αυτών. Βασικός στόχος μου για το μάθημα είναι η προσωπική μου εξοικείωση με την πλατφόρμα του github ώστε να αναπτύξω τις δεξιότητες μου σε αυτό, κσθώς αποτελεί ένα από τα σημαντικότερα μέσα για την οργάνωση και σύνταξη real time αλλαγών σε κώδικα. Πιστεύω πως επιβάλλεται η συνεχής παρακολούθηση των εβδομαδιαίων διαλέξεων και εργαστηρίων, διότι με μια πρώτη προσέγγιση το Gιthub δεν ιδιαίτερα φιλικό ως προς το χρήστη που δεν διαθέτει κάποια εμπειρία με το εργαλείο αυτό. Εφόσον εφαρμοστούν τα παραπάνω, η προσαρμογή κάθε νέου χρήστη στην πλατφόρμα θα είναι πιο ομαλή.</p>

###### [2]

## Άσκηση προγραμματισμού: button
Link για το αποθετήριο: https://github.com/apostoloskp/site/blob/master/_remix/button.md

## Τροποποιήσεις:
Τοποθέτησα ως link στο href το di.ionio.gr/ και άλλαξα το κείμενο του button σε Learn More.
Άλλαξα το χρώμα του box στην καρτέλα CSS και το font family σε 'Lucida Console', monospace;
Με το πάτημα, το button αλλάζει χρώμα σε πράσινο ticked και μας ανακατευθύνει στη σελίδα της σχολής.

**Αποτέλεσμα:**

![button](https://media.giphy.com/media/tB9RGoIdZEYA95Lb9I/giphy.gif)

**Πηγές:** https://www.udemy.com/course/the-web-developer-bootcamp/ https://www.w3schools.com/cssref/css_colors.asp

###### [3]

## Άσκηση γραμμής εντολών(warmup): get familiar with basic commands, reading documentation and editing files
Link για το asciinema: https://asciinema.org/a/367360 

## Βήματα:
Αρχικά, αφού έτρεξα το Terminal, προχώρησα στην εγκατάσταση των απαραίτητων-με βάση τα ερωτήματα της άσκησης-πακέτων, δηλαδή
**sudo apt update / sudo apt install / sudo pip3 install thefuck**, **sudo git clone https://github.com/vim/vim.git**, **git clone https://github.com/ranger/ranger.git / cd ranger / docker build -t ranger/ranger:latest ranger / docker run -it ranger/ranger ranger**.
Εκτέλεσα την εντολή **asciinema rec -i 0.2** για την έναρξη της εγγραφής terminal.
Στη συνέχεια, με την εντολή **man man** διάβασα το manual αυτής και έπειτα το manual της εντολής **vim (man vim)**. Συνέχισα με την εντολή **apt-get
install vim** επίτηδες γιατί πληκτρολογώντας **fuck** αμέσως μετά μου εμφάνισε τη σωστή σύνταξη της εντολής εγκατάστασης **vim**, δηλαδή **sudo apt-get
install vim**(επέλεξα abort της εγκατάστασης μιας και είχε προηγηθεί πριν το recording). Πληκτρολογώντας **vim**, με κατεύθυνε σε ένα νέο menu και με
εισαγωγή **help iccf** μου εμφάνισε σχετικές πληροφορίες. Με την εντολή **man neofetch** διάβασα το manual λειτουργίας αυτής, ενεργοποιήσα τον file manager
με **cd ranger** και ,τέλος, εκτέλεσα την εντολή **neofetch** όπου μου έδωσε ως έξοδο τα στοιχεία/στατιστικά του συστήματός μου.
Ολοκλήρωσα το asciicast με την εντολή **exit**.

**Πηγές:** https://askubuntu.com/questions/420364/how-do-i-install-and-get-started-with-vim-vi

## Άσκηση γραμμής εντολών(hci): add a status bar to your shell/editor and configure a color-theme
Link για το asciinema: https://asciinema.org/a/379851

## Βήματα:
Αρχικά, αφού έτρεξα το Terminal, προχώρησα στην εγκατάσταση των απαραίτητων-με βάση τα ερωτήματα της άσκησης-πακέτων, δηλαδή **sudo apt install --yes powerline**. Εκτέλεσα την εντολή **asciinema rec -i 0.2** για την έναρξη της εγγραφής terminal. Έπειτα μέσω της εντολής **vi ~/.bashrc** προσέθεσα στο bash file το απαραίτητο configuration του **powerline** για τη δημιουργία status bar, δηλαδή:
**if [ -f /usr/share/powerline/bindings/bash/powerline.sh ]; then
powerline-daemon -q
POWERLINE_BASH_CONTINUATION=1
POWERLINE_BASH_SELECT=1
source /usr/share/powerline/bindings/bash/powerline.sh fi**, όπως φαίνεται στο βίντεο. Στη συνέχεια, με την εντολή **:colorscheme [colorway id]**, επιχείρησα να αλλάξω επιτόπου το color theme σε **blue**, **peachpuff**, **delek**, **morning**, **evening**. Ολοκλήρωσα το asciicast με την εντολή **exit**.

**Πηγές:** https://www.ricalo.com/blog/install-powerline-ubuntu/

###### [4]

## Άσκηση προγραμματισμού: mouse-form
Link για το αποθετήριο: https://github.com/apostoloskp/site/blob/master/_remix/mouse-form.md

## Τροποποιήσεις:
Αφού μελέτησα τον κώδικα στο πεδίο HTML, συμπέρανα πως έπρεπε να δημιουργήσω ένα νέο πεδίο, έστω **Please confirm your gender**, το οποίο υλοποίησα με τις εξής εντολές: fieldset, legend με κείμενο το "Please confirm your gender" σε νέα παράγραφο.
Εφόσον εμφανίστηκε το νέο πεδίο, πρέπει να ορίσω τις τιμές που θα δέχεται, δηλαδή "Male" ή "Female".Ορίζω νέο label ως
**gender** και στη συνέχεια με την εντολή **option** θέτω τις επιλογές που ζητούνται από την άσκηση.
  
**Αποτέλεσμα:**

![mouse-form](https://media.giphy.com/media/2SMAEgf2RAmnSK1siC/giphy.gif)
  
**Πηγές:** https://www.udemy.com/course/the-web-developer-bootcamp/

###### [5]

## Άσκηση γραμμής εντολών: organize your notes with emacs
Link για το asciinema: https://asciinema.org/a/379076

## Βήματα:
Εκτέλεσα την εντολή **asciinema rec -i 0.2** για την έναρξη της εγγραφής terminal.
Αρχικά, αφού έτρεξα το Terminal, προχώρησα στην εκτέλεση της εντολής **emacs -nw** για άνοιγμα του editor σε μορφή terminal. Πληκτρολογώντας **Alt+X** και έπειτα **org-mode** το πρόγραμμα αλλάζει σε org mode. Οργάνωσα, αρχικά, το πρόγραμμα της ημέρας με χρήση **Alt+Enter** για σχηματισμό αστερίσκων και με την ίδια εντολή +(right arrow) οργάνωσα τα περιεχόμενα των αρχικών προτάσεων. Με το πάτημα **Shift+(right arrow)** μπορούμε να ορίσουμε μια κατάσταση στο αντικείμενο δηλαδή **TODO** ή **DONE**, ενώ αν δημιουργήσω στείλες δίπλα από το καθένα και πάνω στην αρχική ενότητα, με το πάτημα **Ctrl+C+C** αλλάζει η κατάσταση εμφανίζοντας **X** στο κουτί και π.χ [1/3] στο αρχικό κουτί (εμφάνιση ποσοστού completed στο αρχικό box αν αντί για **/** χρησιμοποιήσω **%**), όπως φαίνεται στο βίντεο. Μπορούμε, επίσης, να ορίσουμε με τον ίδιο συνδυασμό μια περιγραφή-κατηγορία δίπλα από κάθε task πχ **:HOME:** ή **:WORK:**.Με **Alt+X** και **org-agenda** εμφανίζονται διάφορες χρήσιμα features όπως **Show all TODOs**. Τέλος, πατώντας **Ctrl+C+D** εμφανίζεται το calendar όπου μπορούμε να ορίσουμε μια διορία(deadline) για κάποιο task. Ολοκλήρωσα το asciicast με την εντολή **exit**.

**Πηγές:** https://www.youtube.com/watch?v=bzZ09dAbLEE&t=583s
 
###### [6]

## Συμμετοχικό περιεχόμενο: A1 και A2

## Βήματα:
*Ακολούθησα τις οδηγίες σχετικά με τη δημιουργία, διαγραφή και ενημέρωση submodule χωρίς σφάλματα.
Η εικόνα στην ενότητα "Εικόνες" εμφανίζεται κανονικά, όμως ο σύνδεσμος οδηγεί σε **Page not found**.*

**Link για το αποθετήριο εικόνας:** https://github.com/apostoloskp/_gallery/blob/master/apple-smartwatchs6.md

**Link για το αποθετήριο thumbnail:** https://github.com/apostoloskp/images/blob/master/apple-smartwatchs6-thumb.jpg

**Link για το site μου μέσω netlify:** https://p15kabl.netlify.app/

###### [7]

## Άσκηση προγραμματισμού: form-validation
Link για το αποθετήριο: https://github.com/apostoloskp/site/blob/master/_remix/form-validation.md

## Τροποποιήσεις:
Προσέθεσα τα παρακάτω lines: x Validation< x (format: xxx-xxx):, <input id="x" type="x" pattern="x$" required, ανάλογα με τα ζητούμενα της άσκησης, άλλαξα παράγραφο στο button Submit και τέλος οργάνωσα σε διάταξη τα ζητούμενα όπως αναφέρονται στην εκφώνηση.

**Αποτελέσματα:**

![form-validation](https://media.giphy.com/media/jMqDecJA5BYiIRxUs0/giphy.gif)

**Πηγές:** https://www.w3schools.com/tags/att_input_pattern.asp

###### [8]

## Άσκηση γραμμής εντολών: download mp3
Link για το asciinema: https://asciinema.org/a/375772

## Βήματα:
Εκτέλεσα την εντολή **asciinema rec -i 0.2** για την έναρξη της εγγραφής terminal.
Αρχικά, προχώρησα στην εγκατάσταση των απαραίτητων-με βάση τα ερωτήματα της άσκησης-πακέτων, δηλαδή **sudo apt install youtube-dl** και **sudo apt-get install -y mpg123**. Εκτέλεσα την εντολή **youtube-dl -x --audio-format mp3 "ytsearch1: 'song title'"** για να αναζητήσω και να κατεβάσω το βίντεο απευθείας σε μορφή mp3. Τέλος, προχώρησα **mpg123 song title**, ώστε να γίνει αναπαραγωγή του κομματιού της επιλογής μου. Ολοκλήρωσα το asciicast με την εντολή **exit**.

**Πηγές:** https://askubuntu.com/questions/178481/how-to-download-an-mp3-track-from-a-youtube-video

###### [9]

## Άσκηση προγραμματισμού: image-filter
Link για το αποθετήριο: https://github.com/apostoloskp/site/blob/master/_remix/image-filter.md

## Τροποποιήσεις:
Με βάση τα παραδείγματα που δίνονται, προσέθεσα τα παρακάτω lines **-webkit-filter: contrast(1.5) hue-rotate(90deg) saturate(1.5) invert(.8) brightness(1.5); filter: contrast(1.5) hue-rotate(90deg) saturate(1.5) invert(.8) brightness(1.5);** στην εντολή **img:hover**, ανάλογα με την εικόνα που δίνεται και τις προτιμήσεις μου. Συνεπώς, όταν ο χρήστης κάνει hover με το mouse pointer επάνω στην εικόνα, θα εφαρμόζονται τα αντίστοιχα οπτικά εφέ.

**Αποτέλεσμα:**

![image-filter](https://media.giphy.com/media/2bzxis20I6LdSC6shW/giphy.gif)

**Πηγές:** Σχόλια κώδικα CSS αρχικού παραδείγματος

###### [10]

## Άσκηση γραμμής εντολών: text editor and plug-ins for code highlighting and autocompletion
Link για το Asciinema: https://asciinema.org/a/376842

## Βήματα:
Εγκατέστησα το απαραίτητο πακέτο **vim** μέσω της εντολής **sudo apt install vim**. Εκτέλεσα την εντολή **asciinema rec -i 0.2** για την έναρξη της εγγραφής terminal. Αρχικά, προχώρησα στην εντολή **sudo vi /home/p2015121/config** για fetch του **config** αρχείου μου. Στην συνέχεια, πατώντας **Ι** μπήκα σε **editor mode** και δοκίμασα να προσθέσω κείμενο όπως φαίνεται και στο βίντεο. Πατώντας **Esc** μπήκα σε **normal mode**, όπου πληκτρολογώντας **:q!** εξήλθα από τον editor. Ολοκλήρωσα το asciicast με την εντολή **exit**.

**Πηγές:** https://www.vim.org/

###### [11]

## Συμμετοχικό περιεχόμενο: Β1 και Β2

*Δεν εμφανίζονται στο site λόγω τεχνικών προβλημάτων με τα submodule*

## Μελέτη περίπτωσης:
[Apple Arcade](https://github.com/apostoloskp/extras/blob/master/cs-apple-arcade.md)

Link για το αποθετήριο: https://github.com/apostoloskp/extras/blob/master/cs-apple-arcade.md

Πηγές: https://www.macrumors.com/2019/12/16/apple-arcade-annual-subscription/?utm_source=feedly&utm_medium=webfeedshttps://www.macrumors.com/2019/12/16/apple-arcade-annual-subscription/

## Βιογραφία:
[Steve Wozniak](https://github.com/apostoloskp/site/blob/master/_biography/steve-wozniak.md)

Link για το αποθετήριο: https://github.com/apostoloskp/site/blob/master/_biography/steve-wozniak.md

Πηγές: https://www.greelane.com/el/%CE%BA%CE%BB%CE%B1%CF%83%CF%83%CE%B9%CE%BA%CE%AD%CF%82-%CE%BC%CE%B5%CE%BB%CE%AD%CF%84%CE%B5%CF%82/%CE%B9%CF%83%CF%84%CE%BF%CF%81%CE%AF%CE%B1--%CF%80%CE%BF%CE%BB%CE%B9%CF%84%CE%B9%CF%83%CE%BC%CF%8C%CF%82/steve-wozniak-biography-1991136/

###### [12]

## Τελική αναφορά:

## Σύνοψη:

Προσωπικοί μου στόχοι για το μάθημα ---> **ΕΓΚΥΡΟ COMMIT**

Άσκηση προγραμματισμού: button ---> **ΕΓΚΥΡΟ COMMIT**, **100% COMPLETED**

Άσκηση γραμμής εντολών: (1) warmup: get familiar with basic commands, reading documentation and editing files, (2) hci: add a status bar to your shell/editor and configure a color-theme ---> **ΕΓΚΥΡΟ COMMIT**, **100% COMPLETED**

Άσκηση προγραμματισμού: mouse-form ---> **ΕΓΚΥΡΟ COMMIT**, **100% COMPLETED**

Άσκηση γραμμής εντολών: organize your notes with emacs ---> **ΕΓΚΥΡΟ COMMIT**, **100% COMPLETED**

Συμμετοχικό περιεχόμενο: A1 και A2 ---> **ΕΓΚΥΡΟ COMMIT**, **80% COMPLETED**

Άσκηση προγραμματισμού: form-validation ---> **ΕΓΚΥΡΟ COMMIT**, **100% COMPLETED**

Άσκηση γραμμής εντολών: download mp3 ---> **ΕΓΚΥΡΟ COMMIT**, **100% COMPLETED**

Άσκηση προγραμματισμού: image-filter ---> **ΕΓΚΥΡΟ COMMIT**, **100% COMPLETED**

Άσκηση γραμμής εντολών: text editor and plug-ins for code highlighting and autocompletion ---> **ΕΓΚΥΡΟ COMMIT**, **100% COMPLETED**

Συμμετοχικό περιεχόμενο: Β1 και Β2 ---> **ΜΗ ΕΓΚΥΡΟ COMMIT**, **50% COMPLETED**

Αναλυτικά GIF βρίσκονται κάτω από κάθε άσκηση προγραμματισμού όπου επιδεικνύεται το αποτέλεσμα επεξεργασίας κώδικα.
Οι ασκήσεις γραμμής εντολών δε διαθέτουν gifs καθώς το record έγινε με το asciinema, οπότε υπάρχουν μόνο τα αντίστοιχα link σε κάθε άσκηση. 

Συνολικά, πιστεύω πως οι δυσκολίες που αντιμετώπισα εντοπίζονται κυρίως στο setup και λειτουργία του Github ως πλατφόρμα, δυσκολίες οι οποίες επιλύθηκαν με την παρακολούθηση των εργαστηρίων και διαλέξεων. Όσο αφορά στην επίλυση και καταχώρηση των παραδοτέων, νιώθω αρκετά ικανοποιημένος καθώς βγήκα εκτός προθεσμίας παρά μόνο στο δεύτερο σκέλος του συμμετοχικού περιεχομένου λόγω τεχνικών προβλημάτων με τα submodule.

## Σύντομη ανάλυση σχετικών εργαλείων:

Τα εργαλεία που χρησιμοποιήθηκαν για την υλοποίηση του μαθήματος ήταν το **GitHub**, χρήσιμο για την ενημέρωση κώδικα και παραδοτέων, το **Asciinema** για την καταγραφή terminal αντί για χρήση GIF αρχείων στις ασκήσεις γραμμής εντολών, η πλατφόρμα **CodePen** για τη σύνταξη και επεξεργασία κώδικα HTML, CSS και JavaScript, το **Netlify** για το deploy του προσωπικού site στις ασκήσεις συμμετοχικού περιεχομένου, καθώς και το **Oracle VM VirtualBox** για την εκτέλεση του λογισμικού Ubuntu Linux στο Windows desktop μου.

## Ασκήσεις Bonus:

https://pibook-video-quiz.epidro.me/
User: p15kabl@ionio.gr
e9dLShIFb6ZpdswrvuW53YCp95Q2

## Συμπεράσματα:

Σε σύγκριση με την ενότητα **Εισαγωγή**, σίγουρα επετεύχθη η εξοικείωση με την πλατφόρμα του Github σε σημαντικό βαθμό. Μέσω της συνεχής παρακολούθησης και ενασχόλησης με τα εβδομαδιαία εργαστήρια, κατάφερα να χειρίζομαι ικανοποιητικά το terminal των Linux και να επιτελώ κάθε φορά τα ανάλογα task που ζητούνται, καθώς και να μπορώ να προβαίνω στις απαραίτητες αλλαγές κώδικα HTML και CSS, γεγονός που δείχνει πως υπάρχει σημαντικό κέρδος και γνώση προς αποκόμιση από το μάθημα **Eπικοινωνία Aνθρώπου Yπολογιστή**.

## Βιβλιογραφία:

[w3schools](https://www.w3schools.com/)

[Adding a submodule](https://asciinema.org/a/9vhZSNlQkO0KwH6lY6gPdWWB8)

[Updating a submodule](https://asciinema.org/a/bUMPJqXb9sepWRdlJPyToMpwl)

[Deleting a submodule](https://asciinema.org/a/3gFABL73VAJ21UoA4SVzlfRaf)
