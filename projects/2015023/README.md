# Μάθημα: Επικοινωνία Ανθρώπου-Υπολογιστή

### Ονοματεπώνυμο: Τουλουμτζής Νικήτας
### Αριθμός Μητρώου: Π2015023


# Εργασία Ανάπτυξης

* [εκτελέσιμο link](https://ntouloumtzis.github.io/D3js-US-educational-attainment/)
* [link αποθετηρίου(master branch)](https://github.com/ntouloumtzis/D3js-US-educational-attainment)

## Παραδοτέο 1

   - [x] **Αλλάξτε τα χρώματα στα 3 γραφήματα.**

   - Για την αλλαγή των χρωμάτων στα γραφήματα, τροποποιούμε τους κώδικες στα αντίστοιχα αρχεία των γραφημάτων.

        - Για το πρώτο γράφημα ( στο αρχείο: assets/scripts/script_1.js )

          ```
          colour = d3.scaleOrdinal().range(["#90afc5", "#336b87", "#2a3132", "#763626", "#258039", "#f5be41", "#cf3721"])
          ```
        
       
        - Για το δεύτερο γράφημα ( στο αρχείο: assets/scripts/script_2.js )

          ```
          var color = d3.scaleLinear().domain([0, 1/4*5000000, 2/4*5000000, 3/4*5000000, 5000000]).range(["#fb6542", "#ffbb00", "#375e97", "#3f681c"]);
          ```
          ```
          if (treeSumSortType == "number") {
                    color = d3.scaleLinear().domain([0, 1/4*5000000, 2/4*5000000, 3/4*5000000, 5000000]).range(["#fb6542", "#ffbb00", "#375e97", "#3f681c"]);
                    return d["Total College"];
                } else if (treeSumSortType == "percent") {
                    color = d3.scaleLinear().domain([0, 1/4*50, 2/4*50, 3/4*50, 50]).range(["#fb6542", "#ffbb00", "#375e97", "#3f681c"]);
                    return d["Percent College"];
                } else if (treeSumSortType == "male") {
                    color = d3.scaleLinear().domain([0, 1/4*50, 2/4*50, 3/4*50, 50]).range(["#fb6542", "#ffbb00", "#375e97", "#3f681c"]);
                    return d["Percent College - Male"];
                } else {
                    color = d3.scaleLinear().domain([0, 1/4*50, 2/4*50, 3/4*50, 50]).range(["#fb6542", "#ffbb00", "#375e97", "#3f681c"]);
                    return d["Percent College - Female"];
                }
           ```
        
        - Για το τρίτο γράφημα ( στο αρχείο: assets/scripts/script_3.js )

           ```
           var colors = d3.scaleOrdinal()
           .range(["#98abc5", "#8a89a6", "#7b6888", "#6b486b", "#a05d56", "#d0743c", "#ff8c00"]); // Picked colors
           ```


   - [x] **Αντικαταστήστε τις διεπαφές στα "κουμπιά" του 2ου και 3ου γραφήματος με άλλες της επιλογής σας.**


   - Για την αλλαγή στις διεπαφές των buttons του 2ου και 3ου γραφήματος, τροποποίησα στο αρχείο **style.css** τις παρακάτω 
     γραμμές κώδικα.
         
         .radio-toolbar label {
         background-color: white; 
         color: black; 
         border: 2px outset #304040;
         padding: 5px 10px;
         text-align: center;
         text-decoration: none;
         display: inline-block;
         font-size: 16px;
         margin: 6px 8px;
         -webkit-transition-duration: 0.2s;
         transition-duration: 0.2s;
         cursor: pointer;
         box-shadow: 0 9px #999;
         font-weight: bold;
         }
     
         .radio-toolbar label:hover {
         background-color: #304040;
         color: white; 
         }

         .radio-toolbar label:active {
         background-color: #304040;
         box-shadow: 0 5px #666;
         transform: translateY(4px);
         }

         .radio-toolbar input[type="radio"]:checked+label {
         background-color: #304040;
         color: white;
         }


   - [x] **Όταν το ποντίκι διέρχεται επάνω από κάθε επιλογή του menu στην κορυφή της σελίδας, να ακούγεται κάποιος ήχος της επιλογής                σας.**   


   - Για να ακούγεται ήχος κάθε φορά που διέρχεται το ποντίκι στο menu της σελίδας, αρκεί να διαλέξουμε ένα ηχητικό αρχείο(κλιπ).            Αρχικά, κατέβασα ένα mp3 αρχείο από το διαδίκτυο:

     ![]()

     Τέλος, ακολούθησα τα βήματα στην εικόνα της παρακάτω ιστοσελίδας

     ![]()

     Στην ουσία, ανέβασα δύο αρχεία του κλιπ, ένα .mp3 και ενα .ogg, για να υποστηρίζεται απ'όλους τους φιλομετρητές.
     ![γκιφ]()
     
     Μετά, ανέβασα ενα .js αρχείο στο repository του κώδικά μου, για να υποστηρίζεται και απο τον IE φιλομετρητή

     Στη συνέχεια, τροποποίησα το αρχείο **index.html**, εισάγοντας ενα script tag 
     
     inline code
     
     Ενα source tag

     inline code

     καθώς και τον κώδικα 
 
     ινλαιν κοουντ ονμαουςοβερ

     σε κάθε ένα από τα tags των επιλογών του menu μας

     ινλιν ψοδε


   - [x] **Όταν το ποντίκι διέρχεται πάνω από κάποια πρόταση/κείμενο της σελίδας, να ακούγεται αυτόματα η αφήγηση του κειμένου (text-to-            speech).**

   - [x] **Εφαρμόστε responsive design στη σελίδα και κυρίως στο αρχικό menu έτσι ώστε να προσαρμόζεται σε οθόνες διαφορετικών                      διαστάσεων (π.χ. Bootstrap).**



## Παραδοτέο 2 

- [ ] Τροποποιήστε τον κώδικα και το μενού της εφαρμογής έτσι ώστε κάθε στιγμή να είναι εμφανές μόνο ένα από τα 3 γραφήματα, παραμένοντας πάντα στη σελίδα index.html.
  - [ ] Αντικαταστήστε το κάθε ένα από τα 3 γραφήματα με κάποιο άλλο διαδραστικό γράφημα της D3js.
  - [ ] Σε μια καινούργια σελίδα, να τοποθετήστε αντίστοιχα 3 νέα διαδραστικά γραφήματα D3js της 
επιλογής σας, τα οποία θα οπτικοποιούν καινούργια στατιστικά δεδομένα που θα βρείτε από κάποια επίσημη 
στατιστική αρχή (π.χ. ΕΛΣΤΑΤ, Eurostat κ.λπ.)


# Εργασία Περιεχομένου

* [εκτελέσιμο link](https://ntouloumtzis.github.io/gr/)
* [link αποθετηρίου(gh-pages branch)](https://github.com/ntouloumtzis/gr)

## Δραστηριότητα 1.Α

### _Ζητούμενα links εικόνων και αλλαγών στο αποθετήριο_

* **Αλλαγές στο _config.yml αρχείο: [εδώ](https://github.com/mibook/gr/commit/7c42da5cf65a543e65f59c7c10243641ae08f8b3)**

#### 1. Computer Terminal: [εδώ](https://ntouloumtzis.github.io/gr/gallery/computer-terminal/)

#### 2. Eniac: [εδώ](https://ntouloumtzis.github.io/gr/gallery/eniac/)

#### 3. First Modern Headphones: [εδώ](https://ntouloumtzis.github.io/gr/gallery/first-modern-headphones/)

#### 4. Ibm PC: [εδώ](https://ntouloumtzis.github.io/gr/gallery/ibm-pc/)

#### 5. Unix: [εδώ](https://ntouloumtzis.github.io/gr/gallery/unix/)



