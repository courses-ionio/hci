# Επικοινωνία Ανθρώπου Υπολογιστή
## Κυριάκος Μπαλτατζίδης 
Π2018176

---------------------------------------------------------------------------------------------------------------------
| Edpuzzle: p18balt |  [Github Profile](https://github.com/p18balt) |  [Asciinema](https://asciinema.org/~p18balt) | [ContattoContare](https://github.com/ContattoContare)
--------------------------------------------------------------------------------------------------------------------

## Εισαγωγή
Το μάθημα επικοινωνία ανθρώπου - υπολογιστή πιστεύω θα με βοηθήσει στο να καταναλάβω πλήρως τα στοιχεία που απαρτίζουν την διάδραση του ανθρώπου με τον υπολογιστή,θα μάθω πως μπορώ να χρησιμοποιώ εντολές που επιταγχύνουν τις διαδικασίες και μέσω τόσο του βιβλίου του μαθήματος όσο και τον εβδομαδιαίων βίντεο κουίζ θα με βοηθήσει να καταλάβω ποία είνα τα στοιχεία που διαφοροποιούν ένα καλό ως προς την διάδραση σύστημα από ένα κακό. Επιπλέον θα προσπαθήσω να μελετήσω λογισμικά που αλλάζουν τον τρόπο διάδρασης ανάλογα με τις ανάγκες του χρήστη.
[Discussions Link](https://github.com/courses-ionio/help/discussions/923)


## Παραδοτέο 2 
Έγινε εγκατάσταση Arch Linux (Dual boot 50~GB partition). Η εγκατάσταση του λογισμικού δεν με δυσκόλεψε ιδιαίτερα μιας και είχα μια πρώτη επαφή με Linux συστήματα από το μάθημα Τεχνολογία Λογισμικού.
Χρησιμοποιήθηκε η εντολή neofetch με σκοπό να δείξουμε τα χαρακτηριστικά του συστήματος και η εντολή journalctl -b για να προβάλουμε τα αρχεία καταστακευής του συστήματος. 
[Αsciinema Link](https://asciinema.org/a/cgX9FmflHdDIyr8ErN285IiOO)
[Discussions Link](https://github.com/courses-ionio/help/discussions/1292)

## Παραδοτέο 3
Προσθήκη Pubtech, Norton-Desktop στο site.
Έγινε η προσθήκη του pubtech που είναι ένα shell που προσφέρει διαδραστικά στοιχεία του συστήματος Macintosh σε λειτουργικό σύστημα Windows. Επιπλέον προσθέθηκε το Norton Desktop το οποίο αποτελεί επίσης ένα windows shell που επίσης προσφέρει διάδραση που μοιάζει με Macintosh.
[Pull Request _gallery](https://github.com/ContattoContare/_gallery/pull/3)
[Pull Request images](https://github.com/ContattoContare/images/pull/3)
[Norton Desktop Netlify](https://famous-faun-a7c70a.netlify.app/gallery/nortondesktop/)
[Pubtech Netlify](https://famous-faun-a7c70a.netlify.app/gallery/pubtech/)
[Discussion Link](https://github.com/courses-ionio/help/discussions/1476)

![Screenshot 2022-11-18 at 17 02 49](https://user-images.githubusercontent.com/93882637/202735221-22bc2899-c036-4e9f-ae01-056cbe5ed2f2.png)

![Screenshot 2022-11-18 at 17 02 29](https://user-images.githubusercontent.com/93882637/202735237-5631f0ff-b446-4715-a102-c515b5bb4f79.png)


Κατόπιν πολύ ορθής παράτηρησης του διδάσκοντα έγινε αλλαγή στην εικόνα του Pubtech από το λογότυπο σε μία εικόνα που όντως παρουσιάζει τα διαδραστικά στοιχεία του λογισμικού.

## Παραδοτέο 4
Έγιναν τα παρακάτω χρησιμοποιώντας το terminal:
- Καιρός μέσω τερματικού

```curl wttr.in/Greece ```
- Κατέβασμα mp4 αρχείου με το youtube-dl

```youtube-dl -f mp4 https://youtube.com/watchv?=YourLink``` 
- Green prompt 

``` export PS1='printf "\033[32m$ \033[39m"' ```

![asciicast](https://asciinema.org/a/TDYmuKCnxazji8NbYzdGXV18P.svg)

[Discussions Link](https://github.com/courses-ionio/help/discussions/1309)

## Παραδοτέο 5
Έγινε προσθήκη κατάλληλου md αρχείου στο Timeline και Slides με θεματικό κέντρο Windows shells που προσφέρουν διάδραση που μοιάζει με Macintosh.
[Netlify timeline](https://famous-faun-a7c70a.netlify.app/timeline/macintosh-windows-shells/)
[Netlify slides](https://famous-faun-a7c70a.netlify.app/slides/macintosh-windows-shells/)
[Pull request](https://github.com/ContattoContare/site/pull/15)
[Discussions Link](https://github.com/courses-ionio/help/discussions/1639)


## Παραδοτέο 6
Σε αυτό το παραδοτέο έγινε η προσθήκη υποσημείωσης το βιβλίο του μαθήματος μέσω κατάλληλων αλλαγών στο make-latex.sh, δημιουργία απαραίτητων φακέλων στο repository, χρησιμοποιώντας το comment.lua σαν φίλτρο . Αναφορικά με την χρησιμότητα της ανθρωποκεντρικής σχεδίασης.
 [Το βιβλίο σε pdf με την σημείωση](https://github.com/p18balt/kallipos/blob/master/book/book1.pdf)
![Screenshot 2022-11-17 at 16 31 08](https://user-images.githubusercontent.com/93882637/202872973-1dcc07c0-ca2e-422b-949e-df2e5137a58a.png)
[Screenshot σημείωσης](https://github.com/p18balt/kallipos/blob/master/picture/Screenshot%202022-11-17%20at%2016.26.28.png)
[Φίλτρο](https://github.com/p18balt/kallipos/blob/master/comment.lua)
[make-latex.sh](https://github.com/p18balt/kallipos/blob/master/make-latex.sh)
[Discussions Link](https://github.com/courses-ionio/help/discussions/1647)

## Παραδοτέο 7
Σε αυτό το παραδοτέο έγινε μελέτη περίπτωσης σχετικά με τα Arch Linux.
[Netlify Arch Linux cs](https://famous-faun-a7c70a.netlify.app/case-study/archlinux/)
[Link Discussions](https://github.com/courses-ionio/help/discussions/1703)

![PhotoArch](https://user-images.githubusercontent.com/93882637/204091935-c032da42-ec91-45ff-bd03-a140d27e955d.png)

## Παραδοτέο 8
Στο συγκεκριμένο παραδοτέο χρησιμοποιήθηκαν οι τεχνολογίες git, sed, convert για να δημιουργηθεί αρχείο bash που τοποθετεί της εικόνες στο submodule images,  κάνει μετονομασία με το sed το image_url ανάλογα με τις εικόνες που προσθέτει ο χρήστης και το github username αντίστοιχα περιλαμβάνει ένα menu με 6 επιλογές και επιπλέον δίνεται η επιλογή να κάνεις configure το github profile σου μέσω αυτού. 

[Repository url](https://github.com/p18balt/bash)

![asciicast](https://asciinema.org/a/OznbnZJhyhJOADke67H2eNI3c.svg)

[Link Discussions](https://github.com/courses-ionio/help/discussions/1833)

## Παραδοτέο 9
Σε αυτό το παραδοτέο προστέθηκε στον ιστότοπο του βιβλίου, η βιογραφία του Peter Norton (Norton Commander, IBM PC programmer, Norton, Computing Inc etc.)

[Netlify](https://famous-faun-a7c70a.netlify.app/biography/peter-norton/)
[Link Discussions](https://github.com/courses-ionio/help/discussions/1767)

![Screenshot 2022-11-26 at 15 47 11](https://user-images.githubusercontent.com/93882637/204092302-8be3969e-6ad6-4a47-978e-c4c5664570e8.png)

## Παραδοτέο 10
Χρησιμοποιήθηκε το εργαλείο groff για να δημιουργηθεί ένα document που έχει πάνω αριστερά το όνομα μου και τον ΑΜ (με αριστερή σύνταξη) και επείτα από κάτω και στο κεντρό του κειμένου ο τίτλος "Ionian University Hci Course" και έγινε η αποθήκευση του παραάνω εγγράφου σε αρχείο με όνομα outputhci.

![asciicast](https://asciinema.org/a/0biaYoCa35xXULAT0zdkUuJgN.svg)

[Link Discussions](https://github.com/courses-ionio/help/discussions/1834)

## Παραδοτέο 11 
Σε αυτό το παραδοτέο δημιουργήθηκε το βιβλίο του μαθήματος σε .epub μορφή η συγκεκριμένη μορφή μέσω των animation αλλαγής σελλίδας και της μορφοποιήσης του κειμένου προσφέρουν στον χρήστη μια εμπειρία ανάγνωσης που μοιάζει με την ανάγνωση ενός κλασικού βιβλίου.

![Screenshot 2022-11-26 at 16 14 06](https://user-images.githubusercontent.com/93882637/204093868-4dcf6488-da88-4493-acc7-8fe4d1b260ca.png)

[make-latex.sh](https://github.com/p18balt/kallipos/blob/master/make-latex.sh)
[Repository](https://github.com/p18balt/kallipos)
[book.epub](https://github.com/p18balt/kallipos/blob/master/book/book.epub)
[Link Discussions](https://github.com/courses-ionio/help/discussions/1768)
