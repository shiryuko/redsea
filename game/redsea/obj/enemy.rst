ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Zilog Z80 / Hitachi HD64180), page 1.
Hexadecimal [16-Bits]



                              1 ;;------------------------------------------------LICENSE NOTICE------------------------------------------------------------------------------
                              2 ;;  This file is part of Amstrad CPC videogame "Redsea"
                              3 ;;  Copyright (C) 2018 Gameroid / Angel Jesus Terol Martinez (@miya_nashi) / Raquel Gonzalez Roma (@kelara712) / Carla Macia Diez (@shiryuko)
                              4 ;;  Copyright (C) 2015 ronaldo / Fremos / Cheesetea / ByteRealms (@FranGallegoBR)
                              5 ;;
                              6 ;;  This program is free software: you can redistribute it and/or modify
                              7 ;;  it under the terms of the GNU Lesser General Public License as published by
                              8 ;;  the Free Software Foundation, either version 3 of the License, or
                              9 ;;  (at your option) any later version.
                             10 ;;
                             11 ;;  This program is distributed in the hope that it will be useful,
                             12 ;;  but WITHOUT ANY WARRANTY; without even the implied warranty of
                             13 ;;  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
                             14 ;;  GNU Lesser General Public License for more details.
                             15 ;;
                             16 ;;  You should have received a copy of the GNU Lesser General Public License
                             17 ;;  along with this program.  If not, see <http://www.gnu.org/licenses/>.
                             18 ;;------------------------------------------------LICENSE NOTICE-------------------------------------------------------------------------
                             19 
ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Zilog Z80 / Hitachi HD64180), page 2.
Hexadecimal [16-Bits]



                             20 .include "cpctelera.h.s"
                              1 ;;-----------------------------LICENSE NOTICE------------------------------------
                              2 ;;  This file is part of CPCtelera: An Amstrad CPC Game Engine
                              3 ;;  Copyright (C) 2017 ronaldo / Fremos / Cheesetea / ByteRealms (@FranGallegoBR)
                              4 ;;
                              5 ;;  This program is free software: you can redistribute it and/or modify
                              6 ;;  it under the terms of the GNU Lesser General Public License as published by
                              7 ;;  the Free Software Foundation, either version 3 of the License, or
                              8 ;;  (at your option) any later version.
                              9 ;;
                             10 ;;  This program is distributed in the hope that it will be useful,
                             11 ;;  but WITHOUT ANY WARRANTY; without even the implied warranty of
                             12 ;;  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
                             13 ;;  GNU Lesser General Public License for more details.
                             14 ;;
                             15 ;;  You should have received a copy of the GNU Lesser General Public License
                             16 ;;  along with this program.  If not, see <http://www.gnu.org/licenses/>.
                             17 ;;-------------------------------------------------------------------------------
                             18 
                             19 ;; All CPCtelera include files
ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Zilog Z80 / Hitachi HD64180), page 3.
Hexadecimal [16-Bits]



                             20 .include "macros/allmacros.h.s"
                              1 ;;-----------------------------LICENSE NOTICE------------------------------------
                              2 ;;  This file is part of CPCtelera: An Amstrad CPC Game Engine
                              3 ;;  Copyright (C) 2017 ronaldo / Fremos / Cheesetea / ByteRealms (@FranGallegoBR)
                              4 ;;
                              5 ;;  This program is free software: you can redistribute it and/or modify
                              6 ;;  it under the terms of the GNU Lesser General Public License as published by
                              7 ;;  the Free Software Foundation, either version 3 of the License, or
                              8 ;;  (at your option) any later version.
                              9 ;;
                             10 ;;  This program is distributed in the hope that it will be useful,
                             11 ;;  but WITHOUT ANY WARRANTY; without even the implied warranty of
                             12 ;;  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
                             13 ;;  GNU Lesser General Public License for more details.
                             14 ;;
                             15 ;;  You should have received a copy of the GNU Lesser General Public License
                             16 ;;  along with this program.  If not, see <http://www.gnu.org/licenses/>.
                             17 ;;-------------------------------------------------------------------------------
                             18 
ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Zilog Z80 / Hitachi HD64180), page 4.
Hexadecimal [16-Bits]



                             19 .include "macros/cpct_maths.h.s"
                              1 ;;-----------------------------LICENSE NOTICE------------------------------------
                              2 ;;  This file is part of CPCtelera: An Amstrad CPC Game Engine 
                              3 ;;  Copyright (C) 2017 ronaldo / Fremos / Cheesetea / ByteRealms (@FranGallegoBR)
                              4 ;;
                              5 ;;  This program is free software: you can redistribute it and/or modify
                              6 ;;  it under the terms of the GNU Lesser General Public License as published by
                              7 ;;  the Free Software Foundation, either version 3 of the License, or
                              8 ;;  (at your option) any later version.
                              9 ;;
                             10 ;;  This program is distributed in the hope that it will be useful,
                             11 ;;  but WITHOUT ANY WARRANTY; without even the implied warranty of
                             12 ;;  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
                             13 ;;  GNU Lesser General Public License for more details.
                             14 ;;
                             15 ;;  You should have received a copy of the GNU Lesser General Public License
                             16 ;;  along with this program.  If not, see <http://www.gnu.org/licenses/>.
                             17 ;;-------------------------------------------------------------------------------
                             18 
                             19 ;;
                             20 ;; File: Math Macros
                             21 ;;
                             22 ;;    Useful assembler macros for doing common math operations
                             23 ;;
                             24 
                             25 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
                             26 ;; Macro: add_REGPAIR_a 
                             27 ;;
                             28 ;;    Performs the operation REGPAIR = REGPAIR + A. REGPAIR is any given pair of 8-bit registers.
                             29 ;;
                             30 ;; ASM Definition:
                             31 ;;    .macro <add_REGPAIR_a> RH, RL
                             32 ;;
                             33 ;; Parameters:
                             34 ;;    RH    - Register 1 of the REGPAIR. Holds higher-byte value
                             35 ;;    RL    - Register 2 of the REGPAIR. Holds lower-byte value
                             36 ;; 
                             37 ;; Input Registers: 
                             38 ;;    RH:RL - 16-value used as left-operand and final storage for the sum
                             39 ;;    A     - Second sum operand
                             40 ;;
                             41 ;; Return Value:
                             42 ;;    RH:RL - Holds the sum of RH:RL + A
                             43 ;;
                             44 ;; Details:
                             45 ;;    This macro performs the sum of RH:RL + A and stores it directly on RH:RL.
                             46 ;; It uses only RH:RL and A to perform the operation.
                             47 ;;
                             48 ;; Modified Registers: 
                             49 ;;    A, RH, RL
                             50 ;;
                             51 ;; Required memory:
                             52 ;;    5 bytes
                             53 ;;
                             54 ;; Time Measures:
ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Zilog Z80 / Hitachi HD64180), page 5.
Hexadecimal [16-Bits]



                             55 ;; (start code)
                             56 ;;  Case | microSecs(us) | CPU Cycles
                             57 ;; ------------------------------------
                             58 ;;  Any  |       5       |     20
                             59 ;; ------------------------------------
                             60 ;; (end code)
                             61 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
                             62 .macro add_REGPAIR_a rh, rl
                             63    ;; First Perform RH = E + A
                             64    add rl    ;; [1] A' = RL + A 
                             65    ld  rl, a ;; [1] RL' = A' = RL + A. It might generate Carry that must be added to RH
                             66    
                             67    ;; Then Perform RH = RH + Carry 
                             68    adc rh    ;; [1] A'' = A' + RH + Carry = RL + A + RH + Carry
                             69    sub rl    ;; [1] Remove RL'. A''' = A'' - RL' = RL + A + RH + Carry - (RL + A) = RH + Carry
                             70    ld  rh, a ;; [1] Save into RH (RH' = A''' = RH + Carry)
                             71 .endm
                             72 
                             73 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
                             74 ;; Macro: add_de_a
                             75 ;;
                             76 ;;    Performs the operation DE = DE + A
                             77 ;;
                             78 ;; ASM Definition:
                             79 ;;    .macro <add_de_a>
                             80 ;;
                             81 ;; Parameters:
                             82 ;;    None
                             83 ;; 
                             84 ;; Input Registers: 
                             85 ;;    DE    - First sum operand and Destination Register
                             86 ;;    A     - Second sum operand
                             87 ;;
                             88 ;; Return Value:
                             89 ;;    DE - Holds the sum of DE + A
                             90 ;;
                             91 ;; Details:
                             92 ;;    This macro performs the sum of DE + A and stores it directly on DE.
                             93 ;; It uses only DE and A to perform the operation.
                             94 ;;    This macro is a direct instantiation of the macro <add_REGPAIR_a>.
                             95 ;;
                             96 ;; Modified Registers: 
                             97 ;;    A, DE
                             98 ;;
                             99 ;; Required memory:
                            100 ;;    5 bytes
                            101 ;;
                            102 ;; Time Measures:
                            103 ;; (start code)
                            104 ;;  Case | microSecs(us) | CPU Cycles
                            105 ;; ------------------------------------
                            106 ;;  Any  |       5       |     20
                            107 ;; ------------------------------------
                            108 ;; (end code)
                            109 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Zilog Z80 / Hitachi HD64180), page 6.
Hexadecimal [16-Bits]



                            110 .macro add_de_a
                            111    add_REGPAIR_a  d, e
                            112 .endm
                            113 
                            114 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
                            115 ;; Macro: add_hl_a
                            116 ;;
                            117 ;;    Performs the operation HL = HL + A
                            118 ;;
                            119 ;; ASM Definition:
                            120 ;;    .macro <add_hl_a>
                            121 ;;
                            122 ;; Parameters:
                            123 ;;    None
                            124 ;; 
                            125 ;; Input Registers: 
                            126 ;;    HL    - First sum operand and Destination Register
                            127 ;;    A     - Second sum operand
                            128 ;;
                            129 ;; Return Value:
                            130 ;;    HL - Holds the sum of HL + A
                            131 ;;
                            132 ;; Details:
                            133 ;;    This macro performs the sum of HL + A and stores it directly on HL.
                            134 ;; It uses only HL and A to perform the operation.
                            135 ;;    This macro is a direct instantiation of the macro <add_REGPAIR_a>.
                            136 ;;
                            137 ;; Modified Registers: 
                            138 ;;    A, HL
                            139 ;;
                            140 ;; Required memory:
                            141 ;;    5 bytes
                            142 ;;
                            143 ;; Time Measures:
                            144 ;; (start code)
                            145 ;;  Case | microSecs(us) | CPU Cycles
                            146 ;; ------------------------------------
                            147 ;;  Any  |       5       |     20
                            148 ;; ------------------------------------
                            149 ;; (end code)
                            150 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
                            151 .macro add_hl_a
                            152    add_REGPAIR_a  h, l
                            153 .endm
                            154 
                            155 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
                            156 ;; Macro: add_bc_a
                            157 ;;
                            158 ;;    Performs the operation BC = BC + A
                            159 ;;
                            160 ;; ASM Definition:
                            161 ;;    .macro <add_bc_a>
                            162 ;;
                            163 ;; Parameters:
                            164 ;;    None
ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Zilog Z80 / Hitachi HD64180), page 7.
Hexadecimal [16-Bits]



                            165 ;; 
                            166 ;; Input Registers: 
                            167 ;;    BC    - First sum operand and Destination Register
                            168 ;;    A     - Second sum operand
                            169 ;;
                            170 ;; Return Value:
                            171 ;;    BC - Holds the sum of BC + A
                            172 ;;
                            173 ;; Details:
                            174 ;;    This macro performs the sum of BC + A and stores it directly on BC.
                            175 ;; It uses only BC and A to perform the operation.
                            176 ;;    This macro is a direct instantiation of the macro <add_REGPAIR_a>.
                            177 ;;
                            178 ;; Modified Registers: 
                            179 ;;    A, BC
                            180 ;;
                            181 ;; Required memory:
                            182 ;;    5 bytes
                            183 ;;
                            184 ;; Time Measures:
                            185 ;; (start code)
                            186 ;;  Case | microSecs(us) | CPU Cycles
                            187 ;; ------------------------------------
                            188 ;;  Any  |       5       |     20
                            189 ;; ------------------------------------
                            190 ;; (end code)
                            191 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
                            192 .macro add_bc_a
                            193    add_REGPAIR_a  b, c
                            194 .endm
                            195 
                            196 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
                            197 ;; Macro: sub_REGPAIR_a 
                            198 ;;
                            199 ;;    Performs the operation REGPAIR = REGPAIR - A. REGPAIR is any given pair of 8-bit registers.
                            200 ;;
                            201 ;; ASM Definition:
                            202 ;;    .macro <sub_REGPAIR_a> RH, RL
                            203 ;;
                            204 ;; Parameters:
                            205 ;;    RH    - Register 1 of the REGPAIR. Holds higher-byte value
                            206 ;;    RL    - Register 2 of the REGPAIR. Holds lower-byte value
                            207 ;;  ?JMPLBL - Optional Jump label. A temporal one will be produced if none is given.
                            208 ;; 
                            209 ;; Input Registers: 
                            210 ;;    RH:RL - 16-value used as left-operand and final storage for the subtraction
                            211 ;;    A     - Second subtraction operand
                            212 ;;
                            213 ;; Return Value:
                            214 ;;    RH:RL - Holds the result of RH:RL - A
                            215 ;;
                            216 ;; Details:
                            217 ;;    This macro performs the subtraction of RH:RL - A and stores it directly on RH:RL.
                            218 ;; It uses only RH:RL and A to perform the operation.
                            219 ;;    With respect to the optional label ?JMPLBL, it is often better not to provide 
ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Zilog Z80 / Hitachi HD64180), page 8.
Hexadecimal [16-Bits]



                            220 ;; this parameter. A temporal local symbol will be automatically generated for that label.
                            221 ;; Only provide it when you have a specific reason to do that.
                            222 ;;
                            223 ;; Modified Registers: 
                            224 ;;    A, RH, RL
                            225 ;;
                            226 ;; Required memory:
                            227 ;;    7 bytes
                            228 ;;
                            229 ;; Time Measures:
                            230 ;; (start code)
                            231 ;;  Case | microSecs(us) | CPU Cycles
                            232 ;; ------------------------------------
                            233 ;;  Any  |       7       |     28
                            234 ;; ------------------------------------
                            235 ;; (end code)
                            236 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
                            237 .macro sub_REGPAIR_a rh, rl, ?jmplbl
                            238    ;; First Perform A' = A - 1 - RL 
                            239    ;; (Inverse subtraction minus 1, used  to test for Carry, needed to know when to subtract 1 from RH)
                            240    dec    a          ;; [1] --A (In case A == RL, inverse subtraction should produce carry not to decrement RH)
                            241    sub   rl          ;; [1] A' = A - 1 - RL
                            242    jr     c, jmplbl  ;; [2/3] If A <= RL, Carry will be produced, and no decrement of RH is required, so jump over it
                            243      dec   rh        ;; [1] --RH (A > RL, so RH must be decremented)
                            244 jmplbl:   
                            245    ;; Now invert A to get the subtraction we wanted 
                            246    ;; { RL' = -A' - 1 = -(A - 1 - RL) - 1 = RL - A }
                            247    cpl            ;; [1] A'' = RL - A (Original subtraction we wanted, calculated trough one's complement of A')
                            248    ld    rl, a    ;; [1] Save into RL (RL' = RL - A)
                            249 .endm
                            250 
                            251 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
                            252 ;; Macro: sub_de_a 
                            253 ;;
                            254 ;;    Performs the operation DE = DE - A. DE is any given pair of 8-bit registers.
                            255 ;;
                            256 ;; ASM Definition:
                            257 ;;    .macro <sub_de_a>
                            258 ;; 
                            259 ;; Input Registers: 
                            260 ;;    DE - 16-value used as left-operand and final storage for the subtraction
                            261 ;;    A  - Second subtraction operand
                            262 ;;
                            263 ;; Return Value:
                            264 ;;    DE - Holds the result of DE - A
                            265 ;;
                            266 ;; Details:
                            267 ;;    This macro performs the subtraction of DE - A and stores it directly on DE.
                            268 ;; It uses only DE and A to perform the operation.
                            269 ;;
                            270 ;; Modified Registers: 
                            271 ;;    A, DE
                            272 ;;
                            273 ;; Required memory:
                            274 ;;    7 bytes
ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Zilog Z80 / Hitachi HD64180), page 9.
Hexadecimal [16-Bits]



                            275 ;;
                            276 ;; Time Measures:
                            277 ;; (start code)
                            278 ;;  Case | microSecs(us) | CPU Cycles
                            279 ;; ------------------------------------
                            280 ;;  Any  |       7       |     28
                            281 ;; ------------------------------------
                            282 ;; (end code)
                            283 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
                            284 .macro sub_de_a
                            285    sub_REGPAIR_a  d, e
                            286 .endm
                            287 
                            288 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
                            289 ;; Macro: sub_hl_a 
                            290 ;;
                            291 ;;    Performs the operation HL = HL - A. HL is any given pair of 8-bit registers.
                            292 ;;
                            293 ;; ASM Definition:
                            294 ;;    .macro <sub_hl_a>
                            295 ;; 
                            296 ;; Input Registers: 
                            297 ;;    HL - 16-value used as left-operand and final storage for the subtraction
                            298 ;;    A  - Second subtraction operand
                            299 ;;
                            300 ;; Return Value:
                            301 ;;    HL - Holds the result of HL - A
                            302 ;;
                            303 ;; Details:
                            304 ;;    This macro performs the subtraction of HL - A and stores it directly on HL.
                            305 ;; It uses only HL and A to perform the operation.
                            306 ;;
                            307 ;; Modified Registers: 
                            308 ;;    A, HL
                            309 ;;
                            310 ;; Required memory:
                            311 ;;    7 bytes
                            312 ;;
                            313 ;; Time Measures:
                            314 ;; (start code)
                            315 ;;  Case | microSecs(us) | CPU Cycles
                            316 ;; ------------------------------------
                            317 ;;  Any  |       7       |     28
                            318 ;; ------------------------------------
                            319 ;; (end code)
                            320 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
                            321 .macro sub_hl_a
                            322    sub_REGPAIR_a  h, l
                            323 .endm
                            324 
                            325 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
                            326 ;; Macro: sub_bc_a 
                            327 ;;
                            328 ;;    Performs the operation BC = BC - A. BC is any given pair of 8-bit registers.
                            329 ;;
ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Zilog Z80 / Hitachi HD64180), page 10.
Hexadecimal [16-Bits]



                            330 ;; ASM Definition:
                            331 ;;    .macro <sub_bc_a>
                            332 ;; 
                            333 ;; Input Registers: 
                            334 ;;    BC - 16-value used as left-operand and final storage for the subtraction
                            335 ;;    A  - Second subtraction operand
                            336 ;;
                            337 ;; Return Value:
                            338 ;;    BC - Holds the result of BC - A
                            339 ;;
                            340 ;; Details:
                            341 ;;    This macro performs the subtraction of BC - A and stores it directly on BC.
                            342 ;; It uses only BC and A to perform the operation.
                            343 ;;
                            344 ;; Modified Registers: 
                            345 ;;    A, BC
                            346 ;;
                            347 ;; Required memory:
                            348 ;;    7 bytes
                            349 ;;
                            350 ;; Time Measures:
                            351 ;; (start code)
                            352 ;;  Case | microSecs(us) | CPU Cycles
                            353 ;; ------------------------------------
                            354 ;;  Any  |       7       |     28
                            355 ;; ------------------------------------
                            356 ;; (end code)
                            357 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
                            358 .macro sub_bc_a
                            359    sub_REGPAIR_a  b, c
                            360 .endm
ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Zilog Z80 / Hitachi HD64180), page 11.
Hexadecimal [16-Bits]



                             20 .include "macros/cpct_opcodeConstants.h.s"
                              1 ;;-----------------------------LICENSE NOTICE------------------------------------
                              2 ;;  This file is part of CPCtelera: An Amstrad CPC Game Engine 
                              3 ;;  Copyright (C) 2016 ronaldo / Fremos / Cheesetea / ByteRealms (@FranGallegoBR)
                              4 ;;
                              5 ;;  This program is free software: you can redistribute it and/or modify
                              6 ;;  it under the terms of the GNU Lesser General Public License as published by
                              7 ;;  the Free Software Foundation, either version 3 of the License, or
                              8 ;;  (at your option) any later version.
                              9 ;;
                             10 ;;  This program is distributed in the hope that it will be useful,
                             11 ;;  but WITHOUT ANY WARRANTY; without even the implied warranty of
                             12 ;;  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
                             13 ;;  GNU Lesser General Public License for more details.
                             14 ;;
                             15 ;;  You should have received a copy of the GNU Lesser General Public License
                             16 ;;  along with this program.  If not, see <http://www.gnu.org/licenses/>.
                             17 ;;-------------------------------------------------------------------------------
                             18 
                             19 ;;
                             20 ;; File: Opcodes
                             21 ;;
                             22 ;;    Constant definitions of Z80 opcodes. This will be normally used as data
                             23 ;; for self-modifying code.
                             24 ;;
                             25 
                             26 ;; Constant: opc_JR
                             27 ;;    Opcode for "JR xx" instruction. Requires 1-byte parameter (xx)
                     0018    28 opc_JR   = 0x18
                             29 
                             30 ;; Constant: opc_LD_D
                             31 ;;    Opcode for "LD d, xx" instruction. Requires 1-byte parameter (xx)
                     0016    32 opc_LD_D = 0x16
                             33 
                             34 ;; Constant: opc_EI
                             35 ;;    Opcode for "EI" instruction. 
                     00FB    36 opc_EI = 0xFB
                             37 
                             38 ;; Constant: opc_DI
                             39 ;;    Opcode for "DI" instruction. 
                     00F3    40 opc_DI = 0xF3
ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Zilog Z80 / Hitachi HD64180), page 12.
Hexadecimal [16-Bits]



                             21 .include "macros/cpct_reverseBits.h.s"
                              1 ;;-----------------------------LICENSE NOTICE------------------------------------
                              2 ;;  This file is part of CPCtelera: An Amstrad CPC Game Engine 
                              3 ;;  Copyright (C) 2016 ronaldo / Fremos / Cheesetea / ByteRealms (@FranGallegoBR)
                              4 ;;
                              5 ;;  This program is free software: you can redistribute it and/or modify
                              6 ;;  it under the terms of the GNU Lesser General Public License as published by
                              7 ;;  the Free Software Foundation, either version 3 of the License, or
                              8 ;;  (at your option) any later version.
                              9 ;;
                             10 ;;  This program is distributed in the hope that it will be useful,
                             11 ;;  but WITHOUT ANY WARRANTY; without even the implied warranty of
                             12 ;;  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
                             13 ;;  GNU Lesser General Public License for more details.
                             14 ;;
                             15 ;;  You should have received a copy of the GNU Lesser General Public License
                             16 ;;  along with this program.  If not, see <http://www.gnu.org/licenses/>.
                             17 ;;-------------------------------------------------------------------------------
                             18 
                             19 ;;
                             20 ;; File: Reverse Bits
                             21 ;;
                             22 ;;    Useful macros for bit reversing and selecting in different ways. Only
                             23 ;; valid to be used from assembly language (not from C).
                             24 ;;
                             25 
                             26 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
                             27 ;; Macro: cpctm_reverse_and_select_bits_of_A
                             28 ;;
                             29 ;;    Reorders the bits of A and mixes them letting the user select the 
                             30 ;; new order for the bits by using a selection mask.
                             31 ;;
                             32 ;; Parameters:
                             33 ;;    TReg          - An 8-bits register that will be used for intermediate calculations.
                             34 ;; This register may be one of these: B, C, D, E, H, L
                             35 ;;    SelectionMask - An 8-bits mask that will be used to select the bits to get from 
                             36 ;; the reordered bits. It might be an 8-bit register or even (hl).
                             37 ;; 
                             38 ;; Input Registers: 
                             39 ;;    A     - Byte to be reversed
                             40 ;;    TReg  - Should have a copy of A (same exact value)
                             41 ;;
                             42 ;; Return Value:
                             43 ;;    A - Resulting value with bits reversed and selected 
                             44 ;;
                             45 ;; Details:
                             46 ;;    This macro reorders the bits in A and mixes them with the same bits in
                             47 ;; their original order by using a *SelectionMask*. The process is as follows:
                             48 ;;
                             49 ;;    1. Consider the 8 bits of A = TReg = [01234567]
                             50 ;;    2. Reorder the 8 bits of A, producing A2 = [32547610]
                             51 ;;    2. Reorder the bits of TReg, producing TReg2 = [76103254]
                             52 ;;    3. Combines both reorders into final result using a *SelectionMask*. Each 
                             53 ;; 0 bit from the selection mask means "select bit from A2", whereas each 1 bit
                             54 ;; means "select bit from TReg2".
ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Zilog Z80 / Hitachi HD64180), page 13.
Hexadecimal [16-Bits]



                             55 ;;
                             56 ;;    For instance, a selection mask 0b11001100 will produce this result:
                             57 ;;
                             58 ;; (start code)
                             59 ;;       A2 = [ 32 54 76 10 ]
                             60 ;;    TReg2 = [ 76 10 32 54 ]
                             61 ;;  SelMask = [ 11 00 11 00 ] // 1 = TReg2-bits, 0 = A2-bits
                             62 ;;  ---------------------------
                             63 ;;   Result = [ 76 54 32 10 ]
                             64 ;; (end code)
                             65 ;;
                             66 ;;    Therefore, mask 0b11001100 produces the effect of reversing the bits of A
                             67 ;; completely. Other masks will produce different reorders of the bits in A, for
                             68 ;; different requirements or needs.
                             69 ;;
                             70 ;; Modified Registers: 
                             71 ;;    AF, TReg
                             72 ;;
                             73 ;; Required memory:
                             74 ;;    16 bytes
                             75 ;;
                             76 ;; Time Measures:
                             77 ;; (start code)
                             78 ;;  Case | microSecs(us) | CPU Cycles
                             79 ;; ------------------------------------
                             80 ;;  Any  |      16       |     64
                             81 ;; ------------------------------------
                             82 ;; (end code)
                             83 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
                             84 .macro cpctm_reverse_and_select_bits_of_A  TReg, SelectionMask
                             85    rlca            ;; [1] | Rotate left twice so that...
                             86    rlca            ;; [1] | ... A=[23456701]
                             87 
                             88    ;; Mix bits of TReg and A so that all bits are in correct relative order
                             89    ;; but displaced from their final desired location
                             90    xor TReg        ;; [1] TReg = [01234567] (original value)
                             91    and #0b01010101 ;; [2]    A = [23456701] (bits rotated twice left)
                             92    xor TReg        ;; [1]   A2 = [03254761] (TReg mixed with A to get bits in order)
                             93    
                             94    ;; Now get bits 54 and 10 in their right location and save them into TReg
                             95    rlca            ;; [1]    A = [ 32 54 76 10 ] (54 and 10 are in their desired place)
                             96    ld TReg, a      ;; [1] TReg = A (Save this bit location into TReg)
                             97    
                             98    ;; Now get bits 76 and 32 in their right location in A
                             99    rrca            ;; [1] | Rotate A right 4 times to...
                            100    rrca            ;; [1] | ... get bits 76 and 32 located at their ...
                            101    rrca            ;; [1] | ... desired location :
                            102    rrca            ;; [1] | ... A = [ 76 10 32 54 ] (76 and 32 are in their desired place)
                            103    
                            104    ;; Finally, mix bits from TReg and A to get all bits reversed and selected
                            105    xor TReg          ;; [1] TReg = [32547610] (Mixed bits with 54 & 10 in their right place)
                            106    and SelectionMask ;; [2]    A = [76103254] (Mixed bits with 76 & 32 in their right place)
                            107    xor TReg          ;; [1]   A2 = [xxxxxxxx] final value: bits of A reversed and selected using *SelectionMask*
                            108 .endm
                            109 
ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Zilog Z80 / Hitachi HD64180), page 14.
Hexadecimal [16-Bits]



                            110 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
                            111 ;; Macro: cpctm_reverse_bits_of_A 
                            112 ;; Macro: cpctm_reverse_mode_2_pixels_of_A
                            113 ;;
                            114 ;;    Reverses the 8-bits of A, from [01234567] to [76543210]. This also reverses
                            115 ;; all pixels contained in A when A is in screen pixel format, mode 2.
                            116 ;;
                            117 ;; Parameters:
                            118 ;;    TReg - An 8-bits register that will be used for intermediate calculations.
                            119 ;; This register may be one of these: B, C, D, E, H, L
                            120 ;; 
                            121 ;; Input Registers: 
                            122 ;;    A    - Byte to be reversed
                            123 ;;    TReg - Should have a copy of A (same exact value)
                            124 ;;
                            125 ;; Return Value:
                            126 ;;    A - Resulting value with bits reversed 
                            127 ;;
                            128 ;; Requires:
                            129 ;;   - Uses the macro <cpctm_reverse_and_select_bits_of_A>.
                            130 ;;
                            131 ;; Details:
                            132 ;;    This macro reverses the bits in A. If bits of A = [01234567], the final
                            133 ;; result after processing this macro will be A = [76543210]. Register TReg is
                            134 ;; used for intermediate calculations and its value is destroyed.
                            135 ;;
                            136 ;; Modified Registers: 
                            137 ;;    AF, TReg
                            138 ;;
                            139 ;; Required memory:
                            140 ;;    16 bytes
                            141 ;;
                            142 ;; Time Measures:
                            143 ;; (start code)
                            144 ;;  Case | microSecs(us) | CPU Cycles
                            145 ;; ------------------------------------
                            146 ;;  Any  |      16       |     64
                            147 ;; ------------------------------------
                            148 ;; (end code)
                            149 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
                            150 .macro cpctm_reverse_bits_of_A  TReg
                            151    cpctm_reverse_and_select_bits_of_A  TReg, #0b11001100
                            152 .endm
                            153 .macro cpctm_reverse_mode_2_pixels_of_A   TReg
                            154    cpctm_reverse_bits_of_A  TReg
                            155 .endm
                            156 
                            157 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
                            158 ;; Macro: cpctm_reverse_mode_1_pixels_of_A
                            159 ;;
                            160 ;;    Reverses the order of pixel values contained in register A, assuming A is 
                            161 ;; in screen pixel format, mode 1.
                            162 ;;
                            163 ;; Parameters:
                            164 ;;    TReg - An 8-bits register that will be used for intermediate calculations.
ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Zilog Z80 / Hitachi HD64180), page 15.
Hexadecimal [16-Bits]



                            165 ;; This register may be one of these: B, C, D, E, H, L
                            166 ;; 
                            167 ;; Input Registers: 
                            168 ;;    A    - Byte with pixel values to be reversed
                            169 ;;    TReg - Should have a copy of A (same exact value)
                            170 ;;
                            171 ;; Return Value:
                            172 ;;    A - Resulting byte with the 4 pixels values reversed in order
                            173 ;;
                            174 ;; Requires:
                            175 ;;   - Uses the macro <cpctm_reverse_and_select_bits_of_A>.
                            176 ;;
                            177 ;; Details:
                            178 ;;    This macro considers that A contains a byte that codifies 4 pixels in 
                            179 ;; screen pixel format, mode 1. It modifies A to reverse the order of its 4 
                            180 ;; contained pixel values left-to-right (1234 -> 4321). With respect to the 
                            181 ;; order of the 8-bits of A, the concrete operations performed is:
                            182 ;; (start code)
                            183 ;;    A = [01234567] == reverse-pixels ==> [32107654] = A2
                            184 ;; (end code)
                            185 ;;    You may want to check <cpct_px2byteM1> to know how bits codify both pixels
                            186 ;; in one single byte for screen pixel format, mode 1.
                            187 ;;
                            188 ;;    *TReg* is an 8-bit register that will be used for intermediate calculations,
                            189 ;; destroying its original value (that should be same as A, at the start).
                            190 ;;
                            191 ;; Modified Registers: 
                            192 ;;    AF, TReg
                            193 ;;
                            194 ;; Required memory:
                            195 ;;    16 bytes
                            196 ;;
                            197 ;; Time Measures:
                            198 ;; (start code)
                            199 ;;  Case | microSecs(us) | CPU Cycles
                            200 ;; ------------------------------------
                            201 ;;  Any  |      16       |     64
                            202 ;; ------------------------------------
                            203 ;; (end code)
                            204 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
                            205 .macro cpctm_reverse_mode_1_pixels_of_A  TReg
                            206    cpctm_reverse_and_select_bits_of_A  TReg, #0b00110011
                            207 .endm
                            208 
                            209 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
                            210 ;; Macro: cpctm_reverse_mode_0_pixels_of_A
                            211 ;;
                            212 ;;    Reverses the order of pixel values contained in register A, assuming A is 
                            213 ;; in screen pixel format, mode 0.
                            214 ;;
                            215 ;; Parameters:
                            216 ;;    TReg - An 8-bits register that will be used for intermediate calculations.
                            217 ;; This register may be one of these: B, C, D, E, H, L
                            218 ;; 
                            219 ;; Input Registers: 
ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Zilog Z80 / Hitachi HD64180), page 16.
Hexadecimal [16-Bits]



                            220 ;;    A    - Byte with pixel values to be reversed
                            221 ;;    TReg - Should have a copy of A (same exact value)
                            222 ;;
                            223 ;; Return Value:
                            224 ;;    A - Resulting byte with the 2 pixels values reversed in order
                            225 ;;
                            226 ;; Details:
                            227 ;;    This macro considers that A contains a byte that codifies 2 pixels in 
                            228 ;; screen pixel format, mode 0. It modifies A to reverse the order of its 2 
                            229 ;; contained pixel values left-to-right (12 -> 21). With respect to the 
                            230 ;; order of the 8-bits of A, the concrete operation performed is:
                            231 ;; (start code)
                            232 ;;    A = [01234567] == reverse-pixels ==> [10325476] = A2
                            233 ;; (end code)
                            234 ;;    You may want to check <cpct_px2byteM0> to know how bits codify both pixels
                            235 ;; in one single byte for screen pixel format, mode 0.
                            236 ;;
                            237 ;;    *TReg* is an 8-bit register that will be used for intermediate calculations,
                            238 ;; destroying its original value (that should be same as A, at the start).
                            239 ;;
                            240 ;; Modified Registers: 
                            241 ;;    AF, TReg
                            242 ;;
                            243 ;; Required memory:
                            244 ;;    7 bytes
                            245 ;;
                            246 ;; Time Measures:
                            247 ;; (start code)
                            248 ;;  Case | microSecs(us) | CPU Cycles
                            249 ;; ------------------------------------
                            250 ;;  Any  |       7       |     28
                            251 ;; ------------------------------------
                            252 ;; (end code)
                            253 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
                            254 .macro cpctm_reverse_mode_0_pixels_of_A  TReg
                            255    rlca            ;; [1] | Rotate A twice to the left to get bits ordered...
                            256    rlca            ;; [1] | ... in the way we need for mixing, A = [23456701]
                            257   
                            258    ;; Mix TReg with A to get pixels reversed by reordering bits
                            259    xor TReg        ;; [1] | TReg = [01234567]
                            260    and #0b01010101 ;; [2] |    A = [23456701]
                            261    xor TReg        ;; [1] |   A2 = [03254761]
                            262    rrca            ;; [1] Rotate right to get pixels reversed A = [10325476]
                            263 .endm
ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Zilog Z80 / Hitachi HD64180), page 17.
Hexadecimal [16-Bits]



                             22 .include "macros/cpct_undocumentedOpcodes.h.s"
                              1 ;;-----------------------------LICENSE NOTICE------------------------------------
                              2 ;;  This file is part of CPCtelera: An Amstrad CPC Game Engine 
                              3 ;;  Copyright (C) 2016 ronaldo / Fremos / Cheesetea / ByteRealms (@FranGallegoBR)
                              4 ;;
                              5 ;;  This program is free software: you can redistribute it and/or modify
                              6 ;;  it under the terms of the GNU Lesser General Public License as published by
                              7 ;;  the Free Software Foundation, either version 3 of the License, or
                              8 ;;  (at your option) any later version.
                              9 ;;
                             10 ;;  This program is distributed in the hope that it will be useful,
                             11 ;;  but WITHOUT ANY WARRANTY; without even the implied warranty of
                             12 ;;  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
                             13 ;;  GNU Lesser General Public License for more details.
                             14 ;;
                             15 ;;  You should have received a copy of the GNU Lesser General Public License
                             16 ;;  along with this program.  If not, see <http://www.gnu.org/licenses/>.
                             17 ;;-------------------------------------------------------------------------------
                             18 
                             19 ;;
                             20 ;; File: Undocumented Opcodes
                             21 ;;
                             22 ;;    Macros to clarify source code when using undocumented opcodes. Only
                             23 ;; valid to be used from assembly language (not from C).
                             24 ;;
                             25 
                             26 ;; Macro: jr__0
                             27 ;;    Opcode for "JR #0" instruction
                             28 ;; 
                             29 .macro jr__0
                             30    .DW #0x0018  ;; JR #00 (Normally used as a modifiable jump, as jr 0 is an infinite loop)
                             31 .endm
                             32 
                             33 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;,
                             34 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;,
                             35 ;; SLL Instructions
                             36 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;,
                             37 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;,
                             38 
                             39 ;; Macro: sll__b
                             40 ;;    Opcode for "SLL b" instruction
                             41 ;; 
                             42 .macro sll__b
                             43    .db #0xCB, #0x30  ;; Opcode for sll b
                             44 .endm
                             45 
                             46 ;; Macro: sll__c
                             47 ;;    Opcode for "SLL c" instruction
                             48 ;; 
                             49 .macro sll__c
                             50    .db #0xCB, #0x31  ;; Opcode for sll c
                             51 .endm
                             52 
                             53 ;; Macro: sll__d
                             54 ;;    Opcode for "SLL d" instruction
ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Zilog Z80 / Hitachi HD64180), page 18.
Hexadecimal [16-Bits]



                             55 ;; 
                             56 .macro sll__d
                             57    .db #0xCB, #0x32  ;; Opcode for sll d
                             58 .endm
                             59 
                             60 ;; Macro: sll__e
                             61 ;;    Opcode for "SLL e" instruction
                             62 ;; 
                             63 .macro sll__e
                             64    .db #0xCB, #0x33  ;; Opcode for sll e
                             65 .endm
                             66 
                             67 ;; Macro: sll__h
                             68 ;;    Opcode for "SLL h" instruction
                             69 ;; 
                             70 .macro sll__h
                             71    .db #0xCB, #0x34  ;; Opcode for sll h
                             72 .endm
                             73 
                             74 ;; Macro: sll__l
                             75 ;;    Opcode for "SLL l" instruction
                             76 ;; 
                             77 .macro sll__l
                             78    .db #0xCB, #0x35  ;; Opcode for sll l
                             79 .endm
                             80 
                             81 ;; Macro: sll___hl_
                             82 ;;    Opcode for "SLL (hl)" instruction
                             83 ;; 
                             84 .macro sll___hl_
                             85    .db #0xCB, #0x36  ;; Opcode for sll (hl)
                             86 .endm
                             87 
                             88 ;; Macro: sll__a
                             89 ;;    Opcode for "SLL a" instruction
                             90 ;; 
                             91 .macro sll__a
                             92    .db #0xCB, #0x37  ;; Opcode for sll a
                             93 .endm
                             94 
                             95 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;,
                             96 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;,
                             97 ;; IXL Related Macros
                             98 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;,
                             99 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;,
                            100 
                            101 ;; Macro: ld__ixl    Value
                            102 ;;    Opcode for "LD ixl, Value" instruction
                            103 ;;  
                            104 ;; Parameters:
                            105 ;;    Value - An inmediate 8-bits value that will be loaded into ixl
                            106 ;; 
                            107 .macro ld__ixl    Value 
                            108    .db #0xDD, #0x2E, Value  ;; Opcode for ld ixl, Value
                            109 .endm
ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Zilog Z80 / Hitachi HD64180), page 19.
Hexadecimal [16-Bits]



                            110 
                            111 ;; Macro: ld__ixl_a
                            112 ;;    Opcode for "LD ixl, a" instruction
                            113 ;; 
                            114 .macro ld__ixl_a
                            115    .dw #0x6FDD  ;; Opcode for ld ixl, a
                            116 .endm
                            117 
                            118 ;; Macro: ld__ixl_b
                            119 ;;    Opcode for "LD ixl, B" instruction
                            120 ;; 
                            121 .macro ld__ixl_b
                            122    .dw #0x68DD  ;; Opcode for ld ixl, b
                            123 .endm
                            124 
                            125 ;; Macro: ld__ixl_c
                            126 ;;    Opcode for "LD ixl, C" instruction
                            127 ;; 
                            128 .macro ld__ixl_c
                            129    .dw #0x69DD  ;; Opcode for ld ixl, c
                            130 .endm
                            131 
                            132 ;; Macro: ld__ixl_d
                            133 ;;    Opcode for "LD ixl, D" instruction
                            134 ;; 
                            135 .macro ld__ixl_d
                            136    .dw #0x6ADD  ;; Opcode for ld ixl, d
                            137 .endm
                            138 
                            139 ;; Macro: ld__ixl_e
                            140 ;;    Opcode for "LD ixl, E" instruction
                            141 ;; 
                            142 .macro ld__ixl_e
                            143    .dw #0x6BDD  ;; Opcode for ld ixl, e
                            144 .endm
                            145 
                            146 ;; Macro: ld__ixl_ixh
                            147 ;;    Opcode for "LD ixl, IXH" instruction
                            148 ;; 
                            149 .macro ld__ixl_ixh
                            150    .dw #0x6CDD  ;; Opcode for ld ixl, ixh
                            151 .endm
                            152 
                            153 ;; Macro: ld__a_ixl
                            154 ;;    Opcode for "LD A, ixl" instruction
                            155 ;; 
                            156 .macro ld__a_ixl
                            157    .dw #0x7DDD  ;; Opcode for ld a, ixl
                            158 .endm
                            159 
                            160 ;; Macro: ld__b_ixl
                            161 ;;    Opcode for "LD B, ixl" instruction
                            162 ;; 
                            163 .macro ld__b_ixl
                            164    .dw #0x45DD  ;; Opcode for ld b, ixl
ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Zilog Z80 / Hitachi HD64180), page 20.
Hexadecimal [16-Bits]



                            165 .endm
                            166 
                            167 ;; Macro: ld__c_ixl
                            168 ;;    Opcode for "LD c, ixl" instruction
                            169 ;; 
                            170 .macro ld__c_ixl
                            171    .dw #0x4DDD  ;; Opcode for ld c, ixl
                            172 .endm
                            173 
                            174 ;; Macro: ld__d_ixl
                            175 ;;    Opcode for "LD D, ixl" instruction
                            176 ;; 
                            177 .macro ld__d_ixl
                            178    .dw #0x55DD  ;; Opcode for ld d, ixl
                            179 .endm
                            180 
                            181 ;; Macro: ld__e_ixl
                            182 ;;    Opcode for "LD e, ixl" instruction
                            183 ;; 
                            184 .macro ld__e_ixl
                            185    .dw #0x5DDD  ;; Opcode for ld e, ixl
                            186 .endm
                            187 
                            188 ;; Macro: add__ixl
                            189 ;;    Opcode for "Add ixl" instruction
                            190 ;; 
                            191 .macro add__ixl
                            192    .dw #0x85DD  ;; Opcode for add ixl
                            193 .endm
                            194 
                            195 ;; Macro: sub__ixl
                            196 ;;    Opcode for "SUB ixl" instruction
                            197 ;; 
                            198 .macro sub__ixl
                            199    .dw #0x95DD  ;; Opcode for sub ixl
                            200 .endm
                            201 
                            202 ;; Macro: adc__ixl
                            203 ;;    Opcode for "ADC ixl" instruction
                            204 ;; 
                            205 .macro adc__ixl
                            206    .dw #0x8DDD  ;; Opcode for adc ixl
                            207 .endm
                            208 
                            209 ;; Macro: sbc__ixl
                            210 ;;    Opcode for "SBC ixl" instruction
                            211 ;; 
                            212 .macro sbc__ixl
                            213    .dw #0x9DDD  ;; Opcode for sbc ixl
                            214 .endm
                            215 
                            216 ;; Macro: and__ixl
                            217 ;;    Opcode for "AND ixl" instruction
                            218 ;; 
                            219 .macro and__ixl
ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Zilog Z80 / Hitachi HD64180), page 21.
Hexadecimal [16-Bits]



                            220    .dw #0xA5DD  ;; Opcode for and ixl
                            221 .endm
                            222 
                            223 ;; Macro: or__ixl
                            224 ;;    Opcode for "OR ixl" instruction
                            225 ;; 
                            226 .macro or__ixl
                            227    .dw #0xB5DD  ;; Opcode for or ixl
                            228 .endm
                            229 
                            230 ;; Macro: xor__ixl
                            231 ;;    Opcode for "XOR ixl" instruction
                            232 ;; 
                            233 .macro xor__ixl
                            234    .dw #0xADDD  ;; Opcode for xor ixl
                            235 .endm
                            236 
                            237 ;; Macro: cp__ixl
                            238 ;;    Opcode for "CP ixl" instruction
                            239 ;; 
                            240 .macro cp__ixl
                            241    .dw #0xBDDD  ;; Opcode for cp ixl
                            242 .endm
                            243 
                            244 ;; Macro: dec__ixl
                            245 ;;    Opcode for "DEC ixl" instruction
                            246 ;; 
                            247 .macro dec__ixl
                            248    .dw #0x2DDD  ;; Opcode for dec ixl
                            249 .endm
                            250 
                            251 ;; Macro: inc__ixl
                            252 ;;    Opcode for "INC ixl" instruction
                            253 ;; 
                            254 .macro inc__ixl
                            255    .dw #0x2CDD  ;; Opcode for inc ixl
                            256 .endm
                            257 
                            258 
                            259 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;,
                            260 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;,
                            261 ;; IXH Related Macros
                            262 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;,
                            263 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;,
                            264 
                            265 ;; Macro: ld__ixh    Value
                            266 ;;    Opcode for "LD IXH, Value" instruction
                            267 ;;  
                            268 ;; Parameters:
                            269 ;;    Value - An inmediate 8-bits value that will be loaded into IXH
                            270 ;; 
                            271 .macro ld__ixh    Value 
                            272    .db #0xDD, #0x26, Value  ;; Opcode for ld ixh, Value
                            273 .endm
                            274 
ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Zilog Z80 / Hitachi HD64180), page 22.
Hexadecimal [16-Bits]



                            275 ;; Macro: ld__ixh_a
                            276 ;;    Opcode for "LD IXH, a" instruction
                            277 ;; 
                            278 .macro ld__ixh_a
                            279    .dw #0x67DD  ;; Opcode for ld ixh, a
                            280 .endm
                            281 
                            282 ;; Macro: ld__ixh_b
                            283 ;;    Opcode for "LD IXH, B" instruction
                            284 ;; 
                            285 .macro ld__ixh_b
                            286    .dw #0x60DD  ;; Opcode for ld ixh, b
                            287 .endm
                            288 
                            289 ;; Macro: ld__ixh_c
                            290 ;;    Opcode for "LD IXH, C" instruction
                            291 ;; 
                            292 .macro ld__ixh_c
                            293    .dw #0x61DD  ;; Opcode for ld ixh, c
                            294 .endm
                            295 
                            296 ;; Macro: ld__ixh_d
                            297 ;;    Opcode for "LD IXH, D" instruction
                            298 ;; 
                            299 .macro ld__ixh_d
                            300    .dw #0x62DD  ;; Opcode for ld ixh, d
                            301 .endm
                            302 
                            303 ;; Macro: ld__ixh_e
                            304 ;;    Opcode for "LD IXH, E" instruction
                            305 ;; 
                            306 .macro ld__ixh_e
                            307    .dw #0x63DD  ;; Opcode for ld ixh, e
                            308 .endm
                            309 
                            310 ;; Macro: ld__ixh_ixl
                            311 ;;    Opcode for "LD IXH, IXL" instruction
                            312 ;; 
                            313 .macro ld__ixh_ixl
                            314    .dw #0x65DD  ;; Opcode for ld ixh, ixl
                            315 .endm
                            316 
                            317 ;; Macro: ld__a_ixh
                            318 ;;    Opcode for "LD A, IXH" instruction
                            319 ;; 
                            320 .macro ld__a_ixh
                            321    .dw #0x7CDD  ;; Opcode for ld a, ixh
                            322 .endm
                            323 
                            324 ;; Macro: ld__b_ixh
                            325 ;;    Opcode for "LD B, IXH" instruction
                            326 ;; 
                            327 .macro ld__b_ixh
                            328    .dw #0x44DD  ;; Opcode for ld b, ixh
                            329 .endm
ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Zilog Z80 / Hitachi HD64180), page 23.
Hexadecimal [16-Bits]



                            330 
                            331 ;; Macro: ld__c_ixh
                            332 ;;    Opcode for "LD c, IXH" instruction
                            333 ;; 
                            334 .macro ld__c_ixh
                            335    .dw #0x4CDD  ;; Opcode for ld c, ixh
                            336 .endm
                            337 
                            338 ;; Macro: ld__d_ixh
                            339 ;;    Opcode for "LD D, IXH" instruction
                            340 ;; 
                            341 .macro ld__d_ixh
                            342    .dw #0x54DD  ;; Opcode for ld d, ixh
                            343 .endm
                            344 
                            345 ;; Macro: ld__e_ixh
                            346 ;;    Opcode for "LD e, IXH" instruction
                            347 ;; 
                            348 .macro ld__e_ixh
                            349    .dw #0x5CDD  ;; Opcode for ld e, ixh
                            350 .endm
                            351 
                            352 ;; Macro: add__ixh
                            353 ;;    Opcode for "ADD IXH" instruction
                            354 ;; 
                            355 .macro add__ixh
                            356    .dw #0x84DD  ;; Opcode for add ixh
                            357 .endm
                            358 
                            359 ;; Macro: sub__ixh
                            360 ;;    Opcode for "SUB IXH" instruction
                            361 ;; 
                            362 .macro sub__ixh
                            363    .dw #0x94DD  ;; Opcode for sub ixh
                            364 .endm
                            365 
                            366 ;; Macro: adc__ixh
                            367 ;;    Opcode for "ADC IXH" instruction
                            368 ;; 
                            369 .macro adc__ixh
                            370    .dw #0x8CDD  ;; Opcode for adc ixh
                            371 .endm
                            372 
                            373 ;; Macro: sbc__ixh
                            374 ;;    Opcode for "SBC IXH" instruction
                            375 ;; 
                            376 .macro sbc__ixh
                            377    .dw #0x9CDD  ;; Opcode for sbc ixh
                            378 .endm
                            379 
                            380 ;; Macro: and__ixh
                            381 ;;    Opcode for "AND IXH" instruction
                            382 ;; 
                            383 .macro and__ixh
                            384    .dw #0xA4DD  ;; Opcode for and ixh
ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Zilog Z80 / Hitachi HD64180), page 24.
Hexadecimal [16-Bits]



                            385 .endm
                            386 
                            387 ;; Macro: or__ixh
                            388 ;;    Opcode for "OR IXH" instruction
                            389 ;; 
                            390 .macro or__ixh
                            391    .dw #0xB4DD  ;; Opcode for or ixh
                            392 .endm
                            393 
                            394 ;; Macro: xor__ixh
                            395 ;;    Opcode for "XOR IXH" instruction
                            396 ;; 
                            397 .macro xor__ixh
                            398    .dw #0xACDD  ;; Opcode for xor ixh
                            399 .endm
                            400 
                            401 ;; Macro: cp__ixh
                            402 ;;    Opcode for "CP IXH" instruction
                            403 ;; 
                            404 .macro cp__ixh
                            405    .dw #0xBCDD  ;; Opcode for cp ixh
                            406 .endm
                            407 
                            408 ;; Macro: dec__ixh
                            409 ;;    Opcode for "DEC IXH" instruction
                            410 ;; 
                            411 .macro dec__ixh
                            412    .dw #0x25DD  ;; Opcode for dec ixh
                            413 .endm
                            414 
                            415 ;; Macro: inc__ixh
                            416 ;;    Opcode for "INC IXH" instruction
                            417 ;; 
                            418 .macro inc__ixh
                            419    .dw #0x24DD  ;; Opcode for inc ixh
                            420 .endm
                            421 
                            422 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;,
                            423 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;,
                            424 ;; IYL Related Macros
                            425 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;,
                            426 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;,
                            427 
                            428 ;; Macro: ld__iyl    Value
                            429 ;;    Opcode for "LD iyl, Value" instruction
                            430 ;;  
                            431 ;; Parameters:
                            432 ;;    Value - An inmediate 8-bits value that will be loaded into iyl
                            433 ;; 
                            434 .macro ld__iyl    Value 
                            435    .db #0xFD, #0x2E, Value  ;; Opcode for ld iyl, Value
                            436 .endm
                            437 
                            438 ;; Macro: ld__iyl_a
                            439 ;;    Opcode for "LD iyl, a" instruction
ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Zilog Z80 / Hitachi HD64180), page 25.
Hexadecimal [16-Bits]



                            440 ;; 
                            441 .macro ld__iyl_a
                            442    .dw #0x6FFD  ;; Opcode for ld iyl, a
                            443 .endm
                            444 
                            445 ;; Macro: ld__iyl_b
                            446 ;;    Opcode for "LD iyl, B" instruction
                            447 ;; 
                            448 .macro ld__iyl_b
                            449    .dw #0x68FD  ;; Opcode for ld iyl, b
                            450 .endm
                            451 
                            452 ;; Macro: ld__iyl_c
                            453 ;;    Opcode for "LD iyl, C" instruction
                            454 ;; 
                            455 .macro ld__iyl_c
                            456    .dw #0x69FD  ;; Opcode for ld iyl, c
                            457 .endm
                            458 
                            459 ;; Macro: ld__iyl_d
                            460 ;;    Opcode for "LD iyl, D" instruction
                            461 ;; 
                            462 .macro ld__iyl_d
                            463    .dw #0x6AFD  ;; Opcode for ld iyl, d
                            464 .endm
                            465 
                            466 ;; Macro: ld__iyl_e
                            467 ;;    Opcode for "LD iyl, E" instruction
                            468 ;; 
                            469 .macro ld__iyl_e
                            470    .dw #0x6BFD  ;; Opcode for ld iyl, e
                            471 .endm
                            472 
                            473 ;; Macro: ld__iyl_iyh
                            474 ;;    Opcode for "LD iyl, IXL" instruction
                            475 ;; 
                            476 .macro ld__iyl_iyh
                            477    .dw #0x6CFD  ;; Opcode for ld iyl, ixl
                            478 .endm
                            479 
                            480 ;; Macro: ld__a_iyl
                            481 ;;    Opcode for "LD A, iyl" instruction
                            482 ;; 
                            483 .macro ld__a_iyl
                            484    .dw #0x7DFD  ;; Opcode for ld a, iyl
                            485 .endm
                            486 
                            487 ;; Macro: ld__b_iyl
                            488 ;;    Opcode for "LD B, iyl" instruction
                            489 ;; 
                            490 .macro ld__b_iyl
                            491    .dw #0x45FD  ;; Opcode for ld b, iyl
                            492 .endm
                            493 
                            494 ;; Macro: ld__c_iyl
ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Zilog Z80 / Hitachi HD64180), page 26.
Hexadecimal [16-Bits]



                            495 ;;    Opcode for "LD c, iyl" instruction
                            496 ;; 
                            497 .macro ld__c_iyl
                            498    .dw #0x4DFD  ;; Opcode for ld c, iyl
                            499 .endm
                            500 
                            501 ;; Macro: ld__d_iyl
                            502 ;;    Opcode for "LD D, iyl" instruction
                            503 ;; 
                            504 .macro ld__d_iyl
                            505    .dw #0x55FD  ;; Opcode for ld d, iyl
                            506 .endm
                            507 
                            508 ;; Macro: ld__e_iyl
                            509 ;;    Opcode for "LD e, iyl" instruction
                            510 ;; 
                            511 .macro ld__e_iyl
                            512    .dw #0x5DFD  ;; Opcode for ld e, iyl
                            513 .endm
                            514 
                            515 ;; Macro: add__iyl
                            516 ;;    Opcode for "Add iyl" instruction
                            517 ;; 
                            518 .macro add__iyl
                            519    .dw #0x85FD  ;; Opcode for add iyl
                            520 .endm
                            521 
                            522 ;; Macro: sub__iyl
                            523 ;;    Opcode for "SUB iyl" instruction
                            524 ;; 
                            525 .macro sub__iyl
                            526    .dw #0x95FD  ;; Opcode for sub iyl
                            527 .endm
                            528 
                            529 ;; Macro: adc__iyl
                            530 ;;    Opcode for "ADC iyl" instruction
                            531 ;; 
                            532 .macro adc__iyl
                            533    .dw #0x8DFD  ;; Opcode for adc iyl
                            534 .endm
                            535 
                            536 ;; Macro: sbc__iyl
                            537 ;;    Opcode for "SBC iyl" instruction
                            538 ;; 
                            539 .macro sbc__iyl
                            540    .dw #0x9DFD  ;; Opcode for sbc iyl
                            541 .endm
                            542 
                            543 ;; Macro: and__iyl
                            544 ;;    Opcode for "AND iyl" instruction
                            545 ;; 
                            546 .macro and__iyl
                            547    .dw #0xA5FD  ;; Opcode for and iyl
                            548 .endm
                            549 
ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Zilog Z80 / Hitachi HD64180), page 27.
Hexadecimal [16-Bits]



                            550 ;; Macro: or__iyl
                            551 ;;    Opcode for "OR iyl" instruction
                            552 ;; 
                            553 .macro or__iyl
                            554    .dw #0xB5FD  ;; Opcode for or iyl
                            555 .endm
                            556 
                            557 ;; Macro: xor__iyl
                            558 ;;    Opcode for "XOR iyl" instruction
                            559 ;; 
                            560 .macro xor__iyl
                            561    .dw #0xADFD  ;; Opcode for xor iyl
                            562 .endm
                            563 
                            564 ;; Macro: cp__iyl
                            565 ;;    Opcode for "CP iyl" instruction
                            566 ;; 
                            567 .macro cp__iyl
                            568    .dw #0xBDFD  ;; Opcode for cp iyl
                            569 .endm
                            570 
                            571 ;; Macro: dec__iyl
                            572 ;;    Opcode for "DEC iyl" instruction
                            573 ;; 
                            574 .macro dec__iyl
                            575    .dw #0x2DFD  ;; Opcode for dec iyl
                            576 .endm
                            577 
                            578 ;; Macro: inc__iyl
                            579 ;;    Opcode for "INC iyl" instruction
                            580 ;; 
                            581 .macro inc__iyl
                            582    .dw #0x2CFD  ;; Opcode for inc iyl
                            583 .endm
                            584 
                            585 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;,
                            586 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;,
                            587 ;; IYH Related Macros
                            588 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;,
                            589 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;,
                            590 
                            591 ;; Macro: ld__iyh    Value
                            592 ;;    Opcode for "LD iyh, Value" instruction
                            593 ;;  
                            594 ;; Parameters:
                            595 ;;    Value - An inmediate 8-bits value that will be loaded into iyh
                            596 ;; 
                            597 .macro ld__iyh    Value 
                            598    .db #0xFD, #0x26, Value  ;; Opcode for ld iyh, Value
                            599 .endm
                            600 
                            601 ;; Macro: ld__iyh_a
                            602 ;;    Opcode for "LD iyh, a" instruction
                            603 ;; 
                            604 .macro ld__iyh_a
ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Zilog Z80 / Hitachi HD64180), page 28.
Hexadecimal [16-Bits]



                            605    .dw #0x67FD  ;; Opcode for ld iyh, a
                            606 .endm
                            607 
                            608 ;; Macro: ld__iyh_b
                            609 ;;    Opcode for "LD iyh, B" instruction
                            610 ;; 
                            611 .macro ld__iyh_b
                            612    .dw #0x60FD  ;; Opcode for ld iyh, b
                            613 .endm
                            614 
                            615 ;; Macro: ld__iyh_c
                            616 ;;    Opcode for "LD iyh, C" instruction
                            617 ;; 
                            618 .macro ld__iyh_c
                            619    .dw #0x61FD  ;; Opcode for ld iyh, c
                            620 .endm
                            621 
                            622 ;; Macro: ld__iyh_d
                            623 ;;    Opcode for "LD iyh, D" instruction
                            624 ;; 
                            625 .macro ld__iyh_d
                            626    .dw #0x62FD  ;; Opcode for ld iyh, d
                            627 .endm
                            628 
                            629 ;; Macro: ld__iyh_e
                            630 ;;    Opcode for "LD iyh, E" instruction
                            631 ;; 
                            632 .macro ld__iyh_e
                            633    .dw #0x63FD  ;; Opcode for ld iyh, e
                            634 .endm
                            635 
                            636 ;; Macro: ld__iyh_iyl
                            637 ;;    Opcode for "LD iyh, IyL" instruction
                            638 ;; 
                            639 .macro ld__iyh_iyl
                            640    .dw #0x65FD  ;; Opcode for ld iyh, iyl
                            641 .endm
                            642 
                            643 ;; Macro: ld__a_iyh
                            644 ;;    Opcode for "LD A, iyh" instruction
                            645 ;; 
                            646 .macro ld__a_iyh
                            647    .dw #0x7CFD  ;; Opcode for ld a, iyh
                            648 .endm
                            649 
                            650 ;; Macro: ld__b_iyh
                            651 ;;    Opcode for "LD B, iyh" instruction
                            652 ;; 
                            653 .macro ld__b_iyh
                            654    .dw #0x44FD  ;; Opcode for ld b, iyh
                            655 .endm
                            656 
                            657 ;; Macro: ld__c_iyh
                            658 ;;    Opcode for "LD c, iyh" instruction
                            659 ;; 
ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Zilog Z80 / Hitachi HD64180), page 29.
Hexadecimal [16-Bits]



                            660 .macro ld__c_iyh
                            661    .dw #0x4CFD  ;; Opcode for ld c, iyh
                            662 .endm
                            663 
                            664 ;; Macro: ld__d_iyh
                            665 ;;    Opcode for "LD D, iyh" instruction
                            666 ;; 
                            667 .macro ld__d_iyh
                            668    .dw #0x54FD  ;; Opcode for ld d, iyh
                            669 .endm
                            670 
                            671 ;; Macro: ld__e_iyh
                            672 ;;    Opcode for "LD e, iyh" instruction
                            673 ;; 
                            674 .macro ld__e_iyh
                            675    .dw #0x5CFD  ;; Opcode for ld e, iyh
                            676 .endm
                            677 
                            678 ;; Macro: add__iyh
                            679 ;;    Opcode for "Add iyh" instruction
                            680 ;; 
                            681 .macro add__iyh
                            682    .dw #0x84FD  ;; Opcode for add iyh
                            683 .endm
                            684 
                            685 ;; Macro: sub__iyh
                            686 ;;    Opcode for "SUB iyh" instruction
                            687 ;; 
                            688 .macro sub__iyh
                            689    .dw #0x94FD  ;; Opcode for sub iyh
                            690 .endm
                            691 
                            692 ;; Macro: adc__iyh
                            693 ;;    Opcode for "ADC iyh" instruction
                            694 ;; 
                            695 .macro adc__iyh
                            696    .dw #0x8CFD  ;; Opcode for adc iyh
                            697 .endm
                            698 
                            699 ;; Macro: sbc__iyh
                            700 ;;    Opcode for "SBC iyh" instruction
                            701 ;; 
                            702 .macro sbc__iyh
                            703    .dw #0x9CFD  ;; Opcode for sbc iyh
                            704 .endm
                            705 
                            706 ;; Macro: and__iyh
                            707 ;;    Opcode for "AND iyh" instruction
                            708 ;; 
                            709 .macro and__iyh
                            710    .dw #0xA4FD  ;; Opcode for and iyh
                            711 .endm
                            712 
                            713 ;; Macro: or__iyh
                            714 ;;    Opcode for "OR iyh" instruction
ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Zilog Z80 / Hitachi HD64180), page 30.
Hexadecimal [16-Bits]



                            715 ;; 
                            716 .macro or__iyh
                            717    .dw #0xB4FD  ;; Opcode for or iyh
                            718 .endm
                            719 
                            720 ;; Macro: xor__iyh
                            721 ;;    Opcode for "XOR iyh" instruction
                            722 ;; 
                            723 .macro xor__iyh
                            724    .dw #0xACFD  ;; Opcode for xor iyh
                            725 .endm
                            726 
                            727 ;; Macro: cp__iyh
                            728 ;;    Opcode for "CP iyh" instruction
                            729 ;; 
                            730 .macro cp__iyh
                            731    .dw #0xBCFD  ;; Opcode for cp iyh
                            732 .endm
                            733 
                            734 ;; Macro: dec__iyh
                            735 ;;    Opcode for "DEC iyh" instruction
                            736 ;; 
                            737 .macro dec__iyh
                            738    .dw #0x25FD  ;; Opcode for dec iyh
                            739 .endm
                            740 
                            741 ;; Macro: inc__iyh
                            742 ;;    Opcode for "INC iyh" instruction
                            743 ;; 
                            744 .macro inc__iyh
                            745    .dw #0x24FD  ;; Opcode for inc iyh
                            746 .endm
ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Zilog Z80 / Hitachi HD64180), page 31.
Hexadecimal [16-Bits]



                             23 
                             24 ;;//////////////////////////////////////////////////////////////////////
                             25 ;; Group: General Useful Macros
                             26 ;;//////////////////////////////////////////////////////////////////////
                             27 
                             28 ;;
                             29 ;; Macro: cpctm_produceHalts_asm
                             30 ;;
                             31 ;;   Produce a set of consecutive halt instructions in order to wait for 
                             32 ;; a given number of interrupts.
                             33 ;;
                             34 ;; C Definition:
                             35 ;;   .macro <cpctm_produceHalts_asm> *N*
                             36 ;;
                             37 ;; Input Parameters:
                             38 ;;   (_) N - Number of consecutive halts to be produced
                             39 ;;
                             40 ;; Known issues:
                             41 ;;    * *N* must be a constant expression that can evaluate to a number
                             42 ;; at compile time.
                             43 ;;    * If the code generated by this macro is executed with interrupts
                             44 ;; being disabled, your CPU will effectively hang forever.
                             45 ;;    * This macro can only be used from assembler code. For C callings
                             46 ;; use <cpctm_produceHalts> instead.
                             47 ;;
                             48 ;; Size of generated code:
                             49 ;;    * *N* bytes (1 byte each halt instruction produced)
                             50 ;;
                             51 ;; Time Measures:
                             52 ;;    * Time depends on the exact moment of execution and the status of
                             53 ;; interrupts. *N* interrupts will pass.
                             54 ;;
                             55 ;; Details:
                             56 ;;    This macro produces a set of *N* consecutive *halt* assembly 
                             57 ;; instructions. Each *halt* instruction stops de Z80 CPU until 
                             58 ;; an interrupt is received. Therefore, this waits for *N* interrupts
                             59 ;; to be produced. This can be used for waiting or synchronization 
                             60 ;; purposes.
                             61 ;;
                             62 ;;    Please, take into account that this is a macro, and not a function.
                             63 ;; Each time this macro is used in your code it will produce the requested
                             64 ;; amount of halts. That can produce more code than you effectively need.
                             65 ;; For a unique function that controls a loop of *halt* waiting use
                             66 ;; <cpct_waitHalts> instead.
                             67 ;;
                             68 ;;
                             69 .macro cpctm_produceHalts N
                             70    .rept N
                             71       halt
                             72    .endm
                             73 .endm
ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Zilog Z80 / Hitachi HD64180), page 32.
Hexadecimal [16-Bits]



                             21 .include "keyboard/keyboard.h.s"
                              1 ;;-----------------------------LICENSE NOTICE------------------------------------
                              2 ;;  This file is part of CPCtelera: An Amstrad CPC Game Engine 
                              3 ;;  Copyright (C) 2017 ronaldo / Fremos / Cheesetea / ByteRealms (@FranGallegoBR)
                              4 ;;
                              5 ;;  This program is free software: you can redistribute it and/or modify
                              6 ;;  it under the terms of the GNU Lesser General Public License as published by
                              7 ;;  the Free Software Foundation, either version 3 of the License, or
                              8 ;;  (at your option) any later version.
                              9 ;;
                             10 ;;  This program is distributed in the hope that it will be useful,
                             11 ;;  but WITHOUT ANY WARRANTY; without even the implied warranty of
                             12 ;;  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
                             13 ;;  GNU Lesser General Public License for more details.
                             14 ;;
                             15 ;;  You should have received a copy of the GNU Lesser General Public License
                             16 ;;  along with this program.  If not, see <http://www.gnu.org/licenses/>.
                             17 ;;-------------------------------------------------------------------------------
                             18 .module cpct_keyboard
                             19 
                             20 ;;
                             21 ;; Constant: Key Definitions (asm)
                             22 ;;
                             23 ;;    Definitions of the KeyCodes required by <cpct_isKeyPressed> 
                             24 ;; function for assembler programs. These are 16-bit values that define 
                             25 ;; matrix line in the keyboard layout (Most Significant Byte) and bit to
                             26 ;; be tested in that matrix line status for the given key (Least Significant
                             27 ;; byte). Each matrix line in the keyboard returns a byte containing the
                             28 ;; status of 8 keys, 1 bit each.
                             29 ;;
                             30 ;; CPCtelera include file:
                             31 ;;    _keyboard/keyboard.h.s_
                             32 ;;
                             33 ;; Keycode constant names:
                             34 ;; (start code)
                             35 ;;  KeyCode | Constant        || KeyCode | Constant      || KeyCode |  Constant
                             36 ;; -------------------------------------------------------------------------------
                             37 ;;   0x0100 | Key_CursorUp    ||  0x0803 | Key_P         ||  0x4006 |  Key_B
                             38 ;;          |                 ||         |               ||     ''  |  Joy1_Fire3
                             39 ;;   0x0200 | Key_CursorRight ||  0x1003 | Key_SemiColon ||  0x8006 |  Key_V
                             40 ;;   0x0400 | Key_CursorDown  ||  0x2003 | Key_Colon     ||  0x0107 |  Key_4
                             41 ;;   0x0800 | Key_F9          ||  0x4003 | Key_Slash     ||  0x0207 |  Key_3
                             42 ;;   0x1000 | Key_F6          ||  0x8003 | Key_Dot       ||  0x0407 |  Key_E
                             43 ;;   0x2000 | Key_F3          ||  0x0104 | Key_0         ||  0x0807 |  Key_W
                             44 ;;   0x4000 | Key_Enter       ||  0x0204 | Key_9         ||  0x1007 |  Key_S
                             45 ;;   0x8000 | Key_FDot        ||  0x0404 | Key_O         ||  0x2007 |  Key_D
                             46 ;;   0x0101 | Key_CursorLeft  ||  0x0804 | Key_I         ||  0x4007 |  Key_C
                             47 ;;   0x0201 | Key_Copy        ||  0x1004 | Key_L         ||  0x8007 |  Key_X
                             48 ;;   0x0401 | Key_F7          ||  0x2004 | Key_K         ||  0x0108 |  Key_1
                             49 ;;   0x0801 | Key_F8          ||  0x4004 | Key_M         ||  0x0208 |  Key_2
                             50 ;;   0x1001 | Key_F5          ||  0x8004 | Key_Comma     ||  0x0408 |  Key_Esc
                             51 ;;   0x2001 | Key_F1          ||  0x0105 | Key_8         ||  0x0808 |  Key_Q
                             52 ;;   0x4001 | Key_F2          ||  0x0205 | Key_7         ||  0x1008 |  Key_Tab
                             53 ;;   0x8001 | Key_F0          ||  0x0405 | Key_U         ||  0x2008 |  Key_A
                             54 ;;   0x0102 | Key_Clr         ||  0x0805 | Key_Y         ||  0x4008 |  Key_CapsLock
ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Zilog Z80 / Hitachi HD64180), page 33.
Hexadecimal [16-Bits]



                             55 ;;   0x0202 | Key_OpenBracket ||  0x1005 | Key_H         ||  0x8008 |  Key_Z
                             56 ;;   0x0402 | Key_Return      ||  0x2005 | Key_J         ||  0x0109 |  Joy0_Up
                             57 ;;   0x0802 | Key_CloseBracket||  0x4005 | Key_N         ||  0x0209 |  Joy0_Down
                             58 ;;   0x1002 | Key_F4          ||  0x8005 | Key_Space     ||  0x0409 |  Joy0_Left
                             59 ;;   0x2002 | Key_Shift       ||  0x0106 | Key_6         ||  0x0809 |  Joy0_Right
                             60 ;;          |                 ||     ''  | Joy1_Up       ||         |
                             61 ;;   0x4002 | Key_BackSlash   ||  0x0206 | Key_5         ||  0x1009 |  Joy0_Fire1
                             62 ;;          |                 ||     ''  | Joy1_Down     ||         |
                             63 ;;   0x8002 | Key_Control     ||  0x0406 | Key_R         ||  0x2009 |  Joy0_Fire2
                             64 ;;          |                 ||     ''  | Joy1_Left     ||         |
                             65 ;;   0x0103 | Key_Caret       ||  0x0806 | Key_T         ||  0x4009 |  Joy0_Fire3
                             66 ;;          |                 ||     ''  | Joy1 Right    ||
                             67 ;;   0x0203 | Key_Hyphen      ||  0x1006 | Key_G         ||  0x8009 |  Key_Del
                             68 ;;          |                 ||     ''  | Joy1_Fire1    ||
                             69 ;;   0x0403 | Key_At          ||  0x2006 | Key_F         ||
                             70 ;;          |                 ||     ''  | Joy1_Fire2    ||
                             71 ;; -------------------------------------------------------------------------------
                             72 ;;  Table 1. KeyCodes defined for each possible key, ordered by KeyCode
                             73 ;; (end)
                             74 ;;
                             75 
                             76 ;; Matrix Line 0x00
                     0100    77 Key_CursorUp     = #0x0100  ;; Bit 0 (01h) => | 0000 0001 |
                     0200    78 Key_CursorRight  = #0x0200  ;; Bit 1 (02h) => | 0000 0010 |
                     0400    79 Key_CursorDown   = #0x0400  ;; Bit 2 (04h) => | 0000 0100 |
                     0800    80 Key_F9           = #0x0800  ;; Bit 3 (08h) => | 0000 1000 |
                     1000    81 Key_F6           = #0x1000  ;; Bit 4 (10h) => | 0001 0000 |
                     2000    82 Key_F3           = #0x2000  ;; Bit 5 (20h) => | 0010 0000 |
                     4000    83 Key_Enter        = #0x4000  ;; Bit 6 (40h) => | 0100 0000 |
                     8000    84 Key_FDot         = #0x8000  ;; Bit 7 (80h) => | 1000 0000 |
                             85 ;; Matrix Line 0x01
                     0101    86 Key_CursorLeft   = #0x0101
                     0201    87 Key_Copy         = #0x0201
                     0401    88 Key_F7           = #0x0401
                     0801    89 Key_F8           = #0x0801
                     1001    90 Key_F5           = #0x1001
                     2001    91 Key_F1           = #0x2001
                     4001    92 Key_F2           = #0x4001
                     8001    93 Key_F0           = #0x8001
                             94 ;; Matrix Line 0x02
                     0102    95 Key_Clr          = #0x0102
                     0202    96 Key_OpenBracket  = #0x0202
                     0402    97 Key_Return       = #0x0402
                     0802    98 Key_CloseBracket = #0x0802
                     1002    99 Key_F4           = #0x1002
                     2002   100 Key_Shift        = #0x2002
                     4002   101 Key_BackSlash    = #0x4002
                     8002   102 Key_Control      = #0x8002
                            103 ;; Matrix Line 0x03
                     0103   104 Key_Caret        = #0x0103
                     0203   105 Key_Hyphen       = #0x0203
                     0403   106 Key_At           = #0x0403
                     0803   107 Key_P            = #0x0803
                     1003   108 Key_SemiColon    = #0x1003
                     2003   109 Key_Colon        = #0x2003
ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Zilog Z80 / Hitachi HD64180), page 34.
Hexadecimal [16-Bits]



                     4003   110 Key_Slash        = #0x4003
                     8003   111 Key_Dot          = #0x8003
                            112 ;; Matrix Line 0x04
                     0104   113 Key_0            = #0x0104
                     0204   114 Key_9            = #0x0204
                     0404   115 Key_O            = #0x0404
                     0804   116 Key_I            = #0x0804
                     1004   117 Key_L            = #0x1004
                     2004   118 Key_K            = #0x2004
                     4004   119 Key_M            = #0x4004
                     8004   120 Key_Comma        = #0x8004
                            121 ;; Matrix Line 0x05
                     0105   122 Key_8            = #0x0105
                     0205   123 Key_7            = #0x0205
                     0405   124 Key_U            = #0x0405
                     0805   125 Key_Y            = #0x0805
                     1005   126 Key_H            = #0x1005
                     2005   127 Key_J            = #0x2005
                     4005   128 Key_N            = #0x4005
                     8005   129 Key_Space        = #0x8005
                            130 ;; Matrix Line 0x06
                     0106   131 Key_6            = #0x0106
                     0106   132 Joy1_Up          = #0x0106
                     0206   133 Key_5            = #0x0206
                     0206   134 Joy1_Down        = #0x0206
                     0406   135 Key_R            = #0x0406
                     0406   136 Joy1_Left        = #0x0406
                     0806   137 Key_T            = #0x0806
                     0806   138 Joy1_Right       = #0x0806
                     1006   139 Key_G            = #0x1006
                     1006   140 Joy1_Fire1       = #0x1006
                     2006   141 Key_F            = #0x2006
                     2006   142 Joy1_Fire2       = #0x2006
                     4006   143 Key_B            = #0x4006
                     4006   144 Joy1_Fire3       = #0x4006
                     8006   145 Key_V            = #0x8006
                            146 ;; Matrix Line 0x07
                     0107   147 Key_4            = #0x0107
                     0207   148 Key_3            = #0x0207
                     0407   149 Key_E            = #0x0407
                     0807   150 Key_W            = #0x0807
                     1007   151 Key_S            = #0x1007
                     2007   152 Key_D            = #0x2007
                     4007   153 Key_C            = #0x4007
                     8007   154 Key_X            = #0x8007
                            155 ;; Matrix Line 0x08
                     0108   156 Key_1            = #0x0108
                     0208   157 Key_2            = #0x0208
                     0408   158 Key_Esc          = #0x0408
                     0808   159 Key_Q            = #0x0808
                     1008   160 Key_Tab          = #0x1008
                     2008   161 Key_A            = #0x2008
                     4008   162 Key_CapsLock     = #0x4008
                     8008   163 Key_Z            = #0x8008
                            164 ;; Matrix Line 0x09
ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Zilog Z80 / Hitachi HD64180), page 35.
Hexadecimal [16-Bits]



                     0109   165 Joy0_Up          = #0x0109
                     0209   166 Joy0_Down        = #0x0209
                     0409   167 Joy0_Left        = #0x0409
                     0809   168 Joy0_Right       = #0x0809
                     1009   169 Joy0_Fire1       = #0x1009
                     2009   170 Joy0_Fire2       = #0x2009
                     4009   171 Joy0_Fire3       = #0x4009
                     8009   172 Key_Del          = #0x8009
ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Zilog Z80 / Hitachi HD64180), page 36.
Hexadecimal [16-Bits]



                             22 .include "video/videomode.h.s"
                              1 ;;-----------------------------LICENSE NOTICE------------------------------------
                              2 ;;  This file is part of CPCtelera: An Amstrad CPC Game Engine
                              3 ;;  Copyright (C) 2017 ronaldo / Fremos / Cheesetea / ByteRealms (@FranGallegoBR)
                              4 ;;
                              5 ;;  This program is free software: you can redistribute it and/or modify
                              6 ;;  it under the terms of the GNU Lesser General Public License as published by
                              7 ;;  the Free Software Foundation, either version 3 of the License, or
                              8 ;;  (at your option) any later version.
                              9 ;;
                             10 ;;  This program is distributed in the hope that it will be useful,
                             11 ;;  but WITHOUT ANY WARRANTY; without even the implied warranty of
                             12 ;;  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
                             13 ;;  GNU Lesser General Public License for more details.
                             14 ;;
                             15 ;;  You should have received a copy of the GNU Lesser General Public License
                             16 ;;  along with this program.  If not, see <http://www.gnu.org/licenses/>.
                             17 ;;-------------------------------------------------------------------------------
                             18 .module cpct_video
                             19    
                             20 ;;
                             21 ;; Includes
                             22 ;;
ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Zilog Z80 / Hitachi HD64180), page 37.
Hexadecimal [16-Bits]



                             23 .include "video/video_macros.h.s"
                              1 ;;-----------------------------LICENSE NOTICE------------------------------------
                              2 ;;  This file is part of CPCtelera: An Amstrad CPC Game Engine
                              3 ;;  Copyright (C) 2017 ronaldo / Fremos / Cheesetea / ByteRealms (@FranGallegoBR)
                              4 ;;
                              5 ;;  This program is free software: you can redistribute it and/or modify
                              6 ;;  it under the terms of the GNU Lesser General Public License as published by
                              7 ;;  the Free Software Foundation, either version 3 of the License, or
                              8 ;;  (at your option) any later version.
                              9 ;;
                             10 ;;  This program is distributed in the hope that it will be useful,
                             11 ;;  but WITHOUT ANY WARRANTY; without even the implied warranty of
                             12 ;;  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
                             13 ;;  GNU Lesser General Public License for more details.
                             14 ;;
                             15 ;;  You should have received a copy of the GNU Lesser General Public License
                             16 ;;  along with this program.  If not, see <http://www.gnu.org/licenses/>.
                             17 ;;-------------------------------------------------------------------------------
                             18 
                             19 ;;//////////////////////////////////////////////////////////////////////
                             20 ;;//////////////////////////////////////////////////////////////////////
                             21 ;; File: Macros (asm)
                             22 ;;//////////////////////////////////////////////////////////////////////
                             23 ;;//////////////////////////////////////////////////////////////////////
                             24 
                             25 ;;//////////////////////////////////////////////////////////////////////
                             26 ;; Group: Video memory manipulation
                             27 ;;//////////////////////////////////////////////////////////////////////
                             28 
                             29 ;;
                             30 ;; Constant: CPCT_VMEM_START_ASM
                             31 ;;
                             32 ;;    The address where screen video memory starts by default in the Amstrad CPC.
                             33 ;;
                             34 ;;    This address is exactly 0xC000, and this macro represents this number but
                             35 ;; automatically converted to <u8>* (Pointer to unsigned byte). You can use this
                             36 ;; macro for any function requiring the start of video memory, like 
                             37 ;; <cpct_getScreenPtr>.
                             38 ;;
                     C000    39 CPCT_VMEM_START_ASM = 0xC000
                             40 
                             41 ;;
                             42 ;; Constants: Video Memory Pages
                             43 ;;
                             44 ;; Useful constants defining some typical Video Memory Pages to be used as 
                             45 ;; parameters for <cpct_setVideoMemoryPage>
                             46 ;;
                             47 ;; cpct_pageCO - Video Memory Page 0xC0 (0xC0··)
                             48 ;; cpct_page8O - Video Memory Page 0x80 (0x80··)
                             49 ;; cpct_page4O - Video Memory Page 0x40 (0x40··)
                             50 ;; cpct_page0O - Video Memory Page 0x00 (0x00··)
                             51 ;;
                     0030    52 cpct_pageC0_asm = 0x30
                     0020    53 cpct_page80_asm = 0x20
                     0010    54 cpct_page40_asm = 0x10
ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Zilog Z80 / Hitachi HD64180), page 38.
Hexadecimal [16-Bits]



                     0000    55 cpct_page00_asm = 0x00
                             56 
                             57 ;;
                             58 ;; Macro: cpctm_memPage6_asm
                             59 ;;
                             60 ;;    Macro that encodes a video memory page in the 6 Least Significant bits (LSb)
                             61 ;; of a byte, required as parameter for <cpct_setVideoMemoryPage>. It loads resulting
                             62 ;; value into a given 8-bits register.
                             63 ;;
                             64 ;; ASM Definition:
                             65 ;; .macro <cpct_memPage6_asm> *REG8*, *PAGE*
                             66 ;;
                             67 ;; Parameters (1 byte):
                             68 ;; (__) REG8 - 8bits register where result will be loaded
                             69 ;; (1B) PAGE - Video memory page wanted 
                             70 ;;
                             71 ;; Known issues:
                             72 ;;   * This macro can only be used from assembler code. It is not accessible from 
                             73 ;; C scope. For C programs, please refer to <cpct_memPage6>
                             74 ;;   * This macro will work *only* with constant values, as its value needs to
                             75 ;; be calculated in compilation time. If fed with variable values, it will give 
                             76 ;; an assembler error.
                             77 ;;
                             78 ;; Destroyed Registers:
                             79 ;;    REG8
                             80 ;;
                             81 ;; Size of generated code:
                             82 ;;    2 bytes 
                             83 ;;
                             84 ;; Time Measures:
                             85 ;;    * 2 microseconds
                             86 ;;    * 8 CPU Cycles
                             87 ;;
                             88 ;; Details:
                             89 ;;  This is just a macro that shifts *PAGE* 2 bits to the right, to leave it
                             90 ;; with just 6 significant bits. For more information, check functions
                             91 ;; <cpct_setVideoMemoryPage> and <cpct_setVideoMemoryOffset>.
                             92 ;;
                             93 .macro cpctm_memPage6_asm REG8, PAGE 
                             94    ld REG8, #PAGE / 4      ;; [2] REG8 = PAGE/4
                             95 .endm
                             96 
                             97 ;;
                             98 ;; Macro: cpctm_screenPtr_asm
                             99 ;;
                            100 ;;    Macro that calculates the video memory location (byte pointer) of a 
                            101 ;; given pair of coordinates (*X*, *Y*). Value resulting from calculation 
                            102 ;; will be loaded into a 16-bits register.
                            103 ;;
                            104 ;; ASM Definition:
                            105 ;;    .macro <cpctm_screenPtr_asm> *REG16*, *VMEM*, *X*, *Y*
                            106 ;;
                            107 ;; Parameters:
                            108 ;;    (__) REG16 - 16-bits register where the resulting value will be loaded
                            109 ;;    (2B) VMEM  - Start of video memory buffer where (*X*, *Y*) coordinates will be calculated
ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Zilog Z80 / Hitachi HD64180), page 39.
Hexadecimal [16-Bits]



                            110 ;;    (1B) X     - X Coordinate of the video memory location *in bytes* (*BEWARE! NOT in pixels!*)
                            111 ;;    (1B) Y     - Y Coordinate of the video memory location in pixels / bytes (they are same amount)
                            112 ;;
                            113 ;; Parameter Restrictions:
                            114 ;;    * *REG16* has to be a 16-bits register that can perform ld REG16, #value.
                            115 ;;    * *VMEM* will normally be the start of the video memory buffer where you want to 
                            116 ;; draw something. It could theoretically be any 16-bits value. 
                            117 ;;    * *X* must be in the range [0-79] for normal screen sizes (modes 0,1,2). Screen is
                            118 ;; always 80 bytes wide in these modes and this function is byte-aligned, so you have to 
                            119 ;; give it a byte coordinate (*NOT a pixel one!*).
                            120 ;;    * *Y* must be in the range [0-199] for normal screen sizes (modes 0,1,2). Screen is 
                            121 ;; always 200 pixels high in these modes. Pixels and bytes always coincide in vertical
                            122 ;; resolution, so this coordinate is the same in bytes that in pixels.
                            123 ;;    * If you give incorrect values to this function, the returned pointer could
                            124 ;; point anywhere in memory. This function will not cause any damage by itself, 
                            125 ;; but you may destroy important parts of your memory if you use its result to 
                            126 ;; write to memory, and you gave incorrect parameters by mistake. Take always
                            127 ;; care.
                            128 ;;
                            129 ;; Known issues:
                            130 ;;   * This macro can only be used from assembler code. It is not accessible from 
                            131 ;; C scope. For C programs, please refer to <cpct_getScreenPtr>
                            132 ;;   * This macro will work *only* with constant values, as calculations need to be 
                            133 ;; performed at assembler time.
                            134 ;;
                            135 ;; Destroyed Registers:
                            136 ;;    REG16
                            137 ;;
                            138 ;; Size of generated code:
                            139 ;;    3 bytes 
                            140 ;;
                            141 ;; Time Measures:
                            142 ;;    * 3 microseconds
                            143 ;;    * 12 CPU Cycles
                            144 ;;
                            145 ;; Details:
                            146 ;;    This macro does the same calculation than the function <cpct_getScreenPtr>. However,
                            147 ;; as it is a macro, if all 3 parameters (*VMEM*, *X*, *Y*) are constants, the calculation
                            148 ;; will be done at compile-time. This will free the binary from code or data, just putting in
                            149 ;; the result of this calculation (2 bytes with the resulting address). It is highly 
                            150 ;; recommended to use this macro instead of the function <cpct_getScreenPtr> when values
                            151 ;; involved are all constant. 
                            152 ;;
                            153 ;; Recommendations:
                            154 ;;    All constant values - Use this macro <cpctm_screenPtr_asm>
                            155 ;;    Any variable value  - Use the function <cpct_getScreenPtr>
                            156 ;;
                            157 .macro cpctm_screenPtr_asm REG16, VMEM, X, Y 
                            158    ld REG16, #VMEM + 80 * (Y / 8) + 2048 * (Y & 7) + X   ;; [3] REG16 = screenPtr
                            159 .endm
                            160 
                            161 ;;
                            162 ;; Macro: cpctm_setCRTCReg
                            163 ;;
                            164 ;;    Macro that sets a new value for a given CRTC register.
ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Zilog Z80 / Hitachi HD64180), page 40.
Hexadecimal [16-Bits]



                            165 ;;
                            166 ;; ASM Definition:
                            167 ;;    .macro <cpctm_setCRTCReg> *HEXREG*, *HEXVAL*
                            168 ;;
                            169 ;; Parameters:
                            170 ;;    (1B) HEXREG - New value to be set for the register (in hexadecimal)
                            171 ;;    (1B) HEXVAL - Number of the register to be set (in hexadecimal)
                            172 ;;
                            173 ;; Parameter Restrictions:
                            174 ;;    * *HEXREG* has to be an hexadecimal value from 00 to 1F
                            175 ;;    * *HEXVAL* has to be an hexadecimal value. Its valid range will depend
                            176 ;;          upon the selected register that will be modified. 
                            177 ;;
                            178 ;; Known issues:
                            179 ;;   * This macro can *only* be used from assembler code. It is not accessible from 
                            180 ;; C scope. 
                            181 ;;   * This macro can only be used with *constant values*. As given values are 
                            182 ;; concatenated with a number, they must also be hexadecimal numbers. If a 
                            183 ;; register or other value is given, this macro will not work.
                            184 ;;   * Using values out of range have unpredicted behaviour and can even 
                            185 ;; potentially cause damage to real Amstrad CPC monitors. Please, use with care.
                            186 ;;
                            187 ;; Destroyed Registers:
                            188 ;;    BC
                            189 ;;
                            190 ;; Size of generated code:
                            191 ;;    10 bytes 
                            192 ;;
                            193 ;; Time Measures:
                            194 ;;    * 14 microseconds
                            195 ;;    * 56 CPU Cycles
                            196 ;;
                            197 ;; Details:
                            198 ;;    This macro expands to two CRTC commands: Register selection and Register setting.
                            199 ;; It selects the register given as first parameter, then sets its new value to 
                            200 ;; that given as second parameter. Both given parameters must be of exactly 1 byte
                            201 ;; in size and the have to be provided in hexadecimal. This is due to the way
                            202 ;; that macro expansion and concatenation works. Given values will be concatenated
                            203 ;; with another 8-bit hexadecimal value to form a unique 16-bits hexadecimal value.
                            204 ;; Therefore, any parameter given will always be considered hexadecimal.
                            205 ;;
                            206 .macro cpctm_setCRTCReg_asm HEXREG, HEXVAL
                            207    ld    bc, #0xBC'HEXREG  ;; [3] B=0xBC CRTC Select Register, C=register number to be selected
                            208    out  (c), c             ;; [4] Select register
                            209    ld    bc, #0xBD'HEXVAL  ;; [3] B=0xBD CRTC Set Register, C=Value to be set
                            210    out  (c), c             ;; [4] Set the value
                            211 .endm
                            212 
                            213 ;;//////////////////////////////////////////////////////////////////////
                            214 ;; Group: Setting the border
                            215 ;;//////////////////////////////////////////////////////////////////////
                            216 
                            217 ;;
                            218 ;; Macro: cpctm_setBorder_asm
                            219 ;;
ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Zilog Z80 / Hitachi HD64180), page 41.
Hexadecimal [16-Bits]



                            220 ;;   Changes the colour of the screen border.
                            221 ;;
                            222 ;; ASM Definition:
                            223 ;;   .macro <cpct_setBorder_asm> HWC 
                            224 ;;
                            225 ;; Input Parameters (1 Byte):
                            226 ;;   (1B) HWC - Hardware colour value for the screen border in *hexadecimal [00-1B]*.
                            227 ;;
                            228 ;; Known issues:
                            229 ;;   * *Beware!* *HWC* colour value must be given in *hexadecimal*, as it is
                            230 ;; substituted in place, and must be in the range [00-1B].
                            231 ;;   * This macro can only be used from assembler code. It is not accessible from 
                            232 ;; C scope. For C programs, please refer to <cpct_setBorder>
                            233 ;;   * This macro will work *only* with constant values, as calculations need to be 
                            234 ;; performed at assembler time.
                            235 ;;
                            236 ;; Destroyed Registers:
                            237 ;;    HL
                            238 ;;
                            239 ;; Size of generated code:
                            240 ;;    * 16 bytes 
                            241 ;;     6b - generated code
                            242 ;;    10b - cpct_setPALColour_asm code
                            243 ;;
                            244 ;; Time Measures:
                            245 ;;    * 28 microseconds
                            246 ;;    * 112 CPU Cycles
                            247 ;;
                            248 ;; Details:
                            249 ;;   This is not a real function, but an assembler macro. Beware of using it along
                            250 ;; with complex expressions or calculations, as it may expand in non-desired
                            251 ;; ways.
                            252 ;;
                            253 ;;   For more information, check the real function <cpct_setPALColour>, which
                            254 ;; is called when using <cpct_setBorder_asm> (It is called using 16 as *pen*
                            255 ;; argument, which identifies the border).
                            256 ;;
                            257 .macro cpctm_setBorder_asm HWC
                            258    .globl cpct_setPALColour_asm
                            259    ld   hl, #0x'HWC'10         ;; [3]  H=Hardware value of desired colour, L=Border INK (16)
                            260    call cpct_setPALColour_asm  ;; [25] Set Palette colour of the border
                            261 .endm
                            262 
                            263 ;;//////////////////////////////////////////////////////////////////////
                            264 ;; Group: Screen clearing
                            265 ;;//////////////////////////////////////////////////////////////////////
                            266 
                            267 ;;
                            268 ;; Macro: cpctm_clearScreen_asm
                            269 ;;
                            270 ;;    Macro to simplify clearing the screen.
                            271 ;;
                            272 ;; ASM Definition:
                            273 ;;   .macro <cpct_clearScreen_asm> COL
                            274 ;;
ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Zilog Z80 / Hitachi HD64180), page 42.
Hexadecimal [16-Bits]



                            275 ;; Input Parameters (1 byte):
                            276 ;;   (1B) COL - Colour pattern to be used for screen clearing. 
                            277 ;;
                            278 ;; Parameters:
                            279 ;;    *COL* - Any 8-bits value or the A register are valid. Typically, a 0x00 is used 
                            280 ;; to fill up all the screen with 0's (firmware colour 0). However, you may use it in 
                            281 ;; combination with <cpct_px2byteM0>, <cpct_px2byteM1> or a manually created colour pattern.
                            282 ;;
                            283 ;; Known issues:
                            284 ;;   * This macro can only be used from assembler code. It is not accessible from 
                            285 ;; C scope. For C programs, please refer to <cpct_clearScreen>
                            286 ;;
                            287 ;; Details:
                            288 ;;   Fills up all the standard screen (range [0xC000-0xFFFF]) with *COL* byte, the colour 
                            289 ;; pattern given.
                            290 ;;
                            291 ;; Destroyed Registers:
                            292 ;;    BC, DE, HL
                            293 ;;
                            294 ;; Size of generated code:
                            295 ;;    13 bytes 
                            296 ;;
                            297 ;; Time Measures:
                            298 ;;    98309 microseconds (*4.924 VSYNCs* on a 50Hz display).
                            299 ;;    393236 CPU Cycles 
                            300 ;;
                            301 .macro cpctm_clearScreen_asm COL
                            302    ld    hl, #0xC000    ;; [3] HL Points to Start of Video Memory
                            303    ld    de, #0xC001    ;; [3] DE Points to the next byte
                            304    ld    bc, #0x4000    ;; [3] BC = 16384 bytes to be copied
                            305    ld   (hl), #COL      ;; [3] First Byte = given Colour
                            306    ldir                 ;; [98297] Perform the copy
                            307 .endm
ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Zilog Z80 / Hitachi HD64180), page 43.
Hexadecimal [16-Bits]



                             24 .include "video/colours.h.s"
                              1 ;;-----------------------------LICENSE NOTICE------------------------------------
                              2 ;;  This file is part of CPCtelera: An Amstrad CPC Game Engine
                              3 ;;  Copyright (C) 2017 ronaldo / Fremos / Cheesetea / ByteRealms (@FranGallegoBR)
                              4 ;;
                              5 ;;  This program is free software: you can redistribute it and/or modify
                              6 ;;  it under the terms of the GNU Lesser General Public License as published by
                              7 ;;  the Free Software Foundation, either version 3 of the License, or
                              8 ;;  (at your option) any later version.
                              9 ;;
                             10 ;;  This program is distributed in the hope that it will be useful,
                             11 ;;  but WITHOUT ANY WARRANTY; without even the implied warranty of
                             12 ;;  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
                             13 ;;  GNU Lesser General Public License for more details.
                             14 ;;
                             15 ;;  You should have received a copy of the GNU Lesser General Public License
                             16 ;;  along with this program.  If not, see <http://www.gnu.org/licenses/>.
                             17 ;;-------------------------------------------------------------------------------
                             18 
                             19 ;; File: Colours (asm)
                             20 ;;
                             21 ;;    Constants and utilities to manage the 27 colours from
                             22 ;; the CPC Palette comfortably in assembler.
                             23 ;;
                             24 
                             25 ;; Constant: Firmware colour values
                             26 ;;
                             27 ;;    Enumerates all 27 firmware colours for assembler programs
                             28 ;;
                             29 ;; Values:
                             30 ;; (start code)
                             31 ;;   [=================================================]
                             32 ;;   | Identifier        | Val| Identifier        | Val|
                             33 ;;   |-------------------------------------------------|
                             34 ;;   | FW_BLACK          |  0 | FW_BLUE           |  1 |
                             35 ;;   | FW_BRIGHT_BLUE    |  2 | FW_RED            |  3 |
                             36 ;;   | FW_MAGENTA        |  4 | FW_MAUVE          |  5 |
                             37 ;;   | FW_BRIGHT_RED     |  6 | FW_PURPLE         |  7 |
                             38 ;;   | FW_BRIGHT_MAGENTA |  8 | FW_GREEN          |  9 |
                             39 ;;   | FW_CYAN           | 10 | FW_SKY_BLUE       | 11 |
                             40 ;;   | FW_YELLOW         | 12 | FW_WHITE          | 13 |
                             41 ;;   | FW_PASTEL_BLUE    | 14 | FW_ORANGE         | 15 |
                             42 ;;   | FW_PINK           | 16 | FW_PASTEL_MAGENTA | 17 |
                             43 ;;   | FW_BRIGHT_GREEN   | 18 | FW_SEA_GREEN      | 19 |
                             44 ;;   | FW_BRIGHT_CYAN    | 20 | FW_LIME           | 21 |
                             45 ;;   | FW_PASTEL_GREEN   | 22 | FW_PASTEL_CYAN    | 23 |
                             46 ;;   | FW_BRIGHT_YELLOW  | 24 | FW_PASTEL_YELLOW  | 25 |
                             47 ;;   | FW_BRIGHT_WHITE   | 26 |                   |    |
                             48 ;;   [=================================================]
                             49 ;;(end code)
                             50 ;;
                     0000    51 FW_BLACK          =  0
                     0001    52 FW_BLUE           =  1
                     0002    53 FW_BRIGHT_BLUE    =  2
                     0003    54 FW_RED            =  3
ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Zilog Z80 / Hitachi HD64180), page 44.
Hexadecimal [16-Bits]



                     0004    55 FW_MAGENTA        =  4
                     0005    56 FW_MAUVE          =  5
                     0006    57 FW_BRIGHT_RED     =  6
                     0007    58 FW_PURPLE         =  7
                     0008    59 FW_BRIGHT_MAGENTA =  8
                     0009    60 FW_GREEN          =  9
                     000A    61 FW_CYAN           = 10
                     000B    62 FW_SKY_BLUE       = 11
                     000C    63 FW_YELLOW         = 12
                     000D    64 FW_WHITE          = 13
                     000E    65 FW_PASTEL_BLUE    = 14
                     000F    66 FW_ORANGE         = 15
                     0010    67 FW_PINK           = 16
                     0011    68 FW_PASTEL_MAGENTA = 17
                     0012    69 FW_BRIGHT_GREEN   = 18
                     0013    70 FW_SEA_GREEN      = 19
                     0014    71 FW_BRIGHT_CYAN    = 20
                     0015    72 FW_LIME           = 21
                     0016    73 FW_PASTEL_GREEN   = 22
                     0017    74 FW_PASTEL_CYAN    = 23
                     0018    75 FW_BRIGHT_YELLOW  = 24
                     0019    76 FW_PASTEL_YELLOW  = 25
                     001A    77 FW_BRIGHT_WHITE   = 26
                             78 
                             79 ;; Constant: Hardware colour values
                             80 ;;
                             81 ;;    Enumerates all 27 hardware colours for assembler programs
                             82 ;;
                             83 ;; Values:
                             84 ;; (start code)
                             85 ;;   [=====================================================]
                             86 ;;   | Identifier        | Value| Identifier        | Value|
                             87 ;;   |-----------------------------------------------------|
                             88 ;;   | HW_BLACK          | 0x14 | HW_BLUE           | 0x04 |
                             89 ;;   | HW_BRIGHT_BLUE    | 0x15 | HW_RED            | 0x1C |
                             90 ;;   | HW_MAGENTA        | 0x18 | HW_MAUVE          | 0x1D |
                             91 ;;   | HW_BRIGHT_RED     | 0x0C | HW_PURPLE         | 0x05 |
                             92 ;;   | HW_BRIGHT_MAGENTA | 0x0D | HW_GREEN          | 0x16 |
                             93 ;;   | HW_CYAN           | 0x06 | HW_SKY_BLUE       | 0x17 |
                             94 ;;   | HW_YELLOW         | 0x1E | HW_WHITE          | 0x00 |
                             95 ;;   | HW_PASTEL_BLUE    | 0x1F | HW_ORANGE         | 0x0E |
                             96 ;;   | HW_PINK           | 0x07 | HW_PASTEL_MAGENTA | 0x0F |
                             97 ;;   | HW_BRIGHT_GREEN   | 0x12 | HW_SEA_GREEN      | 0x02 |
                             98 ;;   | HW_BRIGHT_CYAN    | 0x13 | HW_LIME           | 0x1A |
                             99 ;;   | HW_PASTEL_GREEN   | 0x19 | HW_PASTEL_CYAN    | 0x1B |
                            100 ;;   | HW_BRIGHT_YELLOW  | 0x0A | HW_PASTEL_YELLOW  | 0x03 |
                            101 ;;   | HW_BRIGHT_WHITE   | 0x0B |                   |      |
                            102 ;;   [=====================================================]
                            103 ;;(end code)
                            104 ;;
                     0014   105 HW_BLACK          = 0x14
                     0004   106 HW_BLUE           = 0x04
                     0015   107 HW_BRIGHT_BLUE    = 0x15
                     001C   108 HW_RED            = 0x1C
                     0018   109 HW_MAGENTA        = 0x18
ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Zilog Z80 / Hitachi HD64180), page 45.
Hexadecimal [16-Bits]



                     001D   110 HW_MAUVE          = 0x1D
                     000C   111 HW_BRIGHT_RED     = 0x0C
                     0005   112 HW_PURPLE         = 0x05
                     000D   113 HW_BRIGHT_MAGENTA = 0x0D
                     0016   114 HW_GREEN          = 0x16
                     0006   115 HW_CYAN           = 0x06
                     0017   116 HW_SKY_BLUE       = 0x17
                     001E   117 HW_YELLOW         = 0x1E
                     0000   118 HW_WHITE          = 0x00
                     001F   119 HW_PASTEL_BLUE    = 0x1F
                     000E   120 HW_ORANGE         = 0x0E
                     0007   121 HW_PINK           = 0x07
                     000F   122 HW_PASTEL_MAGENTA = 0x0F
                     0012   123 HW_BRIGHT_GREEN   = 0x12
                     0002   124 HW_SEA_GREEN      = 0x02
                     0013   125 HW_BRIGHT_CYAN    = 0x13
                     001A   126 HW_LIME           = 0x1A
                     0019   127 HW_PASTEL_GREEN   = 0x19
                     001B   128 HW_PASTEL_CYAN    = 0x1B
                     000A   129 HW_BRIGHT_YELLOW  = 0x0A
                     0003   130 HW_PASTEL_YELLOW  = 0x03
                     000B   131 HW_BRIGHT_WHITE   = 0x0B
ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Zilog Z80 / Hitachi HD64180), page 46.
Hexadecimal [16-Bits]



                             25 
                             26 ;;
                             27 ;; Constant values
                             28 ;;
                     7F00    29 GA_port        = 0x7F00  ;; 16-bit Port of the Gate Array (for the use with BC register)
                     007F    30 GA_port_byte   = 0x7F    ;; 8-bit Port of the Gate Array
                     0000    31 PAL_PENR       = 0x00    ;; Command to select a PEN register in the PAL chip
                     0040    32 PAL_INKR       = 0x40    ;; Command to set the INK of a previously selected PEN register in the PAL chip
                     00F5    33 PPI_PORT_B     = 0xF5    ;; Port B of the PPI, used to read Vsync/Jumpers/PrinterBusy/CasIn/Exp information
                     00BC    34 CRTC_SELECTREG = 0xBC    ;; CRTC Port and command "Select Register"
                     00BD    35 CRTC_SETVAL    = 0xBD    ;; CRTC Port and command "Set Value"
ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Zilog Z80 / Hitachi HD64180), page 47.
Hexadecimal [16-Bits]



                             23 .include "sprites/sprites.h.s"
                              1 ;;-----------------------------LICENSE NOTICE------------------------------------
                              2 ;;  This file is part of CPCtelera: An Amstrad CPC Game Engine
                              3 ;;  Copyright (C) 2018 ronaldo / Fremos / Cheesetea / ByteRealms (@FranGallegoBR)
                              4 ;;
                              5 ;;  This program is free software: you can redistribute it and/or modify
                              6 ;;  it under the terms of the GNU Lesser General Public License as published by
                              7 ;;  the Free Software Foundation, either version 3 of the License, or
                              8 ;;  (at your option) any later version.
                              9 ;;
                             10 ;;  This program is distributed in the hope that it will be useful,
                             11 ;;  but WITHOUT ANY WARRANTY; without even the implied warranty of
                             12 ;;  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
                             13 ;;  GNU Lesser General Public License for more details.
                             14 ;;
                             15 ;;  You should have received a copy of the GNU Lesser General Public License
                             16 ;;  along with this program.  If not, see <http://www.gnu.org/licenses/>.
                             17 ;;-------------------------------------------------------------------------------
                             18 
                             19 ;;#####################################################################
                             20 ;;### MODULE: Sprites
                             21 ;;#####################################################################
                             22 ;;### Functions, macros and definitions used for managing sprites
                             23 ;;### in assembler code
                             24 ;;#####################################################################
                             25 
ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Zilog Z80 / Hitachi HD64180), page 48.
Hexadecimal [16-Bits]



                             26 .include "sprites/flipping/flipping_macros.h.s"
                              1 ;;-----------------------------LICENSE NOTICE------------------------------------
                              2 ;;  This file is part of CPCtelera: An Amstrad CPC Game Engine
                              3 ;;  Copyright (C) 2018 ronaldo / Fremos / Cheesetea / ByteRealms (@FranGallegoBR)
                              4 ;;
                              5 ;;  This program is free software: you can redistribute it and/or modify
                              6 ;;  it under the terms of the GNU Lesser General Public License as published by
                              7 ;;  the Free Software Foundation, either version 3 of the License, or
                              8 ;;  (at your option) any later version.
                              9 ;;
                             10 ;;  This program is distributed in the hope that it will be useful,
                             11 ;;  but WITHOUT ANY WARRANTY; without even the implied warranty of
                             12 ;;  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
                             13 ;;  GNU Lesser General Public License for more details.
                             14 ;;
                             15 ;;  You should have received a copy of the GNU Lesser General Public License
                             16 ;;  along with this program.  If not, see <http://www.gnu.org/licenses/>.
                             17 ;;-------------------------------------------------------------------------------
                             18 
                             19 ;;#####################################################################
                             20 ;;### MODULE: Sprites
                             21 ;;### SUBMODULE: flipping.macros
                             22 ;;#####################################################################
                             23 ;;### Macros used to speed up calculations required for to assist
                             24 ;;### flipping functions. Assembler version.
                             25 ;;#####################################################################
                             26 
                             27 ;;
                             28 ;; Macro: cpctm_spbloff
                             29 ;;
                             30 ;;    Macro that calculates the offset to add to a sprite pointer to point 
                             31 ;; to its bottom left pixel.
                             32 ;;
                             33 ;; ASM Definition:
                             34 ;;    .macro <cpctm_ld_sblo> *REG*, *X*, *Y*
                             35 ;;
                             36 ;; Acronym stands for:
                             37 ;;    ld_sblo = Load Sprite Bottom Left Offset
                             38 ;;
                             39 ;; Parameters:
                             40 ;;    (1-2B) REG - Register that will load the resulting offset (8 or 16 bits)
                             41 ;;    (1B) X     - Width of the sprite in *bytes*
                             42 ;;    (1B) Y     - Height of the sprite in pixels
                             43 ;;
                             44 ;; Parameter Restrictions:
                             45 ;;    *REG* - Must be a valid 8/16 bits register that can be immediately loaded
                             46 ;; using ld REG, #immediate.
                             47 ;;    *X*   - Must be an immediate value representing the width of the sprite 
                             48 ;; in *bytes* (Beware! Not in pixels). For sprites having interlaced mask, you 
                             49 ;; may input 2 times the width of the sprite for appropriate results.
                             50 ;;    *Y*   - Must be an immediate value representing the height of the sprite 
                             51 ;; in pixels.
                             52 ;;
                             53 ;; Returns:
                             54 ;;    REG = X * (Y - 1) ;; Register loaded with the offset
ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Zilog Z80 / Hitachi HD64180), page 49.
Hexadecimal [16-Bits]



                             55 ;;
                             56 ;; Details:
                             57 ;;    This macro calculates the offset of the initial byte of the last row 
                             58 ;; of a given sprite (i.e. its bottom-left byte), with respect to its first
                             59 ;; byte (top-left corner). This value can easily be added to any sprite 
                             60 ;; pointer to get a pointer to the bottom-left byte. This pointer is required
                             61 ;; byte many flipping functions (like <cpct_vflipSpriteM0>). Values for width
                             62 ;; and height of the sprite must be constant immediate values. Otherwise, this
                             63 ;; macro will generate incorrect code that will fail to compile. 
                             64 ;;    The macro calculates *X* * (*Y*-1) at compile-time and loads it into
                             65 ;; the given register. Please, take into account that the macro does no check
                             66 ;; about the size of the resulting values. If multiplication results in a value
                             67 ;; greater than 255, you will need to load it into a 16-bit register. You must
                             68 ;; take care of the expected size of the offset value.
                             69 ;;
                             70 ;; Known issues:
                             71 ;;    * This is a assembler macro. It cannot be called or used from C code.
                             72 ;;
                             73 .macro cpctm_ld_sblo REG, X, Y
                             74    ld    REG, #X * (Y-1)
                             75 .endm
ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Zilog Z80 / Hitachi HD64180), page 50.
Hexadecimal [16-Bits]



                             21 .include "main.h.s"
                              1 ;;------------------------------------------------LICENSE NOTICE------------------------------------------------------------------------------
                              2 ;;  This file is part of Amstrad CPC videogame "Redsea"
                              3 ;;  Copyright (C) 2018 Gameroid / Angel Jesus Terol Martinez (@miya_nashi) / Raquel Gonzalez Roma (@kelara712) / Carla Macia Diez (@shiryuko)
                              4 ;;  Copyright (C) 2015 ronaldo / Fremos / Cheesetea / ByteRealms (@FranGallegoBR)
                              5 ;;
                              6 ;;  This program is free software: you can redistribute it and/or modify
                              7 ;;  it under the terms of the GNU Lesser General Public License as published by
                              8 ;;  the Free Software Foundation, either version 3 of the License, or
                              9 ;;  (at your option) any later version.
                             10 ;;
                             11 ;;  This program is distributed in the hope that it will be useful,
                             12 ;;  but WITHOUT ANY WARRANTY; without even the implied warranty of
                             13 ;;  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
                             14 ;;  GNU Lesser General Public License for more details.
                             15 ;;
                             16 ;;  You should have received a copy of the GNU Lesser General Public License
                             17 ;;  along with this program.  If not, see <http://www.gnu.org/licenses/>.
                             18 ;;------------------------------------------------LICENSE NOTICE-------------------------------------------------------------------------
                             19 
                             20 .globl cpct_disableFirmware_asm
                             21 .globl cpct_setVideoMode_asm
                             22 .globl cpct_waitVSYNC_asm
                             23 .globl cpct_drawSolidBox_asm
                             24 .globl cpct_getScreenPtr_asm
                             25 .globl cpct_scanKeyboard_asm
                             26 .globl cpct_isKeyPressed_asm
                             27 .globl cpct_setVideoMemoryPage_asm
                             28 .globl cpct_memset_f64_asm
                             29 .globl cpct_drawSprite_asm
                             30 .globl cpct_setPalette_asm
                             31 .globl _hero_pal
                             32 .globl _enemy_sc_sp
                             33 .globl cpct_zx7b_decrunch_s_asm
                             34 .globl _level0_pack_end
                             35 .globl cpct_etm_setDrawTilemap4x8_ag_asm
                             36 .globl cpct_etm_drawTilemap4x8_ag_asm
                             37 .globl _level0_W
                             38 .globl _tile_palette
                             39 .globl tilemap_ptr
                             40 .globl _menu_pack_end
                             41 .globl _menu2_pack_end
                             42 .globl reset_game_win
                             43 .globl reset_game
                             44 .globl cpct_getRandom_mxor_u8_asm
                             45 .globl cpct_akp_musicInit_asm
                             46 .globl cpct_akp_musicPlay_asm
                             47 .globl cpct_akp_stop_asm
                             48 .globl cpct_setInterruptHandler_asm
                             49 .globl _main_theme
                             50 .globl _true_theme
                             51 .globl _shootSFX
                             52 .globl cpct_akp_SFXInit_asm
                             53 .globl cpct_akp_SFXPlay_asm
                             54 .globl cpct_akp_SFXStop_asm
ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Zilog Z80 / Hitachi HD64180), page 51.
Hexadecimal [16-Bits]



                             55 .globl cpct_setPALColour_asm
                             56 .globl DecompressTilemap
ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Zilog Z80 / Hitachi HD64180), page 52.
Hexadecimal [16-Bits]



                             22 .include "enemy.h.s"
                              1 ;;------------------------------------------------LICENSE NOTICE------------------------------------------------------------------------------
                              2 ;;  This file is part of Amstrad CPC videogame "Redsea"
                              3 ;;  Copyright (C) 2018 Gameroid / Angel Jesus Terol Martinez (@miya_nashi) / Raquel Gonzalez Roma (@kelara712) / Carla Macia Diez (@shiryuko)
                              4 ;;  Copyright (C) 2015 ronaldo / Fremos / Cheesetea / ByteRealms (@FranGallegoBR)
                              5 ;;
                              6 ;;  This program is free software: you can redistribute it and/or modify
                              7 ;;  it under the terms of the GNU Lesser General Public License as published by
                              8 ;;  the Free Software Foundation, either version 3 of the License, or
                              9 ;;  (at your option) any later version.
                             10 ;;
                             11 ;;  This program is distributed in the hope that it will be useful,
                             12 ;;  but WITHOUT ANY WARRANTY; without even the implied warranty of
                             13 ;;  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
                             14 ;;  GNU Lesser General Public License for more details.
                             15 ;;
                             16 ;;  You should have received a copy of the GNU Lesser General Public License
                             17 ;;  along with this program.  If not, see <http://www.gnu.org/licenses/>.
                             18 ;;------------------------------------------------LICENSE NOTICE-------------------------------------------------------------------------
                             19 
                             20 .globl enemy_vector
                             21 .globl ent_clear
                             22 .globl ent_move
                             23 .globl ent_update
                             24 .globl ent_draw
                             25 .globl ent_doForAll
                             26 .globl ent_new_type1
                             27 .globl ent_new_type2
                             28 .globl ent_new_type3
                             29 .globl _enemy12_sp_0
                             30 .globl _enemy12_sp_1
                             31 .globl _enemy12_sp_2
                             32 .globl _enemy12_sp_3
                             33 .globl _enemy12_sp_4
                             34 .globl _enemy12_sp_5
                             35 .globl _enemy12_sp_6
                             36 .globl _enemy12_sp_7
                             37 .globl _enemy12_sp_8
                             38 .globl reset_enemies
                             39 .globl shootEffect
                             40 .globl ent_start_level_1
                             41 .globl ent_start_level_2
                             42 .globl ent_start_level_3
                             43 .globl ent_start_level_4
                             44 .globl ent_start_level_5
                             45 .globl ent_start_level_6
                             46 .globl _enemy2_sp_0
                             47 .globl _enemy2_sp_1
                             48 .globl _enemy2_sp_2
                             49 .globl enemy_window
                             50 .globl ent_updEnemy2
                             51 
                             52 
                             53 .macro DefineEntity _name, _x, _y, _vx, _vy, _w, _h, _sprite, _upd, _anim, _spAct, _shooting, _animSh, _animDie
                             54 _name: 
ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Zilog Z80 / Hitachi HD64180), page 53.
Hexadecimal [16-Bits]



                             55 	DefineDrawableEntity _name'_drawable, _x, _y, _w, _h, _sprite
                             56    .db   _vx, _vy     ;; VX, VY
                             57    .dw   _upd         ;; Update
                             58    .db   _anim		  ;;Clock to change sprite
                             59    .db   _spAct       ;;Actual sprite 
                             60    .db   _shooting    ;;If the enemy is shooting or not (0=not, 1=yes)
                             61    .db   _animSh	  ;;Clock to change sprite while shooting
                             62    .db   _animDie	  ;;clock to change the sprite while is dying
                             63 _name'_size = . - _name
                             64 .endm
                             65 
                     0006    66 e_size_dw = 6
                             67 
                     0000    68 e_de = 0
                     0006    69 e_vx = 0 + e_size_dw
                     0007    70 e_vy = 1 + e_size_dw
                     0008    71 e_up_l = 2 + e_size_dw
                     0009    72 e_up_h = 3 + e_size_dw
                     000A    73 e_anim = 4 + e_size_dw
                     000B    74 e_spAct = 5 + e_size_dw
                     000C    75 e_shooting = 6 + e_size_dw
                     000D    76 e_shClock = 7 + e_size_dw
                     000E    77 e_shDie = 8 + e_size_dw
                             78 
                             79 .macro DefineEntityDefault _name, _suf
                             80 
                             81 	DefineEntity _name'_suf, 0, 0, 1, 0, #0x08, #0x14, _enemy12_sp_0, ent_updEnemy, #0x03, 0, 0, #0x0A, #0x0A
                             82 
                             83 .endm
                             84 
                             85 .macro DefineNEntities _name, _n
                             86 	_c = 0
                             87 	.rept _n
                             88 		DefineEntityDefault _name, \_c
                             89 		_c=_c+1
                             90 	.endm
                             91 .endm
ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Zilog Z80 / Hitachi HD64180), page 54.
Hexadecimal [16-Bits]



                             23 .include "render.h.s"
                              1 ;;------------------------------------------------LICENSE NOTICE------------------------------------------------------------------------------
                              2 ;;  This file is part of Amstrad CPC videogame "Redsea"
                              3 ;;  Copyright (C) 2018 Gameroid / Angel Jesus Terol Martinez (@miya_nashi) / Raquel Gonzalez Roma (@kelara712) / Carla Macia Diez (@shiryuko)
                              4 ;;  Copyright (C) 2015 ronaldo / Fremos / Cheesetea / ByteRealms (@FranGallegoBR)
                              5 ;;
                              6 ;;  This program is free software: you can redistribute it and/or modify
                              7 ;;  it under the terms of the GNU Lesser General Public License as published by
                              8 ;;  the Free Software Foundation, either version 3 of the License, or
                              9 ;;  (at your option) any later version.
                             10 ;;
                             11 ;;  This program is distributed in the hope that it will be useful,
                             12 ;;  but WITHOUT ANY WARRANTY; without even the implied warranty of
                             13 ;;  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
                             14 ;;  GNU Lesser General Public License for more details.
                             15 ;;
                             16 ;;  You should have received a copy of the GNU Lesser General Public License
                             17 ;;  along with this program.  If not, see <http://www.gnu.org/licenses/>.
                             18 ;;------------------------------------------------LICENSE NOTICE-------------------------------------------------------------------------
                             19 
                             20 .globl render_draw
                             21 .globl render_clear
                             22 .globl ren_newScene
                             23 .globl m_back_buffer
                             24 .globl render_clear_asset
                             25 .globl render_clear_asset_both
                             26 
                             27 .macro DefineDrawableEntity _name, _x, _y, _w, _h, _s
                             28 _name:
                             29 	.db _x, _y
                             30 	.db _w, _h
                             31 	.dw _s
                             32 .endm
                     0000    33 de_x = 0
                     0001    34 de_y = 1
                     0002    35 de_w = 2
                     0003    36 de_h = 3
                     0004    37 de_sp_l = 4
                     0005    38 de_sp_h = 5
ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Zilog Z80 / Hitachi HD64180), page 55.
Hexadecimal [16-Bits]



                             24 .include "player.h.s"
                              1 ;;------------------------------------------------LICENSE NOTICE------------------------------------------------------------------------------
                              2 ;;  This file is part of Amstrad CPC videogame "Redsea"
                              3 ;;  Copyright (C) 2018 Gameroid / Angel Jesus Terol Martinez (@miya_nashi) / Raquel Gonzalez Roma (@kelara712) / Carla Macia Diez (@shiryuko)
                              4 ;;  Copyright (C) 2015 ronaldo / Fremos / Cheesetea / ByteRealms (@FranGallegoBR)
                              5 ;;
                              6 ;;  This program is free software: you can redistribute it and/or modify
                              7 ;;  it under the terms of the GNU Lesser General Public License as published by
                              8 ;;  the Free Software Foundation, either version 3 of the License, or
                              9 ;;  (at your option) any later version.
                             10 ;;
                             11 ;;  This program is distributed in the hope that it will be useful,
                             12 ;;  but WITHOUT ANY WARRANTY; without even the implied warranty of
                             13 ;;  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
                             14 ;;  GNU Lesser General Public License for more details.
                             15 ;;
                             16 ;;  You should have received a copy of the GNU Lesser General Public License
                             17 ;;  along with this program.  If not, see <http://www.gnu.org/licenses/>.
                             18 ;;------------------------------------------------LICENSE NOTICE-------------------------------------------------------------------------
                             19 
                             20 .globl pl_clear
                             21 .globl pl_clear_mira
                             22 .globl pl_move
                             23 .globl pl_update
                             24 .globl pl_draw
                             25 .globl pl_moveKeyboard
                             26 .globl pl_moveAsShooter
                             27 .globl hero_data
                             28 .globl shoot_data
                             29 .globl _hero_sp_0
                             30 .globl _hero_sp_1
                             31 .globl _hero_sp_2
                             32 .globl _hero_sp_3
                             33 .globl _hero_sp_4
                             34 .globl _hero_sp_5
                             35 .globl _hero_sp_6
                             36 .globl _hero_sp_7
                             37 .globl _hero_sp_8
                             38 .globl _assets_sp_0
                             39 .globl get_Enemy
                             40 .globl draw_Score
                             41 .globl _numbers_00
                             42 .globl _numbers_01
                             43 .globl _numbers_02
                             44 .globl _numbers_03
                             45 .globl _numbers_04
                             46 .globl _numbers_05
                             47 .globl _numbers_06
                             48 .globl _numbers_07
                             49 .globl _numbers_08
                             50 .globl _numbers_09
                             51 .globl _lifes_0
                             52 .globl _lifes_1
                             53 .globl draw_Lifes
                             54 .globl reduce_life
ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Zilog Z80 / Hitachi HD64180), page 56.
Hexadecimal [16-Bits]



                             55 .globl reset_player
                             56 .globl level
                             57 
                             58 .macro DefinePlayer _name, _x, _y, _vx, _vy, _w, _h, _sprite, _upd
                             59 _name: 
                             60 	DefineDrawableEntity _name'_drawable, _x, _y, _w, _h, _sprite
                             61    .db   _vx, _vy     ;; VX, VY
                             62    .dw   _upd         ;; Update 
                             63 _name'_size = . - _name
                             64 .endm
                             65 
                     0006    66 p_size_dw = 6
                             67 
                     0000    68 p_de = 0
                     0006    69 p_vx = 0 + p_size_dw
                     0007    70 p_vy = 1 + p_size_dw
                     0008    71 p_up_l = 2 + p_size_dw
                     0009    72 p_up_h = 3 + p_size_dw
ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Zilog Z80 / Hitachi HD64180), page 57.
Hexadecimal [16-Bits]



                             25 .include "bullet.h.s"
                              1 ;;------------------------------------------------LICENSE NOTICE------------------------------------------------------------------------------
                              2 ;;  This file is part of Amstrad CPC videogame "Redsea"
                              3 ;;  Copyright (C) 2018 Gameroid / Angel Jesus Terol Martinez (@miya_nashi) / Raquel Gonzalez Roma (@kelara712) / Carla Macia Diez (@shiryuko)
                              4 ;;  Copyright (C) 2015 ronaldo / Fremos / Cheesetea / ByteRealms (@FranGallegoBR)
                              5 ;;
                              6 ;;  This program is free software: you can redistribute it and/or modify
                              7 ;;  it under the terms of the GNU Lesser General Public License as published by
                              8 ;;  the Free Software Foundation, either version 3 of the License, or
                              9 ;;  (at your option) any later version.
                             10 ;;
                             11 ;;  This program is distributed in the hope that it will be useful,
                             12 ;;  but WITHOUT ANY WARRANTY; without even the implied warranty of
                             13 ;;  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
                             14 ;;  GNU Lesser General Public License for more details.
                             15 ;;
                             16 ;;  You should have received a copy of the GNU Lesser General Public License
                             17 ;;  along with this program.  If not, see <http://www.gnu.org/licenses/>.
                             18 ;;------------------------------------------------LICENSE NOTICE-------------------------------------------------------------------------
                             19 
                             20 .globl _assets_sp_1
                             21 .globl bul_move
                             22 .globl bul_update
                             23 .globl bul_clear
                             24 .globl bul_draw
                             25 .globl bul_doForAll
                             26 .globl bul_new
                             27 .globl bullet_vector
                             28 .globl reset_bullets
                             29 
                             30 .macro DefineBullet _name, _x, _y, _vx, _vy, _w, _h, _sprite, _upd
                             31 _name: 
                             32 	DefineDrawableEntity _name'_drawable, _x, _y, _w, _h, _sprite
                             33    .db   _vx, _vy     ;; VX, VY
                             34    .dw   _upd         ;; Update
                             35 _name'_size = . - _name
                             36 .endm
                             37 
                     0006    38 b_size_dw = 6
                             39 
                     0000    40 b_de = 0
                     0006    41 b_vx = 0 + b_size_dw
                     0007    42 b_vy = 1 + b_size_dw
                     0008    43 b_up_l = 2 + b_size_dw
                     0009    44 b_up_h = 3 + b_size_dw
                             45 
                             46 .macro DefineBulletDefault _name, _suf
                             47 
                             48 	DefineBullet _name'_suf, 0, 0, 0, 3, #0x04, #0x08, _assets_sp_1, bul_move
                             49 
                             50 .endm
                             51 
                             52 .macro DefineNBullets _name, _n
                             53 	_c = 0
                             54 	.rept _n
ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Zilog Z80 / Hitachi HD64180), page 58.
Hexadecimal [16-Bits]



                             55 		DefineBulletDefault _name, \_c
                             56 		_c=_c+1
                             57 	.endm
                             58 .endm
ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Zilog Z80 / Hitachi HD64180), page 59.
Hexadecimal [16-Bits]



                             26 .include "obstacle.h.s"
                              1 ;;------------------------------------------------LICENSE NOTICE------------------------------------------------------------------------------
                              2 ;;  This file is part of Amstrad CPC videogame "Redsea"
                              3 ;;  Copyright (C) 2018 Gameroid / Angel Jesus Terol Martinez (@miya_nashi) / Raquel Gonzalez Roma (@kelara712) / Carla Macia Diez (@shiryuko)
                              4 ;;  Copyright (C) 2015 ronaldo / Fremos / Cheesetea / ByteRealms (@FranGallegoBR)
                              5 ;;
                              6 ;;  This program is free software: you can redistribute it and/or modify
                              7 ;;  it under the terms of the GNU Lesser General Public License as published by
                              8 ;;  the Free Software Foundation, either version 3 of the License, or
                              9 ;;  (at your option) any later version.
                             10 ;;
                             11 ;;  This program is distributed in the hope that it will be useful,
                             12 ;;  but WITHOUT ANY WARRANTY; without even the implied warranty of
                             13 ;;  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
                             14 ;;  GNU Lesser General Public License for more details.
                             15 ;;
                             16 ;;  You should have received a copy of the GNU Lesser General Public License
                             17 ;;  along with this program.  If not, see <http://www.gnu.org/licenses/>.
                             18 ;;------------------------------------------------LICENSE NOTICE-------------------------------------------------------------------------
                             19 
                             20 .globl ob_draw
                             21 .globl ob_init
                             22 .globl ob_damage
                             23 .globl _obstacle_sp_0
                             24 .globl _obstacle_sp_1
                             25 .globl _mastil_sp
                             26 .globl _camarote_sp
                             27 .globl obstacle
                             28 .globl obstacle2
                             29 .globl mastil
                             30 .globl camarote
                             31 .globl ob_level_1
                             32 .globl ob_level_3
                             33 .globl ob_level_4
                             34 .globl ob_level_5
                             35 .globl ob_level_6
                             36 .globl ob_draw_obstacles
                             37 
                             38 .macro DefineObstacle _name, _x, _y, _w, _h, _sprite, _life 
                             39 _name: 
                             40 	DefineDrawableEntity _name'_drawable, _x, _y, _w, _h, _sprite
                             41    .db   _life
                             42 _name'_size = . - _name
                             43 .endm
                             44 
                     0006    45 o_size_dw = 6
                             46 
                     0000    47 o_de = 0
                     0007    48 o_life = 1 + o_size_dw
ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Zilog Z80 / Hitachi HD64180), page 60.
Hexadecimal [16-Bits]



                             27 
   494E                      28 enemy_vector:
   494E                      29 DefineNEntities enemy_vector, k_tot_enemies
                     0000     1 	_c = 0
                              2 	.rept k_tot_enemies
                              3 		DefineEntityDefault enemy_vector, \_c
                              4 		_c=_c+1
                              5 	.endm
   494E                       1 		DefineEntityDefault enemy_vector, \_c
                              1 
   0000                       2 	DefineEntity enemy_vector0, 0, 0, 1, 0, #0x08, #0x14, _enemy12_sp_0, ent_updEnemy, #0x03, 0, 0, #0x0A, #0x0A
   0000                       1 enemy_vector0: 
   0000                       2 	DefineDrawableEntity enemy_vector0_drawable, 0, 0, #0x08, #0x14, _enemy12_sp_0
   0000                       1 enemy_vector0_drawable:
   494E 00 00                 2 	.db 0, 0
   4950 08 14                 3 	.db #0x08, #0x14
   4952 B3 2F                 4 	.dw _enemy12_sp_0
   4954 01 00                 3    .db   1, 0     ;; VX, VY
   4956 CF 4C                 4    .dw   ent_updEnemy         ;; Update
   4958 03                    5    .db   #0x03		  ;;Clock to change sprite
   4959 00                    6    .db   0       ;;Actual sprite 
   495A 00                    7    .db   0    ;;If the enemy is shooting or not (0=not, 1=yes)
   495B 0A                    8    .db   #0x0A	  ;;Clock to change sprite while shooting
   495C 0A                    9    .db   #0x0A	  ;;clock to change the sprite while is dying
                     000F    10 enemy_vector0_size = . - enemy_vector0
                              3 
                     0001     2 		_c=_c+1
   495D                       1 		DefineEntityDefault enemy_vector, \_c
                              1 
   495D                       2 	DefineEntity enemy_vector1, 0, 0, 1, 0, #0x08, #0x14, _enemy12_sp_0, ent_updEnemy, #0x03, 0, 0, #0x0A, #0x0A
   000F                       1 enemy_vector1: 
   000F                       2 	DefineDrawableEntity enemy_vector1_drawable, 0, 0, #0x08, #0x14, _enemy12_sp_0
   000F                       1 enemy_vector1_drawable:
   495D 00 00                 2 	.db 0, 0
   495F 08 14                 3 	.db #0x08, #0x14
   4961 B3 2F                 4 	.dw _enemy12_sp_0
   4963 01 00                 3    .db   1, 0     ;; VX, VY
   4965 CF 4C                 4    .dw   ent_updEnemy         ;; Update
   4967 03                    5    .db   #0x03		  ;;Clock to change sprite
   4968 00                    6    .db   0       ;;Actual sprite 
   4969 00                    7    .db   0    ;;If the enemy is shooting or not (0=not, 1=yes)
   496A 0A                    8    .db   #0x0A	  ;;Clock to change sprite while shooting
   496B 0A                    9    .db   #0x0A	  ;;clock to change the sprite while is dying
                     000F    10 enemy_vector1_size = . - enemy_vector1
                              3 
                     0002     2 		_c=_c+1
   496C                       1 		DefineEntityDefault enemy_vector, \_c
                              1 
   496C                       2 	DefineEntity enemy_vector2, 0, 0, 1, 0, #0x08, #0x14, _enemy12_sp_0, ent_updEnemy, #0x03, 0, 0, #0x0A, #0x0A
   001E                       1 enemy_vector2: 
   001E                       2 	DefineDrawableEntity enemy_vector2_drawable, 0, 0, #0x08, #0x14, _enemy12_sp_0
   001E                       1 enemy_vector2_drawable:
   496C 00 00                 2 	.db 0, 0
   496E 08 14                 3 	.db #0x08, #0x14
   4970 B3 2F                 4 	.dw _enemy12_sp_0
ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Zilog Z80 / Hitachi HD64180), page 61.
Hexadecimal [16-Bits]



   4972 01 00                 3    .db   1, 0     ;; VX, VY
   4974 CF 4C                 4    .dw   ent_updEnemy         ;; Update
   4976 03                    5    .db   #0x03		  ;;Clock to change sprite
   4977 00                    6    .db   0       ;;Actual sprite 
   4978 00                    7    .db   0    ;;If the enemy is shooting or not (0=not, 1=yes)
   4979 0A                    8    .db   #0x0A	  ;;Clock to change sprite while shooting
   497A 0A                    9    .db   #0x0A	  ;;clock to change the sprite while is dying
                     000F    10 enemy_vector2_size = . - enemy_vector2
                              3 
                     0003     2 		_c=_c+1
   497B                       1 		DefineEntityDefault enemy_vector, \_c
                              1 
   497B                       2 	DefineEntity enemy_vector3, 0, 0, 1, 0, #0x08, #0x14, _enemy12_sp_0, ent_updEnemy, #0x03, 0, 0, #0x0A, #0x0A
   002D                       1 enemy_vector3: 
   002D                       2 	DefineDrawableEntity enemy_vector3_drawable, 0, 0, #0x08, #0x14, _enemy12_sp_0
   002D                       1 enemy_vector3_drawable:
   497B 00 00                 2 	.db 0, 0
   497D 08 14                 3 	.db #0x08, #0x14
   497F B3 2F                 4 	.dw _enemy12_sp_0
   4981 01 00                 3    .db   1, 0     ;; VX, VY
   4983 CF 4C                 4    .dw   ent_updEnemy         ;; Update
   4985 03                    5    .db   #0x03		  ;;Clock to change sprite
   4986 00                    6    .db   0       ;;Actual sprite 
   4987 00                    7    .db   0    ;;If the enemy is shooting or not (0=not, 1=yes)
   4988 0A                    8    .db   #0x0A	  ;;Clock to change sprite while shooting
   4989 0A                    9    .db   #0x0A	  ;;clock to change the sprite while is dying
                     000F    10 enemy_vector3_size = . - enemy_vector3
                              3 
                     0004     2 		_c=_c+1
   498A                       1 		DefineEntityDefault enemy_vector, \_c
                              1 
   498A                       2 	DefineEntity enemy_vector4, 0, 0, 1, 0, #0x08, #0x14, _enemy12_sp_0, ent_updEnemy, #0x03, 0, 0, #0x0A, #0x0A
   003C                       1 enemy_vector4: 
   003C                       2 	DefineDrawableEntity enemy_vector4_drawable, 0, 0, #0x08, #0x14, _enemy12_sp_0
   003C                       1 enemy_vector4_drawable:
   498A 00 00                 2 	.db 0, 0
   498C 08 14                 3 	.db #0x08, #0x14
   498E B3 2F                 4 	.dw _enemy12_sp_0
   4990 01 00                 3    .db   1, 0     ;; VX, VY
   4992 CF 4C                 4    .dw   ent_updEnemy         ;; Update
   4994 03                    5    .db   #0x03		  ;;Clock to change sprite
   4995 00                    6    .db   0       ;;Actual sprite 
   4996 00                    7    .db   0    ;;If the enemy is shooting or not (0=not, 1=yes)
   4997 0A                    8    .db   #0x0A	  ;;Clock to change sprite while shooting
   4998 0A                    9    .db   #0x0A	  ;;clock to change the sprite while is dying
                     000F    10 enemy_vector4_size = . - enemy_vector4
                              3 
                     0005     2 		_c=_c+1
   4999                       1 		DefineEntityDefault enemy_vector, \_c
                              1 
   4999                       2 	DefineEntity enemy_vector5, 0, 0, 1, 0, #0x08, #0x14, _enemy12_sp_0, ent_updEnemy, #0x03, 0, 0, #0x0A, #0x0A
   004B                       1 enemy_vector5: 
   004B                       2 	DefineDrawableEntity enemy_vector5_drawable, 0, 0, #0x08, #0x14, _enemy12_sp_0
   004B                       1 enemy_vector5_drawable:
   4999 00 00                 2 	.db 0, 0
ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Zilog Z80 / Hitachi HD64180), page 62.
Hexadecimal [16-Bits]



   499B 08 14                 3 	.db #0x08, #0x14
   499D B3 2F                 4 	.dw _enemy12_sp_0
   499F 01 00                 3    .db   1, 0     ;; VX, VY
   49A1 CF 4C                 4    .dw   ent_updEnemy         ;; Update
   49A3 03                    5    .db   #0x03		  ;;Clock to change sprite
   49A4 00                    6    .db   0       ;;Actual sprite 
   49A5 00                    7    .db   0    ;;If the enemy is shooting or not (0=not, 1=yes)
   49A6 0A                    8    .db   #0x0A	  ;;Clock to change sprite while shooting
   49A7 0A                    9    .db   #0x0A	  ;;clock to change the sprite while is dying
                     000F    10 enemy_vector5_size = . - enemy_vector5
                              3 
                     0006     2 		_c=_c+1
   49A8                       1 		DefineEntityDefault enemy_vector, \_c
                              1 
   49A8                       2 	DefineEntity enemy_vector6, 0, 0, 1, 0, #0x08, #0x14, _enemy12_sp_0, ent_updEnemy, #0x03, 0, 0, #0x0A, #0x0A
   005A                       1 enemy_vector6: 
   005A                       2 	DefineDrawableEntity enemy_vector6_drawable, 0, 0, #0x08, #0x14, _enemy12_sp_0
   005A                       1 enemy_vector6_drawable:
   49A8 00 00                 2 	.db 0, 0
   49AA 08 14                 3 	.db #0x08, #0x14
   49AC B3 2F                 4 	.dw _enemy12_sp_0
   49AE 01 00                 3    .db   1, 0     ;; VX, VY
   49B0 CF 4C                 4    .dw   ent_updEnemy         ;; Update
   49B2 03                    5    .db   #0x03		  ;;Clock to change sprite
   49B3 00                    6    .db   0       ;;Actual sprite 
   49B4 00                    7    .db   0    ;;If the enemy is shooting or not (0=not, 1=yes)
   49B5 0A                    8    .db   #0x0A	  ;;Clock to change sprite while shooting
   49B6 0A                    9    .db   #0x0A	  ;;clock to change the sprite while is dying
                     000F    10 enemy_vector6_size = . - enemy_vector6
                              3 
                     0007     2 		_c=_c+1
   49B7                       1 		DefineEntityDefault enemy_vector, \_c
                              1 
   49B7                       2 	DefineEntity enemy_vector7, 0, 0, 1, 0, #0x08, #0x14, _enemy12_sp_0, ent_updEnemy, #0x03, 0, 0, #0x0A, #0x0A
   0069                       1 enemy_vector7: 
   0069                       2 	DefineDrawableEntity enemy_vector7_drawable, 0, 0, #0x08, #0x14, _enemy12_sp_0
   0069                       1 enemy_vector7_drawable:
   49B7 00 00                 2 	.db 0, 0
   49B9 08 14                 3 	.db #0x08, #0x14
   49BB B3 2F                 4 	.dw _enemy12_sp_0
   49BD 01 00                 3    .db   1, 0     ;; VX, VY
   49BF CF 4C                 4    .dw   ent_updEnemy         ;; Update
   49C1 03                    5    .db   #0x03		  ;;Clock to change sprite
   49C2 00                    6    .db   0       ;;Actual sprite 
   49C3 00                    7    .db   0    ;;If the enemy is shooting or not (0=not, 1=yes)
   49C4 0A                    8    .db   #0x0A	  ;;Clock to change sprite while shooting
   49C5 0A                    9    .db   #0x0A	  ;;clock to change the sprite while is dying
                     000F    10 enemy_vector7_size = . - enemy_vector7
                              3 
                     0008     2 		_c=_c+1
   49C6                       1 		DefineEntityDefault enemy_vector, \_c
                              1 
   49C6                       2 	DefineEntity enemy_vector8, 0, 0, 1, 0, #0x08, #0x14, _enemy12_sp_0, ent_updEnemy, #0x03, 0, 0, #0x0A, #0x0A
   0078                       1 enemy_vector8: 
   0078                       2 	DefineDrawableEntity enemy_vector8_drawable, 0, 0, #0x08, #0x14, _enemy12_sp_0
ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Zilog Z80 / Hitachi HD64180), page 63.
Hexadecimal [16-Bits]



   0078                       1 enemy_vector8_drawable:
   49C6 00 00                 2 	.db 0, 0
   49C8 08 14                 3 	.db #0x08, #0x14
   49CA B3 2F                 4 	.dw _enemy12_sp_0
   49CC 01 00                 3    .db   1, 0     ;; VX, VY
   49CE CF 4C                 4    .dw   ent_updEnemy         ;; Update
   49D0 03                    5    .db   #0x03		  ;;Clock to change sprite
   49D1 00                    6    .db   0       ;;Actual sprite 
   49D2 00                    7    .db   0    ;;If the enemy is shooting or not (0=not, 1=yes)
   49D3 0A                    8    .db   #0x0A	  ;;Clock to change sprite while shooting
   49D4 0A                    9    .db   #0x0A	  ;;clock to change the sprite while is dying
                     000F    10 enemy_vector8_size = . - enemy_vector8
                              3 
                     0009     2 		_c=_c+1
   49D5                       1 		DefineEntityDefault enemy_vector, \_c
                              1 
   49D5                       2 	DefineEntity enemy_vector9, 0, 0, 1, 0, #0x08, #0x14, _enemy12_sp_0, ent_updEnemy, #0x03, 0, 0, #0x0A, #0x0A
   0087                       1 enemy_vector9: 
   0087                       2 	DefineDrawableEntity enemy_vector9_drawable, 0, 0, #0x08, #0x14, _enemy12_sp_0
   0087                       1 enemy_vector9_drawable:
   49D5 00 00                 2 	.db 0, 0
   49D7 08 14                 3 	.db #0x08, #0x14
   49D9 B3 2F                 4 	.dw _enemy12_sp_0
   49DB 01 00                 3    .db   1, 0     ;; VX, VY
   49DD CF 4C                 4    .dw   ent_updEnemy         ;; Update
   49DF 03                    5    .db   #0x03		  ;;Clock to change sprite
   49E0 00                    6    .db   0       ;;Actual sprite 
   49E1 00                    7    .db   0    ;;If the enemy is shooting or not (0=not, 1=yes)
   49E2 0A                    8    .db   #0x0A	  ;;Clock to change sprite while shooting
   49E3 0A                    9    .db   #0x0A	  ;;clock to change the sprite while is dying
                     000F    10 enemy_vector9_size = . - enemy_vector9
                              3 
                     000A     2 		_c=_c+1
   49E4                       1 		DefineEntityDefault enemy_vector, \_c
                              1 
   49E4                       2 	DefineEntity enemy_vector10, 0, 0, 1, 0, #0x08, #0x14, _enemy12_sp_0, ent_updEnemy, #0x03, 0, 0, #0x0A, #0x0A
   0096                       1 enemy_vector10: 
   0096                       2 	DefineDrawableEntity enemy_vector10_drawable, 0, 0, #0x08, #0x14, _enemy12_sp_0
   0096                       1 enemy_vector10_drawable:
   49E4 00 00                 2 	.db 0, 0
   49E6 08 14                 3 	.db #0x08, #0x14
   49E8 B3 2F                 4 	.dw _enemy12_sp_0
   49EA 01 00                 3    .db   1, 0     ;; VX, VY
   49EC CF 4C                 4    .dw   ent_updEnemy         ;; Update
   49EE 03                    5    .db   #0x03		  ;;Clock to change sprite
   49EF 00                    6    .db   0       ;;Actual sprite 
   49F0 00                    7    .db   0    ;;If the enemy is shooting or not (0=not, 1=yes)
   49F1 0A                    8    .db   #0x0A	  ;;Clock to change sprite while shooting
   49F2 0A                    9    .db   #0x0A	  ;;clock to change the sprite while is dying
                     000F    10 enemy_vector10_size = . - enemy_vector10
                              3 
                     000B     2 		_c=_c+1
   49F3                       1 		DefineEntityDefault enemy_vector, \_c
                              1 
   49F3                       2 	DefineEntity enemy_vector11, 0, 0, 1, 0, #0x08, #0x14, _enemy12_sp_0, ent_updEnemy, #0x03, 0, 0, #0x0A, #0x0A
ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Zilog Z80 / Hitachi HD64180), page 64.
Hexadecimal [16-Bits]



   00A5                       1 enemy_vector11: 
   00A5                       2 	DefineDrawableEntity enemy_vector11_drawable, 0, 0, #0x08, #0x14, _enemy12_sp_0
   00A5                       1 enemy_vector11_drawable:
   49F3 00 00                 2 	.db 0, 0
   49F5 08 14                 3 	.db #0x08, #0x14
   49F7 B3 2F                 4 	.dw _enemy12_sp_0
   49F9 01 00                 3    .db   1, 0     ;; VX, VY
   49FB CF 4C                 4    .dw   ent_updEnemy         ;; Update
   49FD 03                    5    .db   #0x03		  ;;Clock to change sprite
   49FE 00                    6    .db   0       ;;Actual sprite 
   49FF 00                    7    .db   0    ;;If the enemy is shooting or not (0=not, 1=yes)
   4A00 0A                    8    .db   #0x0A	  ;;Clock to change sprite while shooting
   4A01 0A                    9    .db   #0x0A	  ;;clock to change the sprite while is dying
                     000F    10 enemy_vector11_size = . - enemy_vector11
                              3 
                     000C     2 		_c=_c+1
   4A02                       1 		DefineEntityDefault enemy_vector, \_c
                              1 
   4A02                       2 	DefineEntity enemy_vector12, 0, 0, 1, 0, #0x08, #0x14, _enemy12_sp_0, ent_updEnemy, #0x03, 0, 0, #0x0A, #0x0A
   00B4                       1 enemy_vector12: 
   00B4                       2 	DefineDrawableEntity enemy_vector12_drawable, 0, 0, #0x08, #0x14, _enemy12_sp_0
   00B4                       1 enemy_vector12_drawable:
   4A02 00 00                 2 	.db 0, 0
   4A04 08 14                 3 	.db #0x08, #0x14
   4A06 B3 2F                 4 	.dw _enemy12_sp_0
   4A08 01 00                 3    .db   1, 0     ;; VX, VY
   4A0A CF 4C                 4    .dw   ent_updEnemy         ;; Update
   4A0C 03                    5    .db   #0x03		  ;;Clock to change sprite
   4A0D 00                    6    .db   0       ;;Actual sprite 
   4A0E 00                    7    .db   0    ;;If the enemy is shooting or not (0=not, 1=yes)
   4A0F 0A                    8    .db   #0x0A	  ;;Clock to change sprite while shooting
   4A10 0A                    9    .db   #0x0A	  ;;clock to change the sprite while is dying
                     000F    10 enemy_vector12_size = . - enemy_vector12
                              3 
                     000D     2 		_c=_c+1
   4A11                       1 		DefineEntityDefault enemy_vector, \_c
                              1 
   4A11                       2 	DefineEntity enemy_vector13, 0, 0, 1, 0, #0x08, #0x14, _enemy12_sp_0, ent_updEnemy, #0x03, 0, 0, #0x0A, #0x0A
   00C3                       1 enemy_vector13: 
   00C3                       2 	DefineDrawableEntity enemy_vector13_drawable, 0, 0, #0x08, #0x14, _enemy12_sp_0
   00C3                       1 enemy_vector13_drawable:
   4A11 00 00                 2 	.db 0, 0
   4A13 08 14                 3 	.db #0x08, #0x14
   4A15 B3 2F                 4 	.dw _enemy12_sp_0
   4A17 01 00                 3    .db   1, 0     ;; VX, VY
   4A19 CF 4C                 4    .dw   ent_updEnemy         ;; Update
   4A1B 03                    5    .db   #0x03		  ;;Clock to change sprite
   4A1C 00                    6    .db   0       ;;Actual sprite 
   4A1D 00                    7    .db   0    ;;If the enemy is shooting or not (0=not, 1=yes)
   4A1E 0A                    8    .db   #0x0A	  ;;Clock to change sprite while shooting
   4A1F 0A                    9    .db   #0x0A	  ;;clock to change the sprite while is dying
                     000F    10 enemy_vector13_size = . - enemy_vector13
                              3 
                     000E     2 		_c=_c+1
   4A20                       1 		DefineEntityDefault enemy_vector, \_c
ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Zilog Z80 / Hitachi HD64180), page 65.
Hexadecimal [16-Bits]



                              1 
   4A20                       2 	DefineEntity enemy_vector14, 0, 0, 1, 0, #0x08, #0x14, _enemy12_sp_0, ent_updEnemy, #0x03, 0, 0, #0x0A, #0x0A
   00D2                       1 enemy_vector14: 
   00D2                       2 	DefineDrawableEntity enemy_vector14_drawable, 0, 0, #0x08, #0x14, _enemy12_sp_0
   00D2                       1 enemy_vector14_drawable:
   4A20 00 00                 2 	.db 0, 0
   4A22 08 14                 3 	.db #0x08, #0x14
   4A24 B3 2F                 4 	.dw _enemy12_sp_0
   4A26 01 00                 3    .db   1, 0     ;; VX, VY
   4A28 CF 4C                 4    .dw   ent_updEnemy         ;; Update
   4A2A 03                    5    .db   #0x03		  ;;Clock to change sprite
   4A2B 00                    6    .db   0       ;;Actual sprite 
   4A2C 00                    7    .db   0    ;;If the enemy is shooting or not (0=not, 1=yes)
   4A2D 0A                    8    .db   #0x0A	  ;;Clock to change sprite while shooting
   4A2E 0A                    9    .db   #0x0A	  ;;clock to change the sprite while is dying
                     000F    10 enemy_vector14_size = . - enemy_vector14
                              3 
                     000F     2 		_c=_c+1
   4A2F                       1 		DefineEntityDefault enemy_vector, \_c
                              1 
   4A2F                       2 	DefineEntity enemy_vector15, 0, 0, 1, 0, #0x08, #0x14, _enemy12_sp_0, ent_updEnemy, #0x03, 0, 0, #0x0A, #0x0A
   00E1                       1 enemy_vector15: 
   00E1                       2 	DefineDrawableEntity enemy_vector15_drawable, 0, 0, #0x08, #0x14, _enemy12_sp_0
   00E1                       1 enemy_vector15_drawable:
   4A2F 00 00                 2 	.db 0, 0
   4A31 08 14                 3 	.db #0x08, #0x14
   4A33 B3 2F                 4 	.dw _enemy12_sp_0
   4A35 01 00                 3    .db   1, 0     ;; VX, VY
   4A37 CF 4C                 4    .dw   ent_updEnemy         ;; Update
   4A39 03                    5    .db   #0x03		  ;;Clock to change sprite
   4A3A 00                    6    .db   0       ;;Actual sprite 
   4A3B 00                    7    .db   0    ;;If the enemy is shooting or not (0=not, 1=yes)
   4A3C 0A                    8    .db   #0x0A	  ;;Clock to change sprite while shooting
   4A3D 0A                    9    .db   #0x0A	  ;;clock to change the sprite while is dying
                     000F    10 enemy_vector15_size = . - enemy_vector15
                              3 
                     0010     2 		_c=_c+1
   4A3E                       1 		DefineEntityDefault enemy_vector, \_c
                              1 
   4A3E                       2 	DefineEntity enemy_vector16, 0, 0, 1, 0, #0x08, #0x14, _enemy12_sp_0, ent_updEnemy, #0x03, 0, 0, #0x0A, #0x0A
   00F0                       1 enemy_vector16: 
   00F0                       2 	DefineDrawableEntity enemy_vector16_drawable, 0, 0, #0x08, #0x14, _enemy12_sp_0
   00F0                       1 enemy_vector16_drawable:
   4A3E 00 00                 2 	.db 0, 0
   4A40 08 14                 3 	.db #0x08, #0x14
   4A42 B3 2F                 4 	.dw _enemy12_sp_0
   4A44 01 00                 3    .db   1, 0     ;; VX, VY
   4A46 CF 4C                 4    .dw   ent_updEnemy         ;; Update
   4A48 03                    5    .db   #0x03		  ;;Clock to change sprite
   4A49 00                    6    .db   0       ;;Actual sprite 
   4A4A 00                    7    .db   0    ;;If the enemy is shooting or not (0=not, 1=yes)
   4A4B 0A                    8    .db   #0x0A	  ;;Clock to change sprite while shooting
   4A4C 0A                    9    .db   #0x0A	  ;;clock to change the sprite while is dying
                     000F    10 enemy_vector16_size = . - enemy_vector16
                              3 
ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Zilog Z80 / Hitachi HD64180), page 66.
Hexadecimal [16-Bits]



                     0011     2 		_c=_c+1
   4A4D                       1 		DefineEntityDefault enemy_vector, \_c
                              1 
   4A4D                       2 	DefineEntity enemy_vector17, 0, 0, 1, 0, #0x08, #0x14, _enemy12_sp_0, ent_updEnemy, #0x03, 0, 0, #0x0A, #0x0A
   00FF                       1 enemy_vector17: 
   00FF                       2 	DefineDrawableEntity enemy_vector17_drawable, 0, 0, #0x08, #0x14, _enemy12_sp_0
   00FF                       1 enemy_vector17_drawable:
   4A4D 00 00                 2 	.db 0, 0
   4A4F 08 14                 3 	.db #0x08, #0x14
   4A51 B3 2F                 4 	.dw _enemy12_sp_0
   4A53 01 00                 3    .db   1, 0     ;; VX, VY
   4A55 CF 4C                 4    .dw   ent_updEnemy         ;; Update
   4A57 03                    5    .db   #0x03		  ;;Clock to change sprite
   4A58 00                    6    .db   0       ;;Actual sprite 
   4A59 00                    7    .db   0    ;;If the enemy is shooting or not (0=not, 1=yes)
   4A5A 0A                    8    .db   #0x0A	  ;;Clock to change sprite while shooting
   4A5B 0A                    9    .db   #0x0A	  ;;clock to change the sprite while is dying
                     000F    10 enemy_vector17_size = . - enemy_vector17
                              3 
                     0012     2 		_c=_c+1
   4A5C                       1 		DefineEntityDefault enemy_vector, \_c
                              1 
   4A5C                       2 	DefineEntity enemy_vector18, 0, 0, 1, 0, #0x08, #0x14, _enemy12_sp_0, ent_updEnemy, #0x03, 0, 0, #0x0A, #0x0A
   010E                       1 enemy_vector18: 
   010E                       2 	DefineDrawableEntity enemy_vector18_drawable, 0, 0, #0x08, #0x14, _enemy12_sp_0
   010E                       1 enemy_vector18_drawable:
   4A5C 00 00                 2 	.db 0, 0
   4A5E 08 14                 3 	.db #0x08, #0x14
   4A60 B3 2F                 4 	.dw _enemy12_sp_0
   4A62 01 00                 3    .db   1, 0     ;; VX, VY
   4A64 CF 4C                 4    .dw   ent_updEnemy         ;; Update
   4A66 03                    5    .db   #0x03		  ;;Clock to change sprite
   4A67 00                    6    .db   0       ;;Actual sprite 
   4A68 00                    7    .db   0    ;;If the enemy is shooting or not (0=not, 1=yes)
   4A69 0A                    8    .db   #0x0A	  ;;Clock to change sprite while shooting
   4A6A 0A                    9    .db   #0x0A	  ;;clock to change the sprite while is dying
                     000F    10 enemy_vector18_size = . - enemy_vector18
                              3 
                     0013     2 		_c=_c+1
   4A6B                       1 		DefineEntityDefault enemy_vector, \_c
                              1 
   4A6B                       2 	DefineEntity enemy_vector19, 0, 0, 1, 0, #0x08, #0x14, _enemy12_sp_0, ent_updEnemy, #0x03, 0, 0, #0x0A, #0x0A
   011D                       1 enemy_vector19: 
   011D                       2 	DefineDrawableEntity enemy_vector19_drawable, 0, 0, #0x08, #0x14, _enemy12_sp_0
   011D                       1 enemy_vector19_drawable:
   4A6B 00 00                 2 	.db 0, 0
   4A6D 08 14                 3 	.db #0x08, #0x14
   4A6F B3 2F                 4 	.dw _enemy12_sp_0
   4A71 01 00                 3    .db   1, 0     ;; VX, VY
   4A73 CF 4C                 4    .dw   ent_updEnemy         ;; Update
   4A75 03                    5    .db   #0x03		  ;;Clock to change sprite
   4A76 00                    6    .db   0       ;;Actual sprite 
   4A77 00                    7    .db   0    ;;If the enemy is shooting or not (0=not, 1=yes)
   4A78 0A                    8    .db   #0x0A	  ;;Clock to change sprite while shooting
   4A79 0A                    9    .db   #0x0A	  ;;clock to change the sprite while is dying
ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Zilog Z80 / Hitachi HD64180), page 67.
Hexadecimal [16-Bits]



                     000F    10 enemy_vector19_size = . - enemy_vector19
                              3 
                     0014     2 		_c=_c+1
                             30 
                             31 ;;default data for enemy in case we need to restart
   4A7A                      32 DefineEntity enemy_default, 0, 0, 1, 0, #0x08, #0x14, _enemy12_sp_0, ent_updEnemy, #0x03, 0, 0, #0x0A, #0x0A
   4A7A                       1 enemy_default: 
   012C                       2 	DefineDrawableEntity enemy_default_drawable, 0, 0, #0x08, #0x14, _enemy12_sp_0
   012C                       1 enemy_default_drawable:
   4A7A 00 00                 2 	.db 0, 0
   4A7C 08 14                 3 	.db #0x08, #0x14
   4A7E B3 2F                 4 	.dw _enemy12_sp_0
   4A80 01 00                 3    .db   1, 0     ;; VX, VY
   4A82 CF 4C                 4    .dw   ent_updEnemy         ;; Update
   4A84 03                    5    .db   #0x03		  ;;Clock to change sprite
   4A85 00                    6    .db   0       ;;Actual sprite 
   4A86 00                    7    .db   0    ;;If the enemy is shooting or not (0=not, 1=yes)
   4A87 0A                    8    .db   #0x0A	  ;;Clock to change sprite while shooting
   4A88 0A                    9    .db   #0x0A	  ;;clock to change the sprite while is dying
                     000F    10 enemy_default_size = . - enemy_default
   4A89                      33 DefineEntity enemy_window,  #0x40, #0x1D, 0, 0, #0x06, #0x0C, _enemy2_sp_0,  ent_updEnemy2, #0x03, #0xFF, #0x14, #0x0A, #0x0A
   4A89                       1 enemy_window: 
   013B                       2 	DefineDrawableEntity enemy_window_drawable, #0x40, #0x1D, #0x06, #0x0C, _enemy2_sp_0
   013B                       1 enemy_window_drawable:
   4A89 40 1D                 2 	.db #0x40, #0x1D
   4A8B 06 0C                 3 	.db #0x06, #0x0C
   4A8D 47 36                 4 	.dw _enemy2_sp_0
   4A8F 00 00                 3    .db   0, 0     ;; VX, VY
   4A91 BC 4B                 4    .dw   ent_updEnemy2         ;; Update
   4A93 03                    5    .db   #0x03		  ;;Clock to change sprite
   4A94 FF                    6    .db   #0xFF       ;;Actual sprite 
   4A95 14                    7    .db   #0x14    ;;If the enemy is shooting or not (0=not, 1=yes)
   4A96 0A                    8    .db   #0x0A	  ;;Clock to change sprite while shooting
   4A97 0A                    9    .db   #0x0A	  ;;clock to change the sprite while is dying
                     000F    10 enemy_window_size = . - enemy_window
                             34 
                     000F    35 k_size_entity = enemy_vector0_size 					;;size of each enemy     								;;how many enemies we can have of type 3 (type 3= close enemy sprite and pos y = 40)
                     0014    36 k_tot_enemies = 20 									;;total enemies
                     0003    37 animation_time = #0x03
                     000A    38 animation_time_shoot = #0x0A
                             39 
   4A98 01                   40 cont_ent_f1: .db 1       								;;how many enemies we can have of type 1 (type 1= far enemy sprite and pos y = 0), typ 1 is the default entity
   4A99 02                   41 cont_ent_f2: .db 2      								;;how many enemies we can have of type 2 (type 2= close enemy sprite and pos y = 20)
   4A9A 00                   42 cont_ent_f3: .db 0      								;;how many enemies we can have of type 3 (type 3= close enemy sprite and pos y = 40)
                             43 
                             44 
   4A9B 00                   45 active_enemies:		.db 00
   4A9C 00                   46 active_enemies_f1:  .db 00							;;active enemies of type 1
   4A9D 00                   47 active_enemies_f2: 	.db 00							;;active enemies of type 2
   4A9E 00                   48 active_enemies_f3:  .db 00							;;active enemies of type 3
                             49 
   4A9F 00                   50 active_window_enemy: .db 00
                             51 
   4AA0 4E 49                52 m_next_entity: .dw #enemy_vector
   4AA2 00 00                53 copy_enemy:    .dw 00
ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Zilog Z80 / Hitachi HD64180), page 68.
Hexadecimal [16-Bits]



                             54 
   4AA4 00                   55 shootEffect: .db #0
                             56 
   4AA5 01                   57 stay_mode: .db #1 	;mode stay (enemies dont move)
                             58 
                             59 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
                             60 ;;;;;;;;;;;;ENT_NEW;;;;;;;;;;;;;;;
                             61 ;;;;;;creates a new enemy ;;;;;;;;
                             62 ;;;;;destroys: a, b, hl, de;;;;;;;
                             63 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
                             64 
   4AA6                      65 ent_new:
                             66 
                             67 	;;if the array is full dont create a new enemy
   4AA6 06 14         [ 7]   68 	ld b, #k_tot_enemies
   4AA8 3A 9B 4A      [13]   69 	ld a, (active_enemies)
   4AAB 90            [ 4]   70 	sub b
   4AAC 28 11         [12]   71 	jr z, no_create_enemy
                             72 
                             73 	;;increments enemy counter
   4AAE 3A 9B 4A      [13]   74 	ld a, (active_enemies)
   4AB1 3C            [ 4]   75 	inc a
   4AB2 32 9B 4A      [13]   76 	ld (active_enemies), a
                             77 
                             78 	;;increments enemy pointer
   4AB5 2A A0 4A      [16]   79 	ld hl, (m_next_entity)
   4AB8 11 0F 00      [10]   80 	ld de, #k_size_entity
   4ABB 19            [11]   81 	add hl, de
   4ABC 22 A0 4A      [16]   82 	ld (m_next_entity), hl
                             83 
   4ABF                      84 no_create_enemy:
   4ABF C9            [10]   85 	ret
                             86 
                             87 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
                             88 ;;;;;;;;;;;ENT_NEW_TYPE1;;;;;;;;;;
                             89 ;;creates a new enemy of type 1 ;;
                             90 ;;;;;destroys: a, b, hl, de;;;;;;;
                             91 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
                             92 
   4AC0                      93 ent_new_type1:
                             94 
                             95 	;;check if we can create one of type 1
   4AC0 3A 98 4A      [13]   96 	ld a, (cont_ent_f1)
   4AC3 47            [ 4]   97 	ld b, a
   4AC4 3A 9C 4A      [13]   98 	ld a, (active_enemies_f1)
   4AC7 90            [ 4]   99 	sub b
   4AC8 28 16         [12]  100 	jr z, dont_create_f1
                            101 
   4ACA CD A6 4A      [17]  102 	call ent_new
                            103 
                            104 	;;increment counter of type 1
   4ACD 3A 9C 4A      [13]  105 	ld a, (active_enemies_f1)
   4AD0 3C            [ 4]  106 	inc a
   4AD1 32 9C 4A      [13]  107 	ld (active_enemies_f1), a
                            108 
ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Zilog Z80 / Hitachi HD64180), page 69.
Hexadecimal [16-Bits]



                            109 	;;and load last enemy created in hl to change some of its data
   4AD4 2A A0 4A      [16]  110 	ld hl, (m_next_entity)
   4AD7 11 0F 00      [10]  111 	ld de, #k_size_entity
   4ADA B7            [ 4]  112 	or a
   4ADB ED 52         [15]  113 	sbc hl, de
                            114 
                            115 	;;change pos Y
   4ADD 23            [ 6]  116 	inc hl
   4ADE 36 1E         [10]  117 	ld (hl), #30
   4AE0                     118 dont_create_f1:
   4AE0 C9            [10]  119 	ret
                            120 
                            121 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
                            122 ;;;;;;;;;;;ENT_NEW_TYPE2;;;;;;;;;;
                            123 ;;creates a new enemy of type 2 ;;
                            124 ;;;;;destroys: a, b, hl, de;;;;;;;
                            125 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
                            126 
   4AE1                     127 ent_new_type2:
                            128 
                            129 	;;check if we can create one of type 1
   4AE1 3A 99 4A      [13]  130 	ld a, (cont_ent_f2)
   4AE4 47            [ 4]  131 	ld b, a
   4AE5 3A 9D 4A      [13]  132 	ld a, (active_enemies_f2)
   4AE8 90            [ 4]  133 	sub b
   4AE9 28 26         [12]  134 	jr z, dont_create_f2
                            135 
   4AEB CD A6 4A      [17]  136 	call ent_new
                            137 
                            138 	;;increment counter of type 1
   4AEE 3A 9D 4A      [13]  139 	ld a, (active_enemies_f2)
   4AF1 3C            [ 4]  140 	inc a
   4AF2 32 9D 4A      [13]  141 	ld (active_enemies_f2), a
                            142 
                            143 	;;and load last enemy created in hl to change some of its data
   4AF5 2A A0 4A      [16]  144 	ld hl, (m_next_entity)
   4AF8 11 0F 00      [10]  145 	ld de, #k_size_entity
   4AFB B7            [ 4]  146 	or a
   4AFC ED 52         [15]  147 	sbc hl, de
                            148 
                            149 	;;change pos Y
   4AFE 23            [ 6]  150 	inc hl
   4AFF 36 34         [10]  151 	ld (hl), #52
                            152 
                            153 	;change pos x 
   4B01 3A 1A 52      [13]  154 	ld a, (level)
   4B04 3D            [ 4]  155 	dec a
   4B05 3D            [ 4]  156 	dec a
   4B06 28 09         [12]  157 	jr z, no_change_posX  ;if level2 no change pos x
                            158 		;; change pos X
   4B08 2B            [ 6]  159 		dec hl
   4B09 36 49         [10]  160 		ld (hl), #0x49	
                            161 		;;change velx
   4B0B 23            [ 6]  162 		inc hl
   4B0C 23            [ 6]  163 		inc hl
ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Zilog Z80 / Hitachi HD64180), page 70.
Hexadecimal [16-Bits]



   4B0D 23            [ 6]  164 		inc hl
   4B0E 23            [ 6]  165 		inc hl
                            166 
   4B0F 36 FF         [10]  167 		ld (hl), #-1
                            168 
   4B11                     169 	no_change_posX:
                            170 	
   4B11                     171 dont_create_f2:
   4B11 C9            [10]  172 	ret
                            173 
                            174 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
                            175 ;;;;;;;;;;;ENT_NEW_TYPE3;;;;;;;;;;
                            176 ;;creates a new enemy of type 3 ;;
                            177 ;;;;;destroys: a, b, hl, de;;;;;;;
                            178 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
                            179 
   4B12                     180 ent_new_type3:
                            181 
                            182 	;;check if we can create one of type 1
   4B12 3A 9A 4A      [13]  183 	ld a, (cont_ent_f3)
   4B15 47            [ 4]  184 	ld b, a
   4B16 3A 9E 4A      [13]  185 	ld a, (active_enemies_f3)
   4B19 90            [ 4]  186 	sub b
   4B1A 28 16         [12]  187 	jr z, dont_create_f3
                            188 
   4B1C CD A6 4A      [17]  189 	call ent_new
                            190 
                            191 	;;increment counter of type 1
   4B1F 3A 9E 4A      [13]  192 	ld a, (active_enemies_f3)
   4B22 3C            [ 4]  193 	inc a
   4B23 32 9E 4A      [13]  194 	ld (active_enemies_f3), a
                            195 
                            196 	;;and load last enemy created in hl to change some of its data
   4B26 2A A0 4A      [16]  197 	ld hl, (m_next_entity)
   4B29 11 0F 00      [10]  198 	ld de, #k_size_entity
   4B2C B7            [ 4]  199 	or a
   4B2D ED 52         [15]  200 	sbc hl, de
                            201 
                            202 	;;change pos Y
   4B2F 23            [ 6]  203 	inc hl
   4B30 36 4B         [10]  204 	ld (hl), #75
   4B32                     205 dont_create_f3:
   4B32 C9            [10]  206 	ret
                            207 
                            208 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
                            209 ;;;;;;;;;;;;ENT_COPY;;;;;;;;;;;;;;
                            210 ;;copies data from one enemy;;;;;;
                            211 ;;;;;;;;;;;;to oher ;;;;;;;;;;;;;;
                            212 ;;;;;destroys: hl, bc, de ;;;;;;;;
                            213 ;;;arguments: hl -> origin;;;;;;;;
                            214 ;;;;;;;;;;;;;;de -> destiny;;;;;;;
                            215 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
                            216 
   4B33                     217 ent_copy:
   4B33 01 0F 00      [10]  218 	ld bc, #k_size_entity
ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Zilog Z80 / Hitachi HD64180), page 71.
Hexadecimal [16-Bits]



   4B36 ED B0         [21]  219 	ldir
   4B38 C9            [10]  220 	ret
                            221 
                            222 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
                            223 ;;;;;;;;;;;ENT_DESTROY;;;;;;;;;;;;
                            224 ;;;;;; destroys an enemy ;;;;;;;;;
                            225 ;;;arguments: ix -> enemy to ;;;;;
                            226 ;;;;;;;;;;;;;destroy;;;;;;;;;;;;;;
                            227 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
                            228 
   4B39                     229 ent_destroy:
                            230 
                            231 	;;first of all we need to check what type of enemy it was (1,2 or 3)
   4B39 DD 7E 01      [19]  232 	ld a, de_y(ix)
   4B3C 06 1E         [ 7]  233 	ld b, #30
   4B3E 90            [ 4]  234 	sub b
   4B3F 20 0A         [12]  235 	jr nz, not_type_1
                            236 
                            237 	;;decrement type1
   4B41 3A 9C 4A      [13]  238 	ld a, (active_enemies_f1)
   4B44 3D            [ 4]  239 	dec a 
   4B45 32 9C 4A      [13]  240 	ld (active_enemies_f1), a
   4B48 C3 64 4B      [10]  241 	jp type_found
                            242 
   4B4B                     243 not_type_1:
   4B4B DD 7E 01      [19]  244 	ld a, de_y(ix)
   4B4E 06 34         [ 7]  245 	ld b, #52
   4B50 90            [ 4]  246 	sub b
   4B51 20 0A         [12]  247 	jr nz, not_type_2
                            248 	
                            249 	;;decrement type2
   4B53 3A 9D 4A      [13]  250 	ld a, (active_enemies_f2)
   4B56 3D            [ 4]  251 	dec a 
   4B57 32 9D 4A      [13]  252 	ld (active_enemies_f2), a 
   4B5A C3 64 4B      [10]  253 	jp type_found
                            254 
   4B5D                     255 not_type_2:
                            256 	;;decrement type3
   4B5D 3A 9E 4A      [13]  257 	ld a, (active_enemies_f3)
   4B60 3D            [ 4]  258 	dec a 
   4B61 32 9E 4A      [13]  259 	ld (active_enemies_f3)	, a
                            260 
   4B64                     261 type_found:
                            262 
   4B64 11 0F 00      [10]  263 	ld de, #k_size_entity
   4B67 2A A0 4A      [16]  264 	ld hl, (m_next_entity)
   4B6A B7            [ 4]  265 	or a
   4B6B ED 52         [15]  266 	sbc hl, de   				;;hl has de latest enemy created (our origin)
   4B6D DD 22 A2 4A   [20]  267 	ld (copy_enemy), ix
   4B71 ED 5B A2 4A   [20]  268 	ld de, (copy_enemy) 		;;we want to copy the data of the latest enemy to the enemy we are going to destroy, so we can just copy the default values on the last enemy of the array
                            269 
   4B75 CD 33 4B      [17]  270 	call ent_copy  				;;now we have two equal bullets. We just need to erase the last one
                            271 
   4B78 11 0F 00      [10]  272 	ld de, #k_size_entity
   4B7B 2A A0 4A      [16]  273 	ld hl, (m_next_entity)
ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Zilog Z80 / Hitachi HD64180), page 72.
Hexadecimal [16-Bits]



   4B7E B7            [ 4]  274 	or a
   4B7F ED 52         [15]  275 	sbc hl, de
   4B81 11 7A 4A      [10]  276 	ld de, #enemy_default		;;copying the default values on the last enemy is like we destroy it
                            277 
   4B84 EB            [ 4]  278 	ex de, hl
                            279 
   4B85 CD 33 4B      [17]  280 	call ent_copy
                            281 
                            282 	;;decrease the active enemy counter
   4B88 3A 9B 4A      [13]  283 	ld a, (active_enemies)
   4B8B 3D            [ 4]  284 	dec a 
   4B8C 32 9B 4A      [13]  285 	ld (active_enemies), a
                            286 
                            287 	;;and change the last bullet pointer
   4B8F 11 0F 00      [10]  288 	ld de, #k_size_entity
   4B92 2A A0 4A      [16]  289 	ld hl, (m_next_entity)
   4B95 B7            [ 4]  290 	or a
   4B96 ED 52         [15]  291 	sbc hl, de
   4B98 22 A0 4A      [16]  292 	ld (m_next_entity), hl
                            293 
   4B9B C9            [10]  294 	ret
                            295 
                            296 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
                            297 ;;;;;;;;;;;;ENT_DRAW ;;;;;;;;;;;;;
                            298 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
                            299 
   4B9C                     300 ent_draw:
   4B9C C3 BF 46      [10]  301 	jp render_draw
                            302 
                            303 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
                            304 ;;;;;;;;;;;ENT_UPDATE;;;;;;;;;;;;;
                            305 ;;;;calls the method wich the ;;;;
                            306 ;;entity has stored on its data;;;
                            307 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
                            308 
   4B9F                     309 ent_update:
                            310 
   4B9F DD 66 09      [19]  311 	ld     h, e_up_h(ix)
   4BA2 DD 6E 08      [19]  312    	ld     l, e_up_l(ix)
   4BA5 E9            [ 4]  313    	jp    (hl)
                            314 
                            315 
                            316 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
                            317 ;;;;;;;;;;;ENT_CLEAR ;;;;;;;;;;;;;
                            318 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
                            319 
   4BA6                     320 ent_clear:
   4BA6 C3 F1 46      [10]  321 	jp render_clear
                            322 
                            323 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
                            324 ;;;;;;;;;;;ENT_CHECKOBSTACLE ;;;;;;;;;;;;
                            325 ;;;;;;Check if obstacle is death ;;;;;;;;
                            326 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
                            327 
   4BA9                     328 ent_checkObstacleInc:
ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Zilog Z80 / Hitachi HD64180), page 73.
Hexadecimal [16-Bits]



                            329 	
   4BA9 23            [ 6]  330 	inc hl
   4BAA 23            [ 6]  331 	inc hl
   4BAB 23            [ 6]  332 	inc hl
   4BAC 23            [ 6]  333 	inc hl
   4BAD 23            [ 6]  334 	inc hl 	;;Obstacle's life
   4BAE 23            [ 6]  335 	inc hl
   4BAF 7E            [ 7]  336 	ld a, (hl)
   4BB0 3D            [ 4]  337 	dec a
                            338 
   4BB1 C9            [10]  339 ret
                            340 
   4BB2                     341 ent_checkObstacleDec:
   4BB2 2B            [ 6]  342 	dec hl
   4BB3 2B            [ 6]  343 	dec hl
   4BB4 2B            [ 6]  344 	dec hl
   4BB5 2B            [ 6]  345 	dec hl
   4BB6 2B            [ 6]  346 	dec hl 	
   4BB7 2B            [ 6]  347 	dec hl
   4BB8 CD BF 4D      [17]  348 	call ent_checkCollision
                            349 
   4BBB C9            [10]  350 ret
                            351 
                            352 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
                            353 ;;;;;;;;;ENT_UPDENEMY2 ;;;;;;;;;;;
                            354 ;;;;;;;Update window enemy;;;;;;;; 
                            355 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
                            356 
                            357 
   4BBC                     358 ent_updEnemy2:
                            359 
                            360 	;;Check if it's active
   4BBC 3A 9F 4A      [13]  361 	ld a, (active_window_enemy)
   4BBF 3D            [ 4]  362 	dec a
                            363 
   4BC0 FA C0 4C      [10]  364 	jp m, inactive  ;;if no active, no update
                            365 
                            366 	;;check animation
   4BC3 DD 7E 0D      [19]  367 	ld a, e_shClock(ix)
   4BC6 3D            [ 4]  368 	dec a
   4BC7 28 15         [12]  369 	jr z, start_updating 	;if 1, start update
                            370 
                            371 	;;Wait until there are enemies in all rows
                            372 
   4BC9 3A 9C 4A      [13]  373 	ld a, (active_enemies_f1)
   4BCC 3D            [ 4]  374 	dec a
   4BCD F8            [11]  375 	ret m 	;if no active enemies ret
   4BCE 3A 9D 4A      [13]  376 	ld a, (active_enemies_f2)
   4BD1 3D            [ 4]  377 	dec a
   4BD2 F8            [11]  378 	ret m 	;if no active enemies ret
   4BD3 3A 9E 4A      [13]  379 	ld a, (active_enemies_f3)
   4BD6 3D            [ 4]  380 	dec a
   4BD7 F8            [11]  381 	ret m 	;if no active enemies ret
                            382 
                            383 	;;When all rows active
ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Zilog Z80 / Hitachi HD64180), page 74.
Hexadecimal [16-Bits]



   4BD8 3E 01         [ 7]  384 	ld a, #1
   4BDA DD 77 0D      [19]  385 	ld e_shClock(ix), a
                            386 
   4BDD C9            [10]  387 	ret
                            388 
   4BDE                     389 	start_updating:
                            390 
   4BDE DD 7E 0B      [19]  391 	ld a, e_spAct(ix)
   4BE1 3D            [ 4]  392 	dec a
   4BE2 F2 01 4C      [10]  393 	jp p, actua_e2			;; Check current sprite, if not negative, enemy is attacking
                            394 
   4BE5 DD 7E 0C      [19]  395 	ld a, e_shooting(ix) 	;; If its 0, check if its going to attack now or not
   4BE8 3D            [ 4]  396 	dec a
   4BE9 20 0E         [12]  397 	jr nz, no_actua 		;;;===== if not 0 change the sprite
                            398 
   4BEB 3E 01         [ 7]  399 	ld a, #0x01
   4BED DD 77 0B      [19]  400 	ld e_spAct(ix), a
   4BF0 21 8F 36      [10]  401 	ld hl, #_enemy2_sp_1
   4BF3 DD 74 05      [19]  402 	ld de_sp_h(ix), h
   4BF6 DD 75 04      [19]  403 	ld de_sp_l(ix), l
                            404 
   4BF9                     405 	no_actua:				;;;===== If not 0, dec e_shooting 
                            406 
   4BF9 DD 7E 0C      [19]  407 	ld a, e_shooting(ix)
   4BFC 3D            [ 4]  408 	dec a
   4BFD DD 77 0C      [19]  409 	ld e_shooting(ix), a
                            410 
   4C00 C9            [10]  411 	ret
                            412 
   4C01                     413 	actua_e2: 				;; check if enemy its getting closer or going to shoot
                            414 
   4C01 DD 7E 0B      [19]  415 	ld a, e_spAct(ix)
   4C04 3D            [ 4]  416 	dec a
   4C05 28 66         [12]  417 	jr z, se_acerca 		;; if 0, enemy is getting closer
   4C07 3D            [ 4]  418 	dec a
   4C08 20 1A         [12]  419 	jr nz, se_mantiene
                            420 
   4C0A                     421 	continuo_con_lo_mio_2:
                            422 
   4C0A CD EA 44      [17]  423 	call bul_new
                            424 	;;hl -> bullet de_y
   4C0D 23            [ 6]  425 	inc hl
   4C0E 23            [ 6]  426 	inc hl
   4C0F 23            [ 6]  427 	inc hl
   4C10 23            [ 6]  428 	inc hl
   4C11 23            [ 6]  429 	inc hl
   4C12 36 FF         [10]  430 	ld (hl), #-1
                            431 
                            432 
   4C14 3E 01         [ 7]  433 	ld a, #1
   4C16 32 A4 4A      [13]  434 	ld (shootEffect), a
                            435 
   4C19 3E 14         [ 7]  436 	ld a, #0x14
   4C1B DD 77 0A      [19]  437 	ld e_anim(ix), a
   4C1E 3E 04         [ 7]  438 	ld a, #0x04
ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Zilog Z80 / Hitachi HD64180), page 75.
Hexadecimal [16-Bits]



   4C20 DD 77 0B      [19]  439 	ld e_spAct(ix), a 
                            440 
   4C23 C9            [10]  441 	ret
                            442 
   4C24                     443 	se_mantiene:
                            444 
   4C24 DD 7E 0A      [19]  445 		ld a, e_anim(ix)
   4C27 3D            [ 4]  446 		dec a
   4C28 20 2A         [12]  447 		jr nz, continua_stoppeado
                            448 
   4C2A CD 21 4E      [17]  449 		call check_space_pressed
   4C2D 28 0C         [12]  450 		jr z, continuo_con_lo_mio
                            451 
                            452 		;;check collisions gun with enemy
                            453 
   4C2F 21 27 52      [10]  454 		ld hl, #shoot_data
   4C32 CD BF 4D      [17]  455 		call ent_checkCollision
   4C35 47            [ 4]  456 		ld b, a
   4C36 3E 01         [ 7]  457 		ld a, #1
   4C38 90            [ 4]  458 		sub b
   4C39 28 69         [12]  459 		jr z, lo_aniquilo
                            460 
   4C3B                     461 		continuo_con_lo_mio:
                            462 
   4C3B 3E 14         [ 7]  463 		ld a, #0x14
   4C3D DD 77 0A      [19]  464 		ld e_anim(ix), a
   4C40 21 47 36      [10]  465 		ld hl, #_enemy2_sp_0
   4C43 DD 74 05      [19]  466 		ld de_sp_h(ix), h
   4C46 DD 75 04      [19]  467 		ld de_sp_l(ix), l
   4C49 3E FF         [ 7]  468 		ld a, #0xFF
   4C4B DD 77 0C      [19]  469 		ld e_shooting(ix), a
   4C4E 3E 00         [ 7]  470 		ld a, #0x00
   4C50 DD 77 0B      [19]  471 		ld e_spAct(ix), a 
                            472 
   4C53 C9            [10]  473 		ret
                            474 
   4C54                     475 		continua_stoppeado:
                            476 
   4C54 CD 21 4E      [17]  477 		call check_space_pressed
   4C57 28 0C         [12]  478 		jr z, continuo_con_lo_mio_3
                            479 
                            480 		;;check collisions gun with enemy
                            481 
   4C59 21 27 52      [10]  482 		ld hl, #shoot_data
   4C5C CD BF 4D      [17]  483 		call ent_checkCollision
   4C5F 47            [ 4]  484 		ld b, a
   4C60 3E 01         [ 7]  485 		ld a, #1
   4C62 90            [ 4]  486 		sub b
   4C63 28 3F         [12]  487 		jr z, lo_aniquilo
                            488 
   4C65                     489 		continuo_con_lo_mio_3:
                            490 
   4C65 DD 7E 0A      [19]  491 		ld a, e_anim(ix)
   4C68 3D            [ 4]  492 		dec a 
   4C69 DD 77 0A      [19]  493 		ld e_anim(ix), a
ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Zilog Z80 / Hitachi HD64180), page 76.
Hexadecimal [16-Bits]



                            494 
   4C6C C9            [10]  495 	ret
                            496 
   4C6D                     497 	se_acerca:
                            498 
   4C6D CD 21 4E      [17]  499 	call check_space_pressed
   4C70 28 0C         [12]  500 	jr z, continuo_con_lo_mio_4
                            501 
                            502 	;;check collisions gun with enemy
                            503 
   4C72 21 27 52      [10]  504 	ld hl, #shoot_data
   4C75 CD BF 4D      [17]  505 	call ent_checkCollision
   4C78 47            [ 4]  506 	ld b, a
   4C79 3E 01         [ 7]  507 	ld a, #1
   4C7B 90            [ 4]  508 	sub b
   4C7C 28 26         [12]  509 	jr z, lo_aniquilo
                            510 
   4C7E                     511 	continuo_con_lo_mio_4:
                            512 
   4C7E DD 7E 0A      [19]  513 	ld a, e_anim(ix) 		;; if animation = 0, change sprite to shooting sprite
   4C81 3D            [ 4]  514 	dec a
   4C82 20 18         [12]  515 	jr nz, no_cambies_na
                            516 
   4C84 3E 02         [ 7]  517 	ld a, #0x02
   4C86 DD 77 0B      [19]  518 	ld e_spAct(ix), a
   4C89 21 D7 36      [10]  519 	ld hl, #_enemy2_sp_2
   4C8C DD 74 05      [19]  520 	ld de_sp_h(ix), h
   4C8F DD 75 04      [19]  521 	ld de_sp_l(ix), l
   4C92 3E 03         [ 7]  522 	ld a, #0x03 
   4C94 DD 77 0A      [19]  523 	ld e_anim(ix), a
   4C97 3E 03         [ 7]  524 	ld a, #3
   4C99 DD 77 0E      [19]  525 	ld e_shDie(ix), a
                            526 
   4C9C                     527 	no_cambies_na:
                            528 
   4C9C DD 7E 0A      [19]  529 	ld a, e_anim(ix) 		;; update animacion counter
   4C9F 3D            [ 4]  530 	dec a
   4CA0 DD 77 0A      [19]  531 	ld e_anim(ix), a
                            532 	
   4CA3 C9            [10]  533 	ret
                            534 
   4CA4                     535 	lo_aniquilo:
                            536 
   4CA4 3E 14         [ 7]  537 	ld a, #0x14
   4CA6 DD 77 0A      [19]  538 	ld e_anim(ix), a
   4CA9 21 47 36      [10]  539 	ld hl, #_enemy2_sp_0
   4CAC DD 74 05      [19]  540 	ld de_sp_h(ix), h
   4CAF DD 75 04      [19]  541 	ld de_sp_l(ix), l
   4CB2 3E FF         [ 7]  542 	ld a, #0xFF
   4CB4 DD 77 0C      [19]  543 	ld e_shooting(ix), a
   4CB7 3E 00         [ 7]  544 	ld a, #0x00
   4CB9 DD 77 0B      [19]  545 	ld e_spAct(ix), a
                            546 
   4CBC CD CE 53      [17]  547 	call get_Enemy
                            548 
ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Zilog Z80 / Hitachi HD64180), page 77.
Hexadecimal [16-Bits]



   4CBF C9            [10]  549 	ret
                            550 
   4CC0                     551 inactive:
                            552 
                            553 	;;Empty window
   4CC0 3E 00         [ 7]  554 	ld a, #0x00
   4CC2 DD 77 0B      [19]  555 	ld e_spAct(ix), a
   4CC5 21 47 36      [10]  556 	ld hl, #_enemy2_sp_0
   4CC8 DD 74 05      [19]  557 	ld de_sp_h(ix), h
   4CCB DD 75 04      [19]  558 	ld de_sp_l(ix), l
                            559 
   4CCE C9            [10]  560 	ret
                            561 
                            562 
                            563 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
                            564 ;;;;;;;;;ENT_UPDENEMY ;;;;;;;;;;;;
                            565 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
                            566 
   4CCF                     567 ent_updEnemy:
                            568 
                            569 	;;check the state of the enemy before updating
   4CCF DD 7E 0C      [19]  570 	ld a, e_shooting(ix)
   4CD2 3D            [ 4]  571 	dec a 
   4CD3 28 6A         [12]  572 	jr z, change_sprite_shoot ;;state is 1 (shooting)
   4CD5 3D            [ 4]  573 	dec a 
   4CD6 28 79         [12]  574 	jr z, change_sprite_dead  ;;state is 2 (dead)
                            575 
   4CD8 3A A5 4A      [13]  576 	ld a, (stay_mode)
   4CDB 3D            [ 4]  577 	dec a
   4CDC 20 07         [12]  578 	jr nz, no_stay_mode
                            579 
   4CDE CD B8 4E      [17]  580 		call shoot_sprite
   4CE1 DD 36 0C 00   [19]  581 		ld e_shooting(ix), #0
                            582 
   4CE5                     583 	no_stay_mode:
                            584 
   4CE5 3A A5 4A      [13]  585 	ld a, (stay_mode)
   4CE8 3D            [ 4]  586 	dec a
   4CE9 28 03         [12]  587 	jr z, no_move
                            588 
   4CEB CD 79 4D      [17]  589 		call ent_move
                            590 
   4CEE                     591 	no_move:
                            592 
   4CEE CD 21 4E      [17]  593 	call check_space_pressed
   4CF1 28 3F         [12]  594 	jr z, no_pulsada
                            595 
                            596 	;;check collisions gun with enemy
                            597 
   4CF3 21 27 52      [10]  598 	ld hl, #shoot_data
   4CF6 CD BF 4D      [17]  599 	call ent_checkCollision
   4CF9 47            [ 4]  600 	ld b, a
   4CFA 3E 01         [ 7]  601 	ld a, #1
   4CFC 90            [ 4]  602 	sub b
   4CFD 20 33         [12]  603 	jr nz, no_pulsada
ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Zilog Z80 / Hitachi HD64180), page 78.
Hexadecimal [16-Bits]



                            604 
   4CFF 21 98 47      [10]  605 	ld hl, #obstacle 			;;check collisions gun with obstacle
   4D02 CD A9 4B      [17]  606 	call ent_checkObstacleInc
   4D05 FA 11 4D      [10]  607 	jp m, barril1_muerto
   4D08 CD B2 4B      [17]  608 	call ent_checkObstacleDec
   4D0B 47            [ 4]  609 	ld b, a 
   4D0C 3E 01         [ 7]  610 	ld a, #1 
   4D0E 90            [ 4]  611 	sub b
   4D0F 28 21         [12]  612 	jr z, no_pulsada 			;;obstacle 1 block the bullet, enemy dont die
   4D11                     613 	barril1_muerto:
   4D11 21 9F 47      [10]  614 	ld hl, #obstacle2 			;;Check colisions gun with obstacle 2
   4D14 CD A9 4B      [17]  615 	call ent_checkObstacleInc
   4D17 FA 23 4D      [10]  616 	jp m, barril2_muerto
   4D1A CD B2 4B      [17]  617 	call ent_checkObstacleDec
   4D1D 47            [ 4]  618 	ld b, a 
   4D1E 3E 01         [ 7]  619 	ld a, #1 
   4D20 90            [ 4]  620 	sub b
   4D21 28 0F         [12]  621 	jr z, no_pulsada 			;; Obstacle 2 block bullet, enemy dont die
   4D23                     622 	barril2_muerto:
   4D23 21 A6 47      [10]  623 	ld hl, #mastil 				;;Check collisions gun with mast
   4D26 CD BF 4D      [17]  624 	call ent_checkCollision
   4D29 47            [ 4]  625 	ld b, a
   4D2A 3E 01         [ 7]  626 	ld a, #1
   4D2C 90            [ 4]  627 	sub b
   4D2D 28 03         [12]  628 	jr z, no_pulsada
   4D2F CD C6 4E      [17]  629 	call dead_sprite	  ;;kill the enemy
                            630 	
                            631 
   4D32                     632 no_pulsada:
                            633 
                            634 	;if stay mode on, enemies dont move
   4D32 3A A5 4A      [13]  635 	ld a, (stay_mode)
   4D35 3D            [ 4]  636 	dec a
   4D36 28 03         [12]  637 	jr z, no_move2
                            638 
   4D38 CD 2B 4E      [17]  639 		call ent_animation
                            640 
   4D3B                     641 	no_move2:
                            642 
   4D3B CD 8D 4E      [17]  643 	call shoot
                            644 
   4D3E                     645 dont_update:
   4D3E C9            [10]  646 	ret
                            647 
   4D3F                     648 change_sprite_shoot:
   4D3F DD 7E 0D      [19]  649 	ld a, e_shClock(ix)
   4D42 3D            [ 4]  650 	dec a
   4D43 20 06         [12]  651 	jr nz, continue_being_stop
   4D45 3E 0A         [ 7]  652 	ld a, #animation_time_shoot
   4D47 DD 36 0C 00   [19]  653 	ld e_shooting(ix), #0
   4D4B                     654 continue_being_stop:
   4D4B DD 77 0D      [19]  655 	ld e_shClock(ix), a
   4D4E C3 3E 4D      [10]  656 	jp dont_update
                            657 
   4D51                     658 change_sprite_dead:
ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Zilog Z80 / Hitachi HD64180), page 79.
Hexadecimal [16-Bits]



   4D51 DD 7E 0E      [19]  659 	ld a, e_shDie(ix)
   4D54 3D            [ 4]  660 	dec a
   4D55 20 0C         [12]  661 	jr nz, continue_being_dead
   4D57 CD 37 47      [17]  662 	call render_clear_asset_both
   4D5A CD 39 4B      [17]  663 	call ent_destroy	  ;;kill the enemy
   4D5D CD CE 53      [17]  664 	call get_Enemy		  ;;update enemy counter
   4D60 C3 3E 4D      [10]  665 	jp dont_update
   4D63                     666 continue_being_dead:
                            667 
   4D63 4F            [ 4]  668 	ld c, a
   4D64 06 04         [ 7]  669 	ld b, #0x04
   4D66 90            [ 4]  670 	sub b
   4D67 20 09         [12]  671 	jr nz, dont_change_dead_sprite
   4D69 21 B3 34      [10]  672 	ld hl, #_enemy12_sp_8
   4D6C DD 74 05      [19]  673 	ld de_sp_h(ix), h
   4D6F DD 75 04      [19]  674 	ld de_sp_l(ix), l
                            675 
   4D72                     676 dont_change_dead_sprite:
   4D72 79            [ 4]  677 	ld a, c
   4D73 DD 77 0E      [19]  678 	ld e_shDie(ix), a
   4D76 C3 3E 4D      [10]  679 	jp dont_update
                            680 
                            681 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
                            682 ;;;;;;;;;;;;ENT_MOVE;;;;;;;;;;;;;;
                            683 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
                            684 
   4D79                     685 ent_move:
                            686 
   4D79 DD 7E 01      [19]  687 	ld a, de_y(ix)
   4D7C D6 1E         [ 7]  688 	sub #30
   4D7E 20 07         [12]  689 	jr nz, isnt_type_1
                            690 
   4D80 DD 7E 00      [19]  691 	ld a, de_x(ix)
   4D83 D6 35         [ 7]  692 	sub #0x35
   4D85 28 1D         [12]  693 	jr z, move_left
                            694 
   4D87                     695 isnt_type_1:
   4D87 DD 7E 00      [19]  696    	ld a, de_x(ix)
   4D8A D6 48         [ 7]  697 	sub #0x48
   4D8C 28 16         [12]  698 	jr z, move_left
   4D8E F2 A4 4D      [10]  699 	jp p, move_left
                            700 
   4D91 DD 7E 00      [19]  701 	ld a, de_x(ix)
   4D94 3D            [ 4]  702 	dec a
   4D95 FA 9C 4D      [10]  703 	jp m, move_right
                            704 
   4D98 CD AC 4D      [17]  705 	call ent_change_velocity
                            706 
   4D9B C9            [10]  707 	ret
                            708 
   4D9C                     709 move_right:
   4D9C DD 36 06 01   [19]  710 	ld e_vx(ix),#+1
   4DA0 CD AC 4D      [17]  711 	call ent_change_velocity
   4DA3 C9            [10]  712 	ret
                            713 
ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Zilog Z80 / Hitachi HD64180), page 80.
Hexadecimal [16-Bits]



   4DA4                     714 move_left:
   4DA4 DD 36 06 FF   [19]  715 	ld e_vx(ix),#-1
   4DA8 CD AC 4D      [17]  716 	call ent_change_velocity
   4DAB C9            [10]  717 	ret
                            718 
   4DAC                     719 ent_change_velocity:
                            720 
   4DAC DD 7E 00      [19]  721    	ld    a, de_x(ix) 
   4DAF DD 86 06      [19]  722    	add   e_vx(ix)
   4DB2 DD 77 00      [19]  723    	ld    de_x(ix), a
                            724 
   4DB5 DD 7E 01      [19]  725    	ld    a, de_y(ix) 
   4DB8 DD 86 07      [19]  726    	add   e_vy(ix)
   4DBB DD 77 01      [19]  727    	ld    de_y(ix), a
                            728 
   4DBE C9            [10]  729 	ret
                            730 
                            731 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
                            732 ;;;;;;;;ENT_CHECKCOLISSION ;;;;;;;
                            733 ;;Check collision enemy with shoot;;
                            734 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
                            735 
   4DBF                     736 ent_checkCollision:
                            737 
                            738 	;;Check collision enemy - shoot
   4DBF DD 7E 00      [19]  739 	ld a, de_x(ix) 		  ;;a=enemy_x
   4DC2 DD 46 02      [19]  740 	ld b, de_w(ix)		  ;;b=enemy_w
   4DC5 80            [ 4]  741 	add b         		  ;;a=enemy_x+enemy_w
   4DC6 46            [ 7]  742 	ld b, (hl)     		  ;;b=shoot_x
   4DC7 90            [ 4]  743 	sub b 				  ;;a=(enemy_x+enemy_w)-shoot_x
   4DC8 28 35         [12]  744 	jr z, no_collision
   4DCA FA FF 4D      [10]  745 	jp m, no_collision
                            746 
                            747 	;;Check collision shoot - enemy
   4DCD 7E            [ 7]  748 	ld a, (hl) 		  	  ;;a=shoot_x
   4DCE 23            [ 6]  749 	inc hl
   4DCF 23            [ 6]  750 	inc hl
   4DD0 46            [ 7]  751 	ld b, (hl)			  ;;b=shoot_w
   4DD1 80            [ 4]  752 	add b         		  ;;a=shoot_x+shoot_w
   4DD2 DD 46 00      [19]  753 	ld b, de_x(ix)   	  ;;b=enemy_x
   4DD5 90            [ 4]  754 	sub b 				  ;;a=(shoot_x+shoot_w)-enemy_x
   4DD6 28 27         [12]  755 	jr z, no_collision 	  
   4DD8 FA FF 4D      [10]  756 	jp m, no_collision
                            757 
                            758 	;;check collision  shoot
                            759 						  ;;  -
                            760 						  ;; enemy
                            761 
   4DDB 2B            [ 6]  762 	dec hl				  ;;hl apunta a shoot_y
   4DDC 7E            [ 7]  763 	ld a, (hl)            ;;a=shoot_y
   4DDD 23            [ 6]  764 	inc hl
   4DDE 23            [ 6]  765 	inc hl				  ;;hl apunta a shoot_h
   4DDF 46            [ 7]  766 	ld b, (hl) 		  	  ;;a=shoot_h
   4DE0 80            [ 4]  767 	add b         		  ;;a=shoot_y+shoot_h
   4DE1 DD 46 01      [19]  768 	ld b, de_y(ix)   	  ;;b=enemy_y
ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Zilog Z80 / Hitachi HD64180), page 81.
Hexadecimal [16-Bits]



   4DE4 90            [ 4]  769 	sub b 				  ;;a=(shoot_y+shoot_h)-enemy_y
   4DE5 28 18         [12]  770 	jr z, no_collision 	  
   4DE7 FA FF 4D      [10]  771 	jp m, no_collision
                            772 
                            773 	;;check collision  enemy
                            774 						  ;;  -
                            775 						  ;; shoot
                            776 
   4DEA DD 7E 01      [19]  777 	ld a, de_y(ix)        ;;a=enemy_y
   4DED DD 46 03      [19]  778 	ld b, de_h(ix)	  	  ;;a=enemy_h
   4DF0 80            [ 4]  779 	add b         		  ;;a=enemy_y+enemy_h
   4DF1 2B            [ 6]  780 	dec hl
   4DF2 2B            [ 6]  781 	dec hl 				  ;;hl apunta a shoot_y
   4DF3 46            [ 7]  782 	ld b, (hl)			  ;;b=shoot_y
   4DF4 90            [ 4]  783 	sub b 				  ;;a=(shoot_y+shoot_h)-enemy_y
   4DF5 28 08         [12]  784 	jr z, no_collision 	  
   4DF7 FA FF 4D      [10]  785 	jp m, no_collision
                            786 
   4DFA 3E 01         [ 7]  787 	ld a, #1
   4DFC C3 01 4E      [10]  788 	jp dont_do_anything
                            789 
   4DFF                     790 no_collision:
   4DFF 3E 00         [ 7]  791 	ld a, #0
   4E01                     792 dont_do_anything:
   4E01 C9            [10]  793 	ret
                            794 
                            795 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
                            796 ;;;;;;;;;;ENT_DOFORALL ;;;;;;;;;;;
                            797 ;;;calls the method stored in HL;;
                            798 ;;for the all the enemies stored;;
                            799 ;;;;;;;;;;in the vector;;;;;;;;;;;
                            800 ;;;;;;destroys: a, ix, bc, hl ;;;;
                            801 ;;arguments: hl ->method to call;;
                            802 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
                            803 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
                            804 
   4E02                     805 ent_doForAll:
                            806 
                            807 	;;check if there are no enemies created
   4E02 3A 9B 4A      [13]  808 	ld a, (active_enemies)
   4E05 3D            [ 4]  809 	dec a
   4E06 FA 20 4E      [10]  810 	jp m, no_enemies
                            811 
   4E09 3A 9B 4A      [13]  812 	ld a, (active_enemies) ;;number of enemies
   4E0C DD 21 4E 49   [14]  813 	ld ix, #enemy_vector
   4E10 22 15 4E      [16]  814 	ld (metodo), hl
   4E13                     815 vuelve:
   4E13 F5            [11]  816 	push af ;;ENT DRAW DESTROYS A, SO I SAVE IT
                     04C7   817 	metodo = . + 1
   4E14 CD 9C 4B      [17]  818 	call ent_draw
   4E17 F1            [10]  819 	pop af 	;;RECOVER A
   4E18 01 0F 00      [10]  820 	ld bc, #k_size_entity ;;size entity
   4E1B DD 09         [15]  821 	add ix, bc
   4E1D 3D            [ 4]  822 	dec a
   4E1E 20 F3         [12]  823 	jr nz, vuelve
ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Zilog Z80 / Hitachi HD64180), page 82.
Hexadecimal [16-Bits]



                            824 
   4E20                     825 no_enemies:
                            826 
   4E20 C9            [10]  827 	ret
                            828 
                            829 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
                            830 ;;;;;;;;CHECK_SPACE_PRESSED;;;;;;;
                            831 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
                            832 
   4E21                     833 check_space_pressed:
                            834 
   4E21 CD D1 61      [17]  835 	call cpct_scanKeyboard_asm 
                            836 
   4E24 21 05 80      [10]  837 	ld hl, #Key_Space
   4E27 CD 9D 56      [17]  838 	call cpct_isKeyPressed_asm  ;;z=0 no pulsada, z!=0 pulsada
                            839 
   4E2A C9            [10]  840 	ret
                            841 
                            842 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
                            843 ;;;;;;;;;;ENT_ANIMATION ;;;;;;;;;;
                            844 ;;;;;Enemy running animation ;;;;;
                            845 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
                            846 
   4E2B                     847 ent_animation:
                            848 
   4E2B DD 7E 0C      [19]  849 	ld a, e_shooting(ix) ;;if the enemy is dying
   4E2E 3D            [ 4]  850 	dec a
   4E2F 3D            [ 4]  851 	dec a
   4E30 28 5A         [12]  852 	jr z, is_dead
                            853 
   4E32 DD 7E 0A      [19]  854 	ld a, e_anim(ix)
   4E35 3D            [ 4]  855 	dec a
   4E36 20 51         [12]  856 	jr nz, continue
                            857 
                            858 
   4E38 DD 7E 06      [19]  859 	ld a, e_vx(ix)
   4E3B 3D            [ 4]  860 	dec a
   4E3C 28 23         [12]  861 	jr z, not_flip
                            862 
   4E3E DD 7E 0B      [19]  863 	ld a, e_spAct(ix)
                            864 	
   4E41 21 D3 32      [10]  865 	ld hl, #_enemy12_sp_5
   4E44 DD 36 0B 01   [19]  866 	ld e_spAct(ix), #1
   4E48 3D            [ 4]  867 	dec a 
   4E49 FA 81 4E      [10]  868 	jp m, ya
   4E4C 21 33 32      [10]  869 	ld hl, #_enemy12_sp_4
   4E4F DD 36 0B 02   [19]  870 	ld e_spAct(ix), #2
   4E53 3D            [ 4]  871 	dec a
   4E54 FA 81 4E      [10]  872 	jp m, ya
   4E57 21 93 31      [10]  873 	ld hl, #_enemy12_sp_3
   4E5A DD 36 0B 00   [19]  874 	ld e_spAct(ix), #0
                            875 
   4E5E C3 81 4E      [10]  876 	jp ya
                            877 
   4E61                     878 not_flip:
ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Zilog Z80 / Hitachi HD64180), page 83.
Hexadecimal [16-Bits]



                            879 
   4E61 DD 7E 0B      [19]  880 	ld a, e_spAct(ix)
                            881 	
   4E64 21 B3 2F      [10]  882 	ld hl, #_enemy12_sp_0
   4E67 DD 36 0B 01   [19]  883 	ld e_spAct(ix), #1
   4E6B 3D            [ 4]  884 	dec a 
   4E6C FA 81 4E      [10]  885 	jp m, ya
   4E6F 21 53 30      [10]  886 	ld hl, #_enemy12_sp_1
   4E72 DD 36 0B 02   [19]  887 	ld e_spAct(ix), #2
   4E76 3D            [ 4]  888 	dec a
   4E77 FA 81 4E      [10]  889 	jp m, ya
   4E7A 21 F3 30      [10]  890 	ld hl, #_enemy12_sp_2
   4E7D DD 36 0B 00   [19]  891 	ld e_spAct(ix), #0
                            892 
   4E81                     893 ya:
                            894 
   4E81 DD 74 05      [19]  895 	ld de_sp_h(ix), h
   4E84 DD 75 04      [19]  896 	ld de_sp_l(ix), l
                            897 
   4E87 3E 03         [ 7]  898 	ld a, #animation_time
                            899 
   4E89                     900 continue:
                            901 
   4E89 DD 77 0A      [19]  902 	ld e_anim(ix), a
   4E8C                     903 is_dead:
   4E8C C9            [10]  904 	ret
                            905 
                            906 
                            907 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
                            908 ;;;;;;;;;;;;;SHOOT ;;;;;;;;;;;;;;;
                            909 ;;;;;; Enemy random shoot;;;;;;;;;
                            910 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
                            911 
   4E8D                     912 shoot:
                            913 
   4E8D CD 8F 61      [17]  914 	call cpct_getRandom_mxor_u8_asm ;;return in l random number from 00 to ff
   4E90 3E E0         [ 7]  915 	ld a, #0xE0
   4E92 95            [ 4]  916 	sub a, l
   4E93 20 0B         [12]  917 	jr nz, dont_shoot
   4E95 CD B8 4E      [17]  918 	call shoot_sprite
   4E98 CD EA 44      [17]  919 	call bul_new
   4E9B 3E 01         [ 7]  920 	ld a, #1
   4E9D 32 A4 4A      [13]  921 	ld (shootEffect), a
                            922 
   4EA0                     923 dont_shoot:
   4EA0 C9            [10]  924 	ret
                            925 
                            926 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
                            927 ;;;;;;;;;;;RESET_ENEMIES;;;;;;;;;;
                            928 ;;;;;;; Delete all enemies ;;;;;;;
                            929 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
                            930 
   4EA1                     931 reset_enemies:
                            932 
   4EA1 3A 9B 4A      [13]  933 	ld a, (active_enemies)
ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Zilog Z80 / Hitachi HD64180), page 84.
Hexadecimal [16-Bits]



   4EA4 3D            [ 4]  934 	dec a
   4EA5 FA B7 4E      [10]  935 	jp m, not_reset
   4EA8 3A 9B 4A      [13]  936 	ld a, (active_enemies)
   4EAB                     937 non_stop:
   4EAB DD 21 4E 49   [14]  938 	ld ix, #enemy_vector
   4EAF F5            [11]  939 	push af
   4EB0 CD 39 4B      [17]  940 	call ent_destroy
   4EB3 F1            [10]  941 	pop af 
   4EB4 3D            [ 4]  942 	dec a
   4EB5 20 F4         [12]  943 	jr nz, non_stop
   4EB7                     944 not_reset:
   4EB7 C9            [10]  945 	ret
                            946 
                            947 
                            948 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
                            949 ;;;;;;;;;;;SHOOT_SPRITE;;;;;;;;;;;
                            950 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
                            951 
   4EB8                     952 shoot_sprite:
                            953 
   4EB8 21 73 33      [10]  954 	ld hl, #_enemy12_sp_6
                            955 
   4EBB DD 74 05      [19]  956 	ld de_sp_h(ix), h
   4EBE DD 75 04      [19]  957 	ld de_sp_l(ix), l
                            958 
   4EC1 DD 36 0C 01   [19]  959 	ld e_shooting(ix), #1
   4EC5 C9            [10]  960 	ret
                            961 
                            962 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
                            963 ;;;;;;;;;;;DEAD_SPRITE;;;;;;;;;;;;
                            964 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
                            965 
   4EC6                     966 dead_sprite:
                            967 
   4EC6 CD 37 47      [17]  968 	call render_clear_asset_both
                            969 
   4EC9 21 13 34      [10]  970 	ld hl, #_enemy12_sp_7
                            971 
   4ECC DD 74 05      [19]  972 	ld de_sp_h(ix), h
   4ECF DD 75 04      [19]  973 	ld de_sp_l(ix), l
                            974 
   4ED2 DD 36 0C 02   [19]  975 	ld e_shooting(ix), #2
   4ED6 C9            [10]  976 	ret
                            977 
                            978 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
                            979 ;;;;;;;;;;Start Level 1;;;;;;;;;;;
                            980 ;;; Set parameters for level 1 ;;;
                            981 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
                            982 
   4ED7                     983 ent_start_level_1:
                            984 
                            985 	;;Stay mode on
   4ED7 3E 01         [ 7]  986 	ld a, #1
   4ED9 32 A5 4A      [13]  987 	ld (stay_mode), a
                            988 
ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Zilog Z80 / Hitachi HD64180), page 85.
Hexadecimal [16-Bits]



                            989 	;Number of enemies in each row
   4EDC 3E 01         [ 7]  990 	ld a, #1
   4EDE 32 98 4A      [13]  991 	ld (cont_ent_f1), a
   4EE1 3E 01         [ 7]  992 	ld a, #1
   4EE3 32 99 4A      [13]  993 	ld (cont_ent_f2), a
   4EE6 3E 01         [ 7]  994 	ld a, #1
   4EE8 32 9A 4A      [13]  995 	ld (cont_ent_f3), a
                            996 
                            997 	;;Create stay enemies
   4EEB CD C0 4A      [17]  998 	call ent_new_type1
                            999 	;;change position x
   4EEE 2B            [ 6] 1000 	dec hl 			;pos x
   4EEF 36 25         [10] 1001 	ld (hl), #0x25	
                           1002 
   4EF1 CD E1 4A      [17] 1003 	call ent_new_type2
                           1004 	;;change position x
   4EF4 2B            [ 6] 1005 	dec hl 			;pos x
   4EF5 2B            [ 6] 1006 	dec hl
   4EF6 2B            [ 6] 1007 	dec hl
   4EF7 2B            [ 6] 1008 	dec hl
   4EF8 36 15         [10] 1009 	ld (hl), #0x15
                           1010 
   4EFA CD 12 4B      [17] 1011 	call ent_new_type3
                           1012 	;;change position x
   4EFD 2B            [ 6] 1013 	dec hl 			;pos xdec hl
   4EFE 36 35         [10] 1014 	ld (hl), #0x35
                           1015 
                           1016 	;Desactive window enemy
   4F00 3E 00         [ 7] 1017 	ld a, #0
   4F02 32 9F 4A      [13] 1018 	ld (active_window_enemy), a
                           1019 
   4F05 C9            [10] 1020 	ret
                           1021 
                           1022 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
                           1023 ;;;;;;;;;;Start Level 2;;;;;;;;;;;
                           1024 ;;; Set parameters for level 2 ;;;
                           1025 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
                           1026 
   4F06                    1027 ent_start_level_2:
                           1028 
                           1029 	;;Stay mode off
   4F06 3E 00         [ 7] 1030 	ld a, #0
   4F08 32 A5 4A      [13] 1031 	ld (stay_mode), a
                           1032 
                           1033 	;Number of enemies in each row
   4F0B 3E 01         [ 7] 1034 	ld a, #1
   4F0D 32 98 4A      [13] 1035 	ld (cont_ent_f1), a
   4F10 3E 02         [ 7] 1036 	ld a, #2
   4F12 32 99 4A      [13] 1037 	ld (cont_ent_f2), a
   4F15 3E 00         [ 7] 1038 	ld a, #0
   4F17 32 9A 4A      [13] 1039 	ld (cont_ent_f3), a
                           1040 
   4F1A C9            [10] 1041 	ret
                           1042 
                           1043 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Zilog Z80 / Hitachi HD64180), page 86.
Hexadecimal [16-Bits]



                           1044 ;;;;;;;;;;Start Level 3;;;;;;;;;;;
                           1045 ;;; Set parameters for level 3 ;;;
                           1046 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
                           1047 
   4F1B                    1048 ent_start_level_3:
                           1049 
                           1050 	; Number of enemies in each row
   4F1B 3E 00         [ 7] 1051 	ld a, #0
   4F1D 32 98 4A      [13] 1052 	ld (cont_ent_f1), a
   4F20 3E 02         [ 7] 1053 	ld a, #2
   4F22 32 99 4A      [13] 1054 	ld (cont_ent_f2), a
   4F25 3E 03         [ 7] 1055 	ld a, #3
   4F27 32 9A 4A      [13] 1056 	ld (cont_ent_f3), a
                           1057 
   4F2A C9            [10] 1058 	ret
                           1059 
                           1060 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
                           1061 ;;;;;;;;;;Start Level 4;;;;;;;;;;;
                           1062 ;;; Set parameters for level 4 ;;;
                           1063 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
                           1064 
   4F2B                    1065 ent_start_level_4:
                           1066 
                           1067 	; Number of enemies in each row
   4F2B 3E 01         [ 7] 1068 	ld a, #1
   4F2D 32 98 4A      [13] 1069 	ld (cont_ent_f1), a
   4F30 3E 02         [ 7] 1070 	ld a, #2
   4F32 32 99 4A      [13] 1071 	ld (cont_ent_f2), a
   4F35 3E 02         [ 7] 1072 	ld a, #2
   4F37 32 9A 4A      [13] 1073 	ld (cont_ent_f3), a
                           1074 
   4F3A C9            [10] 1075 	ret
                           1076 
                           1077 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
                           1078 ;;;;;;;;;;Start Level 5;;;;;;;;;;;
                           1079 ;;; Set parameters for level 5 ;;;
                           1080 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
                           1081 
   4F3B                    1082 ent_start_level_5:
                           1083 
                           1084 	;Number of enemies in each row
   4F3B 3E 02         [ 7] 1085 	ld a, #2
   4F3D 32 98 4A      [13] 1086 	ld (cont_ent_f1), a
   4F40 3E 03         [ 7] 1087 	ld a, #3
   4F42 32 99 4A      [13] 1088 	ld (cont_ent_f2), a
   4F45 3E 02         [ 7] 1089 	ld a, #2
   4F47 32 9A 4A      [13] 1090 	ld (cont_ent_f3), a
                           1091 
                           1092 	;Active window enemy
   4F4A 3E 01         [ 7] 1093 	ld a, #1
   4F4C 32 9F 4A      [13] 1094 	ld (active_window_enemy), a
                           1095 
   4F4F C9            [10] 1096 	ret
                           1097 
                           1098 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Zilog Z80 / Hitachi HD64180), page 87.
Hexadecimal [16-Bits]



                           1099 ;;;;;;;;;;Start Level 6;;;;;;;;;;;
                           1100 ;;; Set parameters for level 6 ;;;
                           1101 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
                           1102 
   4F50                    1103 ent_start_level_6:
                           1104 
                           1105 	;Number of enemies in each row
   4F50 3E 02         [ 7] 1106 	ld a, #2
   4F52 32 98 4A      [13] 1107 	ld (cont_ent_f1), a
   4F55 3E 04         [ 7] 1108 	ld a, #4
   4F57 32 99 4A      [13] 1109 	ld (cont_ent_f2), a
   4F5A 3E 02         [ 7] 1110 	ld a, #2
   4F5C 32 9A 4A      [13] 1111 	ld (cont_ent_f3), a
                           1112 
   4F5F C9            [10] 1113 	ret
