#include "ADACE.h"
#include "A/ADACEA.h"
#include "B/ADACEB.h"
#include "C/ADACEC.h"
#include "D/ADACED.h"
#include "E/ADACEE.h"

namespace ADACE {

std::string run() {
  std::string out("ADACE");
  out += std::string(SEPARATOR);
  out += ADACEA::run();
  out += std::string(SEPARATOR);
  out += ADACEB::run();
  out += std::string(SEPARATOR);
  out += ADACEC::run();
  out += std::string(SEPARATOR);
  out += ADACED::run();
  out += std::string(SEPARATOR);
  out += ADACEE::run();
  return out;
}

}