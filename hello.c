#include <linux/module.h> //header for modules
#include <linux/kernel.h> //for debug log level

int init_module() //initialization function called on inserting module into kernel
{
	printk(KERN_DEBUG "Hello world!\n"); //prints message to debug level log 
	return 0;
}
void cleanup_module() //cleanup function called before removing module from kernel
{
	printk(KERN_DEBUG "Bye!\n");
}
