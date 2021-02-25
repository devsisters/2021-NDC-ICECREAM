#include "AEACE.h"
#include "A/AEACEA.h"
#include "B/AEACEB.h"
#include "C/AEACEC.h"
#include "D/AEACED.h"
#include "E/AEACEE.h"

namespace AEACE {

std::string run() {
  std::string out("AEACE");
  out += std::string(SEPARATOR);
  out += AEACEA::run();
  out += std::string(SEPARATOR);
  out += AEACEB::run();
  out += std::string(SEPARATOR);
  out += AEACEC::run();
  out += std::string(SEPARATOR);
  out += AEACED::run();
  out += std::string(SEPARATOR);
  out += AEACEE::run();
  return out;
}

}