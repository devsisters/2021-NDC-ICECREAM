#include "ACEAE.h"
#include "A/ACEAEA.h"
#include "B/ACEAEB.h"
#include "C/ACEAEC.h"
#include "D/ACEAED.h"
#include "E/ACEAEE.h"

namespace ACEAE {

std::string run() {
  std::string out("ACEAE");
  out += std::string(SEPARATOR);
  out += ACEAEA::run();
  out += std::string(SEPARATOR);
  out += ACEAEB::run();
  out += std::string(SEPARATOR);
  out += ACEAEC::run();
  out += std::string(SEPARATOR);
  out += ACEAED::run();
  out += std::string(SEPARATOR);
  out += ACEAEE::run();
  return out;
}

}