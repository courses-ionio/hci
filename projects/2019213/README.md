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
| 3 | [Άσκηση γραμμής εντολών(Εγκατάσταση Archlinux)](https://github.com/p19tzam/hci/blob/2019213/projects/2019213/README.md#%CE%B5%CE%B3%CE%BA%CE%B1%CF%84%CE%AC%CF%83%CF%84%CE%B1%CF%83%CE%B7-archlinux-manually) |
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

## Εγκατάσταση ArchLinux manually
Για την εγκατάσταση του ArchLinux ακολούθησα το [Installatior-Guide](https://wiki.archlinux.org/title/Installation_guide) στο [wiki.archlinux.org](https://wiki.archlinux.org/) βήμα-βήμα. <br><br>
Η εγκατάσταση του Arch Linux έγινε σε εναν εξωτερικο σκληρό δίσκο 160GB αρχικά χωρίς GUI(Graphical user interface).
Μετά την εγκατάσταση και το successful reboot έκανα εγκατάσταση του GNOME.
### Pre-installation
<b>1. Ρυθμιση διάταξης του πληκτρολογίου</b>

```bash
localectl list-keymaps | grep -i us # Λίστα με διαθέσιμα layouts
loadkeys us # Φόρτωμα το US layout
```
<b>2. Επαλήθευση του boot load</b> 

```bash
ls /sys/firmware/efi/efivars
```
Εάν η εντολή εμφανίζει τον κατάλογο χωρίς σφάλμα, τότε το σύστημα εκκινείται σε λειτουργία UEFI. Εάν ο κατάλογος δεν υπάρχει, το σύστημα μπορεί να εκκινηθεί σε λειτουργία BIOS (ή CSM). <br><br>
<b>3. Σύνδεση στο διαδίκτυο</b> <br>
Αρχικά πρέπει να βεβαιωθούμε ότι η διεπαφή δικτύου σας είναι καταχωρημένη και ενεργοποιημένη, για παράδειγμα με το <b>ip-link</b>
```bash
ip link # Εάν είμαστε συνδεμένοι με erthernet τότε θα μας εμφάνισει μια IP(192.168.1.56 π.χ)
``` 
<br>

Αν υπάρχει WiFi σύνδεση τότε απευθυνόμαστε στο [iwctl](https://wiki.archlinux.org/title/Iwd#iwctl) σύμφωνα με τις [οδηγίες](https://wiki.archlinux.org/title/Installation_guide#Prepare_an_installation_medium).
<br>
Για την επαλήθευση του δικτύου μπορούμε να χρησιμοποιήσουμε την εντολή ping.
```bash
ping archlinux.org
```
<b>4. Ενημέρωση ρολογιου συστήματος</b>
```bash
timedatectl set-ntp true
```
<b>5. Διαχώριση των δίσκων</b> <br>
Οι δίσκοι εκχωρούνται σε assigned ή block όπως /dev/sda, /dev/nvme0n1 ή /dev/mmcblk0. Για να αναγνωρίσετε αυτούς τους δίσκους, χρησιμοποιώ την εντολή fdisk. <br><br>
<b>(ΠΡΟΣΟΧΉ ΑΥΤΟ ΕΊΝΑΙ ΈΝΑ ΠΑΡΆΔΕΙΓΜΑ ΓΙΑ ΝΑ ΣΑΣ ΔΕΊΞΩ ΤΟ OUTPUT ΔΕΝ ΕΧΕΙ ΚΑΜΊΑ ΣΧΈΣΗ ΜΕ ΤΟ REAL ΣΎΣΤΗΜΑ ΜΟΥ. )</b>
```bash
fdisk -l # Εντολή για αναγνώριση των δίσκων

# Παράδηγμα της εντολής fdisk -l
# Disk /dev/sda: 20 GiB, 21474836480 bytes, 41943040 sectors                                          
# Disk model: VMware Virtual S                                                                        
# Units: sectors of 1 * 512 = 512 bytes                                                               
# Sector size (logical/physical): 512 bytes / 512 bytes                                               
# I/O size (minimum/optimal): 512 bytes / 512 bytes                                                   
# Disklabel type: gpt                                                                                 
# Disk identifier: 6C3F8D8C-B7D6-EC4F-8BF8-0FADB993B5A8
```
Επιλογή δίσκων 
```bash
fdisk /dev/sda
# Παράδηγμα της εντολής fdisk /dev/sda
# Welcome to fdisk (util-linux 2.37.2).                                                               
# Changes will remain in memory only, until you decide to write them.                                 
# Be careful before using the write command.
```
Δημιουργία δίσκων
```bash
# Boot partition
fdisk /dev/sda
Command (m for help): g
Command (m for help): n    
Partition number (1-128, default 1): 1
First sector (2048-41943006, default 2048): <ENTER>
Last sector, +/-sectors or +/-size{K,M,G,T,P} (2048-41943006, default 41943006): +300M
Command (m for help): w
```

```bash
# Root partition
fdisk /dev/sda
Command (m for help): n
Partition number (2-128, default 2): 2
First sector (616448-41943006, default 616448): <ENTER>
Last sector, +/-sectors or +/-size{K,M,G,T,P} (616448-41943006, default 41943006): +10G
Command (m for help): w
```

```bash
# Swap partition
fdisk /dev/sda
Command (m for help): n 
Partition number (3-128, default 3): 3
First sector (21587968-41943006, default 21587968): <ENTER>
Last sector, +/-sectors or +/-size{K,M,G,T,P} (21587968-41943006, default 41943006): <ENTER>
Command (m for help): w
```
<b>6. Μορφοποίηση δίσκων</b>
```bash
mkfs.fat -F32 /dev/sda1 # Boot partition 
mkfs.ext4 /dev/sda2 # Root partition
mkfs.ext4 /dev/sda3 # Swap partition
```
<b>7. Mount the file systems</b>
```bash
mount /dev/sda2 /mnt
mkdir /mnt/home
mount /dev/sda3 /mnt/home
```

### Installation
<b>1. Εγκατασταση βασικων πακετων</b>
```bash
pacstrap /mnt base linux linux-firmware
```
### Configure the system
<b>1. Fstab</b>
```bash
genfstab -U /mnt >> /mnt/etc/fstab
```
<b>2. Chroot</b>
```bash
arch-chroot /mnt
```
<b>3. Network configuration</b>
```bash
/etc/hostname
archlinux
```
<b>4. User Add</b>
```bash
useradd -m p2019213
passwd p2019213
```
<b>5. Initramfs</b>
```bash
mkinitcpio -P
```
<b>6. Root password</b>
```bash
passwd
```
<b>7. Reboot</b><br>
Βγείτε από το περιβάλλον chroot πληκτρολογώντας exit ή πατώντας Ctrl+d.
<br>
Τέλος, επανεκκινήστε το μηχάνημα πληκτρολογώντας reboot: τυχόν διαμερίσματα που είναι ακόμα τοποθετημένα θα αποσυναρμολογηθούν αυτόματα από το systemd. Θυμηθείτε να αφαιρέσετε το μέσο εγκατάστασης και στη συνέχεια να συνδεθείτε στο νέο σύστημα με τον λογαριασμό p2019213.


















<h2>   :book:: Παραδοτέο 2</h2>

### :pushpin:: ΕΡΓΑΣΙΑ ΓΡΑΜΜΗΣ ΕΝΤΟΛΩΝ 1η(δίσκος, μνήμη, επεξεργαστής, δίκτυο, γραφικά)

```bash
# Command
lscpu
```
## CPU
[![asciicast](https://asciinema.org/a/443889.svg)](https://asciinema.org/a/443889)


```bash
# Command
lsblk
```
## Hard Drives
[![asciicast](https://asciinema.org/a/443890.svg)](https://asciinema.org/a/443890)

```bash
# Command
free -m
```
## RAM
[![asciicast](https://asciinema.org/a/443891.svg)](https://asciinema.org/a/443891)

```bash
# Command
lspci | grep VGA
```
## GPU
[![asciicast](https://asciinema.org/a/443892.svg)](https://asciinema.org/a/443892)

```bash
# Command
ip addr
```
## Network Interface
[![asciicast](https://asciinema.org/a/443893.svg)](https://asciinema.org/a/443893)

<h2>   :book:: Παραδοτέο 3</h2>

### :pushpin:: ΕΡΓΑΣΙΑ ΓΡΑΜΜΗΣ ΕΝΤΟΛΩΝ 2η(Εγκατάσταση ArchLinux)









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


