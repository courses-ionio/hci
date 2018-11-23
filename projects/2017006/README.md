# Μάθημα: Επικοινωνία Ανθώπου-Υπολογιστή
## Εργασία περιεχομένου (παραδοτέο Α)

### Ονοματεπώνυμο: Κουγιά Ιωάννα
### Αριθμός Μητρώου: Π2017006
Link αποθετηρίου: https://github.com/p17koug/gr
Εκτελέσιμο Link: https://p17koug.github.io/gr/
## Ζητούμενα Links: 

Link αλλαγής config: https://github.com/p17koug/gr/blob/gh-pages/_config.yml


Link πρώτης εικόνας: https://github.com/p17koug/gr/blob/gh-pages/_gallery/scratchinput.md


Link δεύτερης εικόνας: https://github.com/p17koug/gr/commit/8a99ab40dc64d7eebf30c3c37fa3a8773645a9be


Link τρίτης εικόνας: https://github.com/p17koug/gr/commit/e056f33fe708085b7e7c4dfda8a99b18cd167319


Link τέταρτης εικόνας: https://github.com/p17koug/gr/blob/gh-pages/_gallery/i-limb.md


Link πέμπτης εικόνας: https://github.com/p17koug/gr/commit/0a050427999539d439b219af703f8e0b666ebd55

## Εργασία Ανάπτυξης  Παραδοτέο Α 
 Εκτελέσιμο link : https://p17koug.github.io/D3js-US-educational-attainment/
 link αποθετηρίου: https://github.com/p17koug/D3js-US-educational-attainment
 
 ### Εκπλήρωση ζητούμενων πρώτου παραδοτέου
 - [x]  Άλλαξα τα χρώματα στα 3 γραφήματα.
 - [x] Αντικατέστησα τις διεπαφές στα "κουμπιά" του 2ου και 3ου γραφήματος.
 - [x] Όταν το ποντίκι διέρχεται επάνω από κάθε επιλογή του menu στην κορυφή της σελίδας, ακούγεται κάποιος ήχος.
 - [x] Όταν το ποντίκι διέρχεται πάνω από κάποια πρόταση/κείμενο της σελίδας ή περιοχή που περιλαμβάνει γραπτή πληροφορία (π.χ. κάποιο τμήμα     γραφήματος), ακούγεται αυτόματα η αφήγηση του κειμένου (text-to-speech).
 - [x] Εφάρμοσα responsive design στη σελίδα (Bootstrap) και κυρίως στο αρχικό menu έτσι ώστε να προσαρμόζεται σε οθόνες διαφορετικών διαστάσεων.
* 1ο Ζητούμενο - Αλλάξτε τα χρώματα στα 3 γραφήματα.
 Για την αλλαγή των χρωμάτων στα γραφήματα χρειάστηκε να τροποποιηθούν οι  δεκαεξαδικές τιμές της μεταβλητής colour της συνάρτησης donutChart στο αρχείο "script_1.js", οι 4 δεκαεξαδικές τιμές της συνθήκης if (treeSumSortType == "number") στο αρχείο "script_2.js" και οι 7 δεκαεξαδικές τιμές της μεταβλητής color στο αρχείο "script_3.js.Τα παραπάνω αρχεία βρίσκονται όλα στον φάκελο scripts.
 * 2ο Ζητούμενο - Αντικαταστήστε τις διεπαφές στα "κουμπιά" του 2ου και 3ου γραφήματος με άλλες της επιλογής σας.
 Για το δεύτερο ζητούμενο οι αλλαγές έγιναν στο αρχείο "style.css" που βρίσκεται στον φάκελο stylesheets(που βρίσκεται αντίστοιχα στον φάκελο assets).Συγκεκριμένα άλλαξα τα τα στοιχεία στις γραμμές του κώδικα 95-98 και 103 δηλαδή τα background-color,padding,font-family,font-size, background-color καθώς και πρόσθεσα τα border και border style.
 * 3ο Ζητούμενο - Όταν το ποντίκι διέρχεται επάνω από κάθε επιλογή του menu στην κορυφή της σελίδας, να ακούγεται κάποιος ήχος της επιλογής σας.
 Αρχικά κατέβασα ένα ήχο σε mp3 μορφή και ονόμασα το αρχείο μου hover_sound , μετά μετέτρεψα το αρχείο αυτο και σε ogg και τα έκανα upload στο προσωπικό μου αποθετήριο.Έπειτα έκανα upload και το αρχέιο sound-mouseover.js και μετά εισήγαγα  το παρακάτω κομμάτι κώδικα στο index.html αρχείο μου :
  ```
  <audio>
	<source src="hover_sound.mp3" type="audio/mpeg"></source>
	<source src="hover_sound.ogg" type="audio/ogg"></source>
</audio>
```
και το 
``` <script type="text/javascript" src="sound-mouseover.js"></script> ```
ενώ στη συνέχεια τροποποίησα τις γραμμές 23 ως 26 προσθέτοντας onmouseover="playclip(); σε κάθε μία απο τις 4 επιλογές (top,national,regional,state).
* 4ο Ζητούμενο - Όταν το ποντίκι διέρχεται πάνω από κάποια πρόταση/κείμενο της σελίδας ή περιοχή που περιλαμβάνει γραπτή πληροφορία (π.χ. κάποιο τμήμα γραφήματος), να ακούγεται αυτόματα η αφήγηση του κειμένου (text-to-speech).
Γι'αυτό το ζητούμενο χρειάστηκε να προσθέσω στο index.html το script για το responsive voice
``` ( <script src='https://code.responsivevoice.org/responsivevoice.js'></script> ) ``` και στη συνέχεια να παω σε όλα τα κομμάτια του κώδικα που ήταν υπέυθυνα για το text της ιστοσελίδας και πρόσθεσα τα κατάλληλα κομμάτια για τη λειτουργία του responsive voice πχ για την ακρόαση του Educational Attainment in the United States από ``` <h1 class="title">Educational Attainment in the United States</h1>``` 
   το άλλαξα σε ``` <h1 class="title" onmouseover="responsiveVoice.speak('Educational Attainment in the United States','US English Female');" onmouseleave="responsiveVoice.cancel();">Educational Attainment in the United States</h1> ``` . Για την ακρόαση του κειμένου μέσα στα διαγράμματα έπραξα αντίστοιχα αλλάζοντας το ``` <svg id="pie-chart" width="960" height="450"></svg><a name="regional"></a> ```
  σε ``` <svg id="pie-chart" width="960" height="450" onmouseover=responsiveVoice.speak($(this).text());  onmouseleave=responsiveVoice.cancel();></svg><a name="regional"></a>```  (για το 1ο διάγραμμα) , το <div id="chart"></div>
  σε ``` <div id="chart" onmouseover=responsiveVoice.speak($(this).text()); onmouseleave=responsiveVoice.cancel();></div>``` (για το 2ο διάγραμμα) και το  ``` <svg id="stacked-bar-chart"></svg>```
     σε  ```<svg id="stacked-bar-chart" onmouseover=responsiveVoice.speak($(this).text()); onmouseleave=responsiveVoice.cancel();></svg>``` (για το 3ο διάγραμμα).
 * 5ο Ζητούμενο - Εφαρμόστε responsive design στη σελίδα και κυρίως στο αρχικό menu έτσι ώστε να προσαρμόζεται σε οθόνες διαφορετικών διαστάσεων (π.χ. Bootstrap).    
 Σε αυτό το ζητούμενο χρειάστηκε να τροποιήσω και το αρχείο style.css και το index.html.Στο αρχείο style.css προσθεσα το παρκάτω κομμάτι του κώδικα :
```  .toggle
{
	width: 100%;
	padding: 10xp 20xp;
	background: #292f36;
	text-align: right;
	box-sizing: border-box;
	color: #fff;
	font-size: 30px;
	display: none;
}
@media (max-width:768px)
{
	.toggle
	{ 
		display: block;
	}
nav ul
{
	width: 100%;
	display: none;
}
nav ul li 
{ 
	display: block;
	text-align: center;
}
        .active
	{ 
		display: block;
	}
} 
```
και στο index.html πρόσθεσα τα παρακάτω :
``` <meta name="viewport" content="width=device-width, initial-scale=1, user-scalable=no">

<link href="https://stackpath.bootstrapcdn.com/font-awesome/4.7.0/css/font-awesome.min.css" rel="stylesheet">
 
 <link rel="stylesheets" href="style.css">
   
   <link rel="stylesheets" type ="text/css" href="style.css">
   
   <script src="https://code.jquery.com/jquery-3.2.1.js"></script>
   
   <script defer src="https://use.fontawesome.com/releases/v5.5.0/js/all.js"
   
   <script type="text/javascript">	
 $(document).ready(funtion(){ 
  $('.menu').click(function(){
    $('ul').toggleClass('active');
  })
 		})
</script> 
```
ΣΗΜΕΙΩΣΗ : Κατά τη διάρκεια της εργασίας μου προέκυψαν κάποια errors στην σελίδα ,για την επίλυση αυτών απευθύνθηκα σε forums στα οποία βρήκα κάποια links που μου πρότιναν να τα προσθέσω στον κώδικα μου ωστόσο δεν είμαι σίγουρη γι'αυτά.Επίσης στο πέμπτο ερώτημα αντιμετώπισα το εξής πρόβλημα : η σελίδα μου είναι εν μέρη  κατάλληλη για χρήση από αλλες συσκεύές όμως δεν μπόρεσα να βρω τρόπο να μικραίνει το πρώτο διάγραμμα και να έχει σωστή λειτουργία το κουμπί του menu που πρόσθεσα.
