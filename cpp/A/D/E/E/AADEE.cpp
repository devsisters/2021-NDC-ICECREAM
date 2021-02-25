#include "AADEE.h"
#include "A/AADEEA.h"
#include "B/AADEEB.h"
#include "C/AADEEC.h"
#include "D/AADEED.h"
#include "E/AADEEE.h"

namespace AADEE {

std::string run() {
  std::string out("AADEE");
  out += std::string(SEPARATOR);
  out += AADEEA::run();
  out += std::string(SEPARATOR);
  out += AADEEB::run();
  out += std::string(SEPARATOR);
  out += AADEEC::run();
  out += std::string(SEPARATOR);
  out += AADEED::run();
  out += std::string(SEPARATOR);
  out += AADEEE::run();
  return out;
}

}