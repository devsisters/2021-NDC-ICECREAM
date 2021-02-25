#include "ABDAE.h"
#include "A/ABDAEA.h"
#include "B/ABDAEB.h"
#include "C/ABDAEC.h"
#include "D/ABDAED.h"
#include "E/ABDAEE.h"

namespace ABDAE {

std::string run() {
  std::string out("ABDAE");
  out += std::string(SEPARATOR);
  out += ABDAEA::run();
  out += std::string(SEPARATOR);
  out += ABDAEB::run();
  out += std::string(SEPARATOR);
  out += ABDAEC::run();
  out += std::string(SEPARATOR);
  out += ABDAED::run();
  out += std::string(SEPARATOR);
  out += ABDAEE::run();
  return out;
}

}