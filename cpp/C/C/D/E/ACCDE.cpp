#include "ACCDE.h"
#include "A/ACCDEA.h"
#include "B/ACCDEB.h"
#include "C/ACCDEC.h"
#include "D/ACCDED.h"
#include "E/ACCDEE.h"

namespace ACCDE {

std::string run() {
  std::string out("ACCDE");
  out += std::string(SEPARATOR);
  out += ACCDEA::run();
  out += std::string(SEPARATOR);
  out += ACCDEB::run();
  out += std::string(SEPARATOR);
  out += ACCDEC::run();
  out += std::string(SEPARATOR);
  out += ACCDED::run();
  out += std::string(SEPARATOR);
  out += ACCDEE::run();
  return out;
}

}