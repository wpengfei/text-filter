/Users/wpf/Desktop/log/test/linux-2.6.9/arch/mips/math-emu/kernel_linkage.c
int fpu_emulator_restore_context(struct sigcontext *sc)
{
get_user(current->thread.fpu.soft.fpr[i],
get_user(current->thread.fpu.soft.fcr31, &sc->sc_fpc_csr);
get_user(fpuemuprivate.eir, &sc->sc_fpc_eir);
}
int fpu_emulator_restore_context32(struct sigcontext32 *sc)
{
get_user(current->thread.fpu.soft.fpr[i],
get_user(current->thread.fpu.soft.fcr31, &sc->sc_fpc_csr);
get_user(fpuemuprivate.eir, &sc->sc_fpc_eir);
}
