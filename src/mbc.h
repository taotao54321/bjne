#pragma once

#include "types.h"
#include "serializer.h"

class nes;

/* メモリコントローラ */

class mbc {
public:
    mbc(nes* n);
    ~mbc();

    void reset();

    u8 read(u16 adr);
    void write(u16 adr, u8 dat);

    u8 read_chr_rom(u16 adr);
    void write_chr_rom(u16 adr, u8 dat);

    void map_rom(int page, int val); // swap 8k banks
    void map_vrom(int page, int val); // swap 1k banks
    void map_vram(int page, int val); // 同上
    void sram_enable(bool b);

    void serialize(state_data& sd);

private:
    nes* _nes;

    u8* rom, *vrom, *ram, *sram, *vram;
    u8* rom_page[4];
    u8* chr_page[8];
    bool is_vram;
    bool sram_enabled;
};
