#include "ABAE.h"
#include "A/ABAEA.h"
#include "B/ABAEB.h"
#include "C/ABAEC.h"
#include "D/ABAED.h"
#include "E/ABAEE.h"

namespace ABAE {

std::string run() {
  std::string out("ABAE");
  out += std::string(SEPARATOR);
  out += ABAEA::run();
  out += std::string(SEPARATOR);
  out += ABAEB::run();
  out += std::string(SEPARATOR);
  out += ABAEC::run();
  out += std::string(SEPARATOR);
  out += ABAED::run();
  out += std::string(SEPARATOR);
  out += ABAEE::run();
  return out;
}

}