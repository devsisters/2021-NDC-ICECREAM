#include "ADEE.h"
#include "A/ADEEA.h"
#include "B/ADEEB.h"
#include "C/ADEEC.h"
#include "D/ADEED.h"
#include "E/ADEEE.h"

namespace ADEE {

std::string run() {
  std::string out("ADEE");
  out += std::string(SEPARATOR);
  out += ADEEA::run();
  out += std::string(SEPARATOR);
  out += ADEEB::run();
  out += std::string(SEPARATOR);
  out += ADEEC::run();
  out += std::string(SEPARATOR);
  out += ADEED::run();
  out += std::string(SEPARATOR);
  out += ADEEE::run();
  return out;
}

}