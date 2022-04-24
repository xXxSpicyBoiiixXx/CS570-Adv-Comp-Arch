

-- Kernel 4.3.1

Make sure the .config file has Xen hypervisor configurations

Also changed the CONFIG_SYSTEM_TRUSTED_KEY = ""

changed makefile and added this to the KBUILD_CFLAGS and added -fno-pie
Look here for the patch on the make file to know exactly where.
https://lists.ubuntu.com/archives/kernel-team/2016-May/077178.html

You need to add some changes for older kernel models. 
-- Added cases for R_X86_64_PLT32

/arch/x86/kernel/machine_kexec_64.c 
--> case R_X86_64_PC32
    case R_X86_64_PLT32

/arch/x86/kernel/module.c
--> case R_X86_64_PC32
    case R_X86_64_PLT32

/arch/x86/tools/relocs.c
--> case R_X86_64_PC32
    case R_X86_64_PLT32
    
For Kernel 4.9.1 you have to add this for the clock time in the make file. 
http://lists.infradead.org/pipermail/linux-arm-kernel/2016-October/461597.html

For secclass_map error 
https://mudongliang.github.io/2021/01/20/error-new-address-family-defined-please-update-secclass_map.html
