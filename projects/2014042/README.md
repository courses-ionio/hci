# Μάθημα: Επικοινωνία Ανθρώπου Υπολογιστή

### Ονοματεπώνυμο: Κοσμάς Τσιανατέλης
### Αριθμός Μητρώου: Π2014042
### GitHub Profile: [Sola1r3](https://github.com/Sola1r3)
<br />

| Εβδομάδα* | Παραδοτέο |
| --- | --- |
| 1 | [Φορκ του αποθετηρίου και δημιουργία της σελίδας της αναφοράς με τα προσωπικά στοιχεία σας, της σύνοψης με αυτόν τον πίνακα περιεχομένων, και συγγραφή της εισαγωγής με περιγραφή των αναγκών και των στόχων σας για το μάθημα](#εισαγωγή) |
| 2 | [Άσκηση γραμμής εντολών](#παραδοτέο-2-εγατάσταση-των-archlinux-και-εντοπισμός-χαρακτηριστικών-υλικού) |
| 3 | [Άσκηση γραμμής εντολών](#παραδοτέο-3-warmup-1) |
| 4 | [Συμμετοχικό περιεχόμενο 1A](#παραδοτέο-4-συμμετοχικό-περιεχόμενο-1α) |
| 5 | [Άσκηση γραμμής εντολών](#παραδοτέο-5-warmup-2) |
| 6 | [Συμμετοχικό περιεχόμενο 2A](#παραδοτέο-6-συμμετοχικό-περιεχόμενο-2a) |
| 7 | [Άσκηση γραμμής εντολών](#παραδοτέο-7-άσκηση-γραμμής-εντολών-download-mp3) |
| 8 | [Συμμετοχικό περιεχόμενο 1B](#παραδοτέο-8-συμμετοχικό-περιεχόμενο-1β) |
| 9 | [Άσκηση γραμμής εντολών](#παραδοτέο-9-άσκηση-γραμμής-εντολών-emacs-org-mode) |
| 10 | συμμετοχικό περιεχόμενο 2B |
| 11 | Άσκηση γραμμής εντολών |
| 12 | Τελική αναφορά και αίτημα ενσωμάτωσης για βαθμολόγηση |
| - | [Μπόνους](#μπονους) |
<br />

# Εισαγωγή


## Οι ανάγκες και οι στόχοι μου για το μάθημα (&#x1F4D7;)
Ο αρχικός μου στόχος όσον αφορά το μάθημα είναι η συνέπεια μου απέναντι σε αυτό, δηλαδή να ακολουθήσω όλο το χρονοδιάγραμμα του μαθήματος και να μην χάσω καμία καταληκτική ημερομηνία παράδοσης. Επιθυμώ λοιπόν μέχρι το τέλος του εξαμήνου να έχω καταβάλει την αντίστοιχη των προσδοκιών μου προσπάθεια ώστε να περάσω το μάθημα. Πέρα όμως απο το καθαρά διαδικαστικό κομμάτι, θα ήθελα να αποκομοίσω και γνώσεις πάνω στα θέματα που πραγματεύεται το μάθημα, οι εργασίες και οι δραστηριότητες του. 

Αρχικά, θεωρώ σημαντική την εξοικείωση μου με την πλατφόρμα του github, καθώς αποτελεί μια πλατφόρμα εργαλείο που προωθεί την συνεργατικότητα σε πραγματικό χρόνο και είναι εφόδιο εξαιρετικά χρήσιμο για έναν πιθανό μελλοντικό web developer. Επιπλέον, η καλύτερη κατανόηση της επικοινωνίας ανθρώπου υπολογιστή, μέσω πρακτικής εξάσκησης με διαδραστικά παραδείγματα και η εκμάθηση υλοποίησης αυτών, είναι άλλος ένας στόχος μου που θέτω με την έναρξη του μαθήματος. 

Επίσης, κάτι με το οποίο ήθελα να ασχοληθώ καιρό τώρα αλλά δεν το έχω κάνει, είναι το λειτουργικό σύστημα linux. Στοχεύω λοιπόν μέχρι το τέλος του μαθήματος να έχω μια βασική εξοικείωση με αυτό μέσω των ασκήσεων γραμμής εντολών ή και ότι άλλο προσφέρει το παρόν μάθημα.

Τέλος, θα ήθελα να επιχειρήσω να ασχοληθώ και με μια από τις μπόνους εργασίες, χωρίς βέβαια να έχω αποφασίσει ακόμα ποια θα είναι αυτή.
<br />


# Σύνοψη

## Παραδοτέο 2: Εγατάσταση των ArchLinux και εντοπισμός χαρακτηριστικών υλικού

Έπειτα από αρκετή προσπάθεια κατάφερα να εγκαταστήσω το ArchLinux στο USB.  Έκανα εγκατάσταση wi-fi δικτύου και δημιούργησα mirrorlist ώστε να μπορώ αργότερα να κάνω λήψη των packages που επιθυμώ. Δημιούργησα τα κατάλληλα partitions GPT, ένα EFI και ένα ROOT partition και τα έκανα format και mount. Μετά από αυτή την διαδικασία, κατέβασα τα απαραίτητα linux packages και για text editor το vim, και αργότερα προχώρησα στην διαδικασία εγκατάστασης όπου και εγκατέστησα grub για bootloader, στοιχείο απαραίτητο για την λειτουργία του λειτουργικού συστήματος και πριν κάνω reboot όρισα username και password ολοκληρώνοντας έτσι την βασική εγκατάσταση. Παρακάτω φαίνονται πληροφορίες του συστήματος και του υλικού μέσω του εργαλείου Screenfetch.

[Χαρακτηριστικά Υλικού](https://asciinema.org/a/444582)

<br />

Πηγές: [ArchWiki](https://wiki.archlinux.org/title/Installation_guide), [Arch Linux on a USB Stick](https://www.youtube.com/watch?v=yaThYGr37DI&t=1s), [Screenfetch](https://github.com/KittyKatt/screenFetch)

### Προβλήματα που συνάντησα

Σε πρώτη προσπάθεια για την εγκατάσταση των Archlinux σε USB flash drive, ακολούθησα την αναλυτική διαδικασία που παρουσιάζεται στο Archwiki (installation guide) ωστόσο αυτή η προσπάθεια απέτυχε όταν χώρισα το usb σε partitions. Για μεγάλο χρονικό διάστημα δεν μπορούσα να προχωρήσω την εγκατάσταση και ο λόγος για αυτό ήταν η ελλειπής οικειότητα και γνώση μου αρχικά με το terminal και έπειτα με τις εντολές. Χρειάστηκε λοιπόν αρχικά να κατανοήσω την λειτουργία κάθε εντολής και τον ρόλο που εξυπηρετεί η κάθε διαδικασία για την εγκατάσταση του λειτουργικού. Όλο αυτό πήρε αρκετές μέρες εντατικής ενασχόλησης σε σημείο απογοήτευσης κάθε φορα που δεν δούλευε κάτι. Ένα απλό λάθος για παράδειγμα που έκανα στην αρχή ήταν να χρησιμοποιώ ένα μόνο Usb, στο οποίο είχα βάλει το ISO και έκανα boot. Έπειτα όταν δημιουργούσα τα partitions δεν λειτουργούσε. Έτσι χρησιμοποίησα δύο USB ένα για το boot και ένα για την εγκατάσταση του λειτουργικού συστήματος. Ένα άλλο αστείο λάθος ή και αδιέξοδο για παράδειγμα ήταν όταν άνοιξα για πρώτη φορά το Vim και δεν μπορούσα να βρω τον τρόπο να βγω αποό αυτό καθώς δεν έγραφα άνω και κάτω τελεία. Πιο πολύ λοιπόν συνάντησα προβλήματα αρχάριου που προέρχονταν από την μηδενική μου εμπειρία.

<br />

## Παραδοτέο 3: Warmup 1


Αρχικά δοκίμασα για λόγους εξοικείωσης βασικές εντολές όπως πχ πως να κάνω navigate απο directory σε directory γαι γενικότερα βασικά πράγματα και λειτουργείες. Έπειτα άρχισα να ελέγχω κάποιες δυνατότητες που παρέχει το σύστημα. Είδα κάποια βασικά tutorials για την χρήση των Linux και δοκίμασα κάποιες από τα ενδεικτικά warmup εργαλεία/ασκήσεις. Εγκατέστησα το πακέτο curl, το οποίο είναι ένα εργαλείο που μεταφέρει δεδομένα από και προς έναν server και κάνει διάφορων ειδών requests. Εμφάνισα λοιπόν τον καιρό στο terminal μου μέσω του wttr και δοκιμασά και πολλές άλλες δυνατότητες από το awesome-console-services όπως animated παπαγάλους, νέα, updates για τον covid, nyan cat, cryptocurrency charge rates και άλλα πολλά. Ενδεικτικά παραθέτω παρακάτω 2 από τα παραπάνω σε asciinemas.

[Καιρός με wttr στην Κοζάνη](https://asciinema.org/a/462773)

[Cryptocurrency Charge Rates](https://asciinema.org/a/462775)

<br />

Πηγές: [Introduction to Linux and Basic Linux Commands for Beginners](https://www.youtube.com/watch?v=IVquJh3DXUA), [Basic cURL Tutorial](https://www.youtube.com/watch?v=7XUibDYw4mc), [wttr](https://github.com/chubin/wttr.in), [awesome-console-services](https://github.com/chubin/awesome-console-services)

<br />

## Παραδοτέο 4: Συμμετοχικό Περιεχόμενο 1Α

<br />

Για το πρώτο παραδοτέο συμμετοχικού περιεχομένου η πρώτη εικόνα που επέλεξα είναι ο υπολογιστής της Apple, ο Apple III ο οποίος σχεδιάστηκε με κύριο γνώμονα τους επαγγελματίες και τις επιχειρήσεις που κάναν χρήση υπολογιστών και χαρακτηρίστηκε από την ίδια την Apple ως αποτυχία. Ενώ η δεύτερη εικόνα που επέλεξα είναι η πρώτη μηχανή Arcade ονόματι Computer Space, οι δημιουργοί της οποίας αργότερα ιδρύσανε την Atari.

| Περιγραφή | Repository Σύνδεσμος | Netlify Σύνδεσμος |
| --- | --- | --- |
| Images Apple III | [Κανονική Εικόνας](https://github.com/Sola1r3/images/blob/master/apple3.jpg) Και [Thumbnail](https://github.com/Sola1r3/images/blob/master/apple3-thumb.jpg) | |
| Gallery Apple III | [Στοιχεία Εικόνας](https://github.com/Sola1r3/_gallery/blob/master/apple3.md) | |
| Images Computer Space | [Κανονική Εικόνα](https://github.com/Sola1r3/images/blob/master/computer-space.jpg) Και [Thumbnail](https://github.com/Sola1r3/images/blob/master/computer-space-thumb.jpg) | |
| Gallery Computer Space | [Στοιχεία Εικόνας](https://github.com/Sola1r3/_gallery/blob/master/computer-space.md) | |

<br />

Πηγές: [Apple III - Wikipedia](https://en.wikipedia.org/wiki/Apple_III), [Apple III- Youtube](https://www.youtube.com/watch?v=1cO2McS0VAA), [Computer Space Wikipedia](https://en.wikipedia.org/wiki/Computer_Space), [The History of Arcade Machines from 1971](https://www.bespoke-arcades.co.uk/blog/early-arcade-history-1971),  [Computer Space launched the video game industry 50 years ago](https://theconversation.com/computer-space-launched-the-video-game-industry-50-years-ago-heres-the-real-reason-you-probably-havent-heard-of-it-168349)


### Προβλήματα που συνάντησα

Κατά την δημιουργία submodules, μου πήρε αρκετό χρόνο να κατανοήσω τι πρέπει να κάνω και αυτό οφείλεται παραπάνω σε λάθη πρωτάρη, με αποτέλεσμα να κάνω πολλά back and forth. Αρχικά οταν προσπαθούσα να κάνω το πρώτο μου git push δεν είχα κάνει σωστά generate token το οποίο δεν έχει δικαίωμα να τροποποιήσει τα repos μου. Παράλληλα προσπαθούσα να κάνω submodules χωρις να εχω δει τα asciinema του μαθήματος για τα submodules. Το μεγαλύτερο λάθος μου, ωστόσο παράλληλα εξαιτίας αυτού του λάθους ασχολήθηκα πολύ πιο βαθυά με το git και έψαξα πράγματα σε σχέση με αυτό που ειδάλλως δεν θα κοίταγα. Όταν έσβηνα τα υπάρχοντα submodules έκανα απλα rm -rf gallery και έπειτα εκτελούσα την εντολή git submodule add πράγμα που φυσικά δεν λειτουργούσε καθώς υπήρχε στο index το gallery. Έπειτα δοκίμασα να κάνω rm -rf το gitmodules και μετά touch gitmodules πράγμα που δούλεψε και μου επέτρεψε να κάνω νέα submodules, commit και push. Φυσικά όμως κάτι τέτοιο δεν δούλευε στο netlify. Δοκίμασα και άλλα πολλά ανορθόδοξα tactics ώσπου κάποια στιγμή σκέφτηκα να ξανακοιτάξω τα asciinema του μαθήματος ώπου και λύθηκαν όλα μου τα προβλήματα.

<br />

## Παραδοτέο 5: Warmup 2

Για το δεύτερο warmup έκανα browse στο διαδίκτυο μέσω terminal χρησιμοποιόντας το w3m, έναν text based browser, όπως φαίνεται και στην παρακάτω εικόνα

![alt text](https://raw.githubusercontent.com/Sola1r3/pictures/main/w3m.png)

Πηγές: [w3m](https://archlinux.org/packages/extra/x86_64/w3m/)

<br />

## Παραδοτέο 6: Συμμετοχικό Περιεχόμενο 2A

Το σετ διαφανειών μου έχει ως θεματολογία τα βιντεοπαιχνίδια σχετιζόμενη άρρηκτα με το Computer Space που θα μπορούσα για πολλούς λόγους να θεωρηθεί αφετηρία αυτού του τύπου διάδρασης με λογισμικό, ενώ ως timeline τα συστήματα της Apple που είναι πλάι στην ιστορία της εξέλιξης της διάδρασης και της διεπαφής ανθρώπων με υπολογιστές τόσο στις αρχές της όσο και στο παρόν.

| Περιγραφή | Repository Σύνδεσμος | Netlify Σύνδεσμος |
| --- | --- | --- |
| Slides | [Βιντεοπαιχνίδια (Slides)](https://github.com/Sola1r3/site/blob/master/_slides/videogames.md) | |
| Timeline | [Η εξέλιξη των συστημάτων της Apple (Timeline)](https://github.com/Sola1r3/site/blob/master/_timeline/apple.md) | |

<br />

## Παραδοτέο 7: Άσκηση Γραμμής Εντολών Download MP3

Για την πρώτη κύρια άσκηση γραμμής εντολών διάλεξα να κάνω αναζήτηση, να κατεβάσω και να παίξω μέσω του terminal ένα τραγούδι από το Youtube. Αρχικά κατέβασα τα packages που χρειαζόμουνα τα οποία ήταν το youtube dl, το οποίο κατεβάζει και αποθηκεύει βιντεάκια του youtube στον υπολογιστή, το mpv το οποίο είναι media player για την γραμμή εντολών, το ytfzf που επιτρέπει την αναζήτηση βίντεο από το terminal καθώς και άλλα dependencies του όπως το jq για ανάλυση json και το ueberzug για thumbnails. Αφού λοιπόν εγκατέστησα όλα τα παραπάνω έκανα αναζήτηση του τραγουδιού που επέλεξα (The Man Who Sold The World) το έτρεξα κατευθείαν, έπειτα το αποθήκευσα στον υπολογιστή μου και έπαιξα το αποθηκευμένο πλέον τραγούδι από το terminal. Όλα τα παραπάνω φαίνονται στα asciinema που ακολουθούν.

Asciinema Links

[Αναζήτηση τραγουδιού μέσω terminal](https://asciinema.org/a/452085)

[Download τραγουδιού](https://asciinema.org/a/452088)

[Play mp3 μέσω terminal](https://asciinema.org/a/452094)

Πηγές: [ytfzf - github](https://github.com/pystardust/ytfzf)

<br />

## Παραδοτέο 8: Συμμετοχικό Περιεχόμενο 1Β

Για την μελέτη περίπτωσης επέλεξα να ασχοληθώ με την φιλοσοφία του σχεδιασμού της Apple με ότι έχει να κάνει με την διάδραση μεταξύ ανθρώπου και υπολογιστή. 

| Περιγραφή | Repository Σύνδεσμος | Netlify Σύνδεσμος |
| --- | --- | --- |
| Το πρώτο Arcade | [firstarcade.md](https://github.com/Sola1r3/site/blob/master/_case-study/firstarcade.md) + [cs-firstarcade.md](https://github.com/Sola1r3/site/blob/master/_case-study/cs-firstarcade.md) | |

Πηγές: [The History of Arcade Machines from 1971](https://www.bespoke-arcades.co.uk/blog/early-arcade-history-1971), [Computer Space launched the video game industry 50 years ago](https://theconversation.com/computer-space-launched-the-video-game-industry-50-years-ago-heres-the-real-reason-you-probably-havent-heard-of-it-168349), [Before Pong, There Was Computer Space](https://thereader.mitpress.mit.edu/before-pong-there-was-computer-space/)[Why Pong scored so highly for Atari](https://www.theguardian.com/technology/2008/apr/17/games.atari), [The Sweet Pong of Success](https://www.technologyreview.com/2000/03/01/236409/the-sweet-pong-of-success/), [The First Gaming Console](https://www.computermuseumofamerica.org/2020/06/22/the-first-gaming-console/), [The 8 Generations of Video Game Consoles](https://www.bbc.co.uk/archive/the-8-generations-of-video-game-consoles/zvcjkty)[Nintendo's Wii is A Revolution](https://www.forbes.com/2006/11/13/wii-review-ps3-tech-media-cx_de_1113wii.html?sh=34840a4875bb)[The race to develop VR controls](https://www.polygon.com/a/the-race-for-vr/the-race-for-vr-controls)

<br />

## Παραδοτέο 9: Άσκηση Γραμμής Εντολών Emacs Org-Mode

Για την δεύτερη άσκηση γραμμής εντολών επέλεξα να ασχοληθώ με τον επεξεργαστή κειμένου emacs και πιο συγκεκριμένα με το Mode Org-Mode το οποίο χρησιμοποιείται για την δημιουργία σημειώσεων, για την σύνταξη εγγράφων, την δημιουργία λιστών και άλλα πολλά μέσω ενός γρήγορου και αποτελεσματικού συστήματος plain text.
