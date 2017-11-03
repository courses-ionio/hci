### Data visualization, Ανδρεάνα Στυλίδου, Π2015180

#### Παραδοτέο 1 

* Forked hci repository: https://github.com/andreanastil/hci
 
* Forked DataVisualisation repository: https://github.com/andreanastil/D3js-uk-political-donations

* Personal DataVisualisation Github Page: https://andreanastil.github.io/D3js-uk-political-donations/

Για την απαλοιφή της κατάληξης ".html" στο url της εφαρμογής, αρκεί να μετανομάσουμε το αρχείο full-viz.html σε index.html.
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
  Κατεβάζουμε ένα mp3 αρχείο απο το διαδίκτυο: 

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
* Για να ανοίγει ένα νέο παράθυρο όταν κανουμε κλικ σε κάποια μπάλα, με το αποτέλεσμα google search για τον δωρητή της μπάλας αυτής,
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
  
  Ύστερα χρησιμοποιούμε την συνάρτηση on μαζί με την συνάρτηση που φτιάξαμε και την εισάγουμε κάτω από τις υπόλοιπες (μέσα στη συνάρτηση
  start)
  
  ```
  .on("mouseover", mouseover)
  .on("mouseout", mouseout)
  // Alternative title based 'tooltips'
  // node.append("title")
  //	.text(function(d) { return d.donor; });
  .on("click", click);
  ```
  Επίσης θα θέλαμε κάθε φορά που μετακινούμε τον κέρσορα πάνω από κάποια μπάλα, αυτός να μετατρέπεταi σε χεράκι, ώστε να καταλαβαίνουμε   ότι σε αυτό το σημείο υπάρχει κάποιος υπερσύνδεσμος. Έτσι εισάγουμε μια γραμμή κώδικα μέσα στον ορισμό της συνάρτησης mouseover(d, i)
  
  ```
  this.style.cursor="hand";
  ```
  
  και αντίστοιχα μία γραμμή στον ορισμό της mouseout()
  
  ```
  this.style.cursor="default";
  ```
  που θα επαναφέρει στον κέρσορα την κανονική του εμφάνιση.
  
#### Παραδοτέο 3

* Για το ζητούμενο με τον μεγενθυντικό φακό (αύξηση μεγέθους γραμματοσειράς ανά λέξη του κειμένου) θα χρειαστεί να τροποποιήσουμε πρώτα   το html του κειμένου αυτού, 
  για να μπορούμε να προσδιορίζουμε σε ποιά κομμάτια θα γίνει ποιά ενέργεια. 

  Στην περίπτωση μας θα θέλαμε να διαχωρίσουμε την κάθε μία λέξη του κειμένου από την άλλη, οπότε θα μας βολεύει να βάζαμε την κάθε μία   λέξη του κειμένου μέσα σε μία ετικέτα &lt;span&gt;&lt;/span&gt;.

  Ύστερα όμως έρχεται το ερώτημα: ποιά είναι τα σημεία του κειμένου που χρειάζονται μεγένθυνση; 

  Παρατηρούμε ότι οι τίτλοι (h) είναι όλοι αρκετά μεγάλοι και έντονοι. Τα σημεία που χρειάζονται μεγένθυνση είναι οι παράγραφοι οι         οποίες βρίσκονται ανάμεσα σε ετικέτες &lt;p&gt;&lt;/p&gt;. Άρα θα θέλαμε να βάλουμε την κάθε λέξη της κάθε παραγράφου                   &lt;p&gt;&lt;/p&gt; μέσα σε μία ετικέτα &lt;span&gt;&lt;/span&gt;. 

  Έχοντας στο νου μας τα παραπάνω θα χρησιμοποιήσουμε μια συνάρτηση που μας βολεύει πολύ:

  ```
  $("html").find('p').each(function(){......});
  ```
  Η παραπάνω συνάρτηση βρίσκει την κάθε παράγραφο p μέσα σε όλο το &lt;html&gt;&lt;/html&gt; και για το κάθε ένα p εκτελεί την συνάρτηση   function. 
  
  Ορίζουμε έτσι την συνάρτηση function:
  
  ```
  function(){
 	
   var text = $(this).text().split(' ');//Η κάθε μία λέξη της παραγράφου που διαχωρίζεται με κένο από την άλλη μπαίνει στον πίνακα.
   for( var i = 0, len = text.length; i<len; i++ ) { //Στην κάθε μία λέξη προστίθεται μία ετικέτα <span></span>.
   text[i] = '<span onmouseover=(this.style.fontSize="xx-large") onmouseout=(this.style.fontSize="initial") >'+text[i]+'</span>';
   }
     
   paragraphContent = text.join(' '); //Όλο το ανανεωμένο περιεχόμενο του πίνακα περνάει στην μεταβλητή paragraphContent. 
   $(this).html(paragraphContent);//Η συνάρτηση αυτή αντικαταστεί το περιεχόμενο αυτής της παραγράφου με το καινούργιο της μεταβλητής.
   
   
   }
  ```
   Στην κάθε &lt;span&gt;&lt;/span&gt; ετικέτα, προσθέσαμε επι τόπου τις ιδιότητες για την αλλαγή της γραμματοσειράς που θέλαμε.
   
   Έτσι το τελικό κομμάτι κώδικα είναι 
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
   και το εισάγουμε μέσα στην συνάρτηση start() στο αρχείο chart.js.
   
   Τέλος στο αρχείο index.html στο &lt;div id="value-scale"&gt; βάζουμε τα ποσά 25k, 50k, 100k, 500k, 1m και αυτά σε ετικέτες &lt;p&gt;&lt;/p&gt; γιατί θέλουμε ο κωδικάς μας να μεγενθύνει και αυτά. 
   
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
   

#### Παραδοτέο 4 
...
