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
| 5 | Άσκηση προγραμματισμού |
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
