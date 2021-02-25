#include "ABCAE.h"
#include "A/ABCAEA.h"
#include "B/ABCAEB.h"
#include "C/ABCAEC.h"
#include "D/ABCAED.h"
#include "E/ABCAEE.h"

namespace ABCAE {

std::string run() {
  std::string out("ABCAE");
  out += std::string(SEPARATOR);
  out += ABCAEA::run();
  out += std::string(SEPARATOR);
  out += ABCAEB::run();
  out += std::string(SEPARATOR);
  out += ABCAEC::run();
  out += std::string(SEPARATOR);
  out += ABCAED::run();
  out += std::string(SEPARATOR);
  out += ABCAEE::run();
  return out;
}

}