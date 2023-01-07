# Επικοινωνία Ανθρώπου-Υπολογιστή

### **Αντώνιος Παπακώστας**

### **ΑΜ: Π2018158**

### **GitHub: [AnTonyPapako](https://github.com/AnTonyPapako)**

### **Organization: [MainCharacters](https://github.com/MainCharacters)**

| Εβδομάδα | [Όλα τα παραδοτέα βρίσκονται στην ίδια σελίδα της τελικής αναφοράς](https://courses-ionio.github.io/help/deliverables/) με τα προσωπικά στοιχεία σας (Όνομα, ΑΜ, github profile) και μαζί με αυτόν εδώ τον πίνακα περιεχομένων | Σύνδεσμος στην [εβδομαδιαία παρουσίαση προόδου στις συζητήσεις](https://github.com/courses-ionio/help/discussions/categories/show-and-tell) | Αυτοαξιολόγηση σύμφωνα με τα κριτήρια της αντίστοιχης άσκησης |
| --- | --- | --- | --- |
| 1 |  [Δημιουργία ομάδας](https://github.com/courses-ionio/hci/discussions/1794) + [Φορκ και δημιουργία σελίδας τελικής αναφοράς](https://courses-ionio.github.io/help/guide/), [προσθήκη πίνακα περιεχομένων](https://raw.githubusercontent.com/courses-ionio/hci/master/README.md), [συγγραφή της εισαγωγής](https://courses-ionio.github.io/help/intro/), αποστολή της εισαγωγής [για σχολιασμό στην συζήτηση](https://github.com/courses-ionio/help/discussions/categories/show-and-tell) και καταγραφή του συνδέσμου συζήτησης δίπλα --> | [Introduction](https://github.com/courses-ionio/help/discussions/987) <br/> [Organization](https://github.com/MainCharacters) | |
| 2 | [Άσκηση γραμμής εντολών (linux install)](#παραδοτέο-2) | [Boot logs & Specs](https://github.com/courses-ionio/help/discussions/1108) | |
| 3 | [Συμμετοχικό περιεχόμενο A1](#παραδοτέο-3) | [Contribution A1](https://github.com/courses-ionio/help/discussions/1809) | |
| 4 | [Άσκηση γραμμής εντολών (warm up cli)](#παραδοτέο-4) | [ArchLinux installation on HW & Warm-up exercises](https://github.com/courses-ionio/help/discussions/1348) | |
| 5 | [Συμμετοχικό περιεχόμενο A2](#παραδοτέο-5) | [Contribution A2](https://github.com/courses-ionio/help/discussions/1811) | |
| 6 | [Κατασκευή του βιβλίου Α](#παραδοτέο-6) | [Book A](https://github.com/courses-ionio/help/discussions/1812) | |
| 7 | [Συμμετοχικό περιεχόμενο B1](#παραδοτέο-7) | [Contribution B1](https://github.com/courses-ionio/help/discussions/1718) | |
| 8 | [Άσκηση γραμμής εντολών](#παραδοτέο-8) | [Use Terminal as IDE](https://github.com/courses-ionio/help/discussions/1791) | |
| 9 | [Συμμετοχικό περιεχόμενο B2](#παραδοτέο-9) | [Contribution B1]() | |
| 10 | [Άσκηση γραμμής εντολών](#παραδοτέο-10) | [Convert between different text formats]() | |
| 11 | [Κατασκευή του βιβλίου Β](#παραδοτέο-11) | [Book A]() | |
| 12 | [Τελική αναφορά](#παραδοτέο-12) | [Epilogue]() | |

## Παραδοτέα μαθήματος

### Παραδοτέο 1

Εισαγωγή.

Το μάθημα, Επικοινωνία Ανθρώπου-Υπολογιστή, αποσκοπεί στην δημιουργία τεχνολογίας υπολογιστή και συγκεκριμένα επικεντρώνεται στην διάδραση και αλληλεπίδραση ανθρώπου με υπολογιστή. Σκόπος μου είναι να εξετάσω τις διαφορές και την εξέλιξη του υπολογιστή ανά έτη, ώστε να αποκτήσω την αντίληψη των τεχνολογικών επιτεύγματων σχετικά με την "επικοινωνία" ανθρώπου-υπολογιστή μέσω των συμπερασμάτων της εξέτασης. Επίσης να βελτιώσω τις ικανότητες μου πάνω σε ***command line*** και ***GitHub***.

##

### Παραδοτέο 2

Άσκηση γραμμής εντολών. ```Προσωρινή λύση - Virtual Machine```

asciinema link: [Boot logs and Specs](https://asciinema.org/a/TsRLr9IgszSTONBMgpe5NPhgu)

Στο συγκεκριμένο παραδοτέο έγινε η εγκατάσταση Arch Linux μέσω Virtual Machine, Virtual Box. Αρχικά πραγματοποιήθηκε τοπική εγκατάσταση Virtual Box και Arch Linux iso. Έπειτα από μερικά στάδια, όπως την δημιουργία νέας εικονικής μηχανής με λειτουργικό σύστημα Linux με έκδοση Arch Linux και ο διαθέσιμος χώρος αποθήκευσης, ζητήθηκε ο δίσκος εγκατάστασης, η γλώσσα, ο τύπος αρχείων, η ώρα συστήματος και οι κωδικοί του χρήστη. Έπειτα εγκαταστάθηκε το λογισμικό ***asciinema*** με την εντολή ```pacman -S asciinema```  που είναι σημαντικό εργαλείο για την καταγραφή terminal. Χρησιμοποιήθηκαν με την σειρα οι εντολές ```journalctl -b``` και ```neofetch```, ώστε να εμφανιστούν διαδοχικά πρώτα τα Boot logs και έπειτα τα χαρακτηριστικά του συστήματος.

![neofetch_specs](https://user-images.githubusercontent.com/44473312/196051481-dadfb072-9327-4bdc-97cb-418db4349700.png)

##

### Παραδοτέο 3

Συμμετοχικό περιεχόμενο Α1.

Σημαντικό θεωρώ, για το παραδοτέο, να γίνει ένας έλεγχος για την αλληλεπίδραση ανθρώπου με τεχνολογίες που διευκολύνουν την καθημερινότητα του. Όποτε επιλέχθηκε η βοηθός της Apple ***siri***, ένα εργαλείο που χρησιμοποιείται από εκατομμύρια άτομα καθημερινά για την απάντηση ερωτήσεων και εύρεση πληροφοριών, και η μηχανή ***VersaBraille***, ένα "display system" με διάφορες λειτουργίες όπως μετατροπή κειμένου σε braille μορφή οι οποίες βοηθούν ανθρώπους με ειδικές ανάγκες όρασης.

Προσωπικός σύνδεσμος netlify

- [siri](https://grand-cranachan-7f3e1d.netlify.app/gallery/siri/)

- [VersaBraille](https://grand-cranachan-7f3e1d.netlify.app/gallery/versabraille/)

Pull request

- [_gallery](https://github.com/MainCharacters/_gallery/pull/1)

- [images](https://github.com/MainCharacters/images/pull/1)

##

### Παραδοτέο 4

Άσκηση γραμμής εντολών.

Προαπαιτούμενα/Προϋποθέσεις

Εφόσον ήθελα να μην αφαιρέσω εντελώς τα Windows έκανα dual-boot για την εγκατάσταση ArchLinux.
Αρχικά κατεβάστηκαν με την σείρα ArchLinux iso και μετά Rufus, επίσης χρειάστηκε και ένα USB που η διαδικάσια για burn up σε ArchLinux άρχισε. Να τονιστεί ότι έπρεπε να κατανεμηθεί χώρος στον σκληρό δίσκο όπου θα τοποθετηθεί το ArchLinux. Μέσω των BIOS επιλέχθηκε να γίνει boot-up από το USB που είναι το ArchLinux μέσα και έπειτα αρχίζει η διαδικασία εγκατάστασης.

Εγκατάσταση ArchLinux

- Internet access ```ping archlinux.org -c 5```

- EFI boot verification ```ls /sys/firmware/efi/efivars/```

- Date & Time update ```timedatectl list-timezones``` 	```timedatectl set-timezone Europe/Athens```

- ArchLinux partitions ```cfdisk /dev/sda```

	Για ArchLinux χρειάζονται 3 τμήματα αποθηκευτικού χώρου. Root 20GB, Home 20GB, swap 6GB.
  
- Partitions format ```mkfs.ext4 /dev/sdaX``` ```mkswap /dev/sdaX``` ```swapon /dev/sdaX``` , όπου X το ανάλογο τμήμα ArchLinux

	Format πρώτα για Root, έπειτα για Home με την πρώτη εντολή. Τέλος format για swap με την δεύτερη εντολή και ενεργοποίηση του swap τμήματος με την τρίτη εντολή.
  
- Partitions mount ```mount /dev/sdaX /mnt``` ```mkdir /mnt/home``` ```mount /dev/sdaX /mnt/home``` , όπου X το ανάλογο τμήμα ArchLinux

- Base system of ArchLinux installation ```pacstrap -i /mnt base base-devel linux linux-lts linux-headers linux-firmware intel-ucode sudo nano vim git neofetch networkmanager dhcpcd pulseaudio```

- File System Table - FSTAB ```genfstab -U /mnt >> /mnt/etc/fstab```

	Μέχρι αυτό το σημείο όλες οι διαδικασίες λαμβάνουν μέρος εντός του USB, όμως το επιθυμητό αποτέλεσμα είναι στον δίσκο του υπολογιστή. Οπότε για να τρέξει το ArchLinux από τον υπολογιστή θα χρειαστεί να περάσουν όλα τα τμήματα, Root, Home, swap, από το USB.
  
- CHRooting to system ```arch-chroot /mnt```

  Εισαγωγή στο πραγματικό drive.
  
- Grub installation ```mkdir /boot/efi mount /dev/sdaX /boot/efi/``` ```pacman -S efibootmgr dosfstools mtools nano /etc/default/grub pacman -S os-prober grub-install --target=x86_64-efi --bootloader-id=grub_uefi --recheck grub-mkconfig -o /boot/grub/grub.cfg``` , όπου X το ανάλογο EFI τμήμα

	Το Grub boot βοηθάει στην εκκίνηση του ArchLinux. Με την εντολή nano /etc/default/grub έγινε αλλαγή ώστε η μεταβλητή GRUB_DISABLE_OS_PROBER να είναι false. Η διαδικασία με το Grub συμβαίνει ώστε κατά την εκκίνηση του υπολογιστή να δίνεται η δυνατότητα επιλογής μεταξύ Windows και ArchLinux, εφόσον πλέον το σύστημα είναι dual-boot.
  
- Enable network services ```systemctl enable dhcpcd.service``` ```systemctl enable NetworkManager.service```

	Η πρώτη εντολή είναι για την απόκτηση διεύθυνσης IP, ενώ η δεύτερη επιτρέπει πρόσβαση στο Internet.
  
Warm-up Ασκήσεις

**assignment:** fetch information

**deliverables:** read the business news

asciinema link: [Check the news](https://asciinema.org/a/QzXDCbgYw6mMivGfi7lsLUCSB)

Εφόσον έγινε η εγκατάσταση του λογισμικού ***curl***, αναζητήθηκαν διάφορες πληροφορίες όπως τον καιρό, τα κρούσματα Covid-19 και τις τιμές των κρυπτονομισμάτων σύμφωνα με την [λίστα διαθέσιμων υπηρεσιών](https://github.com/chubin/awesome-console-services) οι οποίες είναι προσβάσιμες από ποικίλλα IP πρωτόκολλα.

**assignment:** organise the terminal window into multiple areas

**deliverables:** use one window to search-edit local files or browse the web and another window for performance monitoring

asciinema link: [Split Terminal Window](https://asciinema.org/a/CsOV5GljPlvssQ12peKQz2Oxx)

Για την τελευταία εργασία εγκαταστάθηκαν τα λογισμικα ***tmux*** και ***glances***. Το πρώτο λογισμικό έχει την ικανότητα να ανοίγει νέα bashes, να εναλλάσσει μεταξύ αυτών και να χωρίζει στο ίδιο bash, το ίδιο terminal window, σε πολλαπλές περιοχές. Ενώ το δεύτερο παρακολουθεί και απεικονίζει την επίδοση του υπολογιστή.

##

### Παραδοτέο 5

Συμμετοχικό περιεχόμενο Α2.

Ζητούμενο του παραδοτέου είναι η προσθήκη των εικόνων με λαζάντα από το [προηγούμενο παραδοτέο](#παραδοτέο-3) του συμμετοχικού περιεχομένου σε ένα σετ από θεματικές διαφάνειες και σε ένα χρονολόγιο.

Η πρώτη εικόνα με λεζάντα που εισαγώ σχετίζεται με την *siri*. Η siri πρόκειται για ένα εικονικό βοηθό της Apple που ευκολύνει την καθημερινότητα εκατομμυρίων χρηστών στον πλανήτη, λύνοντας τους από απλές ερωτήσεις μέχρι και εκτελώντας διάφορες λειτουργίες. Για αυτό διάλεξα ως θεματική διαφάνεια τις [έξυπνες διαπεφές χρήστη - iui](https://github.com/AnTonyPapako/site/blob/master/_slides/iui.md) και ως χρονολόγιο τις [έξυπνες διεπαφές - agents](https://github.com/AnTonyPapako/site/blob/master/_timeline/agents.md).

vercel link: [Siri - 2011](https://site-bay-gamma.vercel.app/timeline/agents)

Η δεύτερη αναφαίρεται στην συσκευή VersaBraille. Πρόκειται για ένα display system που εμφανίζει ένα κείμενο σε μορφή braille, ευανάγνωστη για ανθρώπους με ειδικές ανάγκες όρασης, εφόσον έχει γίνει πρώτα έχει γίνει είσοδος του κειμένου και έπειτα η μετατροπή. Έτσι επέλεξα ως θεματική διαφάνεια τους [τρόπους διάδρασης - styles](https://github.com/AnTonyPapako/site/blob/master/_slides/styles.md) και ως χρονολόγιο τις [συσκευές εισόδου - input-devices](https://github.com/AnTonyPapako/site/blob/master/_timeline/input-devices.md).

vercel link: [VersaBraille - 1982](https://site-bay-gamma.vercel.app/timeline/input-devices)

##

### Παραδοτέο 6

Κατασκευή του βιβλίου Α.

Δημιουργήθηκε περιεχόμενο για το πρώτο κεφάλαιο του βιβλίου. Συγκεκριμένα σχετίζεται με τον ρόλο των έξυπνων πρακτόρων προς τις βοηθητικές τεχνολογίες με βάση τους αυτόνομους πράκτορες που καταλαβαίνουν το κοντινό τους περιβάλλον και πλοηγούνται μέσα σε αυτό. Ακόμη αναφαίρεται ότι μέσω της μηχανικής μάθησης και λοιπών αλγορίθμων τεχνητής νοημοσύνης βελτιώνεται η αρωγή των ατόμων με αναπηρίες ή δυσκολίες υγείας.

[contribution/agents.md](https://github.com/AnTonyPapako/kallipos/blob/master/contribution/agents.md)

[agent.lua](https://github.com/AnTonyPapako/kallipos/blob/master/agent.lua)

[book.pdf](https://github.com/AnTonyPapako/kallipos/blob/master/book.pdf)

[screenshot of contribution in book](https://github.com/AnTonyPapako/kallipos/blob/master/image.png)

##

### Παραδοτέο 7

Συμμετοχικό περιεχόμενο B1.

Για το συμμετοχικό περιεχόμενο Β1 δημιουργήθηκε ένα case study σχετικά με την χρήση των έξυπνων πρακτόρων προς τις βοηθητικές τεχνολογίες. Οι πράκτορες δεν αξιοποιούνται αποκλειστικά για επιχειρήσεις, αλλά πλέον και στον τομέα της υγείας. Φυσικά υπάρχουν αρκετές βοηθητικές τεχνολογίες με ποικίλα είδη, όμως με μοναδικό σκοπό της ενίσχυση της θεραπείας παρά την αντικατάσταση του ειδικού ή και της αγωγής.

[case study](https://github.com/AnTonyPapako/site/blob/master/_case-study/agent-in-assistive-technology.md)

[includes](https://github.com/AnTonyPapako/site/blob/master/_includes/cs-agents-in-assistive-technology.md)

Προσωπικός σύνδεσμος vercel: [Overcoming Boundaries](https://site-rke0nzn0t-antonypapako.vercel.app/case-study/agent-in-assistive-technology)

Πηγές

- [Assistive technologies for the disabled and for the new generation of senior citizens: the e-Tools architecture](https://www.cs.upc.edu/~ia/articulos/Ucortesetal-AICom-16-1.2003.pdf)

- [Siri and the Visually Impaired: Call Me Apple!](https://www.perkins.org/resource/siri-and-visually-impaired-call-me-apple/)

##

### Παραδοτέο 8

Άσκηση γραμμής εντολών.

**assignment:** use the terminal as an IDE

**deliverables:** edit your files (e.g., report, blog, code, etc) in vim or emacs and compile it in a different panel or use a plug-in

asciinema link: [Terminal as IDE](https://asciinema.org/a/Fo8R0cCTDyft43ULZClwsX9g5)

Για το παραδοτέο γράφτηκε κώδικας σε C με λειτουργία να σχεδιάζει ευθείες και να εμφανίζει κάθε φορά στην οθόνη την διαδικασία που ακολουθείται για τον υπολογισμό των σημείων της ευθείας, εφόσον ο χρήστης δώσει στο πρόγραμμα αρχικά τις επιθυμητές αρχικές και τελικές συντεταγμένες. Για καλύτερη εξοικείωση γραμμής εντολών δημιουργήθηκε επιπλέον ένα .sh αρχείο, ώστε να γίνει compile και έπειτα να τρέξει το πρόγραμμα.

```Προσοχή!``` Ο σχεδιασμός της ευθείας δεν εμφανίζεται στην οθόνη παρά μόνο αναγράφονται τα σημεία που η ευθεία θα κατέχει, διότι ο κώδικας εκτελείται σε *minimal terminal*.

##

### Παραδοτέο 9

Συμμετοχικό περιεχόμενο B2.

Στο τελικό συμμετοχικό περιεχόμενο ζητούμενο είναι η γραφή της βιογραφίας ένος ατόμου με ιδιαίτερο εργό στον τομέα της πληροφορικής συσχετιζόμενος με τα προηγούμενα συμμετοχικά περιεχόμενα που αναγράφθηκαν. Ο Adam Cheyer πρόκειται για έναν ειδικό στην τεχνητή νοημοσύνη με ερευνητικό επίκεντρο τους έξυπνους πράκτορες και με όνειρο να βελτιώσει την ποιόητητα ζωής των ανθρώπων μέσω της τεχνολογίας, το οποίο εμμέσως το έχει επετύχει με τη δημιουργία της βοηθού Siri.

[biography](https://github.com/AnTonyPapako/site/blob/master/_biography/adam-cheyer.md)

[includes](https://github.com/AnTonyPapako/site/blob/master/_includes/bio-cheyer.md)

##

### Παραδοτέο 10

Άσκηση γραμμής εντολών.

##

### Παραδοτέο 11

Κατασκευή του βιβλίου Β.

##

### Παραδοτέο 12

Τελική αναφορά.

##
