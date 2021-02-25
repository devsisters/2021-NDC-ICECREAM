#include "ACDE.h"
#include "A/ACDEA.h"
#include "B/ACDEB.h"
#include "C/ACDEC.h"
#include "D/ACDED.h"
#include "E/ACDEE.h"

namespace ACDE {

std::string run() {
  std::string out("ACDE");
  out += std::string(SEPARATOR);
  out += ACDEA::run();
  out += std::string(SEPARATOR);
  out += ACDEB::run();
  out += std::string(SEPARATOR);
  out += ACDEC::run();
  out += std::string(SEPARATOR);
  out += ACDED::run();
  out += std::string(SEPARATOR);
  out += ACDEE::run();
  return out;
}

}