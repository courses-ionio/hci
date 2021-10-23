### :paperclip: Μάθημα: Επικοινωνία Ανθρώπου Υπολογιστή(hci)

<hr>
<h4>
  Ονοματεπώνυμο: Δημοστέν Τζάμα
  <br>
  Αριθμός Μητρώου: Π2019213
</h4>

:newspaper:: [GitHub Profile](https://github.com/p19tzam)<br>
:email:: [Student Mail](mailto:p19tzam)<br>
:pencil:: [Λειτουργικό σύστημα (neofetch & journalctl -b)](https://github.com/p19tzam/hci/blob/2019213/projects/2019213/README.md#%CE%BB%CE%B5%CE%B9%CF%84%CE%BF%CF%85%CF%81%CE%B3%CE%B9%CE%BA%CF%8C-%CF%83%CF%8D%CF%83%CF%84%CE%B7%CE%BC%CE%B1-neofetch--journalctl--b)

<h3> Πίνακας με σύνοψη των προθεσμιών και των παραδοτέων</h3>

| Εβδομάδα* | Παραδοτέο |
| --- | --- |
| 1 | [Εισαγωγή](https://github.com/p19tzam/hci/blob/2019213/projects/2019213/README.md#pushpin-%CE%B5%CE%B9%CF%83%CE%B1%CE%B3%CF%89%CE%B3%CE%AE) |
| 2 | [Άσκηση γραμμής εντολών (ram,cpu,gpu,network,hard drives)](https://github.com/p19tzam/hci/blob/2019213/projects/2019213/README.md#---book-%CF%80%CE%B1%CF%81%CE%B1%CE%B4%CE%BF%CF%84%CE%AD%CE%BF-2) |
| 3 | Άσκηση γραμμής εντολών |
| 4 | συμμετοχικό περιεχόμενο 1A |
| 5 | Άσκηση γραμμής εντολών |
| 6 | συμμετοχικό περιεχόμενο 2A |
| 7 | Άσκηση γραμμής εντολών |
| 8 | συμμετοχικό περιεχόμενο 1B |
| 9 | Άσκηση γραμμής εντολών |
| 10 | συμμετοχικό περιεχόμενο 2B |
| 11 | Άσκηση γραμμής εντολών |
| 12 | Τελική αναφορά και αίτημα ενσωμάτωσης για βαθμολόγηση |

<hr>
<br>

## :pushpin:: Εισαγωγή
<p>Μέσα από το μάθημα <b>Επικοινωνία Ανθρώπου Υπολογιστή</b> θέλω να επεκτείνω τις γνώσεις μου πάνω στο τερματικό(γραμμή εντολών)  να μπορώ να χρησιμοποιώ το GitHub μέσω των παραδοτέων(Ασκήσεων) ώστε να το εξελίξω και αυτο.
    Επιπλέον  θέλω να διευρύνω τις γνώσεις μου στο λειτουργικό σύστημα Linux(σύστημα αρχείων, λειτουργικότητα του linux κτλπ.) γενικότερα θέλω να μάθω όσο μπορώ περισσότερα πράγματα μέσα από αυτό το μάθημα που να έχουν σχέση με το λειτουργικό σύστημα <b>Linux</b>.
</p> 

<br>

## Λειτουργικό σύστημα (neofetch & journalctl -b)
### Neofetch
ASCIINEMA με την εντολή <b>neofetch</b> για την βαθμολόγηση του λειτουργικού μου συστήματος.
```bash
# Εγκατάσταση neofetch & asciinema στο archlinux
pacman -S neofetch
pacman -S asciinema
```

[![asciicast](https://asciinema.org/a/443885.svg)](https://asciinema.org/a/443885)

<br>

### journalctl -b
ASCIINEMA με την εντολή <b>journalctl -b</b> για την βαθμολόγηση του λειτουργικού μου συστήματος. <b>1423 Lines</b>
<br>
[![asciicast](https://asciinema.org/a/443887.svg)](https://asciinema.org/a/443887)
<br>
<br>
<br>

<h2>   :book:: Παραδοτέο 2</h2>

### :pushpin:: ΕΡΓΑΣΙΑ ΓΡΑΜΜΗΣ ΕΝΤΟΛΩΝ 1η(δίσκος, μνήμη, επεξεργαστής, δίκτυο, γραφικά)


## CPU
[![asciicast](https://asciinema.org/a/443889.svg)](https://asciinema.org/a/443889)



## Hard Drives
[![asciicast](https://asciinema.org/a/443890.svg)](https://asciinema.org/a/443890)


## RAM
[![asciicast](https://asciinema.org/a/443891.svg)](https://asciinema.org/a/443891)


## GPU
[![asciicast](https://asciinema.org/a/443892.svg)](https://asciinema.org/a/443892)


## Network Interface
[![asciicast](https://asciinema.org/a/443893.svg)](https://asciinema.org/a/443893)











Σε αυτό το παραδοτέο επέλεξα την συγκεκριμένη άσκηση γιατί μπορώ να χρησιμοποιήσω <b>bash scripting</b> για επιπλέων βαθμό όπως αναφέρετε στις <b>οδηγίες</b>.
<br>
Σε αυτό το <b>assignment</b> έχω να κάνω: 1.Αναζήτηση, 2.εγκατάσταση και αναπαραγωγή ενός τραγουδιού μέσα από το τερματικό.
<br>
Για αυτό το <b>assignment</b> χρειάστηκαν δύο softwares το youtube-dl και το mpv.
```bash
# How to install these softwares.
sudo apt install mpv
sudo apt install youtube-dl
```
<br>
Όλα αυτά τα έκανα αυτοματοποιημένα με bash scripting. Που παίρνει ένα argument ως όνομα για αναζήτηση και το κάνει εγκατάσταση ως mp3.
<br>
Η χρήση του bash script προγράμματος μου είναι αυτή που δείχνω στο asciinema παρακάτω.
<br>

[![asciicast](https://asciinema.org/a/443336.svg)](https://asciinema.org/a/443336)

<br>

### Ο κώδικας του bash script είναι ο εξής
```bash
#!/bin/bash

# BLOCK 1 START
# Ελέγχει το IF αν δεν δωσουμε ενα όρισμα. Π.χ αν δεν δωσουμε θα μας βγάλει το error message και θα κάνει exit το πρόγραμμα.

if  [[ $# -eq 0 ]] ; then # START IF
    echo 'Missing argument: bash downloadyt-video.sh [song name]' # Error message
    exit 1 # Exit command
fi # END IF 
# BLOCK 1 END

#-------------------------------------------------------------------------------------------------------------------

# BLOCK 2 START
# Εμφανίζει ένα μήνυμα και αμέσως μετά τρέχει την εντολή που κάνει search και download ως mp3 το τραγούδι. 

echo 'Search && Download from youtube mp3 songs\n' # Message programm start

youtube-dl -x --audio-format mp3 ytsearch:$1 # Search and Download mp3 song
# BLOCK 2 END

#-------------------------------------------------------------------------------------------------------------------

# BLOCK 3 START
# Εμφανίζει ένα μήνυμα οτι το τραγούδι ξεκινάει και κάνει αναπαραγωγή ολα τα αρχεία σε .mp3 για αυτό η καλύτερη λειτουργία είναι το πρόγραμμα να βρίσκεται σε έναν κενό φάκελο χωρίς αλλα .mp3 αρχεία εκτός απο αυτό που θα κάνει download το πρόγραμμα.

echo 'Playing audio....' # Info message
mpv *.mp3 # Play mp3 files
# BLOCK 3 END
```
<br>

#### :arrow_double_up:: [Επιστροφή στον πίνακα.](https://github.com/p19tzam/hci/blob/2019213/projects/2019213/README.md#-%CF%80%CE%AF%CE%BD%CE%B1%CE%BA%CE%B1%CF%82-%CE%BC%CE%B5-%CF%83%CF%8D%CE%BD%CE%BF%CF%88%CE%B7-%CF%84%CF%89%CE%BD-%CF%80%CF%81%CE%BF%CE%B8%CE%B5%CF%83%CE%BC%CE%B9%CF%8E%CE%BD-%CE%BA%CE%B1%CE%B9-%CF%84%CF%89%CE%BD-%CF%80%CE%B1%CF%81%CE%B1%CE%B4%CE%BF%CF%84%CE%AD%CF%89%CE%BD)


