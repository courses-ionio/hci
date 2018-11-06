# Επικοινωνία Ανθρώπου-Υπολογιστή

### Ονοματεπώνυμο: Χριστίνα Κρυελέση

### Αριθμός Μητρώου: Π2017129

## Εργασία Ανάπτυξης  Παραδοτέο Α 

Εκτελέσιμο link :https://chrikri.github.io/D3js-US-educational-attainment/

link αποθετηρίου: https://github.com/chrikri/D3js-US-educational-attainment

### Εκπλήρωση ζητούμενων πρώτου παραδοτέου

[x]  Άλλαξα τα χρώματα στα 3 γραφήματα.

[x] Αντικατέστησα τις διεπαφές στα "κουμπιά" του 2ου και 3ου γραφήματος.

[x] Όταν το ποντίκι διέρχεται επάνω από κάθε επιλογή του menu στην κορυφή της σελίδας, ακούγεται κάποιος ήχος.

[x] Όταν το ποντίκι διέρχεται πάνω από κάποια πρόταση/κείμενο της σελίδας ή περιοχή που περιλαμβάνει γραπτή πληροφορία (π.χ. κάποιο τμήμα     γραφήματος), ακούγεται αυτόματα η αφήγηση του κειμένου (text-to-speech).

[x] Εφάρμοσα responsive design στη σελίδα (Bootstrap) και κυρίως στο αρχικό menu έτσι ώστε να προσαρμόζεται σε οθόνες διαφορετικών διαστάσεων.
 * 1ο Ζητούμενο - Αλλάξτε τα χρώματα στα 3 γραφήματα. 
 
 
 Για την αλλαγή των χρωμάτων στα γραφήματα χρειάστηκε να τροποποιηθούν οι  δεκαεξαδικές τιμές της μεταβλητής colour της συνάρτησης donutChart στο αρχείο "script_1.js" το οποίο βρίσκεται στον φάκελο scripts του φακέλου assets του αποθετηρίου. Αντίστοιχα, για την αλλαγή των χρωμάτων του 2ου γραφήματος χρειάστηκε να τροποποιηθούν οι 4 δεκαεξαδικές τιμές της μεταβλητής color και οι τιμές στην συνθήκη:                  if (treeSumSortType == "number") {.......... που  βρίσκονται στο αρχείο "script_2.js".Τέλος, για το τρίτο γράφημα ενεργούμε αναλόγως, αντικαθιστούμε τις 7 δεκαεξαδικές τιμές χρωμάτων της μεταβλητής color η οποία βρίσκεται στο αρχείο "script_3.js" του ίδιου φακέλου "scripts".
                                        

* 2ο Ζητούμενο - Αντικαταστήστε τις διεπαφές στα "κουμπιά" του 2ου και 3ου γραφήματος με άλλες της επιλογής σας. 
Όλεςαυτές οι αλλαγές έγιναν στο CSS αρχείο "style.css" (assets/stylesheets/style.css).
Για την αλλαγή της όψης των κουμπιών χρειάστηκε να τροποποιηθούν οι δύο τιμές των χρωμάτων (επιλεγμένο/μη επιλεγμένο κουμπί):
```
     .radio-toolbar label {
      ...
      background-color: ##65abf2;
      ...
    }
    .radio-toolbar input[type="radio"]:checked+label {
      background-color: #2b4c84;
    }
```
να τροποποιηθεί το μέγεθος των κουμπιών:
```
   .radio-toolbar label {
     ...
   padding: 10px 17px;
     ...
   }
```
καθώς και το σχήμα των κουμπιών (γίνεται πιο στρογγυλό):
```
   label{
    ...
    border-radius: 10px !IMPORTANT;
   }
```
* 3ο Ζητούμενο - Όταν το ποντίκι διέρχεται επάνω από κάθε επιλογή του menu στην κορυφή της σελίδας, να ακούγεται κάποιος ήχος της επιλογής σας.
 Αρχικά, κατέβασα ένα mp3 αρχείο από το διαδίκτυο: Από την ιστοσελίδα :https://www.zapsplat.com/
 και το ανέβασα όπως και το mousehover-sound.js αρχείο στο repository του κώδικά μου.  Στη συνέχεια, τροποποίησα το αρχείο index.html, εισάγοντας ενα script tag
```
     <script type="text/javascript" src="mousehover-sound.js"></script>
     ```
     
     Ενα _audio tag_:

     ```
     <audio>
     <source src="mousehover-sound.mp3"></source>
     <source src="mousehover-sound.ogg"></source>
     </audio>
	  <div id="sounddiv"><bgsound id="sound"></div>
     ```

     καθώς και τον _κώδικα_ 
 
     ```
     onmouseover="playclip();"
     ```
     
     σε κάθε ένα από τα tags των επιλογών του **menu** μας

     ```
     <li><a href="#top" onmouseover="playclip();" >Top</a></li>
     <li><a href="#national" onmouseover="playclip();" >National</a></li>
     <li><a href="#regional" onmouseover="playclip();" >Regional</a></li>
     <li><a href="#state" onmouseover="playclip();" >State-Level</a></li>
     ```
     
 * 4ο Ζητούμενο - Όταν το ποντίκι διέρχεται πάνω από κάποια πρόταση/κείμενο της σελίδας ή περιοχή που περιλαμβάνει γραπτή πληροφορία (π.χ. κάποιο τμήμα γραφήματος), να ακούγεται αυτόματα η αφήγηση του κειμένου (text-to-speech).
 Για να ακούγεται η αφήγηση του κάθε κειμένου, όταν θα διέρχεται το ποντίκι πάνω, χρησιμοποιούμε τη βιβλιοθήκη ResponsiveVoice,
     σε _script tag_ στο index.html:

     ```
     <script src="https://code.responsivevoice.org/responsivevoice.js"></script>
     ```

     και την παρακάτω συνάρτηση, μέσα σε _script tag_:

     ```
     <script>
     $(document).ready(function(){
     $("h1, h2, label").mouseenter(function(){
		responsiveVoice.cancel(); 
  		responsiveVoice.speak($(this).text(), 'UK English Male');
     });
     $("h1, h2, label").mouseleave(function(){
        responsiveVoice.cancel();
    	});
     });
     </script>
     `
 
* 5ο Ζητούμενο - Εφαρμόστε responsive design στη σελίδα και κυρίως στο αρχικό menu έτσι ώστε να προσαρμόζεται σε οθόνες διαφορετικών διαστάσεων (π.χ. Bootstrap).
 Στη συνέχεια, πρόσθεσα τον παρακάτω κώδικα στο αρχείο **index.html**, ώστε το **menu** της ιστοσελίδας να προσαρμόζεται σωστά σε μικρότερες συσκευές:
 
   ```
    <nav class="navbar navbar-expand-md navbar-dark bg-dark">
    <div class="container-fluid">
    <button class="navbar-toggler" type="button" data-toggle="collapse" data-target="#navbarResponsive">
	<span class="navbar-toggler-icon"></span>
	
    </button>

    <div class="collapse navbar-collapse" id="navbarResponsive">
    <ul class="navbar-nav ml-auto">
    <li class="nav-item active"><a class="nav-link" href="#top" onmouseover="playclip();" >Top</a></li>
    <li class="nav-item active"><a class="nav-link" href="#national" onmouseover="playclip();" >National</a></li>
    <li class="nav-item active"><a class="nav-link" href="#regional" onmouseover="playclip();" >Regional</a></li>
    <li class="nav-item active"><a class="nav-link" href="#state" onmouseover="playclip();" >State-Level</a></li>

    </ul>
    </div>
    </div>
    </nav>
  ```

   Τέλος, πρόσθεσα τις παρακάτω γραμμές κώδικα στο αρχείο style.css(αντικαθιστώντας τα με τα αντίστοιχα _nav tags_ που υπήρχαν πριν), δημιουργώντας μικρές αλλαγές, αλλά και για να δουλεύει σωστά 
το **menu** σε μικρότερες οθόνες.

  ```
  .navbar {
   padding: .8rem;
  }

  .navbar-nav li {
   padding-right: 20px;
  }

  .nav-link {
   font-size: 1.1em !important;
  }
  ```


## Εργασία περιεχομένου  Παραδοτέο Α

Εκτελέσιμο link :https://chrikri.github.io/gr/ 

link αποθετηρίου: https://github.com/chrikri/gr 

## Εικόνες

### - Eniac
  - https://chrikri.github.io/gr/gallery/eniac/
  
### - GeoGebra
  - https://chrikri.github.io/gr/gallery/geogebra/
  
### - 3D Animation in education
   - https://chrikri.github.io/gr/gallery/3D-animation-education/
   
### - Sony Ericcson(T681-2002)
   - https://chrikri.github.io/gr/gallery/ericsson/
    
### - Google
 - https://chrikri.github.io/gr/gallery/logogoogle/
