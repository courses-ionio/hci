# Data Visualization
## Γιάννης Μεγαλιός, Π2015050

## Σύνοψη

Η εφαρμογή δόθηκε έτοιμη. Πραγματοποιήθηκαν αισθητικές αλλαγές σε όλα τα αρχεία που αυτή χρησιμοποιούσε.

## Εισαγωγή

Η παρούσα εργασία πραγματοποιήθηκε κατά το ακαδημαϊκό έτος 2017-2018 στα πλαίσια του μαθήματος "Επικοινωνία Ανθρώπου - Υπολογιστή" του Γ' εξαμήνου στο τμήμα πληροφορικής του Ιονίου Πανεπιστημίου. Υλοποιήθηκαν τα 3 πρώτα ζητούμενα παραδοτέα.

## Επιλογή εργαλείων

Η εργασία απαίτησε ελάχιστες γνώσεις JavaScript, HTML, CSS, και github. Οι αλλαγές που ζητήθηκαν χρειάστηκαν απλή και λιτή χρήση της μηχανής αναζήτησης google.

## Διαδικασία ανάπτυξης

Αρχικά, δημιουργήθηκε forked repository για να γίνουν οι αλλαγές σε μεμονωμένο περιβάλλον. Προκειμένου η εφαρμογή να εμφανίζεται ως ιστοσελίδα κι όχι ως αρχείο (χωρίς κατάληξη .html) έγινε μετονομασία του "full-viz.html" σε "index.html".

Ο σύνδεσμος του αποθετηρίου: https://github.com/johnalkmeg/D3js-uk-political-donations

Ο σύνδεσμος υλοποίησης της εφαρμογής: https://johnalkmeg.github.io/D3js-uk-political-donations/ 


Στη συνέχεια, πραγματοποιήθηκαν αλλαγές στα χρώματα των διαφορετικών γραφικών αναπαραστάσεων των δεδομένων.

Αλλαγές στα χρώματα:
https://github.com/ioniodi/D3js-uk-political-donations/commit/a959fc7f416c4d7d899bd64493d38a453f7e7af9

https://github.com/ioniodi/D3js-uk-political-donations/commit/d6207a4fa8050129f46cca307a98bc4b613cd724


Προκειμένου να αυξηθεί η αίσθηση της διάδρασης, προστέθηκε ένα αρχείο ήχου στο αποθετήριο και ένα κομμάτι κώδικα που να το αναπαράγει κάθε φορά που ο χρήστης αποφασίζει να αλλάξει τα προβαλλόμενα δεδομένα.

Το αρχείο για τον ήχο:
https://github.com/ioniodi/D3js-uk-political-donations/commit/35fce221094d0a5a1501743fb972718f1c756972


Οι αλλαγές στον κώδικα για τον ήχο:
https://github.com/ioniodi/D3js-uk-political-donations/commit/03fcf8234bccfd5c44a124d921fd5d51431fbe21

https://github.com/ioniodi/D3js-uk-political-donations/commit/d849c8c5422e9911b68bd8eab010e60daaa05420


Μία πολύ χρήσιμη πτυχή της εργασίας είναι η αυτοματοποιημένη αναζήτηση των στοιχείων του δωρητή που ενδιαφέρει το χρηστή με ένα απλό κλικ. 

Η εντολή για την αναζήτηση:
https://github.com/ioniodi/D3js-uk-political-donations/commit/d2f8284b2ef3ce27e0b58c71011bda820f0172df


Εν τέλει, για να είναι πιο εύχρηστη η εφαρμογή προς άτομα με ειδικές ανάγκες, προστέθηκε η λειτουργία αυτοματοποιημένου λόγου, με όλα τα στοιχεία που περιείχε κάθε node δεδομένων, απλά με την μετακίνηση του ποντικιού πάνω από τη γραφική του αναπαράσταση (μπάλα). Για αποσυμφόρηση των ηχητικών δεκτών του χρήστη (αυτιά), η μετακίνηση του ποντικιού έξω από τη μπάλα σταματά την αναπαραγωγή ήχου. Ταυτόχρονα, δημιουργήθηκε και η κατάλληλη συνάρτηση για να μεγεθύνεται όποιο γραπτό μέρος της εργασίας στοχεύει ο χρήστης με το ποντίκι.

Προσθήκη φωνητικού εφέ: https://github.com/ioniodi/D3js-uk-political-donations/commit/aaed88c5d279cc8d7be7c100be87dc6b05d2838b

Προσθήκη zoom: https://github.com/ioniodi/D3js-uk-political-donations/commit/5d71322d43e181ab21ec4205f128bbea79c893d9

https://github.com/ioniodi/D3js-uk-political-donations/commit/f0576ef1bc763c4034bb2a149e948b7c6a411392

https://github.com/ioniodi/D3js-uk-political-donations/commit/eaac97353c1b0010e6fdfba1e0b335a63c3ab985

Η προσθήκη του group by amount type απέτυχε, με αποτέλεσμα να αφαιρέσω όλες τις αλλαγές για να λειτουργεί η εφαρμογή. Οι αλλαγές που δεν παραδίδονται φαίνονται εδώ: https://github.com/ioniodi/D3js-uk-political-donations/commit/20571fc15397734923d5089b5053eba310071262

https://github.com/ioniodi/D3js-uk-political-donations/commit/d4679ad74686201f54808636f2baf1aa15cb5444

https://github.com/ioniodi/D3js-uk-political-donations/commit/7325788950521ab349845934acdfd97f40dde2e1

Τα ζητούμενα του 4ου παραδοτέου παραμελήθηκαν.

## Ενδεικτικές οθόνες

![.](https://github.com/johnalkmeg/Telikh-Anafora-va2018/blob/master/Screenshot-2018-1-26%20Who's%20funding%20the%20big%20three%20.png)

![.](https://github.com/johnalkmeg/Telikh-Anafora-va2018/blob/master/Screenshot-2018-1-26%20Who's%20funding%20the%20big%20three%20(1).png)

## Συμπεράσματα:  

Οι γνώσεις που χρειάστηκαν υπάρχουν ελεύθερες στον παγκόσμιο ιστό. Συγκεκριμένα, η JavaScript, η HTML και η CSS είναι απλές γλώσσες που χρησιμοποιούνται ούτος ή άλλος σε πληθώρα ιστοσελίδων. Η λειτουργία github pages είναι ένα καλό παράδειγμα hosting ιστοσελίδας με ένα απλό αποθετήριο. Η βιβλιοθήκη D3 της JavaScript επιτρέπει την άμεση οπτικοποίηση των αλλαγών στην εφαρμογή, λειτουργία πολύ χρήσιμη για την εξέλιξη της εργασίας.
