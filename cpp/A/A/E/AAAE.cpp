#include "AAAE.h"
#include "A/AAAEA.h"
#include "B/AAAEB.h"
#include "C/AAAEC.h"
#include "D/AAAED.h"
#include "E/AAAEE.h"

namespace AAAE {

std::string run() {
  std::string out("AAAE");
  out += std::string(SEPARATOR);
  out += AAAEA::run();
  out += std::string(SEPARATOR);
  out += AAAEB::run();
  out += std::string(SEPARATOR);
  out += AAAEC::run();
  out += std::string(SEPARATOR);
  out += AAAED::run();
  out += std::string(SEPARATOR);
  out += AAAEE::run();
  return out;
}

}