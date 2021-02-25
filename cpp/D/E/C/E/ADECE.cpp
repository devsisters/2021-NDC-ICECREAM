#include "ADECE.h"
#include "A/ADECEA.h"
#include "B/ADECEB.h"
#include "C/ADECEC.h"
#include "D/ADECED.h"
#include "E/ADECEE.h"

namespace ADECE {

std::string run() {
  std::string out("ADECE");
  out += std::string(SEPARATOR);
  out += ADECEA::run();
  out += std::string(SEPARATOR);
  out += ADECEB::run();
  out += std::string(SEPARATOR);
  out += ADECEC::run();
  out += std::string(SEPARATOR);
  out += ADECED::run();
  out += std::string(SEPARATOR);
  out += ADECEE::run();
  return out;
}

}