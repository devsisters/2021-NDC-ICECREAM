#include "ADAE.h"
#include "A/ADAEA.h"
#include "B/ADAEB.h"
#include "C/ADAEC.h"
#include "D/ADAED.h"
#include "E/ADAEE.h"

namespace ADAE {

std::string run() {
  std::string out("ADAE");
  out += std::string(SEPARATOR);
  out += ADAEA::run();
  out += std::string(SEPARATOR);
  out += ADAEB::run();
  out += std::string(SEPARATOR);
  out += ADAEC::run();
  out += std::string(SEPARATOR);
  out += ADAED::run();
  out += std::string(SEPARATOR);
  out += ADAEE::run();
  return out;
}

}