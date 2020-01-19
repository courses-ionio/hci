
# * *Επικοινωνία Ανθρώπου Υπολογιστή* *
 
 # ΤΕΛΙΚΗ ΑΝΑΦΟΡΑ
 
 ## Ονοματεπώνυμο: Παπαίωάννου Ελευθέριος

 ## ΑΜ: Π2016016
 
 **Προφίλ στο github: (https://github.com/LefterisIkaria)**
 
 **Προσωπικό αποθετήριο μαθήματος: (https://github.com/LefterisIkaria/hci)**
 
 ## ΕΙΣΑΓΩΓΗ
Για την υλοποίηση των εργασιών χρησημοποιήθηκε Windows Subsystem για Linux. Συγκεκριμένα κατέβασα το Ubuntu από το Microsoft Store και ενεργοποίησα από το PowerShell το WindowsOptionalFeature. Το υποσύστημα χρησημοποιεί 8gb ram και το εργαλείο που χρησημοποιήθηκε γαι την καταγραφή των εργασιών είναι το asciinema όπως προτάθηκε απο τις οδηγίες.

```
Enable-WindowsOptionalFeature -Online -FeatureName Microsoft-Windows-Subsystem-Linux
```

## ΑΣΚΗΣΕΙΣ
 
 ### 1η εργασία
 
 -  ***[change your command prompt with your student ID](https://asciinema.org/a/ab8B0twxDbsNMHXPbKGymC8Ts)***
Για να αλλάξω το id χρησημοποίησα το nano text editor στο αρχείο ~/.bashrc και άλλαξα την μεταβλητή PS1.
```
nano ~bashrc
```
 -  ***[list your dot files](https://asciinema.org/a/EwUsAfJuqdCl7Y6VSv2FCsVbh)***
 Για να κάνω display τα dot files χρησιμοποίησα την εντολή ls σε συνδιασμό με το grep για να εμφανίσω μόνο τα dot files.
```
ls -a | grep "."
```

 -  ***[display your shell configuration file and display system information (hardware+software)](https://asciinema.org/a/WzjdmgrpMfXmPdvMTwm9DfuGX)***
Εμφάνισα το Shell configuration file μέσο του nano text editor και κατέβασα το neofetch με το οποίο έδειξα τα χαρακτηρηστικά του συστήματος μου.
!(https://github.com/LefterisIkaria/hci/blob/master/Specs.PNG)


 ### 2η εργασία
 
 -  ***[browse and view files on your system](https://asciinema.org/a/HoFyBqclUg1e9JHmKfgDS702n)***
 Έγινε περιαγωγή κάποιων αρχείων στο σύστημα, καθώς και διαγραφή και δημιουργία νεών με την χρήση των παρακάτω εντολών:
 ```
 ls, rmv, mkdir, cd, cat
 ```
 
 ### 3η εργασία
 
 -  ***[become productive with a todo list](https://asciinema.org/a/jDFwH35tKENI0hCQWrnrgTNQu)***
 Κατέβασα το taskwarrior για την δημηουργία μιας λίστας διεργασιών.
 
 ![specs](https://github.com/LefterisIkaria/hci/blob/master/Specs.PNG)
 
 ### 4η ερηασία
 
 - ***[text editor and plug-ins for code highlighting and autocompletion](https://asciinema.org/a/HVIDFSKbOWs1Xa7YwPzC2wLiO)***
 Εγκατέστησα το vim για την ευκολότερη επεξεργασία κώδικα.
 
 ## Σημμετοχικό Υλικό
 
 ### Παραδοτέο Α, Πέντε νέες εικόνες με λεζάντα και με ελεύθερα πνευματικά δικαιώματα ή που επιτρέπουν εμπορική χρήση:
 
 | Nintendo Wii |    [Nitendo_Wii.jpg](https://github.com/LefterisIkaria/gr/blob/gh-pages/images/Nitendo_Wii.jpg)  	|    [Nintendo_Wii.md](https://github.com/LefterisIkaria/gr/blob/gh-pages/_gallery/Nintendo_Wii.md)
 
 | Smart watch |    [smart-watch.jpg](https://github.com/LefterisIkaria/gr/blob/gh-pages/images/smart-watch.jpg)  	|    [smart-watch.md](https://github.com/LefterisIkaria/gr/blob/gh-pages/_gallery/smart-watch.md)
 
 | Drone |    [drone.jpg](https://github.com/LefterisIkaria/gr/blob/gh-pages/images/drone.jpg)  	|    [drone.md](https://github.com/LefterisIkaria/gr/blob/gh-pages/images/drone.jpg)
 
 | Olympys Camera |    [olympus-camera.jpg](https://github.com/LefterisIkaria/gr/blob/gh-pages/images/olympus-camera.jpg)  	|    [olympus-camera.md](https://github.com/LefterisIkaria/gr/blob/gh-pages/_gallery/olympus-camera.md)
 
 | Tesla Cybertruck |    [tesla-cybertruck.jpg](https://github.com/LefterisIkaria/gr/blob/gh-pages/images/tesla-cybertruck.png)  	|    [tesla-cybertruck.md](https://github.com/LefterisIkaria/gr/blob/gh-pages/_gallery/tesla-cybertruck)
 
 
 ## ΣΥΜΠΕΡΑΣΜΑΤΑ
 Με την υλοποίηση των παραπάνω εργασιών έμαθα βασικά πράγματα για την χρήση των Linux. Μαθαίνοντας κάποια βασικά πράγματα κατάλαβα ότι    έχεις παραπάνω ελευθερία στο πως θες να διαχειριστείς το σύστημά σου σε σχέση με άλλα λειτουργικά και μου κίνησε το ενδιαφέρον για   παραπάνω ενασχόλιση.
 
