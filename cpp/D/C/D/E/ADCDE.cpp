#include "ADCDE.h"
#include "A/ADCDEA.h"
#include "B/ADCDEB.h"
#include "C/ADCDEC.h"
#include "D/ADCDED.h"
#include "E/ADCDEE.h"

namespace ADCDE {

std::string run() {
  std::string out("ADCDE");
  out += std::string(SEPARATOR);
  out += ADCDEA::run();
  out += std::string(SEPARATOR);
  out += ADCDEB::run();
  out += std::string(SEPARATOR);
  out += ADCDEC::run();
  out += std::string(SEPARATOR);
  out += ADCDED::run();
  out += std::string(SEPARATOR);
  out += ADCDEE::run();
  return out;
}

}