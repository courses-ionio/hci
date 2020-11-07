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
|   | [ Search/Download Torrents through bash](#Bonus)|
| 4 | Άσκηση προγραμματισμού + αίτημα ενσωμάτωσης (CSCW, IV) |
| 5 | Άσκηση γραμμής εντολών |
| 6 | Άσκηση προγραμματισμού (HCI) ή γραμμής εντολών (SW)+ συμμετοχικό περιεχόμενο |
| 7 | Άσκηση γραμμής εντολών (SW) + αίτημα ενσωμάτωσης (CSCW, IV) |
| 8 | Άσκηση προγραμματισμού (HCI) ή γραμμής εντολών (SW) |
| 9 | Άσκηση γραμμής εντολών (SW) ή αίτημα ενσωμάτωσης (CSCW, IV) |
| 10 | συμμετοχικό περιεχόμενο |
| 11 | αίτημα ενσωμάτωσης (CSCW, IV) |
| 12 | Τελική αναφορά* |

# Παραδοτέο 2
[**link** : embedded from codepen](https://codepen.io/isabellapap/embed/preview/abZmLap?height=265&theme-id=light&default-tab=css,result)

 
# Παραδοτέο 3

### Βήμα 1ο: Αλλαγή ονόματος σε Student ID στο bash
Με τη βοήθεια αυτού του πολύ κατατοπιστικού [οδηγού](https://phoenixnap.com/kb/change-bash-prompt-linux)

[![asciicast](https://asciinema.org/a/Ta70L3oqMnG3h1dC22qb92CPX.svg)](https://asciinema.org/a/Ta70L3oqMnG3h1dC22qb92CPX)

### Βήμα 2ο: Εμφάνιση dot files, shell configuration file και System information (hardware + software)
Για το System Information συμβουλεύτηκα [αυτό το άρθρο](https://vitux.com/get-linux-system-and-hardware-details-on-the-command-line/)

[![asciicast](https://asciinema.org/a/mpUVCTOO176TLj2dd1MR8gU0s.svg)](https://asciinema.org/a/mpUVCTOO176TLj2dd1MR8gU0s)

# Bonus, λόγω μειωμένης δυσκολίας του προηγούμενου.
### Search/Download torrent μέσω τερματικού.
Για την εργασία αυτή, χρειάστηκε να εγκαταστήσω openvpn σε Arch Linux Σύστημα. Με τη βοήθεια που έλαβα από ένα [**issue**](https://github.com/epidrome/dokey/issues/1#issue-732227411) που άνοιξα στο αντίστοιχο [**αποθετήριο**](https://github.com/epidrome/dokey.git), κατάφερα να εγκαταστήσω το openvpm μέσω ενός GUI για systemd based συστήματα ([qopenvpn](https://github.com/xmikos/qopenvpn)).
Το torque δυστυχώς έκανε fail-to-build στο σύστημα μου, τόσο από το AUR, όσο και από terminal ([yay](https://github.com/Jguer/yay)). Χρησιμοποίησα το [**we-get**](https://ostechnix.com/search-torrents-command-line-linux/) αρχικά για να δω αν μπορώ να κάνω bypass την απογόρευση της [ΕΔΠΠΙ](https://opi.gr/edppi_block/edppi_block.html) πράγμα που δε δούλεψε, και αφού έβαλα VPN, το χρησιμοποιήσα για να αποφύγω τα adware/malware των browser αλλά και από περιέργεια για αυτή τη νέα δυνατότητα. Για το download χρησιμοποίησα το transmission-daemon, για το οποίο το torque είναι ένα TUI.

[![asciicast](https://asciinema.org/a/25xfOzXjVqURCtDU9EpV6ThoH.svg)](https://asciinema.org/a/25xfOzXjVqURCtDU9EpV6ThoH)

# Παραδοτέο 4

### Ολοκληρώθηκε το πρώτο ζητούμενο αλλάζοντας την τιμή του dy στο πλήκτρο με κωδικό 40, στο μισό.
## Το δεύτερο ζητούμενο δεν έχει ολοκληρωθεί, χρειάζομαι λίγο χρόνο για να το μελετήσω περισσότερο.

[**link** : embedded from codepen](https://codepen.io/isabellapap/embed/OJXZexE?height=265&theme-id=light&default-tab=js,result)
