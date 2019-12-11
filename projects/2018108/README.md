# Επικοινωνία Ανθρώπου-Υπολογιστή

- Ονοματεπώνυμο: Σταύρος Πανακάκης 

- ΑΜ: Π2018108

- Email: p18pana@ionio.gr

- [Github Profile](https://github.com/Stavrospanakakis)

## Άσκηση 1

Set-up the main dependencies and demonstrate your base system

**Asciinema link:**
https://asciinema.org/a/274722

## Άσκηση 2

Change your default shell to zsh and configure it with auto-completions-suggestions and repeat some of the above

**Asciinema links:**

**Part 1:**
https://asciinema.org/a/278407

Έπρεπε να κάνω restart για να γίνουν apply οι αλλαγές κι έφτιαξα και ένα part 2 το οποίο είναι η συνέχεια του part 1

**Part 2:**
https://asciinema.org/a/278413

# Συμμετοχικό περιεχόμενο

### Πέντε νέες εικόνες με λεζάντα και με ελεύθερα πνευματικά δικαιώματα ή που επιτρέπουν εμπορική χρήση

> - [DuckDuckGo Table](https://github.com/Stavrospanakakis/gr/blob/gh-pages/_gallery/duckduckgo.md)
> - [DuckDuckGo Image](https://github.com/Stavrospanakakis/gr/blob/gh-pages/images/duckduckgo.jpg)
> - [DuckDuckGo Image 160px](https://github.com/Stavrospanakakis/gr/blob/gh-pages/images/duckduckgo-thumb.jpg)


> - [Virtual Boy Table](https://github.com/Stavrospanakakis/gr/blob/gh-pages/_gallery/virtual-boy.md)
> - [Virtual Boy Image](https://github.com/Stavrospanakakis/gr/blob/gh-pages/images/virtual-boy.jpg)
> - [Virtual Boy Image 160px](https://github.com/Stavrospanakakis/gr/blob/gh-pages/images/virtual-boy-thumb.jpg)


> - [Arch Linux Table](https://github.com/Stavrospanakakis/gr/blob/gh-pages/_gallery/arch-linux.md)
> - [Arch Linux Image](https://github.com/Stavrospanakakis/gr/blob/gh-pages/images/arch-linux.png)
> - [Arch Linux Image 160px](https://github.com/Stavrospanakakis/gr/blob/gh-pages/images/arch-linux-thumb.png)


> - [Tor-Browser Table](https://github.com/Stavrospanakakis/gr/blob/gh-pages/_gallery/tor-browser.md)
> - [Tor-Browser Image](https://github.com/Stavrospanakakis/gr/blob/gh-pages/images/tor-browser.png)
> - [Tor-Browser Image 160px](https://github.com/Stavrospanakakis/gr/blob/gh-pages/images/tor-browser-thumb.png)


> - [Docker Table](https://github.com/Stavrospanakakis/gr/blob/gh-pages/_gallery/docker.md)
> - [Docker Image](https://github.com/Stavrospanakakis/gr/blob/gh-pages/images/docker.png)
> - [Docker Image 160px](https://github.com/Stavrospanakakis/gr/blob/gh-pages/images/docker-thumb.png)

#### **Παραπομπές**

> - [1] https://en.wikipedia.org/wiki/DuckDuckGo
> - [2] https://en.wikipedia.org/wiki/Virtual_Boy
> - [3] https://en.wikipedia.org/wiki/Arch_Linux
> - [4] https://en.wikipedia.org/wiki/Tor_%28anonymity_network%29
> - [5] https://en.wikipedia.org/wiki/Docker_(software)

## Άσκηση 3

get familiar with basic commands, reading documentation and editing files

**Asciinema link:**
https://asciinema.org/a/281688

- Έκανα εγκατάσταση το Ranger (file manager)
```
sudo pacman -S ranger
```
- Είδα το Documentation του Ranger 
```
man ranger
```
- Έκανα copy έναν φάκελο πατώντας "yy" και τον έκανα paste πατώντας "pp"


- Έκανα εγκατάσταση το thefuck (error correction)
```
sudo pip install thefuck
```
- Έκανα configure το fuck alias
```
nano ~/.bashrc
```
- Τοποθέτησα αυτή την εντολή στο τέλος του αρχείου
```
eval "$(thefuck --alias)"
```
- Έκανα τις αλλαγές να δράσουν αμέσως
```
source ~/.bashrc
```
- Έγραψα την εντολή "clear" λάθος και έγραψα "fuck" και η εντολή διορθώθηκε.

## Άσκηση 4

text editor and plug-ins for code highlighting and autocompletion

**Asciinema link:**
https://asciinema.org/a/284408

- Έκανα εγκατάσταση το Pathogen(για να μπορώ να εγκαταστώ πιο εύκολα plugins)
```
mkdir -p ~/.vim/autoload ~/.vim/bundle && \
curl -LSso ~/.vim/autoload/pathogen.vim https://tpo.pe/pathogen.vim
```
- Για να δουλέψει πρόσθεσα αυτό στο .vimrc
```
execute pathogen#infect()
```
- Εγκατέστησα το NerdTree
```
git clone https://github.com/scrooloose/nerdtree.git ~/.vim/bundle/nerdtree
```
- Για να λειτουργεί όταν πατάω Ctrl - N πρόσθεσα αυτό στο .vimrc
```
map <C-n> :NERDTreeToggle<CR>
```
- Έκανα εγκατάσταση το lightline status bar
```
git clone https://github.com/itchyny/lightline.vim ~/.vim/bundle/lightline.vim
```
- Για να δουλέψει πρόσθεσα αυτό στο .vimrc
```
set laststatus=2
```
- Για να υπάρχει syntax hightlighting πρόσθεσα αυτό στο .vimrc
```
syntax on
```
- Έκανα εγκατάσταση ένα plugin για autocompletion
```
cd ~/.vim/bundle
git clone https://github.com/rkulla/pydiction.git
```
- Για να δουλέψει πρόσθεσα αυτό στο .vimrc
```
filetype plugin on
let g:pydiction_location = '/home/stave/.vim/bundle/pydiction/complete-dict'
```
- Τέλος δημιούργησα ένα αρχείο .py και σας έδειξα ότι όλα όσα εγκατέστησα λειτουργούν σωστά

## Άσκηση 5

organise the terminal window into multiple areas

**Asciinema link:**
https://asciinema.org/a/287273

- Έκανα εγκατάσταση το tmux και το glances γι' αυτή την εργασία
```
pacman -S tmux
pip install glances
```
- Ξεκίνησα ένα session στο tmux
```
tmux new -s test
```
- Πάτησα αυτά για να κάνω split τα παράθυρα
```
Ctrl + b' ' "
```
- Έτρεξα το glances για performance monitoring στο ένα παράθυρο γράφοντας
```
glances
```
- Άλλαξα τα παράθυρα πατώντας
```
Ctrl + b' 'ArrowKeys
```
- Και τέλος έκανα edit ένα local αρχείο χρησιμοποιώντας το vim 
