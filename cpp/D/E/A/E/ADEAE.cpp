#include "ADEAE.h"
#include "A/ADEAEA.h"
#include "B/ADEAEB.h"
#include "C/ADEAEC.h"
#include "D/ADEAED.h"
#include "E/ADEAEE.h"

namespace ADEAE {

std::string run() {
  std::string out("ADEAE");
  out += std::string(SEPARATOR);
  out += ADEAEA::run();
  out += std::string(SEPARATOR);
  out += ADEAEB::run();
  out += std::string(SEPARATOR);
  out += ADEAEC::run();
  out += std::string(SEPARATOR);
  out += ADEAED::run();
  out += std::string(SEPARATOR);
  out += ADEAEE::run();
  return out;
}

}