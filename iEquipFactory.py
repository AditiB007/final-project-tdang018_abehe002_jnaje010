from abc import ABC, abstractmethod

class IEquipFactory(ABC):
	player = None

	def __init__(self, player):
		print("IEquipmentFactory __init__()")
		self.player = player

	@abstractmethod
	def makeEquipment(self):
		pass

		