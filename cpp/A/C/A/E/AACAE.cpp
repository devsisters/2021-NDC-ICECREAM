#include "AACAE.h"
#include "A/AACAEA.h"
#include "B/AACAEB.h"
#include "C/AACAEC.h"
#include "D/AACAED.h"
#include "E/AACAEE.h"

namespace AACAE {

std::string run() {
  std::string out("AACAE");
  out += std::string(SEPARATOR);
  out += AACAEA::run();
  out += std::string(SEPARATOR);
  out += AACAEB::run();
  out += std::string(SEPARATOR);
  out += AACAEC::run();
  out += std::string(SEPARATOR);
  out += AACAED::run();
  out += std::string(SEPARATOR);
  out += AACAEE::run();
  return out;
}

}