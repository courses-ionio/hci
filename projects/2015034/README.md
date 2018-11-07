#Μάθημα: Επικοινωνία Ανθρώπου-Υπολογιστή

##Ονοματεπώνυμο: Μπακογιάννης Ευάγγελος

###Αριθμός Μητρώου: Π2015034

#Εργασία Ανάπτυξης

Link: https://p15bako.github.io/D3js-US-educational-attainment/

Repository:https://github.com/p15bako/D3js-US-educational-attainment

##Παραδοτέο 1

###Αλλάξτε τα χρώματα στα 3 γραφήματα.

Για να αλλαξω τα χρωματα στο 1ο γραφημα εβαλα την εντολη "colour = d3.scaleOrdinal().range(["#b300b3", "#004d00", "#1a1aff", "#e63900", "#ffff1a", "#33ffff", "#a3a375"])"

Για το 2ο γραφημα αλλαξα εντολες, την ".attr("fill", '#006600');", την "return '#006600'" και προσθεσα τα "var color = d3.scaleLinear().domain([0, 1/4*5000000, 2/4*5000000, 3/4*5000000, 5000000]).range(["#73c3bf", "#a1d8c8", "#cbe0a7", "#f2db84"]);
" και "if (treeSumSortType == "number") {
                    color = d3.scaleLinear().domain([0, 1/4*5000000, 2/4*5000000, 3/4*5000000, 5000000]).range(["#bf80ff", "#009966", "#ff1ab3", "#80ff00"]);
                    return d["Total College"];
                } else if (treeSumSortType == "percent") {
                    color = d3.scaleLinear().domain([0, 1/4*50, 2/4*50, 3/4*50, 50]).range(["#bf80ff", "#009966", "#ff1ab3", "#80ff00"]);
                    return d["Percent College"];
                } else if (treeSumSortType == "male") {
                    color = d3.scaleLinear().domain([0, 1/4*50, 2/4*50, 3/4*50, 50]).range(["#bf80ff", "#009966", "#ff1ab3", "#80ff00"]);
                    return d["Percent College - Male"];
                } else {
                    color = d3.scaleLinear().domain([0, 1/4*50, 2/4*50, 3/4*50, 50]).range(["#bf80ff", "#009966", "#ff1ab3", "#80ff00"]);
                    return d["Percent College - Female"];
                }" 

Επισης, για το hover του ποντικιου αλλαξα και μια εντολη στο style.css, την ".grandparent:hover rect {
  fill: #006600;
}"

Για το 3ο γραφημα επελεξα απ τα ηδη ετοιμα χρωματα.


###Αντικαταστήστε τις διεπαφές στα "κουμπιά" του 2ου και 3ου γραφήματος με άλλες της επιλογής σας.

Γι αυτο το ερωτημα τροποποιησα το style.css και συγκεκριμεν  εβαλα τα  ".radio-toolbar label {
    background-color: black; 
    color: white; 
    border: 2px outset #304040;
    padding: 7px 14px;
    text-align: center;
    text-decoration: none;
    display: inline-block;
    font-size: 20px;
    margin: 8px 10px;
    -webkit-transition-duration: 0.2s;
    transition-duration: 0.2s;
    cursor: pointer;
    box-shadow: 0 9px #999;
    font-weight: bold;
}

.radio-toolbar label:hover {
  background-color: #1a66ff;
  color: white; 
}

.radio-toolbar label:active {
  background-color: #1a66ff;
  box-shadow: 0 5px #666;
  transform: translateY(4px);
}

.radio-toolbar input[type="radio"]:checked+label {
  background-color: #1a66ff;
  color: white;
}"


###Όταν το ποντίκι διέρχεται επάνω από κάθε επιλογή του menu στην κορυφή της σελίδας, να ακούγεται κάποιος ήχος της επιλογής σας.

Εισηγαγα 3 αρχεια με το ιδιο ονομα, αλλα με διαφορετικα formats. To ενα ειναι .js, το δευτερο .mp3 και το τριτο .ogg για να αναγνωριζεται απο ολους τους browser. Επισης, τροποποιησα το index.html εισαγωντας ενα audio tag, ενα script tag και την εντολη onmouseover="playclip();" σε ολες τις επιλογες του μενου.


###Όταν το ποντίκι διέρχεται πάνω από κάποια πρόταση/κείμενο της σελίδας, να ακούγεται αυτόματα η αφήγηση του κειμένου (text-to-speech).

Για την εφαρμογη του text-to-speech χρησιμοποιησα την βιβλιοθηκη ResponsiveVoice σε script tag βαζοντας την εντολη:
<script src="https://code.responsivevoice.org/responsivevoice.js"></script>
και την εξης συναρτηση
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



###Εφαρμόστε responsive design στη σελίδα και κυρίως στο αρχικό menu έτσι ώστε να προσαρμόζεται σε οθόνες διαφορετικών διαστάσεων (π.χ. Bootstrap).
Το συγκεκριμενο ερωτημα δεν καταφερα να το κανω να λειτουργησει τελεια. Εκανα διαφορες αλλαγες στο index.html αλλα δεν μου βγηκε.

Παραδοτέο 2

Τροποποιήστε τον κώδικα και το μενού της εφαρμογής έτσι ώστε κάθε στιγμή να είναι εμφανές μόνο ένα από τα 3 γραφήματα, παραμένοντας πάντα στη σελίδα index.html.

Αντικαταστήστε το κάθε ένα από τα 3 γραφήματα με κάποιο άλλο διαδραστικό γράφημα της D3js.

Σε μια καινούργια σελίδα, να τοποθετήστε αντίστοιχα 3 νέα διαδραστικά γραφήματα D3js της επιλογής σας, τα οποία θα οπτικοποιούν καινούργια στατιστικά δεδομένα που θα βρείτε από κάποια επίσημη στατιστική αρχή (π.χ. ΕΛΣΤΑΤ, Eurostat κ.λπ.)


Εργασία Περιεχομένου
https://p15bako.github.io/gr/

https://p15bako.github.io/gr/
