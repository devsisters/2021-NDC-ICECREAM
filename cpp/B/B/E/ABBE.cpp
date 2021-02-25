#include "ABBE.h"
#include "A/ABBEA.h"
#include "B/ABBEB.h"
#include "C/ABBEC.h"
#include "D/ABBED.h"
#include "E/ABBEE.h"

namespace ABBE {

std::string run() {
  std::string out("ABBE");
  out += std::string(SEPARATOR);
  out += ABBEA::run();
  out += std::string(SEPARATOR);
  out += ABBEB::run();
  out += std::string(SEPARATOR);
  out += ABBEC::run();
  out += std::string(SEPARATOR);
  out += ABBED::run();
  out += std::string(SEPARATOR);
  out += ABBEE::run();
  return out;
}

}