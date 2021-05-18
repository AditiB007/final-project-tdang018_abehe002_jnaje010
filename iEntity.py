#iEntity.py

class iEntity(object):
  #data
  name = None
  en_type = None
  power = None
  health = None
  level = 1
  xp = 0
  xp_cap = 25

  #constructor
  def __init__(self, id, et):
    self.name = id
    self.en_type = et
    
    #fill in specifics for each class

  #class functions
  def getName(self):
    return name

  def getType(self):
    return en_type

  def getPower(self):
   return power

  def getHealth(self):
    return health

  def getLevel(self):
    return level

  def getXp(self):
    return xp

  def setName(self, id):
    self.name = id

  def setPower(self, pow):
    self.power = pow

  def setHealth(self, h):
    self.health = h

  def setXp(self, xpPar):
    self.xp = xpPar

  def useSkill() = 0

  def attack() = 0 
