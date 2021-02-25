#include "AAECE.h"
#include "A/AAECEA.h"
#include "B/AAECEB.h"
#include "C/AAECEC.h"
#include "D/AAECED.h"
#include "E/AAECEE.h"

namespace AAECE {

std::string run() {
  std::string out("AAECE");
  out += std::string(SEPARATOR);
  out += AAECEA::run();
  out += std::string(SEPARATOR);
  out += AAECEB::run();
  out += std::string(SEPARATOR);
  out += AAECEC::run();
  out += std::string(SEPARATOR);
  out += AAECED::run();
  out += std::string(SEPARATOR);
  out += AAECEE::run();
  return out;
}

}