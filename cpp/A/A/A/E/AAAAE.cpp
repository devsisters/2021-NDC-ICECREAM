#include "AAAAE.h"
#include "A/AAAAEA.h"
#include "B/AAAAEB.h"
#include "C/AAAAEC.h"
#include "D/AAAAED.h"
#include "E/AAAAEE.h"

namespace AAAAE {

std::string run() {
  std::string out("AAAAE");
  out += std::string(SEPARATOR);
  out += AAAAEA::run();
  out += std::string(SEPARATOR);
  out += AAAAEB::run();
  out += std::string(SEPARATOR);
  out += AAAAEC::run();
  out += std::string(SEPARATOR);
  out += AAAAED::run();
  out += std::string(SEPARATOR);
  out += AAAAEE::run();
  return out;
}

}