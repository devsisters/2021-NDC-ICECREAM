#include "AACDE.h"
#include "A/AACDEA.h"
#include "B/AACDEB.h"
#include "C/AACDEC.h"
#include "D/AACDED.h"
#include "E/AACDEE.h"

namespace AACDE {

std::string run() {
  std::string out("AACDE");
  out += std::string(SEPARATOR);
  out += AACDEA::run();
  out += std::string(SEPARATOR);
  out += AACDEB::run();
  out += std::string(SEPARATOR);
  out += AACDEC::run();
  out += std::string(SEPARATOR);
  out += AACDED::run();
  out += std::string(SEPARATOR);
  out += AACDEE::run();
  return out;
}

}