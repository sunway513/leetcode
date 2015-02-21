################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Reverse\ Words\ in\ a\ String.cpp 

OBJS += \
./src/Reverse\ Words\ in\ a\ String.o 

CPP_DEPS += \
./src/Reverse\ Words\ in\ a\ String.d 


# Each subdirectory must supply rules for building sources it contributes
src/Reverse\ Words\ in\ a\ String.o: ../src/Reverse\ Words\ in\ a\ String.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Reverse Words in a String.d" -MT"src/Reverse\ Words\ in\ a\ String.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


