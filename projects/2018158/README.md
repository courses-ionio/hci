# Επικοινωνία Ανθρώπου-Υπολογιστή

### **Αντώνιος Παπακώστας**

### **ΑΜ: Π2018158**

### **GitHub: [AnTonyPapako](https://github.com/AnTonyPapako)**

| Εβδομάδα | [Όλα τα παραδοτέα βρίσκονται στην ίδια σελίδα της τελικής αναφοράς](https://courses-ionio.github.io/help/deliverables/) με τα προσωπικά στοιχεία σας (Όνομα, ΑΜ, github profile) και μαζί με αυτόν εδώ τον πίνακα περιεχομένων | Σύνδεσμος στην [εβδομαδιαία παρουσίαση προόδου στις συζητήσεις](https://github.com/courses-ionio/help/discussions/categories/show-and-tell) | Αυτοαξιολόγηση σύμφωνα με τα κριτήρια της αντίστοιχης άσκησης |
| --- | --- | --- | --- |
| 1 |  [Δημιουργία ομάδας](https://github.com/courses-ionio/hci/discussions/1794) + [Φορκ και δημιουργία σελίδας τελικής αναφοράς](https://courses-ionio.github.io/help/guide/), [προσθήκη πίνακα περιεχομένων](https://raw.githubusercontent.com/courses-ionio/hci/master/README.md), [συγγραφή της εισαγωγής](https://courses-ionio.github.io/help/intro/), αποστολή της εισαγωγής [για σχολιασμό στην συζήτηση](https://github.com/courses-ionio/help/discussions/categories/show-and-tell) και καταγραφή του συνδέσμου συζήτησης δίπλα --> | [Εισαγωγή](https://github.com/courses-ionio/help/discussions/987) | |
| 2 | [Άσκηση γραμμής εντολών (linux install)](#παραδοτέο-2) | [Boot logs & Specs](https://github.com/courses-ionio/help/discussions/1108) | |
| 3 | Συμμετοχικό περιεχόμενο A1 | | |
| 4 | [Άσκηση γραμμής εντολών (warm up cli)](παραδοτέο-4) | [ArchLinux installation on HW & Warm-up exercises](https://github.com/courses-ionio/help/discussions/1348) | |
| 5 | Συμμετοχικό περιεχόμενο A2 | | |
| 6 | Κατασκευή του βιβλίου Α | | |
| 7 | Συμμετοχικό περιεχόμενο B1 | | |
| 8 | Άσκηση γραμμής εντολών | | |
| 9 | Συμμετοχικό περιεχόμενο B2 | | |
| 10 | Άσκηση γραμμής εντολών | | |
| 11 | Κατασκευή του βιβλίου Β | | |
| 12 | Τελική αναφορά* | | |

## Παραδοτέα μαθήματος

### Παραδοτέο 1

Το μάθημα, Επικοινωνία Ανθρώπου-Υπολογιστή, αποσκοπεί στην δημιουργία τεχνολογίας υπολογιστή και συγκεκριμένα επικεντρώνεται στην διάδραση και αλληλεπίδραση ανθρώπου με υπολογιστή. Σκόπος μου είναι να εξετάσω τις διαφορές και την εξέλιξη του υπολογιστή ανά έτη, ώστε να αποκτήσω την αντίληψη των τεχνολογικών επιτεύγματων σχετικά με την "επικοινωνία" ανθρώπου-υπολογιστή μέσω των συμπερασμάτων της εξέτασης. Επίσης να βελτιώσω τις ικανότητες μου πάνω σε ***command line*** και ***GitHub***.

### Παραδοτέο 2

Άσκηση γραμμής εντολών. ```Προσωρινή λύση - Virtual Machine```

asciinema link: https://asciinema.org/a/TsRLr9IgszSTONBMgpe5NPhgu

Στο συγκεκριμένο παραδοτέο έγινε η εγκατάσταση Arch Linux μέσω Virtual Machine, Virtual Box. Αρχικά πραγματοποιήθηκε τοπική εγκατάσταση Virtual Box και Arch Linux iso. Έπειτα από μερικά στάδια, όπως την δημιουργία νέας εικονικής μηχανής με λειτουργικό σύστημα Linux με έκδοση Arch Linux και ο διαθέσιμος χώρος αποθήκευσης, ζητήθηκε ο δίσκος εγκατάστασης, η γλώσσα, ο τύπος αρχείων, η ώρα συστήματος και οι κωδικοί του χρήστη. Έπειτα εγκαταστάθηκε το λογισμικό ***asciinema*** με την εντολή ```pacman -S asciinema```  που είναι σημαντικό εργαλείο για την καταγραφή terminal. Χρησιμοποιήθηκαν με την σειρα οι εντολές ```journalctl -b``` και ```neofetch```, ώστε να εμφανιστούν διαδοχικά πρώτα τα Boot logs και έπειτα τα χαρακτηριστικά του συστήματος.

![neofetch_specs](https://user-images.githubusercontent.com/44473312/196051481-dadfb072-9327-4bdc-97cb-418db4349700.png)

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

asciinema link: https://asciinema.org/a/QzXDCbgYw6mMivGfi7lsLUCSB

Εφόσον έγινε η εγκατάσταση του λογισμικού ***curl***, αναζητήθηκαν διάφορες πληροφορίες όπως τον καιρό, τα κρούσματα Covid-19 και τις τιμές των κρυπτονομισμάτων σύμφωνα με την [λίστα διαθέσιμων υπηρεσιών](https://github.com/chubin/awesome-console-services) οι οποίες είναι προσβάσιμες από ποικίλλα IP πρωτόκολλα.

**assignment:** organise the terminal window into multiple areas

**deliverables:** use one window to search-edit local files or browse the web and another window for performance monitoring

asciinema link: https://asciinema.org/a/CsOV5GljPlvssQ12peKQz2Oxx

Για την τελευταία εργασία εγκαταστάθηκαν τα λογισμικα ***tmux*** και ***glances***. Το πρώτο λογισμικό έχει την ικανότητα να ανοίγει νέα bashes, να εναλλάσσει μεταξύ αυτών και να χωρίζει στο ίδιο bash, το ίδιο terminal window, σε πολλαπλές περιοχές. Ενώ το δεύτερο παρακολουθεί και απεικονίζει την επίδοση του υπολογιστή.
