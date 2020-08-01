<h1>ΕΠΙΚΟΙΝΩΝΙΑ ΑΝΘΡΩΠΟΥ-ΥΠΟΛΟΓΙΣΤΗ</h1>
<h2>ΑΝΑΦΟΡΑ</h2>
<h3>ΕΠΙΒΛΕΠΩΝ ΚΑΘΗΓΗΤΗΣ:XΩΡΙΑΝΟΠΟΥΛΟΣ ΚΩΝΣΤΑΝΤΙΝΟΣ</h3>
<h3>ΠΡΟΣΩΠΙΚΑ ΣΤΟΙΧΕΙΑ:</h3>
<h4>Α.Μ.:Π2017153</h4>
<h4>ΟΝΟΜΑ:ΚΡΙΣΤΙΑΝ</h4>
<h4>ΕΠΩΝΥΜΟ:ΛΕΚΑ</h4>
<h5>ΕΙΣΑΓΩΓΗ</h5>
<p>εισαγωγη στην αναφορα</p><hr/><hr/>
<h5>ΑΣΚΗΣΗ 1</h5>
  <ul>
    <h5><li>title:set-up the main dependencies and demonstrate your base system</li></h5>
    <h5><li>deliverables:change your command prompt with your student ID, list your dot files, display your shell configuration file and display system information (hardware+software)</li></h5>
    <h5><li>references used:<a href="https://github.com/cheat/cheat">cheat_ref</a>,<a href="https://tldr.sh/">tldr_ref</a>,<a href="https://github.com/dylanaraps/neofetch">neofetch_ref</a>,ls,less,nano,source,PS1,<a href="http://www.ee.surrey.ac.uk/Teaching/Unix/">Linux_basics</a>,<a href="https://www.binarytides.com/linux-lshw-command/">lshw_ref</a></li></h5>
    <h5><li>prerequisites:bash 3.2+ for neofetch,npm for tldr</li></h5>
    <h5><li>asciinema link:<a href="https://asciinema.org/a/350263">Demonstrate your base system</a></li></h5>
  </ul> 
    <p>Ξεκινησα την πρωτη ασκηση αλλαζοντας το command prompt με τον αριθμο μητρωου μου Π2017153, ανοιγοντας το shell configuration αρχειο μου που ηταν το .bashrc αφου εχω ως shell τον bash και αλλαξα την PS1 μεταβλητη ωστε να εμφανιζει τον αριθμο μητρωου μου.
   
   Η εντολη source .bashrc ειναι για να γινουν οι αλλαγες.Επειτα εκτελεσα διαφορς πολυ απλες εντολες που εμφανιζουν αρχεια οπως ls που εμφανιζει ολα τα αρχεια στο τρεχων directory, ls -a που εμφανιζει και τα κρυφα αρχεια(dot files) και ls -la που εμφανιζει τα αρχεια μαζι με τα δικαιωματα που εχει ο χρηστης.Βρηκα με την ls σε συνδυασμο με την grep και επειτα ανοιξα το shell configuration file πολλες φορες μεσω του nano editor.
   
   Μετα χρησιμοποιησα τα λογισμικα cheat και tldr για να βρω τι κανουν διαφορες εντολες τα οποια σε βοηθουν να βρεις τι κανει η καθε εντολη π.χ. cheat ls θα σου πει τι μπορει να κανει η εντολη ls, το ιδιο και το tldr κατι σαν το man page της εντολης.Χρησιμοποιησα και το λογισμικο neofetch το οποιο σου δινει διαφορες πληροφοριες για το συστημα σου π.χ. τι OS εχεις(ubuntu στην δικη μου περιπτωση),τι kernel εχεις,τι CPU GPU εχεις,το shell σου κ.α.
   
   Τελος χρησιμοποιησα την εντολη lshw και διαοφρες παραλλαγες της για να βρω πληροφιρες σχετικα με το hardware π.χ.για την μπαταρια, lscpu βρισκει πολλες πληροφοριες για την cpu,dmidecode -t memory | grep -i size βρισκει πληροφοριες για το ποσο ram εχεις στον υπολογιστη σου και διαφορες παραλλαγες αυτων των εντολων για να βρω oσες περισσοτερες πληροφοριες μπορω σχετικα με το hardware συγκεκριμενα την cpu και ram.Γενικα τα cheat και tldr ειναι πολυ χρησιμα εργαλεια για να βοηθησουν καποιον beginner να δει τι κανουν διαφορες εντολες ενω με neofetch και lshw μπορει καποιος να βρει ευκολα πληροφοριες για καποιο συστημα.</p><hr/>
   
<h5>ΑΣΚΗΣΗ 2</h5>
  <ul>
    <h5><li>title:get familiar with basic commands, reading documentation and editing files</li></h5>
    <h5><li>deliverables:browse and view files on your system</li></h5>
    <h5><li>references used:<a href="https://ranger.github.io/index.html">ranger_ref</a>,<a href="https://github.com/nvbn/thefuck">error-correction_ref</a>,man,vim,nano,<a href="https://github.com/Idnan/bash-guide">bash-guide_ref</a></li></h5>
    <h5><li>prerequisites:python(3.4+),pip,python-dev for error-correction,python(>=2.6 or >=3.1) with the curses module for ranger</li></h5>
    <h5><li>asciinema link:<a href="https://asciinema.org/a/350264">Get familiar with basic commands-Browse and view files</a></li></h5>
  </ul>    
    <p>Αρχικα ξεκινησα χρησιμοποιοντας το λογισμικο error-correction(thefuck) το οποιο εαν πληκτρολογησεις μια εντολη λαθος π.χ. puthon και επειτα πληκτρολογησεις fuck θα σου βγαλει την σωστη εντολη το λογισμικο π.χ. python(σε σχεση με το παραδειγμα πριν).Αλλο παραδειγμα της εντολης αυτης ειναι π.χ.apt install python,θα βγαλει λαθος γιατι πρεπει να υπαρχει sudo μπροστα(στα περισσοτερα συστηματα δεν εισαι root) και επειτα πληκτρολογησεις fuck θα σου βγαλει την σωστη εντολη sudo apt install python.
  
  Μετα χρησιμοποιησα την εντολη man για να διαβασω το documentation για διαφορες εντολες,text editors κ.τ.λ π.χ. man nano θα βγαλει documentation για τον nano editor.Χρησιμοποιησα και το λογισμικο ranger για να κανω browse και να διαβασω τα αρχεια στο συστημα μου.
  
  Επειτα χρησιμοποιησα καποιες βασικες εντολες οι οποιες θα ηταν χρησιμες για οποιονδηποτε χρηστη οπως ενδεικτικα μερικες για παραδειγμα, mkdir για να φτιαξεις καινουργιο directory, ls να εμφανισεις αρχεια, rmdir για να διαγραψεις καποιο directory, diff για να βρεις διαφορες μεταξυ αρχειων, nano test.txt ανοιγει καποιο αρχειο με ονομα test.txt για να το κανω edit το ιδιο και με vi απλως ο vi ειναι αλλος editor,cd για αν μετακινηθεις σε καποιο καταλογο π.χ. cd Downloads, cat test.txt εμφανιζει τα περιεχομενα του αρχειου στον browser, rm διαγραφει καποιο αρχειο και πολλες αλλες βασικες εντολες οι οποιες ειναι πολυ απλες.
  
  Τελος εφτιαξα ενα scriptaki ανοιγοντας ενα αρχειο με ονομα update.sh και γραφοντας τις εντολες sudo apt update && sudo apt upgrade && sudo apt dist-upgrade και καποια αλλα πραγματα.Εκανα εκτελεσιμο το scriptaki αφου το αποθηκευσα με την εντολη chmod +777 και το εκτελεσα με ./update.sh.Προφανως το scriptaki αυτο κανει update το συστημα.</p><hr/>
