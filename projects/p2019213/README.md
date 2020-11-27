### :paperclip: Μάθημα: Επικοινωνία Ανθρώπου Υπολογιστή(hci)

<hr>
<h4>Ονοματεπώνυμο: Δημοστέν Τζάμα
<br>
Α.Μ.: Π2019213</h4>


:newspaper:: [GitHub Profile](https://github.com/p19tzam/)<br>
:email:: [Student Mail](mailto:p19tzam)<br>
:link:: [codepen.io Profile](https://codepen.io/dhmosfunk)<br>
<hr>
<br>
<h1>:file_folder:: Παραδοτέα και Τελική αναφορά</h1>
<br><br><br>

<h2>   :book:: Παραδοτέο 1</h2>





<h3> Πίνακας με σύνοψη των προθεσμιών και των παραδοτέων</h3>

| Εβδομάδα* | Παραδοτέο |
| --- | --- |
| 1 | [Εισαγωγή](https://github.com/p19tzam/hci/blob/p2019213/projects/p2019213/README.md#pushpin-%CE%B5%CE%B9%CF%83%CE%B1%CE%B3%CF%89%CE%B3%CE%AE) |
| 2 | [Άσκηση προγραμματισμού(Button)](https://github.com/p19tzam/hci/blob/p2019213/projects/p2019213/README.md#---book-%CF%80%CE%B1%CF%81%CE%B1%CE%B4%CE%BF%CF%84%CE%AD%CE%BF-2) |
| 3 | [Άσκηση γραμμής εντολών(cid,dotfiles,shell conf,syshwd)](https://github.com/p19tzam/hci/blob/p2019213/projects/p2019213/README.md#---book-%CF%80%CE%B1%CF%81%CE%B1%CE%B4%CE%BF%CF%84%CE%AD%CE%BF-3) |
| 4 | [Άσκηση προγραμματισμού(Interactive Text)](https://github.com/p19tzam/hci/blob/p2019213/projects/p2019213/README.md#---book-%CF%80%CE%B1%CF%81%CE%B1%CE%B4%CE%BF%CF%84%CE%AD%CE%BF-4) |
| 5 | [Άσκηση γραμμής εντολών(Powerline statusbar&color scheme/theme)](https://github.com/p19tzam/hci/blob/p2019213/projects/p2019213/README.md#---book-%CF%80%CE%B1%CF%81%CE%B1%CE%B4%CE%BF%CF%84%CE%AD%CE%BF-5) |
| 6 | συμμετοχικό περιεχόμενο |
| 7 | Άσκηση προγραμματισμού |
| 8 | Άσκηση γραμμής εντολών |
| 9 | Άσκηση προγραμματισμού |
| 10 | Άσκηση γραμμής εντολών |
| 11 | συμμετοχικό περιεχόμενο |
| 12 | Τελική αναφορά και αίτημα ενσωμάτωσης για βαθμολόγηση* |
<br/>

### :pushpin:: Εισαγωγή
<p>Μέσα από το μάθημα επικοινωνία ανθρώπου υπολογιστή θέλω να επεκτείνω τις γνώσεις μου πάνω στον προγραμματισμό να μπορώ να χρησιμοποιώ το GitHub μέσω των παραδοτέων(Ασκήσεων) ώστε να το εξελίξω και αυτο.
    Επιπλέον  θέλω να διευρύνω τις γνώσεις μου στο τερματικό(γραμμή εντολών) και γενικότερα θέλω να μάθω όσο μπορώ περισσότερα πράγματα μέσα από αυτό το μάθημα που να έχουν σχέση με την πληροφορική.
</p> 

<br>
<br>
<br>
<h2>   :book:: Παραδοτέο 2</a></h2>

### :pushpin:: [ΆΣΚΗΣΗ ΠΡΟΓΡΑΜΜΑΤΙΣΜΟΎ 1 (Button)](https://p19tzam.netlify.app//remix/button/)
#### [Άσκηση προγραμματισμού 1 (Button) codepen.io](https://codepen.io/dhmosfunk/pen/OJXMZyQ)
<p> Η τροποποίηση που πραγματοποίησα σε αυτή την άσκηση προγραμματισμού(BUTTON) έχει την εξής λειτουργία: είναι ένα κουμπί(BUTTON) που ονομάζεται MY GITHUB όταν κάνουμε click στο button λοιπόν ανοίγει ένα NEW TAB και μας μεταφέρει στο GITHUB προφίλ μου.</p>
<p> Οι τροποποιήσεις που έκανα είναι η εξής: αφαίρεσα το text που προυπήρχε(REMOVE) και πρόσθεσα την λέξη MY GITHUB επίσης εκεί που υπήρχε το (X) πρόσθεσα μια εικόνα(Icon) του GitHub και άλλαξα τα χρώματα. Για να κάνω αυτές τις τροποποιήσεις έπαιξα λίγο με τον κώδικα από το αρχείο HTML και απο το αρχείο CSS. Επίσης για να κανω λειτουργικο το BUTTON έπρεπε να επεξεργαστω το αρχείο javascript(jQuery).</p>
<br>

### HTML τροποποιήσεις
<br>

Βρίκα μια εικόνα του github και την πρόσθεσα μέσω την ετικέτα <img> και έβαλα για class `"fa fa-remove"` για να πάρει το height και to width και γενικά τις ιδιότητες της κλάσης

```html
<img class="fa fa-remove" src="https://image.flaticon.com/icons/png/512/25/25231.png" > 
```



### :heavy_plus_sign: Πρόσθετος κώδικας στην javascript(jQuery)

```javascript
$(document).ready(function () {
	return $('.button').click(function () {
		var win = window.open('https://github.com/p19tzam', '_blank');
		if (win) {
			win.focus();
she		} else {
			alert('Please allow popups for this website');
		}
		return setTimeout(removeSuccess, 3000);
    });
}); 
```
Στο μπλόκ αυτής της γραμμής `return $('.button').click(function ()` σημαίνει ότι όταν το BUTTON γίνει CLICK να εκτελέσει τις λειτουργίες `var win = window.open('https://github.com/p19tzam', '_blank');`
Επίσης αν έχετε τα popups disallow μας εμφανίζει ενα Alert με ενα message για να κάνουμε allow τα popups.

<br>
<br>
<br>

#### :arrow_double_up:: [Επιστροφή στον πίνακα.](https://github.com/p19tzam/hci/blob/p2019213/projects/p2019213/README.md#-%CF%80%CE%AF%CE%BD%CE%B1%CE%BA%CE%B1%CF%82-%CE%BC%CE%B5-%CF%83%CF%8D%CE%BD%CE%BF%CF%88%CE%B7-%CF%84%CF%89%CE%BD-%CF%80%CF%81%CE%BF%CE%B8%CE%B5%CF%83%CE%BC%CE%B9%CF%8E%CE%BD-%CE%BA%CE%B1%CE%B9-%CF%84%CF%89%CE%BD-%CF%80%CE%B1%CF%81%CE%B1%CE%B4%CE%BF%CF%84%CE%AD%CF%89%CE%BD)

<br>

<h2>   :book:: Παραδοτέο 3</a></h2>

### :pushpin:: ΕΡΓΑΣΙΑ ΓΡΑΜΜΗΣ ΕΝΤΟΛΩΝ 1 (warmup)(cid,dotfiles,shell conf,syshwd).
<br>

Η πρώτη εργασία γραμμής εντολών που επέλεξα είναι αυτή στο πρώτο box απο το [hci tags](https://github.com/epidrome/dokey) που έχει τα εξής <b>deliverables</b> `[(1.0 change your command prompt with your student ID), (2.0 list your dot files), (3.0 display your shell configuration file) (4.0 and display system information (hardware+software))]`.
<br><br>
Για να κάνω record χρησιμοποίησα το asciinema που το κάνεις Install στα linux και είναι εύκολο στην χρήση του για install - `sudo apt-get install asciinema`

Επίσης εξηγώ κομμάτι κομμάτι τις εντολές.


<br>

#### 1.0 change your command prompt with your student ID

Απλός τρέχω το bash script και γράφω δίπλα το νέο hostname που θέλω να βάλω(προσοχή!Θέλει δικαιώματα root!).
[![asciicast](https://asciinema.org/a/371945.svg)](https://asciinema.org/a/371945)<br>
*Μόλις γίνει restart το τερματικό το νέο hostname θα εμφανιστεί.
<br>
Ο κώδικας για του bash script μου που αλλάζει το hostname (root!)
```bash
./changehostname p2019213
#!/bin/bash

if [ ! -n "$1" ] ; then
	echo 'Missing argument: new_hostname'
	exit 1
fi

if [ "$(id -u)" != "0" ] ; then
	echo "Sorry, you are not root."
	exit 2
fi

CUR_HOSTNAME=$(cat /etc/hostname)
NEW_HOSTNAME=$1

echo "The current hostname is $CUR_HOSTNAME"

hostnamectl set-hostname $NEW_HOSTNAME
hostname $NEW_HOSTNAME

sudo sed -i "s/$CUR_HOSTNAME/$NEW_HOSTNAME/g" /etc/hosts
sudo sed -i "s/$CUR_HOSTNAME/$NEW_HOSTNAME/g" /etc/hostname

# Display new hostname
echo "The new hostname is $NEW_HOSTNAME"
```
#### Εξήγηση κώδικα bash script

If statement που ελέγχει το αν ο χρήστης έχει βάλει input η οχι δηλαδή: <br>
`./changehostname.sh input` -> Σώστο <br>
`./changehostname.sh` -> Λάθος <br>

```bash
if [ ! -n "$1" ] ; then
	echo 'Missing argument: new_hostname'
	exit 1
fi
```
<br>

If statement που ελέγχει αν ο χρήστης που το "τρέχει" είναι root με την εντολή `id -u`. Ένα παράδειγμα επιστροφής εντολής: <br>
`id -u result=> 1001` -> non root <br>
`id -u result=> 0` -> root <br>

```bash
if [ "$(id -u)" != "0" ] ; then
	echo "Sorry, you are not root."
	exit 2
fi
```

Αποθηκεύει σε δύο μεταβλητές το προηγούμενο hostname και το hostname που δέχτηκε σαν arg και εμφανίζει στην οθόνη το παλιό hostname. <br>
```bash
CUR_HOSTNAME=$(cat /etc/hostname)
NEW_HOSTNAME=$1

echo "The current hostname is $CUR_HOSTNAME"
```
<br>

Ορίζει το καινούργιο hostname και αφαιρει το παλιό<br>
```bash
hostnamectl set-hostname $NEW_HOSTNAME
hostname $NEW_HOSTNAME
```
Εδώ όπως βλέπουμε χρησιμοποιώ το sed.<br>
Το sed είναι επεξεργαστής ροής(stream editor). Ένας επεξεργαστής ροής χρησιμοποιείται για την εκτέλεση βασικών μετασχηματισμών κειμένου σε μια ροή εισόδου(input stream) (ένα αρχείο ή εισαγωγή από ένα αγωγό(pipeline)).
<br>
Αντικατάσταση τα παλιά hosts και hostname αρχεία με τα καινούργια που είναι το νέο hostname και στο τέλος εμφανίζει στην οθόνη το νέο hostname.<br>
```bash
sudo sed -i "s/$CUR_HOSTNAME/$NEW_HOSTNAME/g" /etc/hosts
sudo sed -i "s/$CUR_HOSTNAME/$NEW_HOSTNAME/g" /etc/hostname

# Display new hostname
echo "The new hostname is $NEW_HOSTNAME"
```
<br><br>


#### 2.0 list your dot files
Δημιουργούμε 10 hidden files με bash scripting.
```bash
for i in {0..10}; do echo Some hidden files. > ".File$(printf "%03d" "$i").txt"; done
```

Εμφανιση των hidden files που δημιουργίσαμε με την εντολή παραπάνω μέσω pipelining.
```bash
ls -l ~/.[^.]* | grep "File.*"
```
[![asciicast](https://asciinema.org/a/370561.svg)](https://asciinema.org/a/370561)
<br>

#### 3.0 display your shell configuration file
Εμφάνιση όλων των κρυφών αρχείων που είναι στο φάκελο
```bash
ls -a
```

για να δούμε τι έχει μεσα στο configuration file 
```bash
vi .bash_profile
```


[![asciicast](https://asciinema.org/a/367674.svg)](https://asciinema.org/a/367674)<br>

#### 4.0 and display system information (hardware+software)
Εμφάνιση μνήμης υπολογιστή με pipelining που κάνει grep αυτο που μας ενδιαφέρει δηλαδή το size
```bash
sudo dmidecode -t memory | grep "MB"
```

Εμφάνιση ιδιοτήτων του επεξεργαστη
```bash
cat /proc/cpuinfo
```

Εμφάνιση δεδομένων σκληρού δίσκου
```bash
lsblk
```

Εμφάνιση ιδιοτήτων της σύνδεσης internet π.χ το iPv4(inet),iPv6,MAC Address,Netmask,Broadcast,Localhost etc.
```bash
ifconfig -a
```

[![asciicast](https://asciinema.org/a/370562.svg)](https://asciinema.org/a/370562)
 
<br>
<br>
<br>

#### :arrow_double_up:: [Επιστροφή στον πίνακα.](https://github.com/p19tzam/hci/blob/p2019213/projects/p2019213/README.md#-%CF%80%CE%AF%CE%BD%CE%B1%CE%BA%CE%B1%CF%82-%CE%BC%CE%B5-%CF%83%CF%8D%CE%BD%CE%BF%CF%88%CE%B7-%CF%84%CF%89%CE%BD-%CF%80%CF%81%CE%BF%CE%B8%CE%B5%CF%83%CE%BC%CE%B9%CF%8E%CE%BD-%CE%BA%CE%B1%CE%B9-%CF%84%CF%89%CE%BD-%CF%80%CE%B1%CF%81%CE%B1%CE%B4%CE%BF%CF%84%CE%AD%CF%89%CE%BD)

<br>
<h2>   :book:: Παραδοτέο 4</a></h2>

### :pushpin:: [ΆΣΚΗΣΗ ΠΡΟΓΡΑΜΜΑΤΙΣΜΟΎ 2 (Interactive Text)](https://p19tzam.netlify.app//remix/interactive-text/)
#### [Άσκηση προγραμματισμού 2 (Interactive Text) codepen.io](https://codepen.io/dhmosfunk/pen/bGeMGQP)


Στο 4ο παραδοτεο επέλεξα την άσκηση προγραμματισμού `Interactive Text`.<br>
Σε αυτή την άσκηση χρειαζόταν να αλλάξω κώδικα μεσα στην html και στην css. <br>
Κάθε hover effect έχει ένα section class name πχ `<section class=”15”>`<br>
Έτσι εγώ έκανα delete όλα τα υπόλοιπα sections και άφησα μονο το `section  class p15` που έχω επιλέξει μετά έβαλα το δικό μου text εκεί  που υπήρχε το προηγούμενο και είναι έτοιμο.
<br><br>
#### Και φαίνεται κάπως έτσι:

```html
<section class="p15">
  <a href="https://github.com/p19tzam">Π2019213
    <div class="t1">
      <div class="in"></div>
        
      </div>
    <div class="t2">
      <div class="in">tzama</div>        
      </div>       
  </a>
</section>
```

Αμέσως μετά έπρεπε να κάνω μερικές αλλαγές στο css αρχείο για να βάλω το δικό μου text και να πάει στο center.

Άλλαξα το `width` και το `height` σε auto;
Μετα το `margin-left:-205px;` για να πάει το text στην μέση της οθόνης


#### Ο αλλαγμένος css κώδικας:
```css
section.p15 a {
	width: auto;
	height: auto;
	line-height: 58px;
	position: absolute;
	top: 50%;
	left: 50%;
	margin-left: -205px;
	margin-top: -29px;
	line-height: 1;
}
```

#### :arrow_double_up:: [Επιστροφή στον πίνακα.](https://github.com/p19tzam/hci/blob/p2019213/projects/p2019213/README.md#-%CF%80%CE%AF%CE%BD%CE%B1%CE%BA%CE%B1%CF%82-%CE%BC%CE%B5-%CF%83%CF%8D%CE%BD%CE%BF%CF%88%CE%B7-%CF%84%CF%89%CE%BD-%CF%80%CF%81%CE%BF%CE%B8%CE%B5%CF%83%CE%BC%CE%B9%CF%8E%CE%BD-%CE%BA%CE%B1%CE%B9-%CF%84%CF%89%CE%BD-%CF%80%CE%B1%CF%81%CE%B1%CE%B4%CE%BF%CF%84%CE%AD%CF%89%CE%BD)
<br>
<h2>   :book:: Παραδοτέο 5</h2>

### :pushpin:: ΕΡΓΑΣΙΑ ΓΡΑΜΜΗΣ ΕΝΤΟΛΩΝ 2 (hci)(Powerline statusbar&color scheme/theme).
<br>

Το ΟS που χρησιμοποιησα ειναι τα `Ubuntu 19.10`

άσκηση γραμμής εντολών [`add a status bar to your shell/editor and configure a color-theme`]

#### Εισαγωγή για παραδοτέο 5
Στο παραδοτέο 5 έχουμε να παραδόσουμε την 2η άσκηση γραμμής εντολών.
Εγώ επέλεξα μια απο τις πολλές που εχει στο hci tag που έπρεπε να προσθέσω ενα status bar στο τερματικό μου με οποιον τροπο θέλουμε(νομίζω) και να αλλάξουμε color και theme απο το τερματικό.
Εγώ για να προσθέσω status bar επέλεξα το [powerline](https://github.com/powerline/powerline) που επίσης το προτείνει η εκφώνηση στα references. 
Και αλλάζω color theme όπως δείχνω στις εικόνες.

[1.Setup powerline](https://github.com/p19tzam/hci/blob/p2019213/projects/p2019213/README.md#1setup-powerline)

[2.Configure a color-theme](https://github.com/p19tzam/hci/blob/p2019213/projects/p2019213/README.md#2configure-a-color-theme)


### 1.Setup powerline


#### 1.Κάνουμε προσθήκη το repository
```bash
sudo add-apt-repository universe
```

[![asciicast](https://asciinema.org/a/370568.svg)](https://asciinema.org/a/370568)

#### 2.Μετά κάνουμε εγκατάσταση το powerline
```bash
sudo apt install --yes powerline
``` 
[![asciicast](https://asciinema.org/a/370569.svg)](https://asciinema.org/a/370569)

#### 3.Βάζουμε τον κώδικα για κάνουμε configure το powerline στο `$HOME/.bashrc` αρχείο και τέλος κάνουμε apply τις αλλαγές του τερματικού
```bash
# Powerline configuration
if [ -f /usr/share/powerline/bindings/bash/powerline.sh ]; then
  powerline-daemon -q
  POWERLINE_BASH_CONTINUATION=1
  POWERLINE_BASH_SELECT=1
  source /usr/share/powerline/bindings/bash/powerline.sh
fi
```

```bash
source ~/.bashrc
```
[![asciicast](https://asciinema.org/a/370570.svg)](https://asciinema.org/a/370570)
<br>
<br>

#### 2.Configure a color-theme<br><br>
#### :arrow_double_up:: [Επιστροφή στον πίνακα.](https://github.com/p19tzam/hci/blob/p2019213/projects/p2019213/README.md#-%CF%80%CE%AF%CE%BD%CE%B1%CE%BA%CE%B1%CF%82-%CE%BC%CE%B5-%CF%83%CF%8D%CE%BD%CE%BF%CF%88%CE%B7-%CF%84%CF%89%CE%BD-%CF%80%CF%81%CE%BF%CE%B8%CE%B5%CF%83%CE%BC%CE%B9%CF%8E%CE%BD-%CE%BA%CE%B1%CE%B9-%CF%84%CF%89%CE%BD-%CF%80%CE%B1%CF%81%CE%B1%CE%B4%CE%BF%CF%84%CE%AD%CF%89%CE%BD)
<br>

<h2>   :book:: Παραδοτέο 7</a></h2>\
### [ΆΣΚΗΣΗ ΠΡΟΓΡΑΜΜΑΤΙΣΜΟΎ 3 (Switch)](https://p19tzam.netlify.app/remix/switch/)
#### [Άσκηση προγραμματισμού 3 (Switch) codepen.io](https://codepen.io/dhmosfunk/pen/ZEpzGpB)


