CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

SET(CMAKE_CXX_STANDARD 11)

ADD_SUBDIRECTORY(googletest)

ADD_EXECUTABLE(test ./tests/test.cpp
./abstractFactory/iEquipFactory.cpp
	./abstractFactory/warEquipFactory.cpp
	./abstractFactory/magEquipFactory.cpp
	./abstractFactory/rogEquipFactory.cpp

./abstractFactory/iEquipment.cpp
	./abstractFactory/iArmor.cpp
		./abstractFactory/chainmail.cpp
		./abstractFactory/robes.cpp
		./abstractFactory/leather.cpp
	./abstractFactory/iWeapon.cpp
		./abstractFactory/sword.cpp
		./abstractFactory/staff.cpp
		./abstractFactory/dagger.cpp

./entity/iEntity.cpp
	./player/iPlayer.cpp
	./entity/rat.cpp
	
)

TARGET_LINK_LIBRARIES(test gtest)
TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON)
