### :paperclip: Μάθημα: Επικοινωνία Ανθρώπου Υπολογιστή(hci)

<hr>
<h4>Ονοματεπώνυμο: Δημοστέν Τζάμα
<br>
Α.Μ.: Π2019213</h4>


:newspaper:: [GitHub Profile](https://github.com/p19tzam/)<br>
:email:: [Student Mail](mailto:p19tzam)<br>
:link:: [codepen.io Profile](https://codepen.io/dhmosfunk)<br>
<hr>
<br>
<h1>:file_folder:: Παραδοτέα και Τελική αναφορά</h1>
<br><br><br>

<h2>   :book:: Παραδοτέο 1</h2>





<h3> Πίνακας με σύνοψη των προθεσμιών και των παραδοτέων</h3>

| Εβδομάδα* | Παραδοτέο |
| --- | --- |
| 1 | Φορκ του αποθετηρίου και δημιουργία της σελίδας της αναφοράς με τα προσωπικά στοιχεία σας, της σύνοψης με αυτόν τον πίνακα περιεχομένων, και συγγραφή της εισαγωγής με περιγραφή των αναγκών και των στόχων σας για το αντίστοιχο μάθημα* |
| 2 | [Άσκηση προγραμματισμού ή βιογραφικό  (SW)](https://github.com/p19tzam/hci/blob/p2019213/projects/p2019213/README.md#---book-%CF%80%CE%B1%CF%81%CE%B1%CE%B4%CE%BF%CF%84%CE%AD%CE%BF-2) |
| 3 | [Άσκηση γραμμής εντολών](https://github.com/p19tzam/hci/blob/p2019213/projects/p2019213/README.md#---book-%CF%80%CE%B1%CF%81%CE%B1%CE%B4%CE%BF%CF%84%CE%AD%CE%BF-3) |
| 4 | Άσκηση προγραμματισμού ή αίτημα ενσωμάτωσης (CSCW, IV) ή βιογραφικό  (SW) |
| 5 | Άσκηση γραμμής εντολών |
| 6 | Άσκηση προγραμματισμού (HCI) ή γραμμής εντολών (SW) ή συμμετοχικό περιεχόμενο |
| 7 | Άσκηση γραμμής εντολών (SW) ή αίτημα ενσωμάτωσης (CSCW, IV) |
| 8 | Άσκηση προγραμματισμού (HCI) ή γραμμής εντολών (SW) |
| 9 | Άσκηση γραμμής εντολών (SW) ή αίτημα ενσωμάτωσης (CSCW, IV) |
| 10 | συμμετοχικό περιεχόμενο |
| 11 | αίτημα ενσωμάτωσης (CSCW, IV) |
| 12 | Τελική αναφορά* |
<br/>

<p>Μέσα από το μάθημα επικοινωνία ανθρώπου υπολογιστή θέλω να επεκτείνω τις γνώσεις μου πάνω στον προγραμματισμό να μπορώ να χρησιμοποιώ το GitHub μέσω των παραδοτέων(Ασκήσεων) ώστε να το εξελίξω και αυτο.
    Επιπλέον  θέλω να διευρύνω τις γνώσεις μου στο τερματικό(γραμμή εντολών) και γενικότερα θέλω να μάθω όσο μπορώ περισσότερα πράγματα μέσα από αυτό το μάθημα που να έχουν σχέση με την πληροφορική.
</p> 

<br>
<br>
<br>
<h2>   :book:: Παραδοτέο 2</a></h2>

### :pushpin:: [ΆΣΚΗΣΗ ΠΡΟΓΡΑΜΜΑΤΙΣΜΟΎ 1 (Button)](https://youthful-shannon-5ffcc9.netlify.app/remix/button/)
#### [Άσκηση προγραμματισμού 1 (Button) codepen.io](https://codepen.io/dhmosfunk/pen/OJXMZyQ)
<p> Η τροποποίηση που πραγματοποίησα σε αυτή την άσκηση προγραμματισμού(BUTTON) έχει την εξής λειτουργία: είναι ένα κουμπί(BUTTON) που ονομάζεται MY GITHUB όταν κάνουμε click στο button λοιπόν ανοίγει ένα NEW TAB και μας μεταφέρει στο GITHUB προφίλ μου.</p>
<p> Οι τροποποιήσεις που έκανα είναι η εξής: αφαίρεσα το text που προυπήρχε(REMOVE) και πρόσθεσα την λέξη MY GITHUB επίσης εκεί που υπήρχε το (X) πρόσθεσα μια εικόνα(Icon) του GitHub και άλλαξα τα χρώματα. Για να κάνω αυτές τις τροποποιήσεις έπαιξα λίγο με τον κώδικα από το αρχείο HTML και απο το αρχείο CSS. Επίσης για να κανω λειτουργικο το BUTTON έπρεπε να επεξεργαστω το αρχείο javascript(jQuery).</p>
<br>

### :heavy_plus_sign: Πρόσθετος κώδικας στην javascript(jQuery)

```javascript
$(document).ready(function () {
	return $('.button').click(function () {
		var win = window.open('https://github.com/p19tzam', '_blank');
		if (win) {
			win.focus();
		} else {
			alert('Please allow popups for this website');
		}
		return setTimeout(removeSuccess, 3000);
    });
}); 
```
Στο μπλόκ αυτής της γραμμής `return $('.button').click(function ()` σημαίνει ότι όταν το BUTTON γίνει CLICK να εκτελέσει τις λειτουργίες `var win = window.open('https://github.com/p19tzam', '_blank');`
Επίσης αν έχετε τα popups disallow μας εμφανίζει ενα Alert με ενα message για να κάνουμε allow τα popups.

<br>
<br>
<br>

<h2>   :book:: Παραδοτέο 3</a></h2>

### :pushpin:: ΕΡΓΑΣΙΑ ΓΡΑΜΜΗΣ ΕΝΤΟΛΩΝ 1 (hci πρώτη εργασία της επιλογής).
<br>

Η πρώτη εργασία γραμμής εντολών που επέλεξα είναι αυτή στο πρώτο box απο το [hci tags](https://github.com/epidrome/dokey) που έχει τα εξής <b>deliverables</b> `[(1.0 change your command prompt with your student ID), (2.0 list your dot files), (3.0 display your shell configuration file) (4.0 and display system information (hardware+software))]`.
<br><br>
Για να κάνω record χρησιμοποίησα το asciinema που το κάνεις Install στα linux και είναι εύκολο στην χρήση του για install - `sudo apt-get install asciinema`

`Επίσης εξηγώ μέσα στο asciinema μέσο απο το τερματικό με σχόλια το τι κάνω.`
<br>

#### 1.0 change your command prompt with your student ID

<a href="https://asciinema.org/a/366600" target="_blank"><img src="https://asciinema.org/a/366600.svg" /></a>
<br>

#### 2.0 list your dot files
<a href="https://asciinema.org/a/366686" target="_blank"><img src="https://asciinema.org/a/366686.svg" /></a>
<br>

#### 3.0 display your shell configuration file



 


#### :arrow_double_up:: [Επιστροφή στην αρχή.](https://github.com/p19tzam/hci/blob/p2019213/projects/p2019213/README.md#paperclip-%CE%BC%CE%AC%CE%B8%CE%B7%CE%BC%CE%B1-%CE%B5%CF%80%CE%B9%CE%BA%CE%BF%CE%B9%CE%BD%CF%89%CE%BD%CE%AF%CE%B1-%CE%B1%CE%BD%CE%B8%CF%81%CF%8E%CF%80%CE%BF%CF%85-%CF%85%CF%80%CE%BF%CE%BB%CE%BF%CE%B3%CE%B9%CF%83%CF%84%CE%AEhci)
