#include "ACAE.h"
#include "A/ACAEA.h"
#include "B/ACAEB.h"
#include "C/ACAEC.h"
#include "D/ACAED.h"
#include "E/ACAEE.h"

namespace ACAE {

std::string run() {
  std::string out("ACAE");
  out += std::string(SEPARATOR);
  out += ACAEA::run();
  out += std::string(SEPARATOR);
  out += ACAEB::run();
  out += std::string(SEPARATOR);
  out += ACAEC::run();
  out += std::string(SEPARATOR);
  out += ACAED::run();
  out += std::string(SEPARATOR);
  out += ACAEE::run();
  return out;
}

}