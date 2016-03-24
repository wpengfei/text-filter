/Users/wpf/Desktop/log/test/linux-2.6.9/arch/i386/kernel/microcode.c
static int find_matching_ucodes (void) 
{
copy_from_user(&mc_header, user_buffer + cursor, MC_HEADER_SIZE)) {
copy_from_user(&ext_header, user_buffer + cursor 
copy_from_user(&ext_sig, user_buffer + cursor + MC_HEADER_SIZE + data_size + EXT_HEADER_SIZE 
copy_from_user(newmc + MC_HEADER_SIZE, 
}
