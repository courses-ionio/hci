----------------------

**ΤΜΗΜΑ ΠΛΗΡΟΦΟΡΙΚΗΣ**


Επικοινωνία Ανθρώπου Υπολογιστή (HCI)

Οπτικοποίηση δεδομένων χορηγιών (UK)

ΠΙΠΛΙΚΑΤΣΗΣ ΑΘΑΝΑΣΙΟΣ	
Π2015038

**Ο σύνδεσμος της σελίδας μου με την εφαρμογή :**
https://sakis475.github.io/D3js-uk-political-donations/


## Παραδοτέο 1
Ο σύνδεσμος της σελίδας μου με την εφαρμογή (χωρίς το .html στο τέλος) :

https://sakis475.github.io/D3js-uk-political-donations/

στο αποθετήριο: 

https://github.com/sakis475/D3js-uk-political-donations/tree/paradoteo1

## Παραδοτέο 2
Σημείωση: Υπάρχει σχολιασμός κώδικα στα αρχεία που έγιναν οι αλλαγές.

-Αλλαγή χρωμάτων στις μπάλες με τα δεδομένα, 
καθώς και στα αντίστοιχα 3 πεδία της ομαδοποίησης Split by party :

chart.js για αλλαγή χρωμάτων στις μπάλες (γραμμή #25, #97, #311)

https://github.com/sakis475/D3js-uk-political-donations/blob/paradoteo2/chart.js

style.css για αντίστοιχη αλλαγή χρωμάτων πλαισίων split by party (γραμμή #67)

https://github.com/sakis475/D3js-uk-political-donations/blob/paradoteo2/style.css

-Προσθήκη ήχου κάθε φορά που ο χρήστης της εφαρμογής 
κάνει κλικ σε μία από τις επιλογές/κουμπιά ομαδοποίησης των δεδομένων.

index.html για προσθήκη ήχου και ενσωμάτωση του κάθε φορά που γίνετε click (onclick) (γραμμή #47)

https://github.com/sakis475/D3js-uk-political-donations/blob/paradoteo2/index.html

-Τροποποίηση του κώδικα, έτσι ώστε όταν γίνετε κλικ σε κάθε μπάλα να ανοίγει ένα νέο 
παράθυρο με τα αποτελέσματα της αναζήτησης στο google για τον αντίστοιχο δωρητή.

chart.js προσθήκη της function mouseClick στο node, (γραμμή #111), η function mouseClick (γραμμή #365)

https://github.com/sakis475/D3js-uk-political-donations/blob/paradoteo2/chart.js

## Παραδοτέο 3

Σημείωση: Υπάρχει σχολιασμός κώδικα στα αρχεία που έγιναν οι αλλαγές.

1) Tο ποντίκι λειτουργεί ως μεγεθυντικός φακός όταν μεταφέρεται επάνω από λέξεις του κειμένου.
Αλλαγές έγιναν στο [style.css](https://github.com/sakis475/D3js-uk-political-donations/blob/paradoteo3/style.css) αρχείο όπου όταν γίνεται hover από κάποιο element(a,h1,p...) αυτό να κάνει zoom.
![zoom](https://raw.githubusercontent.com/sakis475/hci/master/projects/2015038/zoomtext.png)
2) Όταν το ποντίκι βρίσκεται μέσα στον κύκλο κάποιου δωρητή, ακούγεται η ονομασία του δωρητή και το ποσό της δωρεάς.

Για αυτή τη λειτουργικότητα χρησιμοποίησα μια δωρεάν βιβλιοθήκη:
http://www.masswerk.at/mespeak/

Αλλαγές έγιναν στο index.js αρχείο, στη mouseover και mouseout function
βλέπε line 424, 243.
Για να μην ακούγονται όλοι οι δωρητές μαζί κάθε φορά που το ποντίκι απλά τυχαίνει να σέρνετε από εκεί, έχω βάλει μια καθυστέρηση του μισού δευτερολέπτου. Πράγμα που σημαίνει ότι ο χρήστης πρέπει να έχει το ποντίκι πάνω από το κύκλο για μισό δευτερόλεπτο, για να ακουστεί ο δωρητής και το ποσό.


3) Τέλος έχω προσθέσει ακόμα ένα Split view όπου φαίνονται οι δωρεές με βάση το ποσό τους (μεγαλύτερο σε μικρότερο), και επιπλέον χρησιμοποιόντας SQL έχω δημιουργήσει νέες πληροφορίες με βάση τα δεδομένα στο 7500up.csv . Έχω βρει το ποσοστό του κάθε κόμματος με μεγαλύτερες και μικρότερες δωρεές, για κάθε τάξη μεγέθους (Enormus, Huge, Large,Normal, Small). 
![byamount](https://raw.githubusercontent.com/sakis475/hci/master/projects/2015038/splitbyamount.png)
