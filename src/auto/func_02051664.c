/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02051664 from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/snd/calls/func_02051664.c (license: CC0-1.0),
 * reused by tools/donor_match.py */
extern int func_02050190(void);
extern void func_020501a4(int state);
typedef struct SNDCommand {
    struct SNDCommand *next;
    unsigned int id;
    unsigned int arg[4];
} SNDCommand;
typedef struct SNDCommandMgr {
    SNDCommand *freeHead;
    unsigned int processedTag;
    SNDCommand *reservedHead;
    SNDCommand *reservedTail;
    SNDCommand *freeTail;
    unsigned int unk14;
    int sentRingIndex;
    int sentBlockCount;
    unsigned int nextTag;
} SNDCommandMgr;
extern SNDCommandMgr data_0214df34;
void func_02051664(SNDCommand *command) {
    SNDCommand *tail;
    int state;

    state = func_02050190();
    tail  = data_0214df34.reservedTail;

    if (tail == 0) {
        data_0214df34.reservedHead = command;
        data_0214df34.reservedTail = command;
    } else {
        tail->next                 = command;
        data_0214df34.reservedTail = command;
    }
    command->next = 0;
    func_020501a4(state);
}
