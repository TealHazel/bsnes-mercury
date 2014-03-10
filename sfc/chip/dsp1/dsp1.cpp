#include <sfc/sfc.hpp>

#define DSP1_CPP
namespace SuperFamicom {

DSP1 dsp1;

#include "serialization.cpp"
#include "dsp1emu.cpp"

void DSP1::init() {
}

void DSP1::load() {
}

void DSP1::unload() {
}

void DSP1::power() {
}

void DSP1::reset() {
}

uint8 DSP1::read(unsigned addr) {
}

void DSP1::write(unsigned addr, uint8 data) {
}

}

#if 0
#include <snes.hpp>

#define DSP1_CPP
namespace SNES {

DSP1 dsp1;
DSP1DR dsp1dr;
DSP1SR dsp1sr;

#include "serialization.cpp"
#include "dsp1emu.cpp"

void DSP1::init() {
}

void DSP1::enable() {
}

void DSP1::power() {
  reset();
}

void DSP1::reset() {
  dsp1.reset();
}

uint8 DSP1DR::read(unsigned addr) { return dsp1.dsp1.getDr(); }
void DSP1DR::write(unsigned addr, uint8 data) { dsp1.dsp1.setDr(data); }

uint8 DSP1SR::read(unsigned addr) { return dsp1.dsp1.getSr(); }
void DSP1SR::write(unsigned addr, uint8 data) {}

}
#endif