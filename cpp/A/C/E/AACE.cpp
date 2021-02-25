#include "AACE.h"
#include "A/AACEA.h"
#include "B/AACEB.h"
#include "C/AACEC.h"
#include "D/AACED.h"
#include "E/AACEE.h"

namespace AACE {

std::string run() {
  std::string out("AACE");
  out += std::string(SEPARATOR);
  out += AACEA::run();
  out += std::string(SEPARATOR);
  out += AACEB::run();
  out += std::string(SEPARATOR);
  out += AACEC::run();
  out += std::string(SEPARATOR);
  out += AACED::run();
  out += std::string(SEPARATOR);
  out += AACEE::run();
  return out;
}

}