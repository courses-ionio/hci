# Οπτικοποίηση δεδομένων εκπαιδευτικού συστήματος (USA)

## Τρικοίλη Μαρία
## ΑΜ Π2015037

### Link προσωπικόυ αποθετήριου κώδικα: https://github.com/Mariatrik/D3js-US-educational-attainment
### Link εκτελέσιμου κώδικα: https://mariatrik.github.io/D3js-US-educational-attainment/ <br>

## Παραδοτέο 1 : Αρχικό έργο και ενδιάμεση αναφορά προόδου (20%), 7 Νοεμβρίου


## Για να αλλάξω τα χρώματα στα γραφήματα άλλαξα τις εξής σειρές κώδικα ( από τα αρχεία script_1.js ,script_2.js ,script_3.js αντίστοιχα )
  1. colour = d3.scaleOrdinal().range(["#7FFF00", "#8A2BE2", "#FF7F50", "#00FFFF", "#B8860B", "#556B2F", "	#8B0000"]), // colour scheme
  2.var color = d3.scaleLinear().domain([0, 1/4*5000000, 2/4*5000000, 3/4*5000000, 5000000]).range(["#8B0000", "#B8860B", "#8B008B", "	#7FFF00"]);
  3.var colors = d3.scaleOrdinal()
//    .range(["#98abc5", "#8a89a6", "#7b6888", "#6b486b", "#a05d56", "#d0743c", "#ff8c00"]);
//    .range(["#177E89", "#0a5971", "#0f436f", "#444b80", "#664d83", "#95457c", "#9a295d"]);
//.range(["#0a5971", "#177E89", "#4b8e77", "#a9ad70", "#ccb221", "#cb8b25", "#DB3A34"]);
//.range(["#ef9999", "#e8b9ae", "#d8cdb3", "#90afa2", "#6f94a3", "#607495", "#4e5684"]);
.range(["#7FFF00", "#D2691E", "#DC143C", "#8B008B", "#4B0082", "#F08080", "#20B2AA"]);
//.range(["hsl(190, 69%, 65%)", "hsl(177, 69%, 65%)", "hsl(144, 69%, 65%)", "hsl(100, 69%, 65%)", "hsl(47, 69%, 65%)", "hsl(28, 69%, 65%)", "hsl(28, 69%, 65%)"]);

 Στιγμιότυπο : 
![screenshot](screenshot.png)

## Για να αλλάξω τις διεπαφές των κουμπιών άλλαξα το εξής κομμάτι κώδικα από το αρχείο του stylesheet της .css
 .radio-toolbar label {
  display: inline-block;
  background-color: #FF69B4;
  padding: 6px 15px;
  font-family: "Muli";
  font-size: 10px;
  cursor: pointer;
  }
.radio-toolbar input[type="radio"]:checked+label {
  background-color: #bbb;
}

## Για να υπάρχει ήχος κάθε φορά που περνάμε τον κέρσορα πάνω από το μενού χρησιμοποίησα ένα ήχο και αφού τον ανέβασα στο repository μου πρόσθεσα το εξής κομμάτι κώδικα στο αρχείο index.html :
  <audio id="sound" src="click.mp3"></audio>
    <a onmouseover = "playSound();"></a>
    <script>
        function playSound() {
          var sound = document.getElementById("sound");
          sound.play();
      }        
      </script>
