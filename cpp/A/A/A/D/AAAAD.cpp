#include "AAAAD.h"
#include "A/AAAADA.h"
#include "B/AAAADB.h"
#include "C/AAAADC.h"
#include "D/AAAADD.h"
#include "E/AAAADE.h"

namespace AAAAD {

std::string run() {
  std::string out("AAAAD");
  out += std::string(SEPARATOR);
  out += AAAADA::run();
  out += std::string(SEPARATOR);
  out += AAAADB::run();
  out += std::string(SEPARATOR);
  out += AAAADC::run();
  out += std::string(SEPARATOR);
  out += AAAADD::run();
  out += std::string(SEPARATOR);
  out += AAAADE::run();
  return out;
}

}