#iEntity.py

from abc import ABC

class iEntity(ABC):
  #data
  name = None
  power = None
  health = None
  level = 1
  xp = 0
  xp_cap = 25

  #constructor
  def __init__(self, id):
    self.name = id

  #class functions
  def setName(self, id):
    self.name = id

  def setPower(self, pow):
    self.power = pow

  def setHealth(self, h):
    self.health = h

  def setXp(self, xpPar):
    self.xp = xpPar

  @abstractmethod
  def useSkill():
    pass

  @abstractmethod
  def attack():
    pass 

  def isAlive(self):
    if self.hp > 0:
      return True
    else:
      return False

  def levelUp(self):
    if slef.curr_xp > self.xp_cap:
      self.curr_xp = 0
      self.xp_cap += 25
      self.level += 1

  def gainXp(self, xp):
    self.curr_xp += xp

  def takeDamage(self, damage):
    self.health -= damage

