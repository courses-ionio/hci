import os
from PIL import Image
# from PIL import ImageGrab : OS X and Windows only.
from PIL import ImageFilter
os.system('scrot "/home/p18prov/Documents/.tmp/lock.png"') # Path is entirely up to user's discretion.
# img = ImageGrab.grab() : Does not work on Linux
# img.save("/home/p18prov/Documents/.tmp/lock.png")
im1 = Image.open(r"/home/p18prov/Documents/.tmp/lock.png")
im2 = im1.filter(ImageFilter.GaussianBlur(radius = 5))
im2 = im2.save(r"/home/p18prov/Documents/.tmp/lock-blurred.png")
os.system('i3lock --image="/home/p18prov/Documents/.tmp/lock-blurred.png"')
