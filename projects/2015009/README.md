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
