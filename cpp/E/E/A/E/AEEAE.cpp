#include "AEEAE.h"
#include "A/AEEAEA.h"
#include "B/AEEAEB.h"
#include "C/AEEAEC.h"
#include "D/AEEAED.h"
#include "E/AEEAEE.h"

namespace AEEAE {

std::string run() {
  std::string out("AEEAE");
  out += std::string(SEPARATOR);
  out += AEEAEA::run();
  out += std::string(SEPARATOR);
  out += AEEAEB::run();
  out += std::string(SEPARATOR);
  out += AEEAEC::run();
  out += std::string(SEPARATOR);
  out += AEEAED::run();
  out += std::string(SEPARATOR);
  out += AEEAEE::run();
  return out;
}

}