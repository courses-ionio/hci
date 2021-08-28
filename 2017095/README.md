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
| 2 | [Άσκηση προγραμματισμού: Form Validation](#παραδοτέο-2---form-validation) |
| 3 | [Άσκηση γραμμής εντολών: Edit The Vim Configuration File](#παραδοτέο-3---Vim-Configuration) |
| 4 | συμμετοχικό περιεχόμενο 1A |
| 5 | [Άσκηση προγραμματισμού: Image](#παραδοτέο-5---Image) |
| 6 | συμμετοχικό περιεχόμενο 2A |
| 7 | Άσκηση γραμμής εντολών |
| 8 | συμμετοχικό περιεχόμενο 1B |
| 9 | Άσκηση γραμμής εντολών |
| 10 | συμμετοχικό περιεχόμενο 2B |
| 11 | Άσκηση γραμμής εντολών |

## Παραδοτέο 2: Form Validation

Για το δεύτερο παραδοτέο επέλεξα την προγραμματιστική άσκηση Form Validation, στην οποία χρησιμοποιούνται Regular Expressions για τον έλεγχο σφαλμάτων εισόδου του χρήστη. Προσάρμοσα τον ήδη υπάρχων HTML κώδικα για τις ανάγκες κάθε κομματιού της άσκησης. Πιο συγκεκριμένα:

- Email: Τα email ακολουθούν τη μορφή: Αλφαριθμητικοί χαρακτήρες και τα σύμβολα !#$%^&\_, ο χαρακτήρας @, πεζά γράμματα, τελεία (.) και τέλος δύο ή τρία πεζά γράμματα. Υπάρχουν εξαιρέσεις σε αυτή τη μορφή, όπως για παράδειγμα η έλλειψη Top-Level Domain (admin@mailserver1) ή η χρήση τελειών στο πρώτο κομμάτι, αλλά τις παρέλειψα λόγω της σπανιότητάς και της πολυπλοκότητας τους (όσον αφορά τις κανονικές εκφράσεις).

<p align="center">
<img src=https://github.com/p17anto2/LessonImages/blob/main/HCI/2_email.png>
</p>

- Πιστωτικές Κάρτες: Για απλότητα στις κανονικές εκφράσεις, ο κώδικας δέχεται μόνο κάρτες τύπου Mastercard, καθώς υπάρχουν και άλλες με λιγότερα ψηφία ή διαφορετική μορφή. Η μορφή είναι τέσσερις τετράδες ψηφία χωρισμένα με κενό. Για το CVV η μορφή είναι 3 ψηφία.

<p align="center">
<img src=https://github.com/p17anto2/LessonImages/blob/main/HCI/2_credit.png>
</p>

- Ελληνικά Τηλέφωνα: Τα ελληνικά σταθερά τηλέφωνα ξεκινούν όλα με το ψηφίο 2 και είναι της μορφής 2xx-xxx-xxxx.

<p align="center">
<img src=https://github.com/p17anto2/LessonImages/blob/main/HCI/2_greek_num.png>
</p>

Στον CSS κώδικα, το μόνο που άλλαξα είναι το type του input σε form, και χρησιμοποίησα αυτόν τύπο σε κάθε κομμάτι, καθώς οπτικά, κάθε έλεγχος είναι ίδιος.

<p align="center">
<img src="https://github.com/p17anto2/LessonImages/blob/main/HCI/2_css.png">
</p>

#### Pibook: [\_remix/form-validation](https://github.com/p17anto2/site/blob/master/_remix/form-validation.md)
#### Codepen: [Form Validation](https://codepen.io/P2017095/pen/ExmqjJE)
#### Netlify: [Form Validation Answer](https://p2017095-ionio.netlify.app/remix/form-validation/)
#### Πηγές: [Email Adresses (Wikipedia)](https://en.wikipedia.org/wiki/Email_address), [Credit Cards (Medium)](https://medium.com/hootsuite-engineering/a-comprehensive-guide-to-validating-and-formatting-credit-cards-b9fa63ec7863), [Ελληνικά Τηλεφωνικά Νούμερα (Βικιπαίδεια)](https://el.wikipedia.org/wiki/%CE%A4%CE%B7%CE%BB%CE%B5%CF%86%CF%89%CE%BD%CE%B9%CE%BA%CE%BF%CE%AF_%CE%BA%CF%89%CE%B4%CE%B9%CE%BA%CE%BF%CE%AF_%CF%84%CE%B7%CF%82_%CE%95%CE%BB%CE%BB%CE%AC%CE%B4%CE%B1%CF%82)

## Παραδοτέο 3: Vim Configuration

Για το τρίτο παραδοτέο επέλεξα την άσκηση γραμμής εντολών Vim Configuration, όπου κάνω κάποιες βασικές ρυθμίσεις στη λειτουργικότητα του Vim. Χρησιμοποίησα το [QEMU](https://www.qemu.org/) για να τρέξω το [Void Linux Distribution](https://voidlinux.org/) στην βασική του (non-GUI) έκδοσή του.

Οι εντολές Vim Script που χρησιμοποίησα είναι οι εξής:

**set nu** : Εμφανίζει τον αριθμό γραμμής σε κάθε γραμμή.

<p align="center">
<img src="https://github.com/p17anto2/LessonImages/blob/main/HCI/3_bare.png"> 
<img src="https://github.com/p17anto2/LessonImages/blob/main/HCI/3_num.png"> 
</p>

**set smartindent** : Προσπαθεί να καταλάβει βάσει λέξεων-κλειδιών πού να τοποθετήσει τον κέρσορα. Για παράδειγμα, στη γλώσσα C, αν ο χρήστης πατήσει Enter σε insert mode ενώ η γραμμή που βρίσκεται ο κέρσορας τελειώνει σε ερωτηματικό, στην επόμενη γραμμή ο κέρσορας θα τοποθετηθεί εκεί που ξεκίνησε η στην οποία βρισκόταν. Αν τελειώνει σε {, θα ξεκινήσει ένα tab πιο μετά.

**filetype plugin indent on** : Αναγνωρίζει τον τύπο αρχείου του buffer από το extension του αρχείου, και φορτώνει συγκεκριμένες ρυθμίσεις για αυτόν τον τύπο αρχείου (το χρειάζεται η επόμενη εντολή).

**syntax on** : Δίνει έμφαση σε λέξεις κλειδιά ή κανονικές εκφράσεις, σύμφωνα με τον τύπο του αρχείου. Για παράδειγμα, στη C, το *#include* είναι λέξη κλειδί, και ό,τι ακολουθεί μετά ανάμεσα στις αγκύλες αναγνωρίζεται από κανονική έκφραση.

<p align="center">
<img src="https://github.com/p17anto2/LessonImages/blob/main/HCI/3_bare.png"> 
<img src="https://github.com/p17anto2/LessonImages/blob/main/HCI/3_syntax.png">
</p>

#### Asciinema: [Vim Configuration](https://asciinema.org/a/o4V0nxuU4B1nyNb9JInSNc7KF)

#### Πηγές: [Το δικό μου vimrc](https://github.com/p17anto2/LessonImages/blob/main/HCI/3_vimrc.vim).

## Παραδοτέο 5: Image

Ως πέμπτο παραδοτέο επέλεξα την άσκηση Image, όπου ζητείται η κατανόηση του Scalable Vector Graphics (SVG) format, καθώς και την τροποποίηση του ήδη υπάρχων κώδικα, ώστε να εμφανίζεται η εικόνα άλλη μία φορά στο μισό της μέγεθος.

Αρχικά, τα SVG είναι αρχεία τύπου εικόνας, όπου η πληροφορία που περιέχεται δεν αφορά pixel (όπως π.χ. το png), αλλά διανύσματα. Αυτό γίνεται μέσω προκαθορισμένων σχημάτων (circle, rectangle κ.λ.π.), χαρακτήρων Unicode και του στοιχείου path. Υπάρχει επίσης η δυνατότητα επιχρωμάτωσης (μονοχρωματικά, βαθμιδωτά, ή με μοτίβα), κίνησης, διαδραστικότητας κ.α.

Το στοιχείο path είναι ουσιαστικά είναι string που περιέχει κινήσεις μιας υποθετικής γραφίδας. Με την εντολή M ή m μετακινείται η γραφίδα, με την L ή l τραβάει μια γραμμή και με τις εντολές C, S, Q, T, and A αποτυπώνονται διάφορες ελλειπτικές και τύπου Bezier καμπύλες. Τέλος, με την εντολή Z τελειώνει το στοιχείο path.

Για το πρακτικό κομμάτι της άσκησης, πρόσθεσα το χαρακτηριστικό viewbox στο αρχείο, με το οποίο μπορείς να ορίσεις πόσα pixel περιέχονται μέσα στο χώρο που πιάνει η εικόνα. Εφόσον η εικόνα έχει μέγεθος 300x300, ορίζοντας το μέγεθος του viewbox σε 600x600, δηλαδή κάθε pixel της οθόνης να περιέχει δύο pixel της εικόνας, το σχήμα που περιέχει η εικόνα εμφανίζεται μισό.

Το αποτέλεσμα:

<p align="center">
<img src="https://github.com/p17anto2/LessonImages/blob/main/HCI/5_result.png">
</p>

<!--TODO-->

#### Pibook: [\_remix/image](https://github.com/p17anto2/site/blob/master/_remix/image.md)
#### Codepen: [Form Validation](https://codepen.io/P2017095/pen/ExXVmmM)
#### Netlify: [Form Validation Answer](https://p2017095-ionio.netlify.app/remix/image/)
#### Πηγές: [Scalable Vector Graphics (Wikipedia)](https://en.wikipedia.org/wiki/Scalable_Vector_Graphics#Functionality), [viewBox (Mozilla Docs)](https://developer.mozilla.org/en-US/docs/Web/SVG/Attribute/viewBox)
