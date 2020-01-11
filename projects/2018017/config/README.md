<h1 align="center">@Devubuntu</h1>
<p align="center">
  <img src="https://raw.githubusercontent.com/provopoulos/hci/2018017-PARADOTEO.2/projects/2018017/config/i3desktop.png" alt="Desktop"></img>
</p>

## Key Features:
* Built on top of Ubuntu; Should work well on any Linux distribution that supports i3WM.
* Colours resemble Canonical's @Ubuntu [theme](https://design.ubuntu.com/brand/colour-palette/).
* **i3lock-effect is custom work made by me with Python3.**
## In a nutshell:
* Distribution: [Peppermint 10](https://peppermintos.com/) x64 (18.04.3 base)
* WM: [i3](https://i3wm.org/)
* Shell: Bash
* Statusbar: [i3blocks](https://github.com/vivien/i3blocks)
* Transparency effects: [Compton](https://github.com/chjj/compton) 
* Menu: [Rofi](https://github.com/davatorium/rofi) (drun mode)
* Lock: i3lock with custom 'Gaussian Blur' made by me with Python.
* Screensaver: [CMatrix](https://github.com/abishekvashok/cmatrix)
* Terminal: Sakura
* Fonts: [Anonymous Pro](https://www.marksimonson.com/fonts/view/anonymous-pro), [Fantasque Sans](https://github.com/belluzj/fantasque-sans), [Font Awesome](https://fontawesome.com/) (free)
### i3_WM:
Changes in i3's default configuration include but are not limited to fonts, client colours, statusbar colours, new bindkeys and startup applications.<br>
```
font pango:Anonymous Pro B 11
#colors:                border  backgr. text    indicator
client.focused          #dd4814 #dd4814 #ffffff #902a07
client.unfocused        #5e2750 #5e2750 #aea79f #5e2750
exec_always feh --bg-fill /home/p18prov/Pictures/retro.jpg
# lock screen
bindsym $mod+shift+x exec "python3 /home/p18prov/Desktop/i3WM/scripts/i3lockbarebones.py"
```
Full configuration file can be found [here]().
### Statusbar:
Changes in i3blocks' default configuration include linux commands to show kernel version and CPU/GPU current temperatures.
```
[cpu_tempx]
command=sensors | grep "Core x:" | awk '{print $3}'
interval=1
color=#0071c5
```
Full configuration file can be found [here]().
### Rofi(+Transparency/Fade effects):
Changes in Rofi's default configuration include a sightly modified '[OneDark](https://github.com/davatorium/rofi-themes/blob/master/User%20Themes/onedark.rasi)' theme provided by [Benjamin Stauss](https://github.com/me-benni) to match Ubuntu's aubergine pattern. Transparency and fade effects are made possible by '[Compton](https://github.com/chjj/compton)' compositor.
<p align="center">
  <img src="https://raw.githubusercontent.com/provopoulos/hci/2018017-PARADOTEO.2/projects/2018017/config/i3launcher.png" alt="Rofi"></img>

Rofi configuration can be found [here]() and theme [here]().
