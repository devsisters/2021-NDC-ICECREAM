#include "AADAE.h"
#include "A/AADAEA.h"
#include "B/AADAEB.h"
#include "C/AADAEC.h"
#include "D/AADAED.h"
#include "E/AADAEE.h"

namespace AADAE {

std::string run() {
  std::string out("AADAE");
  out += std::string(SEPARATOR);
  out += AADAEA::run();
  out += std::string(SEPARATOR);
  out += AADAEB::run();
  out += std::string(SEPARATOR);
  out += AADAEC::run();
  out += std::string(SEPARATOR);
  out += AADAED::run();
  out += std::string(SEPARATOR);
  out += AADAEE::run();
  return out;
}

}