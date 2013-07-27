/* ----------------------------------------------------- */
/* fantan.h                                              */
/* ----------------------------------------------------- */
/* This file is built for BBS ANSI,                      */
/* please use VEDIT(Maple-BBS editor) to edit this file. */
/* ****************** WARNING!!! *********************** */
/* DO NOT use VIM to edit. it would cause BIG troubles.  */
/* ----------------------------------------------------- */




#define FANTAN_WORDS "[47m           [30m�e�[37me    [m [47m [m     [35m�e[45m [34m�e�e�[35me[40m�[30me [35m�e�e[m\n" \
"[47m         [30m�e�[me[30;47m�e�[37me  [m [47m [m     [45m [44m  �e�e�[34me[45m�[35me [34m�[44me [45m �e [35;40m�e�e�[45me[34m�e�[35me[40m�[30me[m\n" \
"[47m        [m         [47m  [m [47m [m     [45m [44m  [47m [44m             �[34me[45m�[44me  [45m�[44me    [45m�[35me[m\n" \
"[47m         [m�[30me    [m�[47me  [m [47m [m [30;42m�e�e[45m [44m  [47m [37;44m�e�[34me[37m�e  �e�[34me[37m�[47me[44m�[34me [37m�e  �e�[34me [45m [30;42m�e�e�e�e�e�e�e�e�e [m\n" \
"[47m           [m�[30me[m�[47me    [m [47m [m [30;42m�e�e[45m [44m  [47m [44m   [47m [44m  [47m [44m [47m [44m  [47m [44m [47m [44m  [47m [44m  [47m [44m [47m [44m  [47m [44m [45m [42m�e�e�e�e�e�e[40m    [42m [40m [42m [m\n" \
"[47m        [30m�e�e �e�e  [40m [47m [40m     [45m [35;44m�[34me[47m�[44me  [47m�e�[44me[47m�e[44m  [47m�[44me[47m�e[44m [47m�e�[44me[47m�e[44m  [47m�[44me[45m [40m                [42m [40m [42m [m\n" \
"[47m         [m�[30me [47m�[37me[m  [47m   [m [47m [m      [30;45m�[35me[44m�e�e�e�e�e�e�e�e�e�e�e�e�e[45m  [40m                [42m [40m [42m [m\n" \
"[47m           [m�[30me   [47m   [40m [47m [40m                                    [1;37m�w�w�w�w�w�w��  [42m [40m [42m [m\n" \
"[47m          [30m�[40me [m�[30me [47m   [40m [47m [40m [1;37m�~�w�w�w�w�w�w��         �x�e�����Ӥ��n�]~~    �x  [42m [40m [42m [m\n" \
"[47m         [30m�[40me [47m�[37me[m  [30;47m�[37me [m [47m [m [1m< (�á��á�)[m�\\�\\         �x                    �x  [42m [40m [42m [m\n" \
"[47m                  [30m�[40me[47m [40m [1;37m���w�w�w�w�w�w��         �x  o(�֡աF)o0.....  �x  [42m [40m [42m [m\n" \
"�e�e�e�e�e�e�e�e�e�[47me[30m�[40me                         [1;37m���w�w�w�w�w���w�w�w�w��  [42m [40m [42m [m\n" \
"[42m [m [42m [m     [43m         [31;40m�e                                     [m�e�e�e�e�e�e�e�e�e�[32;42me[m\n" \
"[42m [m [42m [m      [43m         [33;41m�[31me  [40m�[30me     [1;37m��[33m�w�w [[37m�f�u���s[33m] �w�w[37m�� [47m [;30;47m�[40me[m�e�e�e�e�e�e�e�e�e[42m [m\n" \
"[42m [m [42m [m       [43m          [41m    [31;40m�[30me   [1;33m�x                    �x [47m [40m [47m  [;30;47m�[40me     [47m�[37me    [34m�[37me[34m�[37me[42m [m\n" \
"[42m [m [42m [m        [30;43m�[33me        [41m     [40m   [1m�[46mx [37m> �C���}�l Start < [33m�[40mx [47m [40m [47m  [40m  [47m    [40m  [47m    [;37;44m�e[47m [44m�e[42m [m\n" \
"[42m [m [42m [m         [30;43m�[33me       [41m     [40m   [1m�x                    �x [47m [40m [47m  [40m  [47m    [40m  [47m    [;37;44m�[34me[47m [44m [37m�[32;42me[m\n" \
"[42m [m [42m [m          [41m [31;43m�[33me   [31m�[41me     [40m   [1;33m�x   [37m�C������ Help    [33m�x [47m [40m [47m  [40m  [47m  [;30;47m�e[40m  [47m         [42m [m\n" \
"[42m [m [42m [m          [30;41m�[31me [43m�e[41m       [30m�[40me  [1;33m�x                    �x [47m [40m [47m  [m�[30me      [47m         [42m [m\n" \
"[42m [m [42m [m           [41m           [m    [1m��[33m�w�w�w�w�w�w�w�w�w�w[37m�� [47m [40m [47m      [;30;47m�[37me[m�[30me [47m�[37me      [42m [m\n" \
"[42m [m             [41m           [m                             [47m [m [47m    [30m�[40me  [47m�[37me         [42m [m\n" \
"[42m [m            [41m           [30m�[40me                            [47m [40m [47m  �[40me      [47m�[37me       [42m [m\n" \
"[42m [m            [30;41m�[31me      [30m�[40me                               [47m [40m [47m  [m�[30me  [m�[30me  [m�[47me       [42m [m\n" \

#define FANTAN_START_g "[1;33m�[46mx [37m> �C���}�l Start < [33m�[40mx[m"

#define FANTAN_HELP_g "[1;33m�[46mx [37m> �C������ Help  < [33m�[40mx[m"

#define FANTAN_START_b "[1;33m�x [37m  �C���}�l Start   [33m�x[m"

#define FANTAN_HELP_b "[1;33m�x   [37m�C������ Help    [33m�x[m"

#define FANTAN_B_WORDS "[1;33;44m(q)���} (r)���� (��������)���� (v)�� (c)�� (Enter)���| (Space)�аO/���� (p)�Ȱ�[m"


#define FANTAN_UNKNOWN_WORLD "[34m�i�i�i�i�i�i�[44mi[1;5;32m�w��Ө첧�@�ɤJ�f[;34;44m�[42mi[40m�i�i�i[44m�i [1;31;41m��[m\n" \
"                [47m                                             [m\n" \
"                [47m                                             [m\n" \
"                [47m                                             [m\n" \
"                [47m [1m�[44my�v�v�v�v�v�v�v�v�v�v�v�v�v�v�v�v�v�v�v�v[30;47m�j[m\n" \
"                [47m [1m�[44my[;30;44m�y�v�v�v�v�v�v�v�v�v�v�v�v�v�v�v�v�v�v[1;37m�j[30;47m�j[m\n" \
"                [47m [1m�[44my[;30;44m�y [1;33m�ϥΪ̦W��([32mU[33m) [;37;44m��                   [1m�j[30;47m�j[m\n" \
"                [47m [1m�[44my[;30;44m�y                                    [1;37m�j[30;47m�j[m\n" \
"                [47m [1m�[44my[;30;44m�y [1;33m�K     �X ([32mP[33m) [;37;44m��                   [1m�j[30;47m�j[m\n" \
"                [47m [1m�[44my[;30;44m�y                                    [1;37m�j[30;47m�j[m\n" \
"                [47m [1m�[44my  �v�v�v�v�v�v�v�v�v�v�v�v�v�v�v�v�v�v  [30;47m�j[m\n" \
"                [47m   �v�v�v�v�v�v�v�v�v�v�v�v�v�v�v�v�v�v�v�v  [m"

