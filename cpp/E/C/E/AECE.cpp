#include "AECE.h"
#include "A/AECEA.h"
#include "B/AECEB.h"
#include "C/AECEC.h"
#include "D/AECED.h"
#include "E/AECEE.h"

namespace AECE {

std::string run() {
  std::string out("AECE");
  out += std::string(SEPARATOR);
  out += AECEA::run();
  out += std::string(SEPARATOR);
  out += AECEB::run();
  out += std::string(SEPARATOR);
  out += AECEC::run();
  out += std::string(SEPARATOR);
  out += AECED::run();
  out += std::string(SEPARATOR);
  out += AECEE::run();
  return out;
}

}