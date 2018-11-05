# Όνομα μαθήματος : Επικοινωνία Ανθρώπου-Υπολογιστή
### Όνομα : ΠΑΣΧΑΛΗΣ
### Επίθετο : ΓΡΙΒΑΣ
### Αριθμός Μητρώου: Π2017082
### Προφίλ στο Github : https://github.com/p17griv
## Όνομα εργασίας : Εργασία Ανάπτυξης
 ### Eκτελέσιμο link : https://p17griv.github.io/D3js-US-educational-attainment/
 ### link αποθετηρίου : https://github.com/p17griv/D3js-US-educational-attainment
 ## 1ο Παραδοτέο
 * 1ο Ζητούμενο - Αλλάξτε τα χρώματα στα 3 γραφήματα.  
 Για την αλλαγή των χρωμάτων του 1ου γραφήματος χρειάστηκε να τροποποιηθούν οι 7 δεκαεξαδικές τιμές της μεταβλητής colour της συνάρτησης donutChart στο αρχείο "script_1.js" το οποίο βρίσκεται στον φάκελο scripts του φακέλου assets του αποθετηρίου.
```
function donutChart() {
    var width,
        height,
        margin = {top: 10, right: 10, bottom: 10, left: 10},
        colour = d3.scaleOrdinal().range(["#c5c5c5", "#0700b9", "#ebdab1", "#5b0068", "#006db6", "#c50000", "#79a800"]), // colour scheme
        variable, // value in data that will dictate proportions on chart
        category, // compare data by
        ...
```
 Αντίστοιχα, για την αλλαγή των χρωμάτων του 2ου γραφήματος χρειάστηκε να τροποποιηθούν οι 4 δεκαεξαδικές τιμές της μεταβλητής color:
```
var color = d3.scaleLinear().domain([0, 1/4*5000000, 2/4*5000000, 3/4*5000000, 5000000]).range(["#852323", "#60ca4f", "#0644a0", "#92c000"]);
```
και οι τιμές στην συνθήκη:
 ```
                  if (treeSumSortType == "number") {
                    color = d3.scaleLinear().domain([0, 1/4*5000000, 2/4*5000000, 3/4*5000000, 5000000]).range(["#852323", "#60ca4f", "#0644a0", "#92c000"]);
                    return d["Total College"];
                } else if (treeSumSortType == "percent") {
                    color = d3.scaleLinear().domain([0, 1/4*50, 2/4*50, 3/4*50, 50]).range(["#852323", "#60ca4f", "#0644a0", "#92c000"]);
                    return d["Percent College"];
                } else if (treeSumSortType == "male") {
                    color = d3.scaleLinear().domain([0, 1/4*50, 2/4*50, 3/4*50, 50]).range(["#852323", "#60ca4f", "#0644a0", "#92c000"]);
                    return d["Percent College - Male"];
                } else {
                    color = d3.scaleLinear().domain([0, 1/4*50, 2/4*50, 3/4*50, 50]).range(["#852323", "#60ca4f", "#0644a0", "#92c000"]);
                    return d["Percent College - Female"];
                }
```
οι οποίες βρίσκονται στο αρχείο "script_2.js" του ίδιου φακέλου.  
 Τέλος, για το τρίτο γράφημα ενεργούμε αναλόγως, αντικαθιστούμε τις 7 δεκαεξαδικές τιμές χρωμάτων της μεταβλητής color:
 ```
      var colors = d3.scaleOrdinal()
      .range(["#667a8b", "#ede306", "#8e3116", "#053308", "#b4a51f", "#7f3445", "#bdaada"]);
 ```
η οποία βρίσκεται στο αρχείο "script_3.js" του ίδιου φακέλου "scripts".  
* 2ο Ζητούμενο - Αντικαταστήστε τις διεπαφές στα "κουμπιά" του 2ου και 3ου γραφήματος με άλλες της επιλογής σας.  
 Για την αλλαγή της όψης των κουμπιών χρειάστηκε να τροποποιηθούν οι δύο τιμές των χρωμάτων (επιλεγμένο/μη επιλεγμένο κουμπί):
 ```
     .radio-toolbar label {
      ...
      background-color: #a05769;
      ...
    }
    .radio-toolbar input[type="radio"]:checked+label {
      background-color: #793848;
    }
```
να τροποποιηθεί το μέγεθος των κουμπιών:
```
   .radio-toolbar label {
     ...
     padding: 8px 22px;
     ...
   }
```
να τροποιηθεί το χρώμα του κειμένου:
```
   .radio-toolbar label {
     ...
     color: grey;
     ...
   }
```
καθώς και το σχήμα των κουμπιών (γίνεται πιο στρογγυλό):
```
   label{
    ...
    border-radius: 30px !IMPORTANT;
   }
```
Όλες αυτές οι αλλαγές έγιναν στο CSS αρχείο "style.css" (assets/stylesheets/style.css).  
* 3ο Ζητούμενο - Όταν το ποντίκι διέρχεται επάνω από κάθε επιλογή του menu στην κορυφή της σελίδας, να ακούγεται κάποιος ήχος της επιλογής σας.  
Αρχικά για την υλοποίηση αυτού του ζητούμενου χρειάστηκε να προστεθεί ένα αρχείο ήχου το οποίο βρίσκεται στον φάκελο sounds του φακέλου assets του αποθετηρίου. Στη συνέχεια έγινε εισαγωγή του αρχείου ήχου στο httml αρχείο "index.html":
```
<audio id='mySound' src="assets/sounds/mouse hover sound.mp3"/>
```
προστέθηκαν τα attributes "onmouseover" και "onmouseout" στις ετικέτες "<li>" των επιλογών του μενού τα οποία καλούν τις συναρτήσεις "PlaySound" και "StopSound" αντίστοιχα, με παράμετρο το κομμάτι ήχου (id αυτού):  
 
     <li class="nav-item" onmouseover="PlaySound('mySound')"onmouseout="StopSound('mySound')">
						<a class="nav-link" href="#top">Top</a>
					</li>
					<li class="nav-item" onmouseover="PlaySound('mySound')"onmouseout="StopSound('mySound')">
						<a class="nav-link" href="#national">National</a>
					</li>
					<li class="nav-item" onmouseover="PlaySound('mySound')"onmouseout="StopSound('mySound')">
						<a class="nav-link" href="#regional">Regional</a>
					</li>
					<li class="nav-item" onmouseover="PlaySound('mySound')"onmouseout="StopSound('mySound')">
						<a class="nav-link" href="#state">State-Level</a>
					</li>
και τέλος έγινε προσθήκη του script με την υλοποίηση των συναρτήσεων:
```
	<script>
	function PlaySound(soundobj) {
			var thissound=document.getElementById(soundobj);
			thissound.play();
	}
	function StopSound(soundobj) {
			var thissound=document.getElementById(soundobj);
			thissound.pause();
			thissound.currentTime = 0;
	}	
	</script>
 ```
 * 4ο Ζητούμενο - Όταν το ποντίκι διέρχεται πάνω από κάποια πρόταση/κείμενο της σελίδας ή περιοχή που περιλαμβάνει γραπτή πληροφορία (π.χ. κάποιο τμήμα γραφήματος), να ακούγεται αυτόματα η αφήγηση του κειμένου (text-to-speech).  
 Για το τέταρτο ζητούμενο αρχικά προστέθηκε στο httml αρχείο "index.html" ο ακόλουθος κώδικας:
 ```
 <script>
	function speak (message) {
	  var msg = new SpeechSynthesisUtterance(message)
	  var voices = window.speechSynthesis.getVoices()
	  msg.voice = voices[0]
	  window.speechSynthesis.speak(msg)
	}
</script>
 ```
 ο οποίος υλοποιεί μία συνάρτηση "speak", με παράμετρο κείμενο το οποίο εισάγεται σε συναρτήσεις της βιβλιοθήκης "speechSynthesis" της javascript.  
Έπειτα, προστέθηκαν "id" σε κάθε τμήμα κειμένου του "index.html".  
 ```
 <h1 class="title" id="tts">Educational Attainment in the United States</h1>
 ```
 Στη συνέχεια, προστέθηκε η ακόλουθη υλοποίηση:  
 ```
 	<script>
		document.getElementById("tts").onmouseover = function() {mouseOver()};
		document.getElementById("tts").onmouseout = function() {mouseOut()};
		function mouseOver(){
			speak('Educational Attainment in the United States');
		}
		function mouseOut(){
			window.speechSynthesis.cancel();
		}
	</script>
 ```
 η οποία στα events "onmouseover" και "onmouseout" καλεί την συνάρτηση "mouseOver" και "mouseOut" αντίστοιχα. 
 Η πρώτη καλεί την συνάρτηση "speak", με παράμετρο το αντίστοιχο κείμενο, ενώ η δεύτερη καλεί την συνάρτηση "cancel" της "speechSynthesis" προκειμένου να διακοπεί η αναπαραγωγή της αφήγησης.  
 
 * 5ο Ζητούμενο - Εφαρμόστε responsive design στη σελίδα και κυρίως στο αρχικό menu έτσι ώστε να προσαρμόζεται σε οθόνες διαφορετικών διαστάσεων (π.χ. Bootstrap).  
 Για το τελευταίο ζητούμενο χρειάστηκε η προσθήκη μιας <meta> ετικέτας στο <head> του "index.html":  

```
<meta name="viewport" content="width=device-width, initial-scale=1.0">
```
η οποία προσαρμόζει την όψη της σελίδας στο μέγεθος της οθόνης της κάθε συσκευής.  
Στην συνέχεια, για την εφαρμογή responsive συμπεριφοράς στο αρχικό menu έγινε εισαγωγή της Bootstrap στο <head> του "index.html":

	<!--INCLUDE BOOTSTRAP 4-->
	<!-- jQuery library -->
	<script src="https://ajax.googleapis.com/ajax/libs/jquery/3.3.1/jquery.min.js"></script>
	
	<!-- Latest compiled and minified CSS -->
	<link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/4.1.3/css/bootstrap.min.css">

	<!-- Popper JS -->
	<script src="https://cdnjs.cloudflare.com/ajax/libs/popper.js/1.14.3/umd/popper.min.js"></script>

	<!-- Latest compiled JavaScript -->
	<script src="https://maxcdn.bootstrapcdn.com/bootstrap/4.1.3/js/bootstrap.min.js"></script>
Ενώ τέλος, χρησιμοποιήθηκε ένα "collapsable" navigation bar framework της Bootstrap στο αρχικό menu με την προσθήκη των κατάλληλων αναγνωριστικών (class="...")
```
		<nav class="navbar navbar-expand-md bg-dark navbar-dark sticky-top">
			<!-- Toggler/collapsibe Button -->
			<button class="navbar-toggler" type="button" data-toggle="collapse" data-target="#collapsibleNavbar">
				<span class="navbar-toggler-icon"></span>
			</button>

			<!-- Navbar links -->
			<div class="collapse navbar-collapse" id="collapsibleNavbar">
				<ul class="navbar-nav">
					<li class="nav-item" onmouseover="PlaySound('mySound')"onmouseout="StopSound('mySound')">
						<a class="nav-link" href="#top">Top</a>
					</li>
					<li class="nav-item" onmouseover="PlaySound('mySound')"onmouseout="StopSound('mySound')">
						<a class="nav-link" href="#national">National</a>
					</li>
					<li class="nav-item" onmouseover="PlaySound('mySound')"onmouseout="StopSound('mySound')">
						<a class="nav-link" href="#regional">Regional</a>
					</li>
					<li class="nav-item" onmouseover="PlaySound('mySound')"onmouseout="StopSound('mySound')">
						<a class="nav-link" href="#state">State-Level</a>
					</li>
				</ul>
			</div> 
		</nav>
```
 και του κώδικα για την λειτουργία του "expand button":
```
	<script>
		$('.navbar-nav>li>a').on('click', function(){
			$('.navbar-collapse').collapse('hide');
		});
		</script>
		<audio id='mySound' src="assets/sounds/mouse hover sound.mp3"/>
	<script>
```
## Όνομα εργασίας : Εργασία Περιεχομένου 1ο Παραδοτέο
 ### Eκτελέσιμο link : https://p17griv.github.io/gr/
 ### link αποθετηρίου : https://github.com/p17griv/gr
 ## 1ο Παραδοτέο
 ## Τα links των εικόνων
 * Cloud9_collab: https://p17griv.github.io/gr/gallery/cloud9-collab/
 * Magnavox_odyssey: https://p17griv.github.io/gr/gallery/magnavox-odyssey/
 * Ms_edge_web_notes: https://p17griv.github.io/gr/gallery/ms-edge-web-notes/
 * Unity_game_engine: https://p17griv.github.io/gr/gallery/unity-game-engine/
 * Microworlds_pro: https://p17griv.github.io/gr/gallery/microworlds-pro/
