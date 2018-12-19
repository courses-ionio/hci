# Επικοινωνία Ανθρώπου-Υπολογιστή

### Ονοματεπώνυμο: Χριστίνα Κρυελέση

### Αριθμός Μητρώου: Π2017129

## Εργασία Ανάπτυξης  Παραδοτέο Α 

Εκτελέσιμο link :https://chrikri.github.io/D3js-US-educational-attainment/

link αποθετηρίου: https://github.com/chrikri/D3js-US-educational-attainment


### Εκπλήρωση ζητούμενων πρώτου παραδοτέου

- [x]  Άλλαξα τα χρώματα στα 3 γραφήματα.

- [x] Αντικατέστησα τις διεπαφές στα "κουμπιά" του 2ου και 3ου γραφήματος.

- [x] Όταν το ποντίκι διέρχεται επάνω από κάθε επιλογή του menu στην κορυφή της σελίδας, ακούγεται κάποιος ήχος.

- [x] Όταν το ποντίκι διέρχεται πάνω από κάποια πρόταση/κείμενο της σελίδας ή περιοχή που περιλαμβάνει γραπτή πληροφορία (π.χ. κάποιο τμήμα     γραφήματος), ακούγεται αυτόματα η αφήγηση του κειμένου (text-to-speech).

- [x] Εφάρμοσα responsive design στη σελίδα (Bootstrap) και κυρίως στο αρχικό menu έτσι ώστε να προσαρμόζεται σε οθόνες διαφορετικών διαστάσεων.


 * **1ο Ζητούμενο - Αλλάξτε τα χρώματα στα 3 γραφήματα.**
 
 
 Για την αλλαγή των χρωμάτων στα γραφήματα χρειάστηκε να τροποποιηθούν οι  δεκαεξαδικές τιμές της μεταβλητής colour της συνάρτησης donutChart στο αρχείο "script_1.js" το οποίο βρίσκεται στον φάκελο scripts του φακέλου assets του αποθετηρίου. Αντίστοιχα, για την αλλαγή των χρωμάτων του 2ου γραφήματος χρειάστηκε να τροποποιηθούν οι 4 δεκαεξαδικές τιμές της μεταβλητής color και οι τιμές στην συνθήκη:                  if (treeSumSortType == "number") {.......... που  βρίσκονται στο αρχείο "script_2.js".Τέλος, για το τρίτο γράφημα ενεργούμε αναλόγως, αντικαθιστούμε τις 7 δεκαεξαδικές τιμές χρωμάτων της μεταβλητής color η οποία βρίσκεται στο αρχείο "script_3.js" του ίδιου φακέλου "scripts".
                                        

* **2ο Ζητούμενο - Αντικαταστήστε τις διεπαφές στα "κουμπιά" του 2ου και 3ου γραφήματος με άλλες της επιλογής σας.** 

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
* **3ο Ζητούμενο - Όταν το ποντίκι διέρχεται επάνω από κάθε επιλογή του menu στην κορυφή της σελίδας, να ακούγεται κάποιος ήχος της επιλογής σας.**

 Αρχικά, κατέβασα ένα mp3 αρχείο από το διαδίκτυο: Από την ιστοσελίδα :https://www.zapsplat.com/
 και το ανέβασα όπως και το mousehover-sound.js αρχείο στο repository του κώδικά μου.  Στη συνέχεια, τροποποίησα το αρχείο index.html, εισάγοντας ενα script tag
     ```
     <script type="text/javascript" src="mousehover-sound.js"></script>
     ```
     ενα audio tag:
     ```
     <audio>
     <source src="mousehover-sound.mp3"></source>
     <source src="mousehover-sound.ogg"></source>
     </audio>
	  <div id="sounddiv"><bgsound id="sound"></div>
     ```
 	καθώς και τον κώδικα:
 
     ```
     onmouseover="playclip();"
     ```
   σε καθένα απο τα παρακάτω tags:
    	   
     ```
     <li><a href="#top" onmouseover="playclip();" >Top</a></li>
     <li><a href="#national" onmouseover="playclip();" >National</a></li>
     <li><a href="#regional" onmouseover="playclip();" >Regional</a></li>
     <li><a href="#state" onmouseover="playclip();" >State-Level</a></li>
     ```
     
 * **4ο Ζητούμενο - Όταν το ποντίκι διέρχεται πάνω από κάποια πρόταση/κείμενο της σελίδας ή περιοχή που περιλαμβάνει γραπτή πληροφορία (π.χ. κάποιο τμήμα γραφήματος), να ακούγεται αυτόματα η αφήγηση του κειμένου (text-to-speech).**
 
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
 
* **5ο Ζητούμενο - Εφαρμόστε responsive design στη σελίδα και κυρίως στο αρχικό menu έτσι ώστε να προσαρμόζεται σε οθόνες διαφορετικών διαστάσεων (π.χ. Bootstrap).**

 Στη συνέχεια, πρόσθεσα τον παρακάτω κώδικα στο αρχείο **index.html**, ώστε το **menu** της ιστοσελίδας να προσαρμόζεται σωστά σε μικρότερες συσκευές:
 
   ```
    <nav class="navbar navbar-expand-md navbar-dark bg-dark">
    <div class="container-fluid">
    <button class="navbar-toggler" type="button" data-toggle="collapse" data-target="#navbarResponsive">
	<span class="navbar-toggler-icon"></span>
	
    </button>

    <div class="collapse navbar-collapse" id="navbarResponsive">
    <ul class="navbar-nav navbar-right">
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
   padding-left: 20px;
  }

  .nav-link {
   font-size: 1.1em !important;
  }
  ```


## Παραδοτέο 2 

### Εκπλήρωση ζητούμενων δεύτερου παραδοτέου

  - [x] Τροποποιήστε τον κώδικα και το μενού της εφαρμογής έτσι ώστε κάθε στιγμή να είναι εμφανές μόνο ένα από τα 3 γραφήματα, παραμένοντας πάντα στη σελίδα index.html.
  
  - [ ] Αντικαταστήστε το κάθε ένα από τα 3 γραφήματα με κάποιο άλλο διαδραστικό γράφημα της D3js.
  
  - [ ] Σε μια καινούργια σελίδα, να τοποθετήσετε αντίστοιχα 3 νέα διαδραστικά γραφήματα D3js της επιλογής σας, τα οποία θα οπτικοποιούν καινούργια στατιστικά δεδομένα που θα βρείτε από κάποια επίσημη στατιστική αρχή (π.χ. ΕΛΣΤΑΤ, Eurostat κ.λπ.).
  
  
  
  
  * **1ο Ζητούμενο - Τροποποιήστε τον κώδικα και το μενού της εφαρμογής έτσι ώστε κάθε στιγμή να είναι εμφανές μόνο ένα από τα 3 γραφήματα, παραμένοντας πάντα στη σελίδα index.html.**
  
  
  Για να είναι εμφανές μόνο το ένα γράφημα που επιθυμούμε να διαλέξουμε, στο [**index.html**]  πρόσθεσα στο _header tag_  μέσα στα στοιχεία της λίστας τις εντολές για να καλέσουν τις αντίστοιχες συναρτήσεις:
 ``` 
	onclick="firstscript();"
	onclick="secondscript();"
	onclick="thirdscript();"
 ```
 και μέσα στα h2 που έχει τον κάθε τίτλο  πρόσθεσα id για το κάθε γράφημα:
 ``` 
	 id="tittlestate"
	 id="tittleregion"
 	 id="tittlenation"
 ``` 

   και μετά τις συναρτήσεις μέσα σε _script tag_:
   ```
   <script>
	function firstscript() {
	document.getElementById("tittleregion").style.display = "none";
	document.getElementById("tittlestate").style.display = "none";
	document.getElementById("tittlenation").style.display = "block";
	document.getElementById("pie-chart").style.display = "block";
	document.getElementById("tree-form").style.display = "none";
	document.getElementById("stack-form").style.display = "none";
        document.getElementById("chart").style.display = "none";
	document.getElementById("stacked-bar-chart").style.display = "none";
	
	
}
	function secondscript() {
	document.getElementById("tittleregion").style.display = "block";
	document.getElementById("tittlestate").style.display = "none";
	document.getElementById("tittlenation").style.display = "none";
	document.getElementById("pie-chart").style.display = "none";
	document.getElementById("tree-form").style.display = "block";
	document.getElementById("stack-form").style.display = "none";
        document.getElementById("chart").style.display = "block";
	document.getElementById("stacked-bar-chart").style.display = "none";
	
	
}
	function thirdscript() {
	document.getElementById("tittleregion").style.display = "none";
	document.getElementById("tittlestate").style.display = "block";
	document.getElementById("tittlenation").style.display = "none";
	document.getElementById("pie-chart").style.display = "none";
	document.getElementById("tree-form").style.display = "none";
	document.getElementById("stack-form").style.display = "block";
        document.getElementById("chart").style.display = "none";
	document.getElementById("stacked-bar-chart").style.display = "block";
	
}
	</script>
   ```
   
  * **2ο Ζητούμενο - Αντικαταστήστε το κάθε ένα από τα 3 γραφήματα με κάποιο άλλο διαδραστικό γράφημα της D3js.**
  Δεν υλοποιήθηκε.
  
    
   * **3ο Ζητούμενο - Σε μια καινούργια σελίδα, να τοποθετήσετε αντίστοιχα 3 νέα διαδραστικά γραφήματα D3js της επιλογής σας, τα οποία θα οπτικοποιούν καινούργια στατιστικά δεδομένα που θα βρείτε από κάποια επίσημη στατιστική αρχή (π.χ. ΕΛΣΤΑΤ, Eurostat κ.λπ.).**
   
   
   Δεν πρόλαβα να τελειώσω το ζητούμενο απλά δημιούργησα ενά νέο αρχείο .html με όνομα index2.html εκεί πρόσθεσα τις βασικές "εντολές" και tags.
   
 ```
 <!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <title>Educational Attainment in the United States</title>
    <link href="assets/stylesheets/style.css" rel="stylesheet"/>
    <link href="https://fonts.googleapis.com/css?family=Muli" rel="stylesheet">
    <link href="https://fonts.googleapis.com/css?family=Montserrat" rel="stylesheet">
    <script type="text/javascript" src="assets/scripts/sound-mouseover.js"></script>
</head>
	<header>
       <nav>
    <ul>
	<li><a href="index.html"  onmouseover="playclip();">Back</a></li>
    <ul>
        </nav>
    </header>
  
<body>
    <h1 class="title">Examples</h1>
  
  
  <script src="https://d3js.org/d3.v4.min.js"></script>
<script src='http://cdnjs.cloudflare.com/ajax/libs/jquery/2.1.3/jquery.min.js'></script>
<script src="https://code.jquery.com/jquery-3.3.1.slim.min.js" integrity="sha384-q8i/X+965DzO0rT7abK41JStQIAqVgRVzpbzo5smXKp4YfRvH+8abtTE1Pi6jizo" crossorigin="anonymous"></script>
<script src="https://cdnjs.cloudflare.com/ajax/libs/popper.js/1.14.3/umd/popper.min.js" integrity="sha384-ZMP7rVo3mIykV+2+9J3UJ46jBk0WLaUAdn689aCwoqbBJiSnjAK/l8WvCWPIPm49" crossorigin="anonymous"></script>
<script src="https://stackpath.bootstrapcdn.com/bootstrap/4.1.3/js/bootstrap.min.js" integrity="sha384-ChfqqxuZUCnJSK3+MXmPNIyE6ZbWh2IMqE241rYiqJxyMiZ6OW/JmZQ5stwEULTy" crossorigin="anonymous"></script>

<script>
    $( document ).ready(function() {
      $(window).scroll(function(){
        if ($(window).scrollTop() >= 300) {
           $('nav').addClass('fixed-header');
        }
        else {
           $('nav').removeClass('fixed-header');
        }
    });
});
/* scrollTop() >= 240
   Should be equal the the height of the header
 */
</script>
  
  
  
  <audio>
		<source src="assets/sounds/click.mp3">
		<source src="assets/sounds/click.ogg">
	</audio>
<div id="sounddiv"><bgsound id="sound"></div>

</body>
</html> 
 
 ```
   
   

## Εργασία περιεχομένου  Παραδοτέο Α

Εκτελέσιμο link :https://chrikri.github.io/gr/ 

link αποθετηρίου: https://github.com/chrikri/gr 

### Εικόνες

#### - Eniac
  - https://chrikri.github.io/gr/gallery/eniac/
  
#### - GeoGebra
  - https://chrikri.github.io/gr/gallery/geogebra/
  
#### - 3D Animation in education
   - https://chrikri.github.io/gr/gallery/3D-animation-education/
   
#### - Sony Ericcson(T681-2002)
   - https://chrikri.github.io/gr/gallery/ericsson/
    
#### - Google
 - https://chrikri.github.io/gr/gallery/logogoogle/



## Εργασία περιεχομένου  Παραδοτέο Β


Εκτελέσιμο link :https://chrikri.github.io/gr/ 

link αποθετηρίου: https://github.com/chrikri/gr 

### Διαδραστικά παραδείγματα

#### - Interactive image
   - https://chrikri.github.io/gr/remix/interactive-image/
    
    
#### - Password input field
   - https://chrikri.github.io/gr/remix/password-input/
   
   
   
