# Μάθημα: Επικοινωνία Ανθρώπου-Υπολογιστή

#### Ονοματεπώνυμο: Τιμόθεος Αυγερινός

### Αριθμός Μητρώου: Π2015009


# Εργασία Ανάπτυξης

* [εκτελέσιμο link](https://p15avge.github.io/D3js-US-educational-attainment/)
* [link αποθετηρίου](https://github.com/p15avge/D3js-US-educational-attainment)

## Παραδοτέο 1   

1. **Αλλάξτε τα χρώματα στα 3 γραφήματα.**
       
     * Στο **πρώτο γράφημα** τροποποιούμε τον κώδικα που βρίσκετε στο αρχείο **assets/scripts/script_1.js** , συγκεκριμένα στην γραμμή **23**.
          ```javascript
             colour = d3.scaleOrdinal().range(["#ae0001", "#eeba30", "#adff00", "#74d600", "#00d27f", "#011f4b", "#005b96"])
	    
          ``` 
        Screenshot στο οποίο φένωνται οι αλλαγές στα χροματα στο **γράφημα 1**
	![](https://github.com/p15avge/hci/blob/2015009/projects/2015009/asset1.png)
     
     
     * Στο **δεύτερο γράφημα** τροποποιούμε τον κώδικα που βρίσκετε στο αρχείο **assets/scripts/script_2.js** , στην γραμμή **14** και στις   γραμμές **178-190** .
       ```javascript
             var color = d3.scaleLinear().domain([0, 1/4*5000000, 2/4*5000000, 3/4*5000000, 5000000]).range(["#73c3bf", "#a1d8c8", "#cbe0a7", "#f2db84"])
       ```
       ```javascript
        if (treeSumSortType == "number") {
                    color = d3.scaleLinear().domain([0, 1/4*5000000, 2/4*5000000, 3/4*5000000, 5000000]).range(["#73c3bf", "#a1d8c8", "#cbe0a7", "#f2db84"]);
                    return d["Total College"];
                } else if (treeSumSortType == "percent") {
                    color = d3.scaleLinear().domain([0, 1/4*50, 2/4*50, 3/4*50, 50]).range(["#73c3bf", "#a1d8c8", "#cbe0a7", "#f2db84"]);
                    return d["Percent College"];
                } else if (treeSumSortType == "male") {
                    color = d3.scaleLinear().domain([0, 1/4*50, 2/4*50, 3/4*50, 50]).range(["#73c3bf", "#a1d8c8", "#cbe0a7", "#f2db84"]);
                    return d["Percent College - Male"];
                } else {
                    color = d3.scaleLinear().domain([0, 1/4*50, 2/4*50, 3/4*50, 50]).range(["#73c3bf", "#a1d8c8", "#cbe0a7", "#f2db84"]);
                    return d["Percent College - Female"];
                }
       ```
       
       
     * Στο **τρίτο γράφημα** τροποποιούμε τον κώδικα που βρίσκετε στο αρχείο **assets/scripts/script_3.js** , στην γραμμή **19**.
         ```javascript 
         .range(["#ae0001", "#eeba30", "#adff00", "#74d600", "#00d27f", "#011f4b", "#005b96"])
         ```
 
2. **Αντικαταστήστε τις διεπαφές στα "κουμπιά" του 2ου και 3ου γραφήματος με άλλες της επιλογής σας.**
     * Για την αλλαγη των **buttons** στα γραφήματα **2** και **3** , προσθεσα στο αρχείο **style.css** στις γραμμές **85-117** τις παρακάτω γραμμές κώδικα:
     ```
        .radio-toolbar label {
        
         background-color: white; 
          color: black; 
          border: 2px outset #f6c8b3;
          padding: 5px 10px;
          text-align: center;
          text-decoration: none;
          display: inline-block;
          font-size: 16px;
          margin: 6px 8px;
          -webkit-transition-duration: 0.2s;
          transition-duration: 0.2s;
          cursor: pointer;
          box-shadow: 0 9px #666;
          font-weight: bold;
          }

       .radio-toolbar label:hover {
          background-color: #f6c8b3;
           color: white; 
         }

      .radio-toolbar label:active {
          background-color: #f6c8b3;
          box-shadow: 0 5px #999;
          transform: translateY(4px);
      }

      .radio-toolbar input[type="radio"]:checked+label {
          background-color: #f6c8b3;
          color: white;
      }
     ```
     
     **Screenshot** με αλλαγμένα τα κουμπία απο το **δευτερο γράφημα**
      ![]()
     
     
3.**Όταν το ποντίκι διέρχεται επάνω από κάθε επιλογή του menu στην κορυφή της σελίδας, να ακούγεται κάποιος ήχος της επιλογής σας.**

   * Αρχικά ,για να ακούγεται ήχος κάθε φορά που διέρχεται το ποντίκι στο menu της σελίδας , κατέβασα ενα αρχείο **click.mp3** απο το διαδίκτυο.
   
   * Ανέβασα δύο αρχεία του ηχητικού αρχείου , ενα **mp3** και ενα **ogg** ,για να υποστηρίζεται απ'όλους τους φυλλομετρητές.
   
   * Έπειτα, ανέβασα το **click.js** αρχείο στο repository του κώδικά μου, για να υποστηρίζεται και απο τον IE φυλλομετρητή.
   
   * Μετά τροποποίησα το αρχείο index.html, εισάγοντας στην γραμμή **20** ενα **script tag**:
     
       ```javascript
       <script type="text/javascript" src="click.js"></script>
       ```
   * Και ένα **audio tag** στις γραμμές **124-128**.
       ```javascript
       <audio>
        <source src="click.mp3">
        <source src="click.ogg">
        </audio>
        <div id="sounddiv"><bgsound id="sound"></div>
       ```  
   * Τέλος , στις γραμμές **37-40** προσθέτουμε τον κώδικα :
       ```
        onmouseover="playclip();"
       ```
        Οπότε τα tags των επιλογών του menu μας θα αλλάξουν ως :
        ```javascript
        <li><a href="#top" onmouseover="playclip();" >Top</a></li>
        <li><a href="#national" onmouseover="playclip();" >National</a></li>
        <li><a href="#regional" onmouseover="playclip();" >Regional</a></li>
        <li><a href="#state" onmouseover="playclip();" >State-Level</a></li>
        ```
4.**Όταν το ποντίκι διέρχεται πάνω από κάποια πρόταση/κείμενο της σελίδας, να ακούγεται αυτόματα η αφήγηση του κειμένου (text-to-speech).**
   
   * Για να ακούγεται η αφήγηση του κάθε κειμένου, όταν θα διέρχεται το ποντίκι πάνω, χρησιμοποιούμε τη βιβλιοθήκη **ResponsiveVoice**, στην     γραμμή **14**, σε **script tag** στο **index.html**:
     
     ```
        <script src="https://code.responsivevoice.org/responsivevoice.js"></script>
     ```
   
   * Καθώς και την παρακάτω συνάρτηση στις γραμμές **110-120** ,μέσα σε **script tag**:
     
     ```javascript 
     
       <script>
        $(document).ready(function(){
           $("h1, h2, label").mouseenter(function(){
		  responsiveVoice.cancel(); 
  		  responsiveVoice.speak($(this).text());
          });
         $("h1, h2, label").mouseleave(function(){
             responsiveVoice.cancel();
    	    });
        });
        </script>
     ```
   
 5.**Εφαρμόστε responsive design στη σελίδα και κυρίως στο αρχικό menu έτσι ώστε να προσαρμόζεται σε οθόνες διαφορετικών διαστάσεων (π.χ. Bootstrap).**

* Για να προσαρμόζετε η ιστοσελίδα μας σε διαφορετικά **μεγέθη οθονών**(π.χ.smartphones) αρκεί να χρησιμοποιήσουμε χρήσιμες βιβλιοθήκες της Bootstrap. Χρησιμοποιήθηκαν βιβλιοθήκες από τις νεότερες εκδόσεις της **css** και **js** της **bootstrap**, της **jquery** και **popper**. Οι αλλαγές που έγιναν στο αρχείο **index.html** βρίσκονται στις γραμμές **12** και **15-17** αντήστοιχα.
   ```javascript
     <link rel="stylesheet" href="https://stackpath.bootstrapcdn.com/bootstrap/4.1.3/css/bootstrap.min.css" integrity="sha384-MCw98/SFnGE8fJT3GXwEOngsV7Zt27NXFoaoApmYm81iuXoPkFOJwJ8ERdknLPMO" crossorigin="anonymous">
     <script src="https://stackpath.bootstrapcdn.com/bootstrap/4.1.3/js/bootstrap.min.js" integrity="sha384ChfqqxuZUCnJSK3+MXmPNIyE6ZbWh2IMqE241rYiqJxyMiZ6OW/JmZQ5stwEULTy" crossorigin="anonymous"></script>
  <script src="https://ajax.googleapis.com/ajax/libs/jquery/3.3.1/jquery.min.js"></script>
  <script src="https://cdnjs.cloudflare.com/ajax/libs/popper.js/1.14.3/umd/popper.min.js"   integrity="sha384ZMP7rVo3mIykV+2+9J3UJ46jBk0WLaUAdn689aCwoqbBJiSnjAK/l8WvCWPIPm49" crossorigin="anonymous"></script>
   ```
   
 * Επίσεις πρόσθεσα και ένα **meta tag** για να έρχεται στις **διαστάσεις της κάθε συσκευής** στην γραμμή **6**.   
   ```javascript
      <meta name="viewport" content="width=device-width, initial-scale=1">   
   ```
 * Και μετά πρόσθεσα τον παρακάτω κώδικα, στις γραμμές **26-44** στο αρχείο **index.html**, ώστε το **menu** της ιστοσελίδας να προσαρμόζεται σωστά σε μικρότερες συσκευές.
   ```javascript
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
   
 * Τέλος αντικατέστισα τα **nav tags** που υπήρχαν στο αρχείο **style.css** με τις παρακάτω γραμμές κώδικα :
   ```
        .navbar {
          padding: .8rem;
          }

       navbar-nav li { 
        padding-right: 20px;
       }

       .nav-link { 
         font-size: 1.1em !important;
        }
   ```
 
## Παραδοτέο 2 



# Εργασία Περιεχομένου

* [εκτελέσιμο link](https://p15avge.github.io/gr/)
* [link αποθετηρίου](https://github.com/p15avge/gr)

# Δραστηριότητα 1.Α

## Links προσθήκης εικόνων και αλλαγών 

  1. [link config.yml](https://github.com/p15avge/gr/pull/1/files)
  2. [link πρώτης εικόνας](https://p15avge.github.io/gr/gallery/apple-iii/)
  3. [link δεύτερης εικόνας](https://p15avge.github.io/gr/gallery/atari-520st/)
  4. [link τρίτης εικόνας](https://p15avge.github.io/gr/gallery/macbook-pro/)
  5. [link τέταρτης εικόνας](https://p15avge.github.io/gr/gallery/magnavox-odyssey/)
  6. [link πέμπτης εικόνας](https://p15avge.github.io/gr/gallery/toshiba-t1100/)
