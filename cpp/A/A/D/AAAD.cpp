#include "AAAD.h"
#include "A/AAADA.h"
#include "B/AAADB.h"
#include "C/AAADC.h"
#include "D/AAADD.h"
#include "E/AAADE.h"

namespace AAAD {

std::string run() {
  std::string out("AAAD");
  out += std::string(SEPARATOR);
  out += AAADA::run();
  out += std::string(SEPARATOR);
  out += AAADB::run();
  out += std::string(SEPARATOR);
  out += AAADC::run();
  out += std::string(SEPARATOR);
  out += AAADD::run();
  out += std::string(SEPARATOR);
  out += AAADE::run();
  return out;
}

}