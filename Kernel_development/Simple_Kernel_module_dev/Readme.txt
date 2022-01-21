
//Install packages for compiling source code and linux headers. 
sudo apt-get install build-essential linux-headers-$(uname -r)

cd Simple_Kernel_module_dev/

// Compile Kernel module source code
make

// Load kernel module
=========================================
// Clear dmesg - Kernel message
sudo dmesg -C

// Load kernel module
sudo insmod hello.ko

// check dmesg
dmesg
[ 1651.910887] Hello world!

//Remove hello kernel module
sudo rmmod hello
[ 1651.910887] Hello world!
[ 1718.983072] Bye Bye.


