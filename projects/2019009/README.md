# :file_folder: Κεντρικος φακελος παραδοτεων 
## :man: Στοιχεια φοιτητη
   ##### ΟΝΟΜΑ-ΕΠΩΝΥΜΟ       :  Ιωάννης Μπάρλας
   #####  ΑΡΙΘΜΟΣ ΜΗΤΡΩΟΥ    :  Π2019009
   #####  asciinema profile  :  https://asciinema.org/~p2019009
   #####  codepen   profile  :  https://codepen.io/p19barl
   
 
 
# Παραδοτέο:one:

## Πίνακας με σύνοψη των προθεσμιών και των παραδοτέων
| Εβδομάδα* | Παραδοτέο |
| --- | --- |
| 1 | [Syllabus](https://github.com/giannisbarlas1/hci/blob/drafts/projects/2019009/README.md#syllabus)|
| 2 | [Form Validation](https://pibook.epidro.me/remix/form-validation/)
| 3 | [Change your command prompt](https://github.com/epidrome/dokey#warmup)
| 4 | [Image processing](https://pibook.epidro.me/remix/image-filter/)
| 5 | [download mp3](https://github.com/epidrome/dokey#hci)
| 6 | [BUTTON CONCEPT](https://codepen.io/p19barl/pen/PozRgpY)
| 7 |[status bar to your shell/editor](https://github.com/epidrome/dokey#hci)|
| 8 | Άσκηση προγραμματισμού (HCI) ή γραμμής εντολών (SW) |
| 9 | Άσκηση γραμμής εντολών (SW) ή αίτημα ενσωμάτωσης (CSCW, IV) |
| 10 | συμμετοχικό περιεχόμενο |
| 11 | αίτημα ενσωμάτωσης (CSCW, IV) |
| 12 | Τελική αναφορά* |


## Syllabus

Η άνθηση της τεχνολογίας τα τελευταία χρόνια έχει εδραιώσει τον υπολογιστή στην καθημερινότητα των ανθρώπων  για αυτό και η αλληλεπίδραση αυτών των δύο είναι πολύ σημαντική αφού σήμερα ένας υπολογιστής μπορεί να εκτελέσει τεράστιας σημασίας  έργα .Μέσα από το μάθημα επικοινωνία ανθρώπου υπολογιστή κύριοι σκοποί θα ήταν η κατανόηση και σχεδίαση εύχρηστων διαδραστικών συστημάτων, η εξοικείωση σε νεες τεχνολογίες προγραμματισμού της διάδρασης αφού πλέον η τεχνολογία εξελίσσεται με ταχύτατο ρυθμό,η κατανόηση λειτουργιάς των συσκευών εισόδου εξόδου και πως αυτές μπορούν να φανούν χρήσιμες στην επικοινωνία ανθρώπου-υπολογιστή επαφη με μεθοδολογιες σχεδιασης διαδραστικων συστημάτων καθως και οι μέθοδοι αξιολόγησης διαδραστικών συστημάτων(κατά πόσο μια σχεδίαση είναι εύχρηστη η όχι).τέλος ένας ακόμα προσωπικός στόχος είναι  η επιτυχής  εκπληρωση των υποχρεωσεων του μαθήματος η κατανόηση όσων περισσότερων γνώσεων γίνεται και η μελοντικη αξιοποιηση των γνωσεων αυτων αφου η εποικοινωνια ανθρωπου-υπολογιστη είναι ενας προσωπικα ενδραφερων τομεας.

# Παραδοτεο:two: Form validation
##### link επιλυσης της ασκησης : https://codepen.io/p19barl/pen/BazzKXB
##### link πηγης   : [code grepper](https://www.codegrepper.com/code-examples/html/html+input+phone+number+unicode+)
Η ασκηση ειναι βασισμενη σε regular expression για να εντοπίσει σφάλματα στην είσοδο του χρήστη και σαν επεκταση του παραδειγματος προσθεσα τα ζητουμενα οπου ηταν 
###### έλεγχος για email, credit card και ελληνικό τηλεφωνικό νούμερο.
Πιο συγκεκριμενα για την προσθηκη email,credit card και ελληνικο τηλεφωνικο νουμερο προσθεσα στον *html* κωδικα 3 headers τον h1 για το ελλινικο τηλεφωνο,τον h2  για το email και τον  h3 για την credit card
```
<form>
  <h1>Greek Phone Number Validation</h1>
  <label for="phonenum">Phone Number (format: xxxx-xx-xxxx):</label><br/>
  <input id="phonenum" type="tel" value="+30" pattern="+30\d{4}-\d{2}-\d{4}$" required >
    <input type="submit" value="Submit">
<br>
 <h2>Email Validation</h2>
       <label for="phoenenum">Email
       (format:xxxxx@mymail.com):</label><br>
       <input id="phoenenum" type"tel"
       pattern=".+@mymail.com" size="30"required >
       <input type="submit" value="Submit">
 
  <h3>Credit Card Validation</h3>
       <label for="phoenenum">credit card
       (format:xxxx-xxxx-xxxx-xxxx):</label><br>
       <input id="phoenenum" type"tel"
       pattern="^\d{4}-\d{4}-\d{4}-\d{4}$" required >
       <input type="submit" value="Submit">
 
 
  <form>


```






# Παραδοτεο:three:Change your command prompt
Η ασκηση γραμμης εντολων ειναι η πρωτη απο τις διαθεσιμες στον πινακα warm up στο https://github.com/epidrome/dokey#warmup και σαν ζητουμενα ειχε: (1.0 change your
command prompt with your student ID), (list your dot files), (display your shell configuration file
and display system information (hardware+software).Για την καταγραφη του terminal εκανα install το asciinema με την εντολη
### sudo apt-get install asciinema.
Ακομα χρειαστηκα τον nano editor για να κανω την αλλαγη του command prompt και εκανα εγκατασταση το neofetch για να εμφανισω τα system information (hardware+software).


<a href="https://asciinema.org/a/380119" target="_blank"><img src="https://asciinema.org/a/380119.svg" /></a>



# Παραδοτεο:four:Image processing
##### link ακσησης : https://codepen.io/sckarolos/pen/VLJWMQ
Η ασκηση προγραματισμου που επελεξα ως παραδοτεο 4 ειναι η ασκηση image processing η οποια ειχε ως ζητουμενο 
##### τροποποιήστε το παράδειγμα χρησιμοποιώντας φίλτρα εικόνας και συνδυασμούς αυτών)Στην επιλυση της ασκησης χρησιμοποιησα τα φιλτρα εικονας που ειχε ως σχολια στο css κομματι της ασκησης.

<p class="codepen" data-height="265" data-theme-id="light" data-default-tab="css,result" data-user="p19barl" data-slug-hash="MWeVRzr" style="height: 265px; box-sizing: border-box; display: flex; align-items: center; justify-content: center; border: 2px solid; margin: 1em 0; padding: 1em;" data-pen-title="image filter 1">
  <span>See the Pen <a href="https://codepen.io/p19barl/pen/MWeVRzr">
  image filter 1</a> by p2019009 (<a href="https://codepen.io/p19barl">@p19barl</a>)
  on <a href="https://codepen.io">CodePen</a>.</span>
</p>
https://codepen.io/p19barl/pen/MWeVRzr

Στην παρακατω εικονα υλοποιω ενα φιλτρο εικονας αφου πρωτα το απενεργοποιω απο σχολιο του κωδικα και βαζοντας πριν απο τα brackets το tag image:hoover ετσι ωστε οταν περασω το ποντικι πανω απο την εικονα να ενεργοποιηθει το επιλεγμενο φιλτρο το ιδο κανω και στις επομενες φωτογραφιες
![imag1](https://user-images.githubusercontent.com/72620235/102694512-2e6eb900-422a-11eb-8886-f1fcfa006903.png)
![img](https://user-images.githubusercontent.com/72620235/102699365-cd0c1180-424c-11eb-8fca-c0b465d39640.png)
Ακομα σε αυτην την φωτογραφια κανω συνδιασμο 2 φιλτρων εικονας την sepia και grayscale

![imag](https://user-images.githubusercontent.com/72620235/102699446-6e936300-424d-11eb-9ed3-45cff1aa52ba.png)



# Παραδοτεο:five: download mp3
#####  link ασκησης: https://github.com/epidrome/dokey#hci
#####  link πηγης:https://github.com/mpv-player/mpv
Ως παραδοτεο 5 εκανα την  ασκηση γραμμης εντολων download mp3 απο τον πινακα hci με ζητουμενο search, download and play (with the terminal) your favorite song of the month from youtube.με την εντολη ```sudo apt-get install``` εκανα εγκατασταση το download-dl,υστερα με την εντολη  ```download-dl -F https://..... ```κανω αναζητηση το αρχειο και ολα τα δυνατα φορματ της διευθυνσης μετα με την εντολη ```download-dl -x ```κανω καταβασμα μονο το audio αρχειο και αφου εχω κανει install τον mplayer ανοιγω το αρχειο mp3 


<a href="https://asciinema.org/a/377990" target="_blank"><img src="https://asciinema.org/a/377990.svg" /></a>



# Παραδοτεο:six:BUTTON CONCEPT 
#### link ασκησης : https://codepen.io/p19barl/pen/PozRgpY

Ως παραδοτεο 6 απο τις ασκησεις προγραμματισμου επελιξα την BUTTON CONCEPT οπου σαν ζητουμενο η ασκηση ειχε: (Eπεκτείνετε τον κώδικα του παραδείγματος έτσι ώστε κατά την επιλογή του κουμπιού (κλικ), να εφαρμόζεται μια λειτουργία της επιλογής σας.)Ως επιπλεον ενεργεια κατα την επιλογη (κλικ) του Button εκανα το ανοιγμα μιας νεας καρτελας οπου μας οδηγει στην κεντρικη σελιδα του youtube.για να το πετυχω αυτο αλλαξα λιγο τον κωδικα Html και css για να σχεδιασω το button και στην συνεχεια προσθεσα τον παρακατω js κωδικα για να πετυχω το ανοιγμα της νεας καρτελας
```

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

https://codepen.io/p19barl/pen/PozRgpY


```


# Παραδοτεο:seven:(Ασκηση γραμμης εντολλων)
Ως παραδοτεο 7 εκανα την ασκηση [status bar](https://github.com/epidrome/dokey#hci) οπου σαν ζητουμενο ειχε να επεξαργαστω και να διαμορφωσω τον shell
βαζοντας ενα status bar.για να το πετυχω εκανα εγκατασταση powerline status bar με την παρκατω εντολη sudo add-apt-repository universe και μετα  sudo apt install --yes powerline και εκανα configure το powrline για το bash με τον παρακατω κωδικα που εριξα μεσα στο /.bashrc
``` 
# Powerline configuration
if [ -f /usr/share/powerline/bindings/bash/powerline.sh ]; then
  powerline-daemon -q
  POWERLINE_BASH_CONTINUATION=1
  POWERLINE_BASH_SELECT=1
  source /usr/share/powerline/bindings/bash/powerline.sh
fi

 ```
 και εκανα  apply changes με την εντολη  source ~/.bashrc ΣΗΜΕΙΩΣΗ. ΤΟ ΟΝΟΜΑ ROOT ΔΕΝ ΚΑΤΑΦΕΡΑ ΝΑ ΤΟ ΑΛΛΑΞΩ ΚΑΙ ΕΙΝΑΙ ΤΟ root1212 ομως διχνω στο asciinema video το hostname δηλαδη το αμ μου
 <a href="https://asciinema.org/a/380331" target="_blank"><img src="https://asciinema.org/a/380331.svg" /></a>




# ΠΑΡΑΔΟΤΕΟ:eight:(Ασκηση προγραμματισμου)
link επιλυσης : https://codepen.io/p19barl/pen/JjRKzGg
Ως παραδοτεο 8 εκανα την ασκηση προγραμματισμου Sortable List οπου δινοταν μια λιστα και ειχα σαν ζητουμενο (Αλλάξτε το χρώμα ή/και το ύψος των στοιχείων της λίστας καθώς και την απόσταση μεταξύ τους).Ετσι για να αλλαξω το χρωμα τον κουτιων της λιστας πηγα στην γραμμη 14 στον ccs κωδικα και στην ``background-color`` αλλαξα το χρωμα σε ``#379``,μετα για να αλλαξω το υψος πηγα στην γραμμη 12 και στην ```height``` και αλλαξα την τιμη σε ```28px``` και τελος για να αλλαξω την αποσταση μεταξυ των στοιχειων πηγα στην γραμμη 8 αλλαξα την τιμη ```margin σε 0 3px (25px) 3px ```
![images](https://user-images.githubusercontent.com/72620235/102885660-68270600-445c-11eb-86ad-73edf37fdd1e.png)



