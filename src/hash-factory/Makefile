BUILD_PATH=../../build
ARTIFACT_PATH=$(BUILD_PATH)/hash-factory
objects=$(ARTIFACT_PATH)/HashAlgorithmFactory.o $(ARTIFACT_PATH)/main.o

$(ARTIFACT_PATH)/main.out:check $(objects)
	g++ -o $(ARTIFACT_PATH)/main.out $(objects)
	@echo "COMPILER DONE!"

$(ARTIFACT_PATH)/HashAlgorithmFactory.o:HashAlgorithmFactory.cpp
	g++ -c HashAlgorithmFactory.cpp -o $(ARTIFACT_PATH)/HashAlgorithmFactory.o

$(ARTIFACT_PATH)/main.o:main.cpp
	g++ -c main.cpp -o $(ARTIFACT_PATH)/main.o

check:
ifeq ($(BUILD_PATH), $(wildcard $(BUILD_PATH)))
	@echo "BUILD_PATH [OK]"
else
	mkdir $(abspath $(BUILD_PATH))
endif

ifeq ($(ARTIFACT_PATH), $(wildcard $(ARTIFACT_PATH)))
	@echo "ARTIFACT_PATH [OK]"
else
	mkdir $(abspath $(ARTIFACT_PATH))
endif

clean:
	rm $(ARTIFACT_PATH)/main.out $(objects)
