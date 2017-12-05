### Data visualization, Ανδρεάνα Στυλίδου, Π2015180

#### Παραδοτέο 1 

* Forked hci repository: https://github.com/andreanastil/hci
 
* Forked DataVisualisation repository: https://github.com/andreanastil/D3js-uk-political-donations

* Personal DataVisualisation Github Page: https://andreanastil.github.io/D3js-uk-political-donations/

Για την απαλοιφή της κατάληξης ".html" στο url της εφαρμογής, αρκεί να μετονομάσουμε το αρχείο full-viz.html σε index.html.
#### Παραδοτέο 2

* Για την αλλαγή των χρωμάτων στις μπάλες με τα δεδομένα τροποποιούμε τον κώδικα στο chart.js

  ```
  var fill = d3.scale.ordinal().range(["#ABD91F", "#FF1FAB", "#991337"]);
  ```
  Για την αλλαγή των χρωμάτων στα τρία πεδία ομαδοποίησης *Split by party* τροποποιούμε τον κώδικα στο style.css
  
  ```
  /*  Party view */
  #conservative, #labour, #libdem { padding: 10px; }
  #conservative {
      background: rgba(255, 31, 171, 0.2);
      top: 110px;
  }
  #labour {
      background: rgba(171, 217, 31, 0.2);
      top: 330px;
  }
  #libdem {
      background: rgba(153,19,55, 0.2);
      top: 550px;
  }
  ```
* Για να ακούγεται ήχος κάθε φορά που πατάμε ένα κουμπί ομαδοποίησης, αρκεί να διαλέξουμε ένα ηχητικό κλιπ.
  Κατεβάζουμε ένα mp3 αρχείο από το διαδίκτυο: 

  ![download mp3 click sound](https://user-images.githubusercontent.com/22656813/31944348-6d9ea0aa-b8d4-11e7-82a2-1b131ccf83c2.PNG)


  Ανεβάζουμε το αρχείο στο repository και εισάγουμε ένα script tag στο index.html

  ```
  <script>		
    
    var button_sound = new Audio("Click2.mp3");
        
    
  </script>
  ```
  καθώς και τον κώδικα 
  ```
  onmousedown="button_sound.play()"
  ```
  σε κάθε μία από τις ετικέτες &lt;a&gt;&lt;/a&gt; της λίστας των κουμπιών  

  ```
  <li><a href="#" onmousedown="button_sound.play()" role="button" class="pure-button switch" id="all-donations">All money</a>
  </li>
  <li><a href="#" onmousedown="button_sound.play()" role="button" class="pure-button switch" id="group-by-money-source">The public's purse</a> 
  </li>
  <li><a href="#" onmousedown="button_sound.play()" role="button" class="pure-button switch" id="group-by-party">Split by party</a>
  </li>
  <li><a href="#" onmousedown="button_sound.play()" role="button" class="pure-button switch" id="group-by-donor-type">Split by type of donor</a>
  </li>
  <li><a href="#" onmousedown="button_sound.play()" role="button" class="pure-button switch" id="group-by-amount">Split by amount of donation</a>
  ```    
* Για να ανοίγει ένα νέο παράθυρο όταν κάνουμε κλικ σε κάποια μπάλα, με το αποτέλεσμα google search για τον δωρητή της μπάλας αυτής,
  τροποποιούμε το chart.js.
  
  Ορίζουμε μία νέα συνάρτηση click(d)
  
  ```
  function click(d) {
	var donor = d.donor;
	window.open("https://www.google.com/search?q=" + donor) ;
  }
  ```
  η οποία δέχεται σαν όρισμα τα δεδομένα της μπάλας και με τη βοήθεια της window.open ανοίγει ένα παράθυρο google search με
  κατάληξη το όνομα του εκάστοτε δωρητή.
  
  Ύστερα, χρησιμοποιούμε τη συνάρτηση on μαζί με τη συνάρτηση που φτιάξαμε και την εισάγουμε κάτω από τις υπόλοιπες (μέσα στη συνάρτηση
  start)
  
  ```
  .on("mouseover", mouseover)
  .on("mouseout", mouseout)
  // Alternative title based 'tooltips'
  // node.append("title")
  //	.text(function(d) { return d.donor; });
  .on("click", click);
  ```
  Επίσης, θα θέλαμε κάθε φορά που μετακινούμε τον κέρσορα πάνω από κάποια μπάλα, αυτός να μετατρέπεταi σε χεράκι, ώστε να καταλαβαίνουμε   ότι σε αυτό το σημείο υπάρχει κάποιος υπερσύνδεσμος. Έτσι, εισάγουμε μια γραμμή κώδικα μέσα στον ορισμό της συνάρτησης mouseover(d, i)
  
  ```
  this.style.cursor="hand";
  ```
  
  και αντίστοιχα μία γραμμή στον ορισμό της mouseout()
  
  ```
  this.style.cursor="default";
  ```
  που θα επαναφέρει στον κέρσορα την κανονική του εμφάνιση.
  
#### Παραδοτέο 3

* Για το ζητούμενο με τον μεγεθυντικό φακό (αύξηση μεγέθους γραμματοσειράς ανά λέξη του κειμένου) θα χρειαστεί να τροποποιήσουμε πρώτα   το html του κειμένου αυτού, 
  για να μπορούμε να προσδιορίζουμε σε ποιά κομμάτια θα γίνει ποια ενέργεια. 

  Στην περίπτωση μας θα θέλαμε να διαχωρίσουμε την κάθε μία λέξη του κειμένου από την άλλη, οπότε θα μας βολεύει να βάζαμε την κάθε μία   λέξη του κειμένου μέσα σε μία ετικέτα &lt;span&gt;&lt;/span&gt;.

  Ύστερα όμως έρχεται το ερώτημα: ποια είναι τα σημεία του κειμένου που χρειάζονται μεγέθυνση; 

  Παρατηρούμε ότι οι τίτλοι (h) είναι όλοι αρκετά μεγάλοι και έντονοι. Τα σημεία που χρειάζονται μεγέθυνση είναι οι παράγραφοι οι         οποίες βρίσκονται ανάμεσα σε ετικέτες &lt;p&gt;&lt;/p&gt;. Άρα θα θέλαμε να βάλουμε την κάθε λέξη της κάθε παραγράφου                   &lt;p&gt;&lt;/p&gt; μέσα σε μία ετικέτα &lt;span&gt;&lt;/span&gt;. 

  Έχοντας στο νου μας τα παραπάνω θα χρησιμοποιήσουμε μία συνάρτηση που μας βολεύει πολύ:

  ```
  $("html").find('p').each(function(){......});
  ```
  Η παραπάνω συνάρτηση βρίσκει την κάθε παράγραφο p μέσα σε όλο το &lt;html&gt;&lt;/html&gt; και για το κάθε ένα p εκτελεί τη συνάρτηση   function. 
  
  Ορίζουμε έτσι τη συνάρτηση function:
  
  ```
  function(){
 	
   var text = $(this).text().split(' ');//Η κάθε μία λέξη της παραγράφου που διαχωρίζεται με κένο από την άλλη μπαίνει στον πίνακα.
   for( var i = 0, len = text.length; i<len; i++ ) { //Στην κάθε μία λέξη προστίθεται μία ετικέτα <span></span>.
   text[i] = '<span onmouseover=(this.style.fontSize="xx-large") onmouseout=(this.style.fontSize="initial") >'+text[i]+'</span>';
   }
     
   paragraphContent = text.join(' '); //Όλο το ανανεωμένο περιεχόμενο του πίνακα περνάει στη μεταβλητή paragraphContent. 
   $(this).html(paragraphContent);//Η συνάρτηση αυτή αντικαταστεί το περιεχόμενο αυτής της παραγράφου με το καινούργιο της μεταβλητής.
   
   
   }
  ```
   Στην κάθε &lt;span&gt;&lt;/span&gt; ετικέτα, προσθέσαμε επί τόπου τις ιδιότητες για την αλλαγή της γραμματοσειράς που θέλαμε.
   
   Έτσι, το τελικό κομμάτι κώδικα είναι: 
   ```
   var paragraphContent = "";
  
   $("html").find('p').each(function(){
 
   var text = $(this).text().split(' ');//
   for( var i = 0, len = text.length; i<len; i++ ) {
   text[i] = '<span onmouseover=(this.style.fontSize="xx-large") onmouseout=(this.style.fontSize="initial") >'+text[i]+'</span>';
   }
          
   paragraphContent = text.join(' ');
   $(this).html(paragraphContent);
   });
   ```
   και το εισάγουμε μέσα στη συνάρτηση start() στο αρχείο chart.js.
   
   Τέλος, στο αρχείο index.html στο &lt;div id="value-scale"&gt; βάζουμε τα ποσά 25k, 50k, 100k, 500k, 1m και αυτά σε ετικέτες &lt;p&gt;&lt;/p&gt; γιατί θέλουμε ο κωδικάς μας να μεγεθύνει και αυτά. 
   
   ```
   <div id="value-scale">
            <div id="f">
                <p>&#8212;UK average salary</p>
            </div>
            <div id="a">
                <p><strong>&#163;25k &#8212;</strong></p>
            </div>
            <div id="b">
                <p><strong>&#163;50k &#8212;</strong></p>
            </div>
            <div id="c">
                <p><strong>&#163;100k &#8212;</strong></p>
            </div>
            <div id="d">
                <p><strong>&#163;500k &#8212;</strong></p>
            </div>
            <div id="e">
                <p><strong>&#163;1m &#8212;</strong></p>
            </div>
    </div>
    ```
* Για να βάλουμε ήχο πάνω από τον κάθε κύκλο που θα λέει την ονομασία του δωρητή και το ποσό της δωρεάς, πρέπει να προσθέσουμε κάποιον   κώδικα μέσα στη συνάρτηση mouseover(d, i), ο οποίος θα πέρνει σαν όρισμα το donor και το amount του κάθε κύκλου. Ο κώδικας αυτός θα     είναι: 
  ```
  var msg = new SpeechSynthesisUtterance(donor + ' £' + amount);
  window.speechSynthesis.speak(msg);
  ```
  Χρησιμοποιούμε τη βιβλιοθήκη SpeechSynthesisUtterance.
  Εισάγουμε στη μεταβλητή msg το μήνυμα που θέλουμε να ακουστεί και το αναπαράγουμε με την συνάρτηση speak.
  
  Επίσης, βάζουμε και αντιστοίχη γραμμή κώδικα στη συνάρτηση mouseout()
  ```
  window.speechSynthesis.cancel(); 
  ```  
  που θα σταματάει το μήνυμα όταν το ποντίκι βγαίνει από τον κύκλο, ούτως ώστε να αποτρέψουμε τη συσυσσώρευση πολλών μηνυμάτων προς       αναπαραγωγή.

* Δημιουργούμε μία ακόμα επιλογή ομαδοποίησης των δεδομένων με όνομα Split by amount of donation.
  
  Στο αρχείο index.html "δομούμε" τη νέα μας ομοδοποίηση:
  
  Πρώτα, θα δημιουργήσουμε ένα καινούργιο κουμπί για την παράγραφο της ομαδοποίησης αυτής κάτω από τα υπόλοιπα κουμπιά της λίστας:
  ```
  <li><a href="#" onmousedown="button_sound.play()" role="button" class="pure-button switch" id="group-by-amount">Split by amount of donation</a>
  ```
  
  Φτιάχνουμε ένα κανούργιο &lt;div id="view-donation-amount"&gt; με αντιπροσωπευτικό id και το εισάγουμε κάτω από τα υπόλοιπα             &lt;div&gt; ομαδοποίησης.  
  ```
          <div id="view-donation-amount">
            <h3> Split by amount of donation </h3>
                <div id="amounts-scale">
                      <div id="first">
                            <p><strong>Donations over &#163;1m </strong></p>
                      </div>
                      <div id="second">
                            <p><strong>Donations over &#163;500k </strong></p>
                      </div>
                      <div id="third">
                            <p><strong>Donations over &#163;100k</strong></p>
                      </div>
                      <div id="fourth">
                      <p><strong>Donations over &#163;50k </strong></p>
                      </div>
                      <div id="fifth">
                      <p><strong>Donations over &#163;25k </strong></p>
                      </div>
                      <div id="sixth">
                      <p><strong>Smaller donations </strong></p>
                      </div>  
                </div>
        </div>
  ```
 Το &lt;div&gt; αυτό περίεχει τον τίτλο της ομαδοποίησης μέσα στην ετικέτα &lt;h3&gt;, και 6 φωλιασμένα &lt;div&gt; για τα ποσά βάσει    των οποίων θα γίνει η oμαδοποίηση, με δικά τους μοναδικά ids τα οποία κατόπιν θα μας χρειαστούν για τη μορφοποίηση τους. Τα περιεχόμενα τους τα βάζουμε σε &lt;p&gt; και τα κάνουμε &lt;strong&gt;. 
 
 Στο αρχείο chart.js:

Διαβάζοντας τον κώδικα παρατηρούμε ότι η μετάβαση από το ένα στυλ ομαδοποίσης σε ένα άλλο γίνεται στη συνάρτηση transition(). Θα "πειράξουμε" την transition() και θα της προσθέσουμε ένα επιπλέον if (name === "group-by-amount") {} το οποίο όταν θα επιλέγεται μέσω του αντίστοιχου κουμπιού θα κάνει fade in στο #view-donation-amount που δημιουργήσαμε, fade out σε όλα τα υπόλοιπα # και θα επιστρέφει τη συνάρτηση amountsGroup().

```
if (name === "group-by-amount") {
		$("#initial-content").fadeOut(250);
		$("#value-scale").fadeOut(250);
		$("#view-party-type").fadeOut(250);
		$("#view-source-type").fadeOut(250);
		$("#view-donation-amount").fadeIn(1000);
		$("#view-donor-type").fadeOut(250);
		
		return amountsGroup();
	}
```
Επίσης, βάζουμε ένα fade out από το group-by-amount στα υπόλοιπα if της transition().

Φτιάχνουμε τώρα την amountsGroup(), με τον τρόπο που είναι φτιαγμένες οι αντίστοιχες total, partyGroup, donorType και fundsType :

```
function amountsGroup() {
	force.gravity(0)
		.friction(0.8)
		.charge(function(d) { return -Math.pow(d.radius, 2.0) / 3; })
		.on("tick", amounts)
		.start()
		.colourByParty();
}
```
Στο .on("tick", amounts) καλείται η amounts() την οποία φτίαχνουμε με τον τρόπο των all, parties, entities και types:

```
function amounts(e) {
	node.each(moveToAmounts(e.alpha));

		node.attr("cx", function(d) { return d.x; })
			.attr("cy", function(d) {return d.y; });
}
```
Οι κόμβοι μετακινούνται με τη συνάρτηση moveToAmounts(alpha) την οποία δημιουργούμε. Ορίζουμε ένα σταθερό κέντρο για τη θέση Y των κόμβων και ανάλογα με το value του κάθε κόμβου (το ποσό της δωρεάς) ορίζουμε το X σε μία τιμή που ταιριάζει με τα 6 ποσά που διαλέξαμε νωρίτερα.

```
function moveToAmounts(alpha) {
	return function(d) {
		var centreY = svgCentre.y;
		if (d.value <= 25001) {
				centreX = svgCentre.x + 500;
			} else if (d.value <= 50001) {
				centreX = svgCentre.x + 400;
			} else if (d.value <= 100001) {
				centreX = svgCentre.x + 300;
			} else  if (d.value <= 500001) {
				centreX = svgCentre.x + 200;
			} else  if (d.value <= 1000001) {
				centreX = svgCentre.x + 100;
			} else  if (d.value <= maxVal) {
				centreX = svgCentre.x ;
			} else {
				centreX = svgCentre.x; // εάν το ποσό υπερβαίνει το maxVal πάλι θα μπει μαζί με τα μεγαλύτερα
			}
		
		d.x += (centreX - d.x) * (brake + 0.02) * alpha * 1.1;
		d.y += (centreY - d.y) * (brake + 0.02) * alpha * 1.1;
	};
}

```
 Απομένει να αλλάξουμε τη θέση των 6 ετικετών με τους τίτλους των ποσών στο αρχείο style.css:

```
/*Amounts*/
#first {
    font-weight: bold;
    position: absolute;
    top: 100px;
    left: -403px;
    width: 93px;
}

#second {
    font-weight: bold;
    position: absolute;
    top: 100px;
    left: -289px;
    width: 93px;
}

#third {
    font-weight: bold;
    position: absolute;
    top: 100px;
    left: -149px;
    width: 93px;
}

#fourth {
    font-weight: bold;
    position: absolute;
    top: 100px;
    left: -23px;
    width: 93px;
}

#fifth {
    font-weight: bold;
    position: absolute;
    top: 100px;
    left: 108px;
    width: 93px;
}

#sixth {
    font-weight: bold;
    position: absolute;
    top: 100px;
    left: 232px;
    width: 93px;
}
```

![page ruler](https://user-images.githubusercontent.com/22656813/33617685-08dd63aa-d9e9-11e7-91ff-78a98fc0a2eb.PNG)
 
*Για βοήθεια κατέβασα ένα extension του chrome που λέγεται Page Ruler και κατάφερα έτσι να βρω τα pixel που ήθελα.* 
#### Παραδοτέο 4 
...
