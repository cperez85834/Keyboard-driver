# Keyboard-driver

# Synopsis
This is for code involving my custom made keyboard driver. It is modified code from the existing "keyboard filter" driver provided by Microsoft. What is special about this driver is that it can told to send input via a usermode program. Additionally, some functionality was added for a memory scanner; it uses ring0 functions to scan memory regions without being detected by anticheat, but it is not finished

# Motivation
A lot of games block input simulation functions and libraries such as SendInput, so this is my solution to bypass such restrictions. It is undetected as far as I know; I have used it to bot on WoW and a variety of other games with no action taken against me.
