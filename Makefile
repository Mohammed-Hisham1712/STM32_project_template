######################################################################
# Project
# Run the following commands to get your project environment ready
# 1- make menuconfig
# 2- make setup
# 3- make VERBOSE=1 DEBUG=1 CONFIG=project.config
#
# To flash the binary file run,
# make flash
######################################################################

TARGET_MCU := STM32F103
PROJECT_NAME := blink

SRC_DIR := .
APP_PATH := .
TARGET_PATH := ../$(TARGET_MCU)


ifdef CONFIG
include $(APP_PATH)/$(CONFIG)
endif

include $(TARGET_PATH)/$(TARGET_MCU).mak
