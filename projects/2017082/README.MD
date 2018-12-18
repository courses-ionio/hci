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
προστέθηκαν τα attributes "onmouseover" και "onmouseout" στις ετικέτες "li" των επιλογών του μενού τα οποία καλούν τις συναρτήσεις "PlaySound" και "StopSound" αντίστοιχα, με παράμετρο το κομμάτι ήχου (id αυτού):  
 
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
 Για το τελευταίο ζητούμενο χρειάστηκε η προσθήκη μιας "meta" ετικέτας στο "head" του "index.html":  

```
<meta name="viewport" content="width=device-width, initial-scale=1.0">
```
η οποία προσαρμόζει την όψη της σελίδας στο μέγεθος της οθόνης της κάθε συσκευής.  
Στην συνέχεια, για την εφαρμογή responsive συμπεριφοράς στο αρχικό menu έγινε εισαγωγή της Bootstrap στο "head" του "index.html":

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
 ## 2ο Παραδοτέο
 * 1ο Ζητούμενο - Τροποποιήστε τον κώδικα και το μενού της εφαρμογής έτσι ώστε κάθε στιγμή να είναι εμφανές μόνο ένα από τα 3 γραφήματα, παραμένοντας πάντα στη σελίδα index.html.
 
 Για την υλοποίηση αυτού του ζητούμενου χρεάστηκε τα διαγράμματα και οι τίτλοι τους να μπούνε μέσα σε <div> tags με διαφορετικά αναγνωριστηκά ids.

```
<div id="chrt1" style="display:none;">
    <h2 class="subtitle" id="tts1">Nation-Wide Education Level of Population in Schooling</h2>
	<script>
	...
	</script>
    	<svg id="pie-chart" width="960" height="450"></svg><a name="regional"></a>
    <p><br><br><br></p>
</div>
``` 

Στη συνέχεια, προστέθηκαν τρεις συναρτήσεις showFirstChart, showSecondChart() και showThirdChart() οι οποίες εμφανίζουν ένα διάγραμμα κάθε φορά και κρύβουν τα άλλα δύο.

```
<script>
	function showFirstChart() {
	  var x = document.getElementById("chrt1");
	  var y = document.getElementById("chrt2");
	  var z = document.getElementById("chrt3");
	    x.style.display = "block";
	    y.style.display = "none";
	    z.style.display = "none";
	}
	
	function showSecondChart() {
	  var x = document.getElementById("chrt1");
	  var y = document.getElementById("chrt2");
	  var z = document.getElementById("chrt3");
	    x.style.display = "none";
	    y.style.display = "block";
	    z.style.display = "none";
	}
	
	function showThirdChart() {
	  var x = document.getElementById("chrt1");
	  var y = document.getElementById("chrt2");
	  var z = document.getElementById("chrt3");
	    x.style.display = "none";
	    y.style.display = "none";
	    z.style.display = "block";
	}
</script>
```

Τέλος, στις επιλογές του κεντρικού μενού της σελίδας προστέθηκε κώδικας ο οποίος καλεί κάθε φορά την αντίστοιχη συνάρτηση.

```
<li class="nav-item" onclick="showFirstChart()" onmouseover="PlaySound('mySound')"onmouseout="StopSound('mySound')">
	<a class="nav-link" href="#national">National</a>
</li>
<li class="nav-item" onclick="showSecondChart()" onmouseover="PlaySound('mySound')"onmouseout="StopSound('mySound')">
	<a class="nav-link" href="#regional">Regional</a>
</li>
<li class="nav-item" onclick="showThirdChart()" onmouseover="PlaySound('mySound')"onmouseout="StopSound('mySound')">
	<a class="nav-link" href="#state">State-Level</a>
</li>
```
* 3ο Ζητούμενο - Σε μια καινούργια σελίδα, να τοποθετήσετε αντίστοιχα 3 νέα διαδραστικά γραφήματα D3js της επιλογής σας, τα οποία θα οπτικοποιούν καινούργια στατιστικά δεδομένα που θα βρείτε από κάποια επίσημη στατιστική αρχή (π.χ. ΕΛΣΤΑΤ, Eurostat κ.λπ.).

Για το 3ο ζητούμενο αρχικά χρειάστηκε να δημιουργηθεί ένα νέο αρχείο html και μέσα σε αυτό να προστεθούν τα εξής διαγράμματα:
```
<div id="chrt1" style="display:block;">
		<p><br></p>
		    <h2 class="subtitle" id="tts1">Electric energy consumption by category of use in Corfu, 2012</h2>
			<script>
					...
			</script>
			<div class="container-fluid">
			    <div class="row">
			        <div class="col"></div>
			        <div class="col">
			            <div id="pieChart"></div>
			        </div>
			        <div class="col"></div>
			    </div>
			</div>
    	
            <script src="//cdnjs.cloudflare.com/ajax/libs/d3/4.7.2/d3.min.js"></script>
            <script src="d3pie.min.js"></script>
            <script>
            var pie = new d3pie("pieChart", {"header":{"title":{"fontSize":24,"font":"open sans"},"subtitle":{"color":"#999999","fontSize":12,"font":"open sans"},"titleSubtitlePadding":9},"footer":{"color":"#999999","fontSize":10,"font":"open sans","location":"bottom-left"},"size":{"canvasWidth":590,"pieOuterRadius":"90%"},"data":{"sortOrder":"value-desc","content":[{"label":"Domestic","value":264131,"color":"#2383c1"},{"label":"Commercial","value":218812,"color":"#64a61f"},{"label":"Industrial","value":157618...
            </script>
</div>

```
Πηγή δεδομένων: http://www.statistics.gr/el/statistics/-/publication/SIN03/2012

Πίνακας: 01. Κατανάλωση ηλεκτρικής ενέργειας, κατά μεγάλη γεωγραφική περιοχή, περιφέρεια, νομό και κατά κατηγορία χρήσης

Απαραίτητη ήταν επίσης η προσθήκη ενός αρχείου: d3pie.min.js

```
<div id="chrt2" style="display:none;">
		<h2 class="subtitle" id="tts2">Tree Crops in Corfu, 2016</h2>
		<script>
				...
		</script>
		<h6 class="subtitle" id="tts10">Corfu has 256,700 olive trees which is the 98% of all trees. The other 2% is:</h6>
		<script>
				...
		</script>
		<p></p>
		<div class="container-fluid">
		    <div class="row">
		        <div class="col"></div>
		        <div class="col">
		            <div id="chart2"></div>
		        </div>
		        <div class="col"></div>
		    </div>
		</div>
		    
	    <script src="http://d3js.org/d3.v2.min.js"></script>
	    <script>
			function renderChart() {
			
			var data = d3.csv.parse(d3.select('#csv2').text());
			var valueLabelWidth = 40; // space reserved for value labels (right)
			var barHeight = 20; // height of one bar
			var barLabelWidth = 100; // space reserved for bar labels
			var barLabelPadding = 5; // padding between bar and bar labels (left)
			var gridLabelHeight = 18; // space reserved for gridline labels
			var gridChartOffset = 3; // space between start of grid and first bar
			var maxBarWidth = 420; // width of the bar with the max value
			 
			// accessor functions 
			var barLabel = function(d) { return d['Tree']; };
			var barValue = function(d) { return parseFloat(d['Population']); };
			 
			// sorting
			var sortedData = data.sort(function(a, b) {
			 return d3.descending(barValue(a), barValue(b));
			}); 
			
			// scales
			var yScale = d3.scale.ordinal().domain(d3.range(0, sortedData.length)).rangeBands([0, sortedData.length * barHeight]);
			var y = function(d, i) { return yScale(i); };
			var yText = function(d, i) { return y(d, i) + yScale.rangeBand() / 2; };
			var x = d3.scale.linear().domain([0, d3.max(sortedData, barValue)]).range([0, maxBarWidth]);
			// svg container element
			var chart = d3.select('#chart2').append("svg")
			  .attr('width', maxBarWidth + barLabelWidth + valueLabelWidth)
			  .attr('height', gridLabelHeight + gridChartOffset + sortedData.length * barHeight);
			// grid line labels
			...
	    </script>
	    <script id="csv2" type="text/csv">
	    	Tree,Population
			Lemon Tree,901
			Orange Tree,1577
			Mandarin Tree,333
			Other Citrus Tree,77
			Apple Tree,105
			Pear Tree,90
			Peach Tree,67
			Apricot Tree,65
			Cherry Tree,75
			Other Fruit Tree,116
			Almond Tree,331
			Walnut Tree,139
			Other Nut-bearing Tree,129
			Other Trees,309
		</script>
	    <script>renderChart();</script>
	    <p><br><br></p>
	</div>
```
Πηγή δεδομένων: http://www.statistics.gr/el/statistics/-/publication/SPG06/-

Πίνακας: 05α. Δενδρώδεις Καλλιέργειες. Εκτάσεις συνεχών (κανονικών) δενδρώνων, κατά Περιφέρεια και Περιφερειακή Ενότητα

Τέλος, για την ευκολότερη μετάβαση μεταξύ των δύο σελίδων προστέθηκαν επιλογές κάτω από κάθε γράφημμα:

Στην αρχική σελίδα:
```
	<div class="container">
		<p style="text-align: center; font-weight: bold; fort-size: 80px;">
			<a style="text-decoration: none; color: #1c1e21;" href="index2.html">Show more examples >></a>
		</p>
	</div>
```
Στην καινούρια σελίδα:
```
    <div class="container">
    	<p style="text-align: center; font-weight: bold; fort-size: 80px;">
    		<a style="text-decoration: none; color: #1c1e21;" href="index.html">Go Back >></a>
    	</p>
    </div>
```
## Όνομα εργασίας : Εργασία Περιεχομένου
 ### Eκτελέσιμο link : https://p17griv.github.io/gr/
 ### link αποθετηρίου : https://github.com/p17griv/gr
 ## 1ο Παραδοτέο
 ## Τα links των εικόνων
 * Cloud9_collab: https://p17griv.github.io/gr/gallery/cloud9-collab/
 * Magnavox_odyssey: https://p17griv.github.io/gr/gallery/magnavox-odyssey/
 * Ms_edge_web_notes: https://p17griv.github.io/gr/gallery/ms-edge-web-notes/
 * Unity_game_engine: https://p17griv.github.io/gr/gallery/unity-game-engine/
 * Microworlds_pro: https://p17griv.github.io/gr/gallery/microworlds-pro/
 
 
 ## 2ο Παραδοτέο
 ## Τα links των διαδραστικών παραδειγμάτων
 * Local Weather App: https://p17griv.github.io/gr/remix/local-weather-app/
 * Menu Circular: https://p17griv.github.io/gr/remix/menu-circular/
