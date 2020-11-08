# **Μάθημα: Επικοινωνία Ανθρώπου Υπολογιστή**

## **Ονοματεπώνυμο: Παπαγεωργίου Ισαβέλλα**
## **ΑΜ: 2019235**


# **Εισαγωγή**
### Μετά το τέλος αυτού του εξαμήνου, θα ήθελα να έχω εξοικειωθεί με την χρήση του terminal, αν και ήδη υπάρχει μια σχετική εξοικείωση, λόγω της ασχολίας μου με προγραμματισμό σε linux συστήματα χωρίς την χρήση IDE. Για εμένα το πιο σημαντικό που θα μπορούσα να μάθω πως να κάνω, από αυτό το μάθημα, θα ήταν η δημιουργία δικών μου interfaces, σε απλές εφαρμγές που μπορώ να υλοποιήσω, με τις υπάρχουσες γνώσεις προγραμματισμού. 

# Πίνακας Παραδοτέων

| Εβδομάδα* | Παραδοτέο |
| --- | --- |
| 1 |Intro to HCI and basic github |
| 2 | [Interactive text](#Παραδοτέο-2) | 
| 3 | [Getting familiar with bash](#Παραδοτέο-3)|
|   | [    Student ID on bash](###Βήμα-1ο:-Αλλαγή-ονόματος-σε-Student-ID-στο-bash)|
|   | [    Show dot files, shell configuration and system info](###Βήμα-2ο:-Εμφάνιση-dot-files,-shell-configuration-file-και-System-information -(hardware-+-software))|
|   | [    Search/Download Torrents through bash](#Bonus)|
| 4 | [Keyboard input](#Παραδοτέο-4) |
| 5 | [Convert between different text formats](#Παραδοτέο-5) |
|   | [    Getting a text editor, Vim or Emacs?](###Βήμα-1ο:-Getting-a-text-editor,-Vim-or-Emacs?)|
|   | [    Figuring out Vim](###Βήμα-2ο:-Figuring-out-Vim)|
|   | [    Installing Pandoc](###Βήμα-3ο:-Installing-pandoc)|
|   | [    Using pandoc to change format](###Βήμα-5ο:-Using-pandoc-to-change-format)|
|   | [    Track formatting with git](###Βήμα-6ο:-Track-formatting-with-git)|
| 6 | Άσκηση προγραμματισμού (HCI) ή γραμμής εντολών (SW)+ συμμετοχικό περιεχόμενο |
| 7 | Άσκηση γραμμής εντολών (SW) + αίτημα ενσωμάτωσης (CSCW, IV) |
| 8 | Άσκηση προγραμματισμού (HCI) ή γραμμής εντολών (SW) |
| 9 | Άσκηση γραμμής εντολών (SW) ή αίτημα ενσωμάτωσης (CSCW, IV) |
| 10 | συμμετοχικό περιεχόμενο |
| 11 | αίτημα ενσωμάτωσης (CSCW, IV) |
| 12 | Τελική αναφορά* |

# Παραδοτέο 2
## Interactive text
<iframe height="265" style="width: 100%;" scrolling="no" title="10 stunning hover effects with scss" src="https://codepen.io/isabellapap/embed/preview/abZmLap?height=265&theme-id=dark&default-tab=html,result" frameborder="no" loading="lazy" allowtransparency="true" allowfullscreen="true">
  See the Pen <a href='https://codepen.io/isabellapap/pen/abZmLap'>10 stunning hover effects with scss</a> by 2019235
  (<a href='https://codepen.io/isabellapap'>@isabellapap</a>) on <a href='https://codepen.io'>CodePen</a>.
</iframe>
 
# Παραδοτέο 3
## Getting familiar with bash
### Βήμα 1ο: Αλλαγή ονόματος σε Student ID στο bash
Με τη βοήθεια αυτού του πολύ κατατοπιστικού [οδηγού](https://phoenixnap.com/kb/change-bash-prompt-linux)

[![asciicast](https://asciinema.org/a/Ta70L3oqMnG3h1dC22qb92CPX.svg)](https://asciinema.org/a/Ta70L3oqMnG3h1dC22qb92CPX)

### Βήμα 2ο: Εμφάνιση dot files, shell configuration file και System information (hardware + software)
Για το System Information συμβουλεύτηκα [αυτό το άρθρο](https://vitux.com/get-linux-system-and-hardware-details-on-the-command-line/)

[![asciicast](https://asciinema.org/a/mpUVCTOO176TLj2dd1MR8gU0s.svg)](https://asciinema.org/a/mpUVCTOO176TLj2dd1MR8gU0s)

# Bonus
## Search/Download Torrents through bash
(Λόγω μειωμένης δυσκολίας του προηγούμενου.)
### Search/Download torrent μέσω τερματικού.
Για την εργασία αυτή, χρειάστηκε να εγκαταστήσω openvpn σε Arch Linux Σύστημα. Με τη βοήθεια που έλαβα από ένα [**issue**](https://github.com/epidrome/dokey/issues/1#issue-732227411) που άνοιξα στο αντίστοιχο [**αποθετήριο**](https://github.com/epidrome/dokey.git), κατάφερα να εγκαταστήσω το openvpm μέσω ενός GUI για systemd based συστήματα ([qopenvpn](https://github.com/xmikos/qopenvpn)).
Το torque δυστυχώς έκανε fail-to-build στο σύστημα μου, τόσο από το AUR, όσο και από terminal ([yay](https://github.com/Jguer/yay)). Χρησιμοποίησα το [**we-get**](https://ostechnix.com/search-torrents-command-line-linux/) αρχικά για να δω αν μπορώ να κάνω bypass την απογόρευση της [ΕΔΠΠΙ](https://opi.gr/edppi_block/edppi_block.html) πράγμα που δε δούλεψε, και αφού έβαλα VPN, το χρησιμοποιήσα για να αποφύγω τα adware/malware των browser αλλά και από περιέργεια για αυτή τη νέα δυνατότητα. Για το download χρησιμοποίησα το transmission-daemon, για το οποίο το torque είναι ένα TUI.

[![asciicast](https://asciinema.org/a/25xfOzXjVqURCtDU9EpV6ThoH.svg)](https://asciinema.org/a/25xfOzXjVqURCtDU9EpV6ThoH)

# Παραδοτέο 4
## Keyboard input
### Ολοκληρώθηκε το πρώτο ζητούμενο αλλάζοντας την τιμή του dy στο πλήκτρο με κωδικό 40, στο μισό.
## Το δεύτερο ζητούμενο δεν έχει ολοκληρωθεί, χρειάζομαι λίγο χρόνο για να το μελετήσω περισσότερο.

<iframe height="265" style="width: 100%;" scrolling="no" title="html canvas game" src="https://codepen.io/isabellapap/embed/OJXZexE?height=265&theme-id=dark&default-tab=js,result" frameborder="no" loading="lazy" allowtransparency="true" allowfullscreen="true">
  See the Pen <a href='https://codepen.io/isabellapap/pen/OJXZexE'>html canvas game</a> by 2019235
  (<a href='https://codepen.io/isabellapap'>@isabellapap</a>) on <a href='https://codepen.io'>CodePen</a>.
</iframe>

# Παραδοτέο 5
## 

### Βήμα 1ο: Getting a text editor, Vim or Emacs?
![γραφήματα](https://www.dropbox.com/s/4fkjf5pm85kkyy4/1-1.jpg?raw=1)

Με βάση αυτό το γράφημα επέλεξα το Vim ως text editor, αν και το Emacs φαίνεται σαν ένα ωραίο challenge, για μια άλλη φορά ίσως. Το Linux community το περιγράφει ως ένα "sandbox χωρίς διακριτό σημείο έναρξης".

Σημείωση: Προς έκπληξή μου ήταν ήδη εγκατεστημένο στο σύστημά μου.
[![asciicast](https://asciinema.org/a/9ieOlRRPqB06Y0NhVLU4IjG2U.svg)](https://asciinema.org/a/9ieOlRRPqB06Y0NhVLU4IjG2U)

### Βήμα 2ο: Figuring out Vim
Παρά τους οδηγούς που βρήκα online, δυσκολεύτηκα να συνηθήσω τον χειρισμό του Vim. Το πιο δύσκολο να ανακαλύψω ήταν πως να σβήνω μόνο ένα γράμμα σε περίπτωση typo. Τα shortcuts για αυτό τα βρήκα σχεδόν κατά τύχη, οπότε υποψιάζομαι πως υπάρχει βέλτιστος τρόπος και δεν ήταν αυτός που χρησιμοποιούσα (αργότερα ανακάλυψα πως με το Backspace μπορώ να αντικαταστήσω έναν από τους προηγούμενους χαρακτήρες ενώ εγώ πατούσα Esc -> x -> a)

[![asciicast](https://asciinema.org/a/qAygov6XVFRVWq9a22Hk6pydR.svg)](https://asciinema.org/a/qAygov6XVFRVWq9a22Hk6pydR)

### Βήμα 3ο: Installing Pandoc
Δεν βρήκα το Pandoc στο AUR οπότε πήγα back to basics και το εγκατέστησα ως tarball.

[![asciicast](https://asciinema.org/a/0k4y6AVTUqmLp0hRjF6u8Yk1Z.svg)](https://asciinema.org/a/0k4y6AVTUqmLp0hRjF6u8Yk1Z)

### Βήμα 4ο: Configuring git and and commiting changes
Θα δείτε πολλά λάθη κατά τη διάρκεια του configuration. (this serves as a good guide: What not to do while setting up Git)

[![asciicast](https://asciinema.org/a/jQbShyhuiYlMqABO03ClAnHrc.svg)](https://asciinema.org/a/jQbShyhuiYlMqABO03ClAnHrc)

[![asciicast](https://asciinema.org/a/cM3nldhKOYHSmduHzXeSpyaLU.svg)](https://asciinema.org/a/cM3nldhKOYHSmduHzXeSpyaLU)

### Βήμα 5ο: Using pandoc to change format
Το pandoc αποδείχτηκε μια πολύ χρήσιμη εφαρμογή, καθώς μπορεί πολύ εύκολα να μετατρέψει, ακόμα και plaintext σε html, ή άλλο format. Αυτό γίνεται σε ελάχιστο χρόνο μέσα από απλές εντολές στο terminal.
 
 [![asciicast](https://asciinema.org/a/aEfZbDI3b4jo2N8GoT1NwHZeB.svg)](https://asciinema.org/a/aEfZbDI3b4jo2N8GoT1NwHZeB)
 
 ### Βήμα 6ο: Track formatting with git
 
 [![asciicast](https://asciinema.org/a/4y8uLlwlUDMtbqSqjGgwjytaY.svg)](https://asciinema.org/a/4y8uLlwlUDMtbqSqjGgwjytaY)
 

