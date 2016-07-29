/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/include/asm-generic/termios-base.h
static inline int user_termio_to_kernel_termios(struct ktermios *termios,
{
get_user(tmp, &termio->c_iflag) < 0)
get_user(tmp, &termio->c_oflag) < 0)
get_user(tmp, &termio->c_cflag) < 0)
get_user(tmp, &termio->c_lflag) < 0)
get_user(termios->c_line, &termio->c_line) < 0)
copy_from_user(termios->c_cc, termio->c_cc, NCC) != 0)
}
