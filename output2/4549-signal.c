/Users/wpf/Desktop/log/test/linux-2.6.9/arch/sparc64/kernel/signal.c

asmlinkage void sparc64_set_context(struct pt_regs *regs)
{
get_user(regs->u_regs[UREG_G1], (&(*grp)[MC_G1]));
get_user(regs->u_regs[UREG_G2], (&(*grp)[MC_G2]));
get_user(regs->u_regs[UREG_G3], (&(*grp)[MC_G3]));
get_user(regs->u_regs[UREG_G4], (&(*grp)[MC_G4]));
get_user(regs->u_regs[UREG_G5], (&(*grp)[MC_G5]));
get_user(regs->u_regs[UREG_G6], (&(*grp)[MC_G6]));
get_user(regs->u_regs[UREG_G7], (&(*grp)[MC_G7]));
get_user(regs->u_regs[UREG_I0], (&(*grp)[MC_O0]));
get_user(regs->u_regs[UREG_I1], (&(*grp)[MC_O1]));
get_user(regs->u_regs[UREG_I2], (&(*grp)[MC_O2]));
get_user(regs->u_regs[UREG_I3], (&(*grp)[MC_O3]));
get_user(regs->u_regs[UREG_I4], (&(*grp)[MC_O4]));
get_user(regs->u_regs[UREG_I5], (&(*grp)[MC_O5]));
get_user(regs->u_regs[UREG_I6], (&(*grp)[MC_O6]));
get_user(regs->u_regs[UREG_I7], (&(*grp)[MC_O7]));
get_user(regs->u_regs[UREG_G2], (&(*grp)[MC_G2]));
get_user(regs->u_regs[UREG_G3], (&(*grp)[MC_G3]));
get_user(regs->u_regs[UREG_G4], (&(*grp)[MC_G4]));
get_user(regs->u_regs[UREG_G5], (&(*grp)[MC_G5]));
get_user(regs->u_regs[UREG_G6], (&(*grp)[MC_G6]));
get_user(regs->u_regs[UREG_G7], (&(*grp)[MC_G7]));
get_user(regs->u_regs[UREG_I0], (&(*grp)[MC_O0]));
get_user(regs->u_regs[UREG_I1], (&(*grp)[MC_O1]));
get_user(regs->u_regs[UREG_I2], (&(*grp)[MC_O2]));
get_user(regs->u_regs[UREG_I3], (&(*grp)[MC_O3]));
get_user(regs->u_regs[UREG_I4], (&(*grp)[MC_O4]));
get_user(regs->u_regs[UREG_I5], (&(*grp)[MC_O5]));
get_user(regs->u_regs[UREG_I6], (&(*grp)[MC_O6]));
get_user(regs->u_regs[UREG_I7], (&(*grp)[MC_O7]));
get_user(regs->u_regs[UREG_G3], (&(*grp)[MC_G3]));
get_user(regs->u_regs[UREG_G4], (&(*grp)[MC_G4]));
get_user(regs->u_regs[UREG_G5], (&(*grp)[MC_G5]));
get_user(regs->u_regs[UREG_G6], (&(*grp)[MC_G6]));
get_user(regs->u_regs[UREG_G7], (&(*grp)[MC_G7]));
get_user(regs->u_regs[UREG_I0], (&(*grp)[MC_O0]));
get_user(regs->u_regs[UREG_I1], (&(*grp)[MC_O1]));
get_user(regs->u_regs[UREG_I2], (&(*grp)[MC_O2]));
get_user(regs->u_regs[UREG_I3], (&(*grp)[MC_O3]));
get_user(regs->u_regs[UREG_I4], (&(*grp)[MC_O4]));
get_user(regs->u_regs[UREG_I5], (&(*grp)[MC_O5]));
get_user(regs->u_regs[UREG_I6], (&(*grp)[MC_O6]));
get_user(regs->u_regs[UREG_I7], (&(*grp)[MC_O7]));
get_user(regs->u_regs[UREG_G4], (&(*grp)[MC_G4]));
get_user(regs->u_regs[UREG_G5], (&(*grp)[MC_G5]));
get_user(regs->u_regs[UREG_G6], (&(*grp)[MC_G6]));
get_user(regs->u_regs[UREG_G7], (&(*grp)[MC_G7]));
get_user(regs->u_regs[UREG_I0], (&(*grp)[MC_O0]));
get_user(regs->u_regs[UREG_I1], (&(*grp)[MC_O1]));
get_user(regs->u_regs[UREG_I2], (&(*grp)[MC_O2]));
get_user(regs->u_regs[UREG_I3], (&(*grp)[MC_O3]));
get_user(regs->u_regs[UREG_I4], (&(*grp)[MC_O4]));
get_user(regs->u_regs[UREG_I5], (&(*grp)[MC_O5]));
get_user(regs->u_regs[UREG_I6], (&(*grp)[MC_O6]));
get_user(regs->u_regs[UREG_I7], (&(*grp)[MC_O7]));
get_user(regs->u_regs[UREG_G5], (&(*grp)[MC_G5]));
get_user(regs->u_regs[UREG_G6], (&(*grp)[MC_G6]));
get_user(regs->u_regs[UREG_G7], (&(*grp)[MC_G7]));
get_user(regs->u_regs[UREG_I0], (&(*grp)[MC_O0]));
get_user(regs->u_regs[UREG_I1], (&(*grp)[MC_O1]));
get_user(regs->u_regs[UREG_I2], (&(*grp)[MC_O2]));
get_user(regs->u_regs[UREG_I3], (&(*grp)[MC_O3]));
get_user(regs->u_regs[UREG_I4], (&(*grp)[MC_O4]));
get_user(regs->u_regs[UREG_I5], (&(*grp)[MC_O5]));
get_user(regs->u_regs[UREG_I6], (&(*grp)[MC_O6]));
get_user(regs->u_regs[UREG_I7], (&(*grp)[MC_O7]));
get_user(regs->u_regs[UREG_G6], (&(*grp)[MC_G6]));
get_user(regs->u_regs[UREG_G7], (&(*grp)[MC_G7]));
get_user(regs->u_regs[UREG_I0], (&(*grp)[MC_O0]));
get_user(regs->u_regs[UREG_I1], (&(*grp)[MC_O1]));
get_user(regs->u_regs[UREG_I2], (&(*grp)[MC_O2]));
get_user(regs->u_regs[UREG_I3], (&(*grp)[MC_O3]));
get_user(regs->u_regs[UREG_I4], (&(*grp)[MC_O4]));
get_user(regs->u_regs[UREG_I5], (&(*grp)[MC_O5]));
get_user(regs->u_regs[UREG_I6], (&(*grp)[MC_O6]));
get_user(regs->u_regs[UREG_I7], (&(*grp)[MC_O7]));
get_user(regs->u_regs[UREG_G7], (&(*grp)[MC_G7]));
get_user(regs->u_regs[UREG_I0], (&(*grp)[MC_O0]));
get_user(regs->u_regs[UREG_I1], (&(*grp)[MC_O1]));
get_user(regs->u_regs[UREG_I2], (&(*grp)[MC_O2]));
get_user(regs->u_regs[UREG_I3], (&(*grp)[MC_O3]));
get_user(regs->u_regs[UREG_I4], (&(*grp)[MC_O4]));
get_user(regs->u_regs[UREG_I5], (&(*grp)[MC_O5]));
get_user(regs->u_regs[UREG_I6], (&(*grp)[MC_O6]));
get_user(regs->u_regs[UREG_I7], (&(*grp)[MC_O7]));
get_user(regs->u_regs[UREG_I0], (&(*grp)[MC_O0]));
get_user(regs->u_regs[UREG_I1], (&(*grp)[MC_O1]));
get_user(regs->u_regs[UREG_I2], (&(*grp)[MC_O2]));
get_user(regs->u_regs[UREG_I3], (&(*grp)[MC_O3]));
get_user(regs->u_regs[UREG_I4], (&(*grp)[MC_O4]));
get_user(regs->u_regs[UREG_I5], (&(*grp)[MC_O5]));
get_user(regs->u_regs[UREG_I6], (&(*grp)[MC_O6]));
get_user(regs->u_regs[UREG_I7], (&(*grp)[MC_O7]));
get_user(regs->u_regs[UREG_I1], (&(*grp)[MC_O1]));
get_user(regs->u_regs[UREG_I2], (&(*grp)[MC_O2]));
get_user(regs->u_regs[UREG_I3], (&(*grp)[MC_O3]));
get_user(regs->u_regs[UREG_I4], (&(*grp)[MC_O4]));
get_user(regs->u_regs[UREG_I5], (&(*grp)[MC_O5]));
get_user(regs->u_regs[UREG_I6], (&(*grp)[MC_O6]));
get_user(regs->u_regs[UREG_I7], (&(*grp)[MC_O7]));
get_user(regs->u_regs[UREG_I2], (&(*grp)[MC_O2]));
get_user(regs->u_regs[UREG_I3], (&(*grp)[MC_O3]));
get_user(regs->u_regs[UREG_I4], (&(*grp)[MC_O4]));
get_user(regs->u_regs[UREG_I5], (&(*grp)[MC_O5]));
get_user(regs->u_regs[UREG_I6], (&(*grp)[MC_O6]));
get_user(regs->u_regs[UREG_I7], (&(*grp)[MC_O7]));
get_user(regs->u_regs[UREG_I3], (&(*grp)[MC_O3]));
get_user(regs->u_regs[UREG_I4], (&(*grp)[MC_O4]));
get_user(regs->u_regs[UREG_I5], (&(*grp)[MC_O5]));
get_user(regs->u_regs[UREG_I6], (&(*grp)[MC_O6]));
get_user(regs->u_regs[UREG_I7], (&(*grp)[MC_O7]));
get_user(regs->u_regs[UREG_I4], (&(*grp)[MC_O4]));
get_user(regs->u_regs[UREG_I5], (&(*grp)[MC_O5]));
get_user(regs->u_regs[UREG_I6], (&(*grp)[MC_O6]));
get_user(regs->u_regs[UREG_I7], (&(*grp)[MC_O7]));
get_user(regs->u_regs[UREG_I5], (&(*grp)[MC_O5]));
get_user(regs->u_regs[UREG_I6], (&(*grp)[MC_O6]));
get_user(regs->u_regs[UREG_I7], (&(*grp)[MC_O7]));
get_user(regs->u_regs[UREG_I6], (&(*grp)[MC_O6]));
get_user(regs->u_regs[UREG_I7], (&(*grp)[MC_O7]));
copy_from_user(fpregs,
copy_from_user(fpregs+16,
get_user(current_thread_info()->xfsr[0],
get_user(current_thread_info()->gsr[0],
}
asmlinkage void sparc64_get_context(struct pt_regs *regs)
{
get_user(fp,
get_user(i7,
}
