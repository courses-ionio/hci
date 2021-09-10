# Μάθημα: Επικοινωνία Ανθρώπου Υπολογιστή

### Ονοματεπώνυμο: ΠΟΛΙΤΗΣ ΑΛΕΞΑΝΔΡΟΣ
### Αριθμός Μητρώου: Π2017202
### GitHub Profile: [AlexandrosP38](https://github.com/AlexandrosP38)

<br />

## Πίνακας με σύνοψη των παραδοτέων

| Εβδομάδα* | Παραδοτέο |
| --- | --- |
| 1 | [Εισαγωγή + Σύνοψη] |
| 2 | Άσκηση προγραμματισμού |
| 3 | Άσκηση γραμμής εντολών |
| 4 | συμμετοχικό περιεχόμενο 1A |
| 5 | Άσκηση προγραμματισμού |
| 6 | συμμετοχικό περιεχόμενο 2A |
| 7 | Άσκηση γραμμής εντολών |
| 8 | συμμετοχικό περιεχόμενο 1B |
| 9 | Άσκηση γραμμής εντολών |
| 10 | συμμετοχικό περιεχόμενο 2B |
| 11 | Άσκηση γραμμής εντολών |
| 12 | Τελική αναφορά και αίτημα ενσωμάτωσης για βαθμολόγηση |

# ΕΙΣΑΓΩΓΗ

## Οι Προσδοκίες μου από το Μάθημα και την Εργασία

Στο μάθημα αυτό υπάρχει μια πολύ καλή ευκαιρεία για να γίνει μια εισαγωγή στον τρόπο που αλληλεπιδρά ο άνθρωπος με τον υπολογιστή μέσα απο τις διάφορες συσκευές και εφαρμογές που η τεχνολογία παρέχει. 

Το github και οι επιλογές που προσφέρει στην αλληλεπίδραση και την αλληλοβοηθεια μεταξυ των προγραμματιστών ήταν μια γνώση που μου προσφέρθηκε μέσω αυτού του μαθήματος.
Ένα απο τα πρώτα βήματα που έγιναν ώστε να μπορέσει να γίνει καταγραφή της συμμεχοτής στο μάθημα μέσω τον εργασιών ήταν η ενσωμάτωση του ακαδημαικού μου λογαριασμού στο Github και μάλιστα με τις τελευταίες ανανεωμένες υπηρεσίες του όπως ειναι τα submodules. Για τον σκοπό αυτό δημιουργήθηκε το αποθετήριο site και στην συνέχεια το url: https://p2017202-pibook.netlify.app/ το οποίο αποτέλεσε ένα αντίγραφου του Online βιβλίου "Ο Προγραμματισμός της Διάδρασης". Μέσα απο κατάλληλες εντολές του Git προστέθηκαν τα submodules και ενσωματώθηκαν στο repository του site όπου και έγιναν οι τροποποιήσεις. 


        git submodule add https://github.com/AlexandrosP38/_gallery/
        git submodule add https://github.com/AlexandrosP38/images/
        git submodule update --remote --init
        git commit -m "Added submodules"
        git push


# 2ο Άσκηση Προγραμματισμού - Menu CSS
  Για την πρώτη άσκηση προγραμματισμού επέλεξα να τροποποιήσω ενα Menu που βασίζεται μόνο σε CSS και δεν χρησιμοποιεί Javascript. Χρησιμοποιήθηκε ο preprocessor SCSS
  
  Πρώτη αλλαγή που έγινε ήταν η προσθήκη ενός ακόμα αντικειμένου στον κώδικα CSS. Έτσι αντί για **item-count: 6** το αλλάζομε σε **item-count: 7**
  
      $item-count: 7;
      $item-size: $toggler-size * 2;
      $item-color: white;
      $item-transition: .5s;
  
  Στην συνέχεια τροποποιήθηκε το αρχείο HTML. Προστέθηκε η γραμμή που καλεί απο το font-awsome το εικονιδιο του μενού με το check mark που θελήσαμε να εισάγουμε στο μενου. Το εικονίδιο αυτό μας οδηγεί στην σελίδα του βιβλίου https://pibook.epidro.me/
  
    %li.menu-item
          %a.fa.fa-check-circle{:href => "https://pibook.epidro.me/", :target => "_blank"}
 
 Το αποτέλεσμα του μενού φαίνεται στην εικόνα:
 
![image](https://user-images.githubusercontent.com/56488103/131909858-845ef595-8c5e-45c9-8f73-a21fa26012ee.png)

#### Link στο fork του αποθετηρίου pibook με το embed της άσκησης: [_Menu CSS](https://pibook.epidro.me/remix/menu-css/)

#### Link στο pen της άσκησης στο codepen.io: [Menu CSS P2017202](https://codepen.io/alexandrosp38/pen/bGRerVj)




# 3ο Άσκηση Γραμμής Εντολών - Search, Download and Play mp3

   
   Στην συγκεκριμένη εργασία γραμμής εντολών σκοπός είναι η εύρεση, αποθήκευση και αναπαραγωγή ενός τραγουδιού.
   
   
   Για τον σκοπό αυτό εγκαταστάθηκε το [youtube-dl](https://github.com/ytdl-org/youtube-dl) για την εύρεση και την αποθήκευση του τραγουδιού.
   
   
   Επίσης έγινε εγκατάσταση και του [ffmpeg](https://www.ffmpeg.org/) ώστε να γίνει εξαγωγή ο ήχος απο το αρχείο " .mkv" σε αρχείο " .mp3"
   Tέλος με το [mkv player](https://github.com/mpv-player/mpv) έγινε η αναπαραγωγή του αρχείου του τραγουδιού " .mp3".
   
   Me το asciinema καταγράφηκε μια επιτυχημένη
   * Aναζήτηση
   * Aποθήκευση
   * Εξαγωγή ήχου
   * Αναπαραγωγή
  
   
   [Link asciinema](https://asciinema.org/a/8haJ9uf622aphIyZLqHqeCIMF)
   
   ### MPS-youtube
  Ένα ακόμα εργαλείο που μπορεί να χρησιμοποιηθεί αντί του youtube-dl είναι το [mps-youtube](https://github.com/mps-youtube/mps-youtube).
  Με το εργαλείο αυτό γίνεται αναζήτηση και εμφανίζει λίστα με τα διαθέσιμα προς αναπαραγωγή ή αποθήκευση τραγούδια.
  
  
  [Link asciinema](https://asciinema.org/a/zo5gxZeH9cT3VkpLMAaQhCbuo) 
  
# 4ο Συμμετοχικό περιεχόμενο 1A

  [Link σελιδας συμμετοχικου](https://p2017202-pibook.netlify.app/)

  [Link αντιγράφου αποθετηρίου](https://github.com/AlexandrosP38/site)

   Έχοντας δημιουργήσει αντίγραφο του αποθετηρίου στόχος μου ήταν η προσθήκη 2 εικόνων με έλευθερα πνευματικά δικαιώματα στο ["O Προγραμματισμός της Διάδρασης"](https://www.mibook.org/)
   
   Πρώτη αλλαγή εικόνας έγινε με για τον υπολογιστή Macintosh της εταιρείας Apple Inc.
   Πρόσθεσα το αρχείο [mac-pc.md]( https://github.com/AlexandrosP38/_gallery/blob/433b69d5c388c5bf289f82259361b8af1d3349ae/mac-pc.md).
   Στη συνέχεια βρήκα φωτογραφίες ελεύθερων πνευματικών δικαιωμάτων τις οποίες και ανέβασα στον φάκελο images.
   Οι εικόνες είναι στο κανονικό μέγεθος αλλά και στο thumbnail που εμφανίζεται στην κεντρική σελίδα του βιβλίου.
   
   * [Εικόνα MAC](https://github.com/AlexandrosP38/images/blob/e8b9196e91655fb6b6d2978e51b004a1781246a8/macpc.jpg)
   * [Εικόνα-thumbnail MAC](https://github.com/AlexandrosP38/images/blob/e8b9196e91655fb6b6d2978e51b004a1781246a8/macpc-thumb.jpg)
   
   [Link 1ης εικόνας](https://p2017202-pibook.netlify.app//gallery/mac-pc/)
   
   Δεύτερη αλλαγή εικόνας αποτέλεσε μια τεχνολογία που στην covid εποχή άκμασε και οι πωλήσεις της εκτοξεύθηκαν. Οι γραφίδες στυλό χρησιμοποιήθηκαν απο τους εκπαιδευτικούς ανα τον κόσμο ώστε να μπορέσει να επιτελεστεί το έργο της εκπαίδευσεις σε όλες τις βαθμίδες. Με την τεχνολογία αυτή έγινε πιο εύκολη η παράδοση του μαθήματος προς τους μαθητές που απο το σπίτι τους μέσω των υπολογιστών μπόρεσαν και παρακολούθησαν τα μαθηματά τους.
   Προστέθηκε το αρχείο [graphics-tablet.md]( https://github.com/AlexandrosP38/_gallery/blob/433b69d5c388c5bf289f82259361b8af1d3349ae/graphics-tablet.md).
   Oι φωτογραφίες ελεύθερων πνευματικών δικαιωμάτων ανέβηκαν στον φάκελο images.
   Οι εικόνες είναι στο κανονικό μέγεθος και στο thumbnail που εμφανίζεται στην κεντρική σελίδα του βιβλίου.
   
   * [Εικόνα Grapics Tablet](https://github.com/AlexandrosP38/images/blob/e8b9196e91655fb6b6d2978e51b004a1781246a8/graphic-tablet.jpg)
   * [Εικόνα-thumbnail Grapics Tablet](https://github.com/AlexandrosP38/images/blob/e8b9196e91655fb6b6d2978e51b004a1781246a8/graphic-tablet-thumb.jpg)
   
   [Link 2ης εικόνας](https://p2017202-pibook.netlify.app//gallery/graphics-tablet/)
   
  # 5ο Άσκηση Προγραμματισμού - Image processing
  
  Στόχος της άσκησης αυτής είναι η προσθήκη φίλτρων σε εικόνα με την χρήση CSS. Οι αλλαγές αυτές μπορούν να γίνουν με το webkit-filter.
  
  Τροποποίησα την εικόνα με δύο φίλτρα:
      hue-rotate(80deg)
      opacity(.5);
  
  Τα φίλτρα ενεργοποιούνται στην εικόνα όταν ο χρήστης περάσει το pointer του mouse απο πανω της.
 
 Το αποτέλεσμα του μενού φαίνεται στην εικόνα:
 
 ![image](https://user-images.githubusercontent.com/56488103/132094609-dcb3eb1e-0bc7-4d64-bf0e-62d9e9627a73.png)


#### Link στο fork του αποθετηρίου pibook με το embed της άσκησης: [Image processing](https://pibook.epidro.me/remix/image-filter/)

#### Link στο pen της άσκησης στο codepen.io: [Image processing P2017202](https://codepen.io/alexandrosp38/pen/ExXgZKp)

 # 7ο Άσκηση Γραμμής Εντολών - Installing & Using different terminals
   
   Για την εργασία αυτή χρησιμοποιήθηκαν τα terminals **st** και **zsh**. Η εγκατάση έγινε με τις εντολές:
   
   Zsh:
   >apt install zsh
   
   St:
   >git clone https://github.com/LukeSmithxyz/st
   
   >cd st
   
   >sudo make install
   
  
   ![St terminal](https://imgur.com/RinEULZ.png)
   
   [Asciinema Link Using terminals](https://asciinema.org/a/2591J10vY1jiMJaAd4Ij05lFW)
   
  # 8ο Άσκηση Γραμμής Εντολών - Create your own static site and blog generator with pandoc
   
   Θελήσαμε να δημιουργήσουμε ένα site. Έτσι χρησιμοποιήθηκε το Bashyll το οποίο είναι ενα Blog generator το οποίο λειτουργεί με bash commands και το pandoc για την μετατροπή ενός markup format σε άλλο. Έτσι εμεις φτιάχνουμε .md αρχεία στο path που είναι το site και τα μετατρέπει σε .html και τα δημοσιεύει.
   
   Η εγκατάσταση έγινε με την εντολή:
   >sudo apt-get install pandoc
   
   Έδω υπήρξε μια δυσκολία λόγω παλιάς έκδοσης του Kali linux που χρησιμοποίησα. Έπρεπε να κάνω update το αρχείο που χρησιμοποιούν τα συγκεκριμένα distro και λέγεται sources.list. (διαδρομή /etc/apt/sources.list ) με την νέα διεύθηνση που χρησιμοποιούν για τα updates τα Kali Linux. Έτσι η εντολή για update λειτούργησε κανονικά.
   
   >apt-get update
 
 Μετά την εγκατάσταση του pandoc δημιούργησα ένα repository στον φακελο BlogBashyll 
   >git init
  
  Τροποποίησα το αρχείο source/header.html και το source/footer.html όπως φαίνεται και στην εικόνα:
  
 ![Index.html](https://user-images.githubusercontent.com/56488103/132708610-d4cdcd0b-24c5-4827-8990-47fa3c46c2e9.png)

 Για να δημιουργήσουμε τα post στην σελιδα και να γινουν publish:
 >./publish /root/BlogBashyll/bashyll/posts/helloWorld.md 
 >
 >./publish /root/BlogBashyll/bashyll/posts/anotherPost.md      

 και ανανεώνουμε την σελιδα με 
 >./regenPosts    

![image](https://user-images.githubusercontent.com/56488103/132711645-afdd932e-25a1-420e-bcda-094ca59f4bb4.png)

   
  [Asciinema Link1](https://asciinema.org/a/gY0ILTwjMDLtKSdzQf7uGpHEo)
  
  [Asciinema Link2](https://asciinema.org/a/xO6ocaxYo3hBl38vceK3FXocK)
  
  # 9ο Άσκηση Γραμμής Εντολών - Οrganise the terminal window into multiple areas

   
   Στόχος της εργασίας αυτής είναι να δημιουργήσουμε διάφορα windows sessions των terminals και στην συνέχεια να τα διαχειριστούμε αναλόγως. Έτσι εγκαταστάθηκε το **tmux**
   το οποιο επιτρέπει την ταυτόχρονη διαχείριση παραθύρων terminal
   >sudo apt-get install tmux

   Για την επίβλεψη του performance των τερματικών παραθύρων εγκαταστήσαμε το **glances**
   >pip install --user glances
       
   Έδω υπήρξε ενα πρόβλημα με το PATH του glances και έτσι για να μπορέσει να τρέξει σωστά προσθέσαμε το PATH
   >export PATH=$PATH:~/mylocalpath/bin

   Για να τρέξει το tmux χρησιμοποιούμε την εντολή στο terminal και θα παρατηρήσουμε οτι κατω δεξιά εμφανίζεται ο user και κάτω αριστερά ο αριθμός παραθύρου
   >tmux
   
   Για να ανοίξουμε ένα νεο session πληκτρολογούμε στο τερματικο
   >tmux new -s <session-name>
   
   Μπορούμε να δούμε πόσα ενεργά παράθυρα υπάρχουν με την εντολή
   >tmux ls
   
   Κάνουμε split το terminal κρατώντας στο πληκτρολόγιο πατημένο τα **Ctrl** και **b** , τα αφήνουμε και στην συνέχεια πατάμε το **%**
    
   Για να μετακινηθούμε μεταξύ των terminal πατάμε τον ίδιο συνδυασμό **Ctrl** και **b** , τα αφήνουμε και στην συνέχεια πατάμε το **->**
        
   Τώρα θα ανοίξουμε το glances στο δεύτερο τερματικό ώστε να δούμε το performance
        ![Tmux-Glances](https://user-images.githubusercontent.com/56488103/132894201-a8642c12-4581-4424-8052-ba19c27343b5.png)
        
   Στο πρώτο τερματικό χρησιμοποιήσαμε το Lynx για να κάνουμε αναζήτηση στο web
     ![Lynx search](https://user-images.githubusercontent.com/56488103/132896008-b339cb37-b814-4018-a0f0-fbb37eb40543.png)
     ![Ionio Panepistimio](https://user-images.githubusercontent.com/56488103/132895337-ca28836b-d222-4bbd-a6d6-876b8bd945b0.png)
        
     

        
        
   
   [Link asciinema Glances](https://asciinema.org/a/YfYYlAIjdkf2CXFZYXDthibCN)
        
   [Link asciinema tmux + lynx search](https://asciinema.org/a/maHO3BmArX2bcUemgBSnK2NDD)

   
  

