/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/arch/mips/include/asm/termios.h
static inline int user_termio_to_kernel_termios(struct ktermios *termios,
{
get_user(iflag, &termio->c_iflag);
get_user(oflag, &termio->c_oflag);
get_user(cflag, &termio->c_cflag);
get_user(lflag, &termio->c_lflag);
get_user(termios->c_line, &termio->c_line);
copy_from_user(termios->c_cc, termio->c_cc, NCC))
}
