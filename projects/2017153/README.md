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
  
  Επειτα χρησιμοποιησα καποιες βασικες εντολες οι οποιες θα ηταν χρησιμες για οποιονδηποτε χρηστη οπως ενδεικτικα μερικες για παραδειγμα, mkdir για να φτιαξεις καινουργιο directory, ls να εμφανισεις αρχεια, rmdir για να διαγραψεις καποιο directory, diff για να βρεις διαφορες μεταξυ αρχειων, nano test.txt ανοιγει καποιο αρχειο με ονομα test.txt για να το κανω edit το ιδιο και με vi απλως ο vi ειναι αλλος editor,cd για αν μετακινηθεις σε καποιο καταλογο π.χ. cd Downloads, cat test.txt εμφανιζει τα περιεχομενα του αρχειου στον terminal, rm διαγραφει καποιο αρχειο και πολλες αλλες βασικες εντολες οι οποιες ειναι πολυ απλες.
  
  Τελος εφτιαξα ενα scriptaki ανοιγοντας ενα αρχειο με ονομα update.sh και γραφοντας τις εντολες sudo apt update && sudo apt upgrade && sudo apt dist-upgrade και καποια αλλα πραγματα.Εκανα εκτελεσιμο το scriptaki αφου το αποθηκευσα με την εντολη chmod +777 και το εκτελεσα με ./update.sh.Προφανως το scriptaki αυτο κανει update το συστημα.Γενικα τα λογισμικα ranger και thefuck και man ειναι πολυ χρησιμα για καποιον καινουργιο χρηστη καθως μπορει να διορθωνει ευκολα λαθη του να διαβαζει documentation να κανει browse αρχεια ευκολα κ.α.</p><hr/>

<h5>ΑΣΚΗΣΗ 3</h5>
  <ul>
    <h5><li>title:convert between different text formats</li></h5>
    <h5><li>deliverables:use vim (or emacs) to write your cv in markdown, track multiple formats with git and convert it to docx, html with pandoc</li></h5>
    <h5><li>references used:<a href="https://pandoc.org/">pandoc_ref</a>,<a href="https://en.wikipedia.org/wiki/Git">git_ref</a></li></h5>
    <h5><li>prerequisites:account in github</li></h5>
    <h5><li>asciinema link:<a href="https://asciinema.org/a/qOa39dChv2Xu3hwHJFZxNF2K3">convert between different text formats</a></li></h5>
  </ul>  
    <p>Σκοπος της ασκησης αυτης ειναι η μετατροπη αρχειων σε αλλα αρχεια.Αρχικα δοκιμασα απλως να εκτελεσω την εντολη pandoc και να τεσταρω το λογισμικο στο terminal.Εγραψα καποια πραγματα στο terminal προφανως σε markdown και τα μετετρεψε σε html αυτοματα πατοντας ctrl+d στο τελος αυτων καθως και εκτελεσα παρομοιες εντολες.Επειτα εφτιαξα ενα  αρχειο με ονομα test.md και εγραψα καποια πραγματα σε markdown μεσω του vi editor και επειτα χρησιμοποιησα την εντολη pandoc test.md -f markdown -t html -s -o test.html για να μετρατρεψω το αρχειο test.md σε test.html.
  
  Με τις παραμετρους -f κανεις specify τι τυπο εχει το αρχικο αρχειο δηλαδη markdown και με την -t τον τυπο που θα εχει μετα την μετατροπη το αρχειο δηλαδη html.Εκανα specify και το αρχικο και τελικο αρχειο δηλαδη απο test.md σε test.html.Κατι παρομοιο μπορεις να κανεις για να μετατρεψεις ενα αρχειο απο markdown σε latex απλος αλλαζοντας την -t html σε -t latex και το τελικο αρχειο με test.latex.
  
  Μετα εκανα initialize ενα git repository και εφτιαξα ενα αρχειο σε markdown με ονομα link.md στο οποιο εβαλα ενα λινκ για το google.To εκανα add και commit στο repository και επειτα το μετετρεψα σε html μεσω της εντολης pandoc link.md -s -o link.html.Οπως βλεπετε οι παραμετροι -f και -t δεν ειναι υποχρεωτικοι.Εκανα το καινουργιο αρχειο add και commit και επειτα ανοιξα το αρχειο μεσω του lynx ο οποιος ειναι ενας text-based browser και προφανως με συνεδεσε μεσω του αρχειου(γιατι ειχε το link σε html) στην σελιδα του google στην οποια αρχισα να ψαχνω πραγματα μεσω του lynx.Γενικα το pandoc ειναι ενα πολυ χρησιμο εργαλειο για να μετατρεψεις αρχεια σε διαφορετικους τυπους και πολυ ευκολο να το χρησιμοποιησεις</p><hr/>
  
  <h5>ΑΣΚΗΣΗ 4</h5>
  <ul>
    <h5><li>title:search the local file system</li></h5>
    <h5><li>deliverables:search for your shell configuration file and open it for editing and search for the contents of a text file</li></h5>
    <h5><li>references used:<a href="https://github.com/junegunn/fzf">fzf_ref</a>,<a href="https://github.com/mooz/percol">percol_ref</a>,find,locate</li></h5>
    <h5><li>prerequisites:python,pip for percol</li></h5>
    <h5><li>asciinema link:<a href="https://asciinema.org/a/350940">search the local file system</a></li></h5>
  </ul> 
    <p>Σαυτην την ασκηση θα δουμε πως μπορει καποιος να κανει search το local file system.Αρχικα με την απλη εντολη find μπορει καποιος να βρει καποιο αρχειο π.χ. για το shell 
configuration αρχειο εξαρταται αναλογα με το shell που εχει καποιος δηλαδη αμα εχει bash το shell config θα ειναι στο .bashrc οποτε θα πρεπει για να το βρει να πατησει την εντολη find -iname *bashrc και θα εκτυπωθει το path του αρχειου, το ιδιο περιπου και με την εντολη locate, locate .bashrc.
  
  Μπορει να το ανοιξει και να εκτυπωσει τα περιεχομενα με τις εντολες vi .bashrc(με vi editor) και cat.Επειτα χρησιμοποιησα πιο advanced λογισμικα για να κανω browse το local file system και να ψαξω για κατι σε καποιο αρχειο οπως percol και fzf.Με την εντολη percol .bashrc μπορει καποιος να ψαξει το αρχειο .bashrc για οτιδηποτε θελει π.χ. εαν στο query βαλει alias το percol ψαχνει το .bashrc για αυτην την λεξη.Το ιδιο για color,export και οποιαδηποτε αλλη λεξη οπως θα δειτε στο asciinema.
  
  Πως βρισκεις το αρχειο μεσω του percol?To percol μπορει να χρησιμοποιηθει και για να κανεις search το file system σου μεσω find | percol και με την ιδια λογικη οπως πριν αναλογα με το query που θα πατησεις υστερα θα σου εμφανιζει τα αποτελεσματα π.χ. query bash.Με παρομοιο τροπο το percol μπορει να χρησιμοποιηθει και για να κανεις search τα pid σου π.χ. ps aux | percol η ακομα πιο καλα να κανεις search το history σου η καποιου αλλου για να βρεις καποια εντολη που σε ενδιαφερει π.χ. history | percol και γραφεις επειτα το query που σε ενδιαφερει.
  
  Το fzf δουλευει με περιπου παρομοι τροπο π.χ για να ψαξεις το local file system πληκρολογεις find . -type f(για αρχεια d για directory) | fzf και βρισκεις αυτο που θες πληκτρολογοντας το query που θελεις π.χ. bash και βγαζει τα αποτελεσματα με αυτο το keyword.Συμπερασματικα τα λογισμικα fzf και percol ειναι απο τα πιο χρησιμα λογισμικα που εχω χρησιμοποιησει για τις ασκησεις καθως σε βοηθανε να ψαξεις για καποιο αρχειο που μπορει να υπαρχει στο συστημα σου η το history του terminal σου η να βρεις κατι μεσα σε καποιο αρχειο κ.τ.λ.</p><hr/>
  
<h5>ΑΣΚΗΣΗ 5</h5>
  <ul>
    <h5><li>title:try a different shell</li></h5>
    <h5><li>deliverables:change your default shell to zsh and configure it with auto-completions-suggestions and repeat some of the above</li></h5>
    <h5><li>references used:<a href="https://en.wikipedia.org/wiki/Z_shell">zshell_ref</a>,<a href="https://github.com/ohmyzsh/ohmyzsh">ohmyzsh_ref</a>,<a href="https://github.com/zsh-users/zsh-syntax-highlighting">zsh-syntax-highlighting_ref</a>,<a href="https://github.com/zsh-users/zsh-completions">zsh-completions_ref</a>,<a href="https://github.com/zsh-users/zsh-autosuggestions">zsh-autosuggestions_ref</a>,chsh</li></h5>
    <h5><li>prerequisites:none</li></h5>
    <h5><li>asciinema link:<a href="https://asciinema.org/a/350969">try a different shell</a></li></h5>
  </ul>   
    <p>Αρχικα</p><hr/>
