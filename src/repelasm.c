__attribute__((naked))
void func_08FFB890(void)
{
    asm volatile(
        ".syntax unified\n"
        "push    {r4-r7, r14}\n"
        "mov     r7, r10\n"
        "mov     r6, r9\n"
        "mov     r5, r8\n"
        "mov     r10, r1\n"
        "push    {r5-r7}\n"
        "mov     r9, r2\n"
        "subs    r7, r0, #0\n"
        "mov     r8, r3\n"
        "beq     Lxx_8FFB932\n"
        "movs    r4, r3\n"
        "movs    r1, #0\n"
        "subs    r5, r0, #1\n"
        "lsls    r5, r5, #24\n"
        "lsrs    r5, r5, #21\n"
        "adds    r5, #8\n"
        "ldr     r6, =DisplayTextAndGetWidth\n"
        "add     r5, r8\n"
    "Lxx_8FFB8B4:\n"
        "ldr     r0, [r4]\n"
        "bl      func_08FFBA08\n"
        "adds    r4, #8\n"
        "lsls    r1, r0, #24\n"
        "lsrs    r1, r1, #24\n"
        "cmp     r4, r5\n"
        "bne     Lxx_8FFB8B4\n"
        "movs    r3, #0xFF\n"
        "ands    r0, r3\n"
        "ldr     r3, =ConvertPixelWidthToTileWidth\n"
        "bl      func_08FFBA04\n"
        "movs    r1, #0xFF\n"
        "movs    r4, r0\n"
        "ands    r1, r0\n"
        "ldr     r3, =ScriptMenu_AdjustLeftCoordFromWidth\n"
        "mov     r0, r10\n"
        "bl      func_08FFBA04\n"
        "lsls    r3, r7, #25\n"
        "lsls    r2, r4, #24\n"
        "lsls    r0, r0, #24\n"
        "mov     r1, r9\n"
        "lsrs    r2, r2, #24\n"
        "lsrs    r3, r3, #24\n"
        "ldr     r4, =CreateWindowFromRect\n"
        "lsrs    r0, r0, #24\n"
        "bl      func_08FFBA06\n"
        "movs    r4, r0\n"
        "movs    r1, #0\n"
        "ldr     r3, =SetStandardWindowBorderStyle\n"
        "bl      func_08FFBA04\n"
        "mov     r2, r8\n"
        "movs    r1, r7\n"
        "movs    r0, r4\n"
        "ldr     r3, =PrintMenuTable\n"
        "bl      func_08FFBA04\n"
        "movs    r1, r7\n"
        "movs    r2, #0\n"
        "movs    r0, r4\n"
        "ldr     r3, =InitMenuInUpperLeftCornerNormal\n"
        "bl      func_08FFBA04\n"
        "movs    r0, #0\n"
        "ldr     r3, =ScheduleBgCopyTilemapToVram\n"
        "bl      func_08FFBA04\n"
        "movs    r2, r4\n"
        "movs    r1, r7\n"
        "movs    r3, #0\n"
        "movs    r0, #0\n"
        "ldr     r4, =InitMultichoiceCheckWrap\n"
        "bl      func_08FFBA06\n"
        "pop     {r2-r4}\n"
        "mov     r8, r2\n"
        "mov     r9, r3\n"
        "mov     r10, r4\n"
        "pop     {r4-r7, r15}\n"
    "Lxx_8FFB932:\n"
        "movs    r0, #0\n"
        "b       Lxx_8FFB8C8\n"
    "Lxx_8FFB8C8:\n"
        "nop\n"
    );
}

__attribute__((naked))
void func_08FFB95C(void)
{
    asm volatile(
        ".syntax unified\n"
        "push    {r4-r6, r14}\n"
        "movs    r5, r1\n"
        "movs    r6, r0\n"
        "movs    r1, #1\n"
        "movs    r0, r5\n"
        "ldr     r3, =CheckBagHasItem\n"
        "movs    r4, r2\n"
        "bl      func_08FFBA04\n"
        "cmp     r0, #0\n"
        "beq     Lxx_8FFB990\n"
        "ldr     r2, =gSpecialVar_0x8004\n"
        "lsls    r3, r4, #1\n"
        "strh    r5, [r2, r3]\n"
        "lsls    r3, r4, #3\n"
        "adds    r6, r6, r3\n"
        "movs    r0, r5\n"
        "ldr     r3, =GetItemName\n"
        "bl      func_08FFBA04\n"
        "movs    r3, #0\n"
        "adds    r4, #1\n"
        "lsls    r4, r4, #24\n"
        "str     r0, [r6]\n"
        "strb    r3, [r6, #4]\n"
        "lsrs    r4, r4, #24\n"
    "Lxx_8FFB990:\n"
        "movs    r0, r4\n"
        "pop     {r4-r6, r15}\n"
    );
}

__attribute__((naked))
void func_08FFB9A0(void)
{
    asm volatile(
        ".syntax unified\n"
        "push    {r4, r14}\n"
        "sub     sp, #0x18\n"
        "movs    r2, #0\n"
        "movs    r1, #0x54\n"
        "mov     r0, r13\n"
        "bl      func_08FFB95C\n"
        "movs    r1, #0x53\n"
        "movs    r2, r0\n"
        "mov     r0, r13\n"
        "bl      func_08FFB95C\n"
        "movs    r1, #0x56\n"
        "movs    r2, r0\n"
        "mov     r0, r13\n"
        "bl      func_08FFB95C\n"
        "subs    r4, r0, #0\n"
        "cmp     r4, #1\n"
        "bls     Lxx_8FFB9D2\n"
        "mov     r3, r13\n"
        "movs    r2, #0\n"
        "movs    r1, #0\n"
        "bl      func_08FFB890\n"
    "Lxx_8FFB9D2:\n"
        "ldr     r3, =gSpecialVar_Result\n"
        "strh    r4, [r3]\n"
        "add     sp, #0x18\n"
        "pop     {r4, r15}\n"
    );
}

__attribute__((naked))
void func_08FFB9E0(void)
{
    asm volatile(
        ".syntax unified\n"
        "ldr     r3, =gSpecialVar_Result\n"
        "ldrh    r3, [r3]\n"
        "push    {r4, r14}\n"
        "ldr     r4, =gSpecialVar_0x8004\n"
        "lsls    r3, r3, #1\n"
        "ldrh    r0, [r4, r3]\n"
        "ldr     r3, =GetItemHoldEffectParam\n"
        "bl      func_08FFBA04\n"
        "strh    r0, [r4]\n"
        "pop     {r4, r15}\n"
    );
}

__attribute__((naked))
void func_08FFBA04(void)
{
    asm volatile(".syntax unified\nbx r3");
}

__attribute__((naked))
void func_08FFBA06(void)
{
    asm volatile(".syntax unified\nbx r4");
}

__attribute__((naked))
void func_08FFBA08(void)
{
    asm volatile(".syntax unified\nbx r6");
}
