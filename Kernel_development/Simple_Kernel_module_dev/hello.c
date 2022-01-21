#include <linux/module.h>    // included for all kernel modules
#include <linux/kernel.h>    // included for KERN_INFO
#include <linux/init.h>      // included for __init and __exit macros

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Neil");
MODULE_DESCRIPTION("Simple kernel module");
MODULE_VERSION("0.1");            ///< A version number to inform users

static int __init hello_world_init(void)
{
    printk(KERN_INFO "Hello world!\n");
    return 0;   
}

static void __exit hello_world_exit(void)
{
    printk(KERN_INFO "Bye Bye.\n");
}

module_init(hello_world_init);
module_exit(hello_world_exit);
