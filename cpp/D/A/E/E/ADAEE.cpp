#include "ADAEE.h"
#include "A/ADAEEA.h"
#include "B/ADAEEB.h"
#include "C/ADAEEC.h"
#include "D/ADAEED.h"
#include "E/ADAEEE.h"

namespace ADAEE {

std::string run() {
  std::string out("ADAEE");
  out += std::string(SEPARATOR);
  out += ADAEEA::run();
  out += std::string(SEPARATOR);
  out += ADAEEB::run();
  out += std::string(SEPARATOR);
  out += ADAEEC::run();
  out += std::string(SEPARATOR);
  out += ADAEED::run();
  out += std::string(SEPARATOR);
  out += ADAEEE::run();
  return out;
}

}