################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/CSC450-Mod7-PPMilestone.cpp 

CPP_DEPS += \
./src/CSC450-Mod7-PPMilestone.d 

OBJS += \
./src/CSC450-Mod7-PPMilestone.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/CSC450-Mod7-PPMilestone.d ./src/CSC450-Mod7-PPMilestone.o

.PHONY: clean-src

