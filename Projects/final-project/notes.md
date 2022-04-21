

-- Kernel 4.3.1

Make sure the .config file has Xen hypervisor configurations

Also changed the CONFIG_SYSTEM_TRUSTED_KEY = ""

changed makefile and added this to the KBUILD_CFLAGS and added -fno-pie

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
