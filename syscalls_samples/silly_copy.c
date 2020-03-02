/*
 * silly_copy - pointless syscall that copies the len bytes
 * from 'src' to 'dst' using the kernel as an intermediary in
 * the copy. Intended as an example of copyng to and from the
 * kernel.
 * Resource: Linux Kernel Development (Robert Love)
 */
SYSCALL_DEFINE3(silly_copy,
		unsigned long *, src,
		unsigned long *, dst, 
		unsigned long, len)
{
    unsigned long buf;

    /* copy src, which is in the user's address space, into buf */
    if (copy_from_user(&buf, src, len))
	    return -EFAULT;

    /* copy buf into dst, which is in the user's address space */
    if (copy_to_user(dst, &buf, len))
	    return -EFAULT;

    /* return amount of data copied */
    return len;
}
