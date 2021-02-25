#include "ABACE.h"
#include "A/ABACEA.h"
#include "B/ABACEB.h"
#include "C/ABACEC.h"
#include "D/ABACED.h"
#include "E/ABACEE.h"

namespace ABACE {

std::string run() {
  std::string out("ABACE");
  out += std::string(SEPARATOR);
  out += ABACEA::run();
  out += std::string(SEPARATOR);
  out += ABACEB::run();
  out += std::string(SEPARATOR);
  out += ABACEC::run();
  out += std::string(SEPARATOR);
  out += ABACED::run();
  out += std::string(SEPARATOR);
  out += ABACEE::run();
  return out;
}

}