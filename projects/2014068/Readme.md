# ΙΟΝΙΟ ΠΑΝΕΠΙΣΤΗΜΙΟ, ΤΜΗΜΑ ΠΛΗΡΟΦΟΡΙΚΗΣ 
## ΜΑΘΗΜΑ
### Πολυμέσα  
Επιβλέπων καθηγητής: Χωριανόπουλος Κωνσταντίνος 

## Στοιχεία φοιτήτριας 
### Γιώτα Πετσάβα
### ΑΜ: Π2014068

### Προσωπικό αποθετήριο https://github.com/p14pets/hci 

## Εισαγωγή
Επέλεξα να κάνω τέσσερις εργασίες σε linux terminal όπως περιγράφοντε στο αποθετήριο του μαθήματος. Οι εργασίες έγιναν σε περιβάλλον linux Ubuntu 18.04 LTS, μέσω WSL 2 (Windows Subsystem for Linux) σε windows 10. Ολες οι εργασίες στην αναφορά περιέχουν link στο recorded session του asciinema, καθώς και link σε συνδεσμους των εργαλείων που χρησιμοποιήθηκαν, καθώς σε μερικές εργασίες χρειάστηκε να ψάξω στις επισημες σελίδες των εργαλέιων για να μπορέσω να τα λειτουργησω.

## Συμμετοχικό εκπαιδευτικό υλικό
#### Προσωπικό αποθετήριο https://github.com/p14pets/gr
#### url σελίδας βιβλίου https://p14pets-gr.netlify.app/

### Παραδοτέο 1.Α
Προσθήκη 2 νέων εικόνων με λεζάντα.

#### Atari https://p14pets-gr.netlify.app/gallery/atari/
#### Oculus rift https://p14pets-gr.netlify.app/gallery/oculus-rift/

## Άσκηση 1. Σet-up the main dependencies and demonstrate your base system. change your command prompt with your student ID, list your dot files, display your shell configuration file and display system information (hardware+software)

#### url asciinema https://asciinema.org/a/yCnqSUKWRPNje3GVvlULUYAuc

Για να αλλάξω το command prompt με τον αμ μου χρησιμοποίησα το αρχείο .bashrc και τον nano editor

```
sudo nano .bashrc
```

Για να δείξω τα dotfiles έγραψα την εντολή

```
ls -a
```

Για να δείξω τις πληροφορίες του συστήματός μου χρησιμοποίησα το neofetch. Το εγκατέστησα με την εντολή

```
sudo apt-get install neofetch
```

και το έτρεξα με την εντολή 

```
neofetch
```

## Άσκηση 2. Get familiar with basic commands, reading documentation and editing files. Browse and view files on your system

#### url asciinema  https://asciinema.org/a/KZ22oOO0qMmsjZ34UFScnctN0

Για αυτη την εργασία χρησιμοποίησα το ranger. Μπορείς να πλοηγηθείς στο filesystem και να δεις directory και αρχεία πολύ εύκολα. Μπορείς ακόμα και να τα επεξεργαστείς με όποιον editor θες. Για να εγκαταστήσω το ranger χρησιμοποίησα την εντολή


```
sudo apt install ranger
```

Αφού είδα το manual με την εντολή

```
man ranger
```

Έτρεξα το ranger με την εντολή

```
ranger
```

## Άσκηση 3. Βecome productive with a todo list. Create a list of todos, edit, delete, and check some of them.

#### url asciinema  https://asciinema.org/a/h0EwpoOX1KCMoPveWbzyA2QbH

Για την άσκηση αυτή χρησιμοποίησα το taskwarrior https://taskwarrior.org/docs/start.html. Πληροφορίες σχετικά με την εγκατάσταση βρήκα στο https://www.linode.com/docs/applications/project-management/setting-up-taskwarrior-on-ubuntu-16-10/.

Η εγκατάσταση έγινε με την εντολή

```
sudo apt-get install taskwarrior
```

προσθέτεις tasks και με προθεσμία με την εντολή 

```
task add <your task> due:tomorrow
```

σβήνεις tasks με την εντολή

```
task <index> delete
```

επεξεργάζεσαι task με τον editor με την εντολή

```
task <index> edit
```

και τελειώνεις τα task που εχουν γίνει με την εντολή

```
task <index> done
```

Επίσης το taskwarrior υποστηριζει visualizations με τις εντολές 

```
burndown
```

και

```
calendar
```

Για να δεις όλα τα tasks απλά πληκτρολογείς

```
task
```

## Άσκηση 4. Plan your time with a calendar. Add, edit, search for an appointment.

#### url asciinema  https://asciinema.org/a/OO0DtR1dPoH0VGgJFonKYPXqE

Για την άσκηση αυτή χρησιμοποίησα το calcurse https://calcurse.org/. Η εγκατάσταση γίνε πολύ εύκολα με

```
sudo apt-get install calcurse
```

τρέχει με την εντολή

```
calcurse
```

Είναι πάρα πολύ εύκολο στη χρήση. Έυκολη αναζήτηση appoinmets απο το calendar, επιλογή ωρας έναρξης και ώρας λήξης, ή ολοήμερο event. Μπορείς να προσθέσεις και tasks σε todo list

## Συμπεράσματα
Κάνοντας τις παραπάνω ασκήσεις έμαθα να χρησιμοποιώ το λειτουργικό linux και τις βασικές εντολές του linux terminal, όπως η εξερεύνηση των αρχείων, εγκατάσταση εργαλείων, διάβασμα των manuals και χρήση editors, κυρίως του nano. Είναι πολύ σημαντική η δυνατότητα χρήσης συστήματος linux σε περιβάλλον windows, καθώς δεν υπάρχει πια η ανάγκη εγκατάστασης virual box όπως το vmware και άλλα. Με το wsl2 είναι πιο εύκολο πλέον.

