FLAGS += -Idep/include
SOURCES += $(wildcard src/*.cpp)
DISTRIBUTABLES += $(wildcard LICENCE*) res

include $(RACK_DIR)/plugin.mk