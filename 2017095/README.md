Μάθημα: Επικοινωνία Ανθρώπου-Υπολογιστή
---------------------------------------
---------------------------------------

### Ονοματεπώνυμο: Αντωνακάκης Απόστολος
### Αριθμός Μητρώου: 2017095

### Github: [p17anto2](https://github.com/p17anto2)
### Netlify: [p2017095-ionio](p2017095-ionio.netlify.app)

| Εβδομάδα | Παραδοτέο |
| --- | --- |
| 1 | Εισαγωγή |
| 2 | [Άσκηση προγραμματισμού: Form Validation](#παραδοτέο-2-form-validation) |
| 3 | [Άσκηση γραμμής εντολών: Todo Lists](#παραδοτέο-3-taskwarrior) |
| 4 | συμμετοχικό περιεχόμενο 1A |
| 5 | [Άσκηση προγραμματισμού: Image](#παραδοτέο-5-Image) |
| 6 | συμμετοχικό περιεχόμενο 2A |
| 7 | [Άσκηση γραμμής εντολών: Edit The Vim Configuration File](#παραδοτέο-7-Vim-Configuration) |
| 8 | συμμετοχικό περιεχόμενο 1B |
| 9 | [Άσκηση γραμμής εντολών: Terminal Windows](#παραδοτέο-9-Terminal-Windows) |
| 10 | συμμετοχικό περιεχόμενο 2B |
| 11 | [Άσκηση γραμμής εντολών: Terminal as an IDE](#παραδοτέο-11-Terminal-as-an-IDE) |

## Εισαγωγή

Για τις ασκήσεις γραμμής εντολών χρησιμοποίησα το [QEMU](https://www.qemu.org/) για να τρέξω το [Void Linux Distribution](https://voidlinux.org/) στην βασική του (non-GUI) έκδοσή του.


## Παραδοτέο 2: Form Validation

Για το δεύτερο παραδοτέο επέλεξα την προγραμματιστική άσκηση Form Validation, στην οποία χρησιμοποιούνται Regular Expressions για τον έλεγχο σφαλμάτων εισόδου του χρήστη. Προσάρμοσα τον ήδη υπάρχων HTML κώδικα για τις ανάγκες κάθε κομματιού της άσκησης. Πιο συγκεκριμένα:

- Email: Τα email ακολουθούν τη μορφή: Αλφαριθμητικοί χαρακτήρες και τα σύμβολα !#$%^&\_, ο χαρακτήρας @, πεζά γράμματα, τελεία (.) και τέλος δύο ή τρία πεζά γράμματα. Υπάρχουν εξαιρέσεις σε αυτή τη μορφή, όπως για παράδειγμα η έλλειψη Top-Level Domain (admin@mailserver1) ή η χρήση τελειών στο πρώτο κομμάτι, αλλά τις παρέλειψα λόγω της σπανιότητάς και της πολυπλοκότητας τους (όσον αφορά τις κανονικές εκφράσεις).

<p align="center"> <img src=https://github.com/p17anto2/LessonImages/blob/main/HCI/2_email.png> </p>

- Πιστωτικές Κάρτες: Για απλότητα στις κανονικές εκφράσεις, ο κώδικας δέχεται μόνο κάρτες τύπου Mastercard, καθώς υπάρχουν και άλλες με λιγότερα ψηφία ή διαφορετική μορφή. Η μορφή είναι τέσσερις τετράδες ψηφία χωρισμένα με κενό. Για το CVV η μορφή είναι 3 ψηφία.

<p align="center"> <img src=https://github.com/p17anto2/LessonImages/blob/main/HCI/2_credit.png> </p>

- Ελληνικά Τηλέφωνα: Τα ελληνικά σταθερά τηλέφωνα ξεκινούν όλα με το ψηφίο 2 και είναι της μορφής 2xx-xxx-xxxx.

<p align="center"> <img src=https://github.com/p17anto2/LessonImages/blob/main/HCI/2_greek_num.png> </p>

Στον CSS κώδικα, το μόνο που άλλαξα είναι το type του input σε form, και χρησιμοποίησα αυτόν τύπο σε κάθε κομμάτι, καθώς οπτικά, κάθε έλεγχος είναι ίδιος.

<p align="center"> <img src="https://github.com/p17anto2/LessonImages/blob/main/HCI/2_css.png"> </p>

#### Pibook: [\_remix/form-validation](https://github.com/p17anto2/site/blob/master/_remix/form-validation.md)
#### Codepen: [Form Validation](https://codepen.io/P2017095/pen/ExmqjJE)
#### Netlify: [Form Validation Answer](https://p2017095-ionio.netlify.app/remix/form-validation/)
#### Πηγές: [Email Adresses (Wikipedia)](https://en.wikipedia.org/wiki/Email_address), [Credit Cards (Medium)](https://medium.com/hootsuite-engineering/a-comprehensive-guide-to-validating-and-formatting-credit-cards-b9fa63ec7863), [Ελληνικά Τηλεφωνικά Νούμερα (Βικιπαίδεια)](https://el.wikipedia.org/wiki/%CE%A4%CE%B7%CE%BB%CE%B5%CF%86%CF%89%CE%BD%CE%B9%CE%BA%CE%BF%CE%AF_%CE%BA%CF%89%CE%B4%CE%B9%CE%BA%CE%BF%CE%AF_%CF%84%CE%B7%CF%82_%CE%95%CE%BB%CE%BB%CE%AC%CE%B4%CE%B1%CF%82)

## Παραδοτέο 3: Taskwarrior

Για την πρώτη άσκηση γραμμής εντολών επέλεξα να ασχοληθώ με τα todo list. Χρησιμοποίησα την εφαρμογή γραμμής εντολών Taskwarrior.

Η απλή επίδειξη στην ιστοσελίδα της εφαρμογής αναφέρει τρεις βασικές εντολές - **add**, **list** και **done**. Με αυτές τις εντολές μπορείς να προσθέσεις ένα task, να εμφανίσεις τα μη ολοκληρωμένα task και να δηλώσεις το πέρας ενός task αντίστοιχα. Έπειτα, διαβάζοντας το Documentation της εφαρμογής και τη σελίδα Best Practices, βρήκα τα εξής: 
- Την εντολή **modify**, οπού μπορείς να επεξεργαστείς ένα υπάρχον task, 
- Την εντολή **start**, οπού δηλώνεις ότι εκτελείς ένα task αυτή τη χρονική περίοδο,

<p align="center"> <img src="https://github.com/p17anto2/LessonImages/blob/main/HCI/3_start.png"> </p>

- Την κατηγορία **project**, όπου μπορείς να ομαδοποιήσεις πολλά task σε μία κατηγορία,

<p align="center"> <img src="https://github.com/p17anto2/LessonImages/blob/main/HCI/3_project.png"> </p>

- Την κατηγορία **tags**, όπου μπορείς να προσθέσεις ετικέτες σε task και,

<p align="center"> <img src="https://github.com/p17anto2/LessonImages/blob/main/HCI/3_tags.png"> </p>

- Την ειδική ετικέτα **next**, όπου δηλώνεις ότι ένα task είναι το επόμενο με το οποίο θα ασχοληθείς, δηλαδή είναι το πιο σημαντικό.

<p align="center"> <img src="https://github.com/p17anto2/LessonImages/blob/main/HCI/3_next.png"> </p>

Το αποτέλεσμα:

<p align="center"> <img src="https://github.com/p17anto2/LessonImages/blob/main/HCI/3_final.png"> </p>

### Προβλήματα:

Αρχικά, προσπάθησα να εγκαταστήσω την εφαρμογή μέσω του xbps-install, το package manager του Void Linux. Μετά την εγκατάσταση, όταν πήγαινα να το τρέξω, μου εμφάνιζε ότι δεν βρέθηκε η βιβλιοθήκη libgnutls,
η οποία χρησιμοποιείται για τον συγχρονισμό του Taskwarrior με server. Διασυνδέεται δυναμικά στο Taskwarrior, και, ενώ βεβαιώθηκα ότι είναι εγκατεστημένη στη σύστημα μου, αποφάσισα να συντάξω την εφαρμογή από τον πηγαίο κώδικα.

Εγκατέστησα τα απαραίτητα dependencies (git, cmake, make, python, bash, libuuid-devel), κατέβασα τον πηγαίο κώδικα από το github, ακολούθησα τις οδηγίες που προσφέρονται στο site της εφαρμογής και βρήκα την επιλογή στο CMakeLists.txt,
το αρχείο που δημιουργεί τα Makefiles, ENABLE\_SYNC, η οποία χρείαζεται το libgnutils που δε δούλευε στο σύστημα, και την απενεργοποίησα (cmake -DENABLE\_SYNC=OFF). Τέλος έτρεξα το make, έτρεξα τα test,
και αφού βεβαιώθηκα ότι όλα είναι καλά, το εγκατέστησα και δούλεψε κανονικά (χωρίς συγχρονισμό προφανώς).


#### Asciinema: [Taskwarrior](https://asciinema.org/a/433915)
#### Πηγές: [Quick Demo (Taskwarrior)](https://taskwarrior.org/docs/start.html), [Best Practices (Taskwarrior)](https://taskwarrior.org/docs/best-practices.html), [GnuTLS](https://www.gnutls.org/), [Build (Taskwarrior)](https://taskwarrior.org/docs/build.html)

## Παραδοτέο 5: Image

Ως πέμπτο παραδοτέο επέλεξα την άσκηση Image, όπου ζητείται η κατανόηση του Scalable Vector Graphics (SVG) format, καθώς και την τροποποίηση του ήδη υπάρχων κώδικα, ώστε να εμφανίζεται η εικόνα άλλη μία φορά στο μισό της μέγεθος.

Αρχικά, τα SVG είναι αρχεία τύπου εικόνας, όπου η πληροφορία που περιέχεται δεν αφορά pixel (όπως π.χ. το png), αλλά διανύσματα. Αυτό γίνεται μέσω προκαθορισμένων σχημάτων (circle, rectangle κ.λ.π.), χαρακτήρων Unicode και του στοιχείου path. Υπάρχει επίσης η δυνατότητα επιχρωμάτωσης (μονοχρωματικά, βαθμιδωτά, ή με μοτίβα), κίνησης, διαδραστικότητας κ.α.

Το στοιχείο path είναι ουσιαστικά είναι string που περιέχει κινήσεις μιας υποθετικής γραφίδας. Με την εντολή M ή m μετακινείται η γραφίδα, με την L ή l τραβάει μια γραμμή και με τις εντολές C, S, Q, T, and A αποτυπώνονται διάφορες ελλειπτικές και τύπου Bezier καμπύλες. Τέλος, με την εντολή Z τελειώνει το στοιχείο path.

Για το πρακτικό κομμάτι της άσκησης, πρόσθεσα το χαρακτηριστικό viewbox στο αρχείο, με το οποίο μπορείς να ορίσεις πόσα pixel περιέχονται μέσα στο χώρο που πιάνει η εικόνα. Εφόσον η εικόνα έχει μέγεθος 300x300, ορίζοντας το μέγεθος του viewbox σε 600x600, δηλαδή κάθε pixel της οθόνης να περιέχει δύο pixel της εικόνας, το σχήμα που περιέχει η εικόνα εμφανίζεται μισό.

Το αποτέλεσμα:

<p align="center"> <img src="https://github.com/p17anto2/LessonImages/blob/main/HCI/5_result.png"> </p>

#### Pibook: [\_remix/image](https://github.com/p17anto2/site/blob/master/_remix/image.md)
#### Codepen: [Form Validation](https://codepen.io/P2017095/pen/ExXVmmM)
#### Netlify: [Form Validation Answer](https://p2017095-ionio.netlify.app/remix/image/)
#### Πηγές: [Scalable Vector Graphics (Wikipedia)](https://en.wikipedia.org/wiki/Scalable_Vector_Graphics#Functionality), [viewBox (Mozilla Docs)](https://developer.mozilla.org/en-US/docs/Web/SVG/Attribute/viewBox)

## Παραδοτέο 7: Vim Configuration

Για το τρίτο παραδοτέο επέλεξα την άσκηση γραμμής εντολών Vim Configuration, όπου κάνω κάποιες βασικές ρυθμίσεις στη λειτουργικότητα του Vim. Οι εντολές Vim Script που χρησιμοποίησα είναι οι εξής:

**set nu** : Εμφανίζει τον αριθμό γραμμής σε κάθε γραμμή.

<p align="center">
<img src="https://github.com/p17anto2/LessonImages/blob/main/HCI/7_bare.png"> 
<img src="https://github.com/p17anto2/LessonImages/blob/main/HCI/7_num.png"> 
</p>

**set smartindent** : Προσπαθεί να καταλάβει βάσει λέξεων-κλειδιών πού να τοποθετήσει τον κέρσορα. Για παράδειγμα, στη γλώσσα C, αν ο χρήστης πατήσει Enter σε insert mode ενώ η γραμμή που βρίσκεται ο κέρσορας τελειώνει σε ερωτηματικό, στην επόμενη γραμμή ο κέρσορας θα τοποθετηθεί εκεί που ξεκίνησε η στην οποία βρισκόταν. Αν τελειώνει σε {, θα ξεκινήσει ένα tab πιο μετά.

**filetype plugin indent on** : Αναγνωρίζει τον τύπο αρχείου του buffer από το extension του αρχείου, και φορτώνει συγκεκριμένες ρυθμίσεις για αυτόν τον τύπο αρχείου (το χρειάζεται η επόμενη εντολή).

**syntax on** : Δίνει έμφαση σε λέξεις κλειδιά ή κανονικές εκφράσεις, σύμφωνα με τον τύπο του αρχείου. Για παράδειγμα, στη C, το *#include* είναι λέξη κλειδί, και ό,τι ακολουθεί μετά ανάμεσα στις αγκύλες αναγνωρίζεται από κανονική έκφραση.

<p align="center">
<img src="https://github.com/p17anto2/LessonImages/blob/main/HCI/7_bare.png"> 
<img src="https://github.com/p17anto2/LessonImages/blob/main/HCI/7_syntax.png">
</p>

#### Asciinema: [Vim Configuration](https://asciinema.org/a/432265)

#### Πηγές: [Το δικό μου vimrc](https://github.com/p17anto2/LessonImages/blob/main/HCI/3_vimrc.vim).

## Παραδοτέο 9: Terminal Windows

Καθώς για τις ασκήσεις γραμμής εντολών χρησιμοποιώ ένα Virtual Machine χωρίς GUI, η υλοποίηση αυτής της άσκησης έγινε με λίγο ανορθόδοξο τρόπο.

Το Vim περιλαμβάνει Terminal Emulation. Αυτό σημαίνει ότι υπάρχει η δυνατότητα, μέσα από το vim, να χρησιμοποιήσεις terminal. Αυτό γίνεται με την εντολή **:term**, η οποία δημιουργεί ένα καινούριο παράθυρο που τρέχει το bash shell (ή **:vert terminal**, που κάνει το διαχωρισμό παραθύρων κάθετο). Σε αυτό το εικονικό terminal, μπορείς να τρέξεις οποιοδήποτε πρόγραμμα, όπως το glances, καθώς και το ίδιο το Vim για να δεις και να επεξεργαστείς αρχεία. Με τη συντόμευση CTRL-W CTRL-W εστιάζεται το επόμενο παράθυρο. 

<p align="center"> <img src="https://github.com/p17anto2/LessonImages/blob/main/HCI/9_terminal.png"> </p>

#### Asciinema: [Terminal Windows](https://asciinema.org/a/432922)
#### Πηγές: [Terminal.txt (VimHelp)](https://vimhelp.org/terminal.txt.html)

## Παραδοτέο 11: Terminal as an IDE

Για το τελευταίο παραδοτέο διαμορφώνω το Vim σε IDE. Στόχος είναι να μπορώ να γράφω άνετα Python και Latex αρχεία μέσα από το terminal. Για αυτό το σκοπό θα χρησιμοποιήσω μερικά plug-in για το Vim.

<!-- TODO: Add images-->
### Airline

Το Vim-Airline είναι ένα plugin του Vim που προσφέρει κυρίως αισθητικές αλλαγές, όχι τόσο χρηστικές. Προσθέτει μία μπάρα στο κάτω μέρος, όπου εμφανίζει σε ποιο mode του Vim βρίσκεσαι, σε ποια γραμμή βρίσκεσαι, ποσοστιαία και πραγματικά, καθώς και σε ποιον χαρακτήρα είσαι (οριζόντια).

<p align="center"> <img src="https://github.com/p17anto2/LessonImages/blob/main/HCI/11_airline.png"> </p>

### ALE (Asynchronous Linting Engine)

Το ALE είναι μία μηχανή Linting, δηλαδή αναγνώρισης λαθών στον κώδικα. Ουσιαστικά δεν κάνει αυτό κάποιο έλεγχο, αλλά υποστηρίζει διάφορους linters (εγώ χρησιμοποώ το flake8 που υποστηρίζει το PEP8 στην Python), τους οποίους τους καλεί ασύγχρονα για να ελέγξουν τον κώδικα. Υποστηρίζει επίσης διάφορους Fixers, που διορθώνουν όσα λάθη μπορούν (κυρίως λάθη μορφοποίησης).

<p align="center"> <img src="https://github.com/p17anto2/LessonImages/blob/main/HCI/11_ale.png"> </p>

### TagHighlight

Το TagHighlight είναι ένα plugin του Vim το οποίο λειτουργεί ως διεπαφή του Vim με την εφαρμογή ctags, η οποία δημιουργεί ετικέτες για σημαντικά κομμάτια του κώδικα (ονόματα συναρτήσεων, ονόματα κλάσεων κ.α.). Ουσιαστικά καλεί το ctags στο σώμα του κώδικα και το διαβάζει για να εμφανίζει έντονα τα σημαντικά σημεία, καθώς και να ανατρέχει στα αρχεία τα οποία περιγράφεται η λειτουργία του συγκεκριμένου κομματιού του κώδικα.

Με τη συντόμευση CTRL-] το vim ανατρέχει την ετικέτα και φορτώνει τον κώδικα στον οποίο έχει γίνει ο ορισμός της συνάρτησης/κλάσης. Η ετικέτα μπαίνει σε μία δομή stack, ώστε να μπορείς να επιστρέψεις στην αρχική ετικέτα με τη συντόμευση CTRL-t.

<p align="center">
<img src="https://github.com/p17anto2/LessonImages/blob/main/HCI/11_bare.png">
<img src="https://github.com/p17anto2/LessonImages/blob/main/HCI/11_tags.png">
</p>

### Latex

Για το Latex, χρησιμοποίησα τη σουίτα Texlive που περιέχει τα απαραίτητα για τη συγγραφή και σύνταξη κώδικα latex, τη βιβλιοθήκη Poppler για τη μετατροπή pdf σε text, την εφαρμογή less για την εμφάνιση αρχείων text στο terminal, καθώς και την εφαρμογή make για την εύκολη χρήση όλων μαζί.

```Makefile
NAME=test

all: test

test:
	# Σύνταξη του tex αρχείου σε pdf
	pdflatex $(NAME).tex $(NAME).pdf
	# Μετατροπή pdf αρχείου σε txt
	pdftotext $(NAME).pdf $(NAME).txt

view: test
	# Εμφάνιση txt αρχείου
	less $(NAME).txt
	rm *.log *.aux

clean:
	rm *.log *.aux
```

### Vimrc

Στο vimrc πρόσθεσα μερικά πράγματα:

```vimrc

" ALE Configuration
" Καλεί τους linters όταν ανοίγει το αρχείο
let g:ale_lint_on_enter = 1
" Καλεί τους linters όταν αποθηκεύεται το αρχείο
" Το προκαθορισμένο είναι 1 (On) και το βγάζω
let g:ale_lint_on_save = 0

" TagHighlight Configuration
" Κάνω map στο Normal Mode (nmap) τη συνάρτηση
" UpdateTypesFile στη συντόμευση st. Η συνάρτηση
" UpdateTypesFile καλεί την εφαρμογή ctags που δημιουργεί
" τις ετικέτες του κώδικα και τις διαβάζει.
nmap st :UpdateTypesFile<CR>

```

#### Asciinema: [IDE](https://asciinema.org/a/434276)

#### Εργαλεία: [Vim](https://www.vim.org/), [Vim-Airline](https://github.com/vim-airline/vim-airline), [ALE](https://github.com/dense-analysis/ale), [Flake8](https://flake8.pycqa.org/en/latest/), [TagHighlight](https://www.vim.org/scripts/script.php?script_id=2646), [ctags](https://github.com/universal-ctags/ctags),  [TexLive](https://tug.org/texlive/), [Poppler](https://poppler.freedesktop.org/), [Less](http://www.greenwoodsoftware.com/less/), [GNU Make](https://www.gnu.org/software/make/)

#### Πηγές: [How to Do 90% of What Plugins Do (With Just Vim)](https://www.youtube.com/watch?v=XA2WjJbmmoM)
