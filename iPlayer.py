#iPlayer.py
from iEntity import *
import random

class iPlayer(iEntity):
  #data
  armor = None
  weapon = None
  factory = None

  #class functions
  def run(self):
    chance = randint(0, 1)

    if(chance == 0):
      return False
    else:
      return True 
