## ΑΝΑΦΟΡΑ - ΕΠΙΚΟΙΝΩΝΙΑ ΑΝΡΩΠΟΥ-ΥΠΟΛΟΓΙΣΤΗ

### [Repository](https://github.com/nickgarlis/pacman)

### [Live Preview](http://vparticles.com/pacman)

### [Αναφορά σε gh-pages](http://vparticles.com/hci/projects/2016158)

### Θέμα: Pacman
|  Όνομα   | Επίθετο |    ΑΜ    |
|----------|---------|----------|
| Νικόλαος | Γκαρλής | Π2016158 |

### 2o Παραδοτέο:
  Αρχικά, δημιούργησα έναν νέο χάρτη με το πρόγραμμα Tiled. Χρησιμοποίησα ένα pokemon tileset το οποίο δημιούργησα εγώ συνθέτοντας tiles τα οποία πήρα από το [Spriters Resource](https://www.spriters-resource.com/fullview/61816/). Έπειτα, αντικατέστησα τα dots με pokeballs ![](https://raw.githubusercontent.com/nickgarlis/pacman/master/assets/pokeball.png), πρόσθεσα μια masterball ![](https://raw.githubusercontent.com/nickgarlis/pacman/master/assets/masterball.png) ως bonus που εμφανίζεται σε ένα τυχαίο σημείο στον χάρτη και τρεις ultraballs ![](https://raw.githubusercontent.com/nickgarlis/pacman/master/assets/ultraball.png) οι οποίες λείτουργουν ως bonus έχοντας σταθερό όμως σημείο στον χάρτη. Επιπλέον αντικατέστησα τον χαρακτήρα με έναν ο οποίος έχει διαφορετικό animation στην περίπτωση που πάει πάνω, κάτω ή αριστερά-δεξιά ![](https://raw.githubusercontent.com/nickgarlis/pacman/master/assets/character.png). Επίσης πρόσθεσα ζωές για τις οποίες το κάθε εικονίδιο ![](https://raw.githubusercontent.com/nickgarlis/pacman/master/assets/life.png) αντιπροσωπεύει μια. Τέλος πρόσθεσα ήχο ο οποίος παίζει κάθε φορά που το pacman τρώει μια pokeball, όπως και Timer, και Score.

### 3ο Παραδοτέο:
  Για το 3ο παραδοτέο πρόσθεσα εχθρούς ![](https://raw.githubusercontent.com/nickgarlis/pacman/master/assets/zigzagoon.png) οι οποίοι αν συγκρουστούν με τον χαρακτήρα του αφαιρούν μια ζωή και ένα pokemon ![](https://raw.githubusercontent.com/nickgarlis/pacman/master/assets/shellow.png) το οποίο εμφανίζεται όταν το Score είναι μεγαλύτερο του 50 και ο χρήστης πατήσει Space. Με τεχνητή νοημοσύνη κυνηγάει και εξολοθρεύει έναν από τους εχθρούς. Ακόμα πρόσθεσα teleport ![](https://raw.githubusercontent.com/nickgarlis/pacman/master/assets/teleport.png) και αρχικό μενού ![](https://raw.githubusercontent.com/nickgarlis/pacman/master/assets/logo.png) .

### 4ο Παραδοτέο:
  Για το 4ο παραδοτέο πρόσθεσα μια δεύτερη πίστα καθώς και αρχικό menu για την πλοήγιση στις πίστες. Επιπλέον, οταν ο χρήστης κερδίζει το πρώτο παιχνίδι τότε εμφανίζεται ένα κουμπί που τον μεταφέρει στην επόμενη πίστα. Τέλος υπήρξαν βελτιώσεις στον κώδικα καθώς πραγματοποιήθηκε το απαραίτητο pull request [#62](https://github.com/ioniodi/pacman/pull/62).
