# linux_kernel_study

From a technical point of view just the first line is really necessary, the "all" and "clean" targets were added for pure convenience.

To compile use "make" command.
try $ modinfo your_kernel*.ko to see what kind of informatino it is.

to insert the compiled module into the kernel you should try $ insmod ./your_kernel_file.ko

Important:
Make sure you have not Secure Boot enabled in order to perform insmod.
You can see the Secure Boot status with the following command:
$ dmesg | grep -i secure
Returns 0 for disabled
Returns 1 for enabled
