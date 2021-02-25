#include "AAACE.h"
#include "A/AAACEA.h"
#include "B/AAACEB.h"
#include "C/AAACEC.h"
#include "D/AAACED.h"
#include "E/AAACEE.h"

namespace AAACE {

std::string run() {
  std::string out("AAACE");
  out += std::string(SEPARATOR);
  out += AAACEA::run();
  out += std::string(SEPARATOR);
  out += AAACEB::run();
  out += std::string(SEPARATOR);
  out += AAACEC::run();
  out += std::string(SEPARATOR);
  out += AAACED::run();
  out += std::string(SEPARATOR);
  out += AAACEE::run();
  return out;
}

}