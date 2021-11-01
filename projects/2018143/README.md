ΌΝΟΜΑ : ΣΩΤΗΡΙΟΣ ΚΟΥΤΟΠΟΥΛΗΣ
ΑΡΙΘΜΟΣ ΜΗΤΡΩΟΥ : Π2018143

# Παραδοτέα

| Εβδομάδα* | Παραδοτέο |
| --- | --- |
| 1 | <sup><a href="#1"> Φορκ του αποθετηρίου,δημιουργία της σελίδας της αναφοράς και εισαγωγή με περιγραφή των αναγκών και στόχων για το μάθημα </a></sup> |
| 2 | <sup><a href="#2"> Άσκηση γραμμής εντολών :set-up the main dependencies and demonstrate your base system(warmup) </a></sup> |
| 3 | <sup><a href="#3"> Άσκηση γραμμής εντολών :download mp3 </a></sup> |
| 4 | συμμετοχικό περιεχόμενο 1A |
| 5 | Άσκηση γραμμής εντολών |
| 6 | συμμετοχικό περιεχόμενο 2A |
| 7 | Άσκηση γραμμής εντολών |
| 8 | συμμετοχικό περιεχόμενο 1B |
| 9 | Άσκηση γραμμής εντολών |
| 10 | συμμετοχικό περιεχόμενο 2B |
| 11 | Άσκηση γραμμής εντολών |
| 12 | Τελική αναφορά και αίτημα ενσωμάτωσης για βαθμολόγηση |

##### [1]    


Οι στόχοι-ανάγκες που έχω για το συγκεκριμένο μάθημα είναι να έρθω όσο πιο κοντά μπορώ με τον υπολογιστή ,να κατανοήσω την εξέλιξη των υπολογιστών στις σύχγρονες μέρες 
που διανύουμε,όσο αναφορά την επικοινωνία του ανθρώπινου είδους με την υπολογιστική μηχανή , και γενικότερα να χρησιμοποιήσω διαφορετικά εργαλεία πληροφόρησης και 
υπολογισμού ,ωστε να διερύνω τους ''πνευματικούς'' μου ορίζοντες.


##### [2]

## Ασκηση γραμμης εντολων : set-up the main dependencies and demonstrate your base system (warmup)

asciinema link : https://asciinema.org/a/446263 

## Aποτελεσματα : 

![neofetch](https://github.com/p18kout/hci-images/blob/main/neofetch_2018143.png)

Διαδικασια :

Εναρξη εγγραφης terminal **asciinema rec -i 0.2**

List αρχειων με την εντολη **ls**

List κρυφων αρχειων με την εντολη **ls -a**

Προβολη του base system με την εντολη **neofetch**

Εγκατασταση πακετου dotfiles με την εντολη **pip install dotfiles**

Aναγνωση διαθεσιμων εντολων του παραπανω πακετου **dotfiles -h**

Τελος εγγραφης terminal **exit**

Πηγη :

https://github.com/dylanaraps/neofetch/wiki/Installation#arch

https://github.com/jbernard/dotfiles



##### [3]

## Ασκηση γραμμης εντολων : download-mp3 (hci)

asciinema link : https://asciinema.org/a/444197 

## Αποτελεσματα : 

![download-mp3](https://github.com/p18kout/hci-images/blob/main/2018143_download-mp3.gif)

Διαδικασία : 

Ληψη πακετου youtube-dl  **sudo pacman -S youtube-dl**

Ληψη πακετου mpg123 **sudo pacman -S mpg123**

Εναρξη εγγραφης terminal **asciinema rec -i 0.2**

Aναζητηση και ληψη κομματιου **youtube-dl -x --audio-format mp3 "ytsearch:donda"**

Μετακινηση στο location του αρχειου **cd Desktop**

Αναπαραγωγη κομματιου **mpg123 donda.mp3**

Τελος εγγραφης terminal **exit**

Πηγή : https://github.com/ytdl-org/youtube-dl/blob/master/README.md#readme



