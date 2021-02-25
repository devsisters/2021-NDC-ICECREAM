#include "AAAEE.h"
#include "A/AAAEEA.h"
#include "B/AAAEEB.h"
#include "C/AAAEEC.h"
#include "D/AAAEED.h"
#include "E/AAAEEE.h"

namespace AAAEE {

std::string run() {
  std::string out("AAAEE");
  out += std::string(SEPARATOR);
  out += AAAEEA::run();
  out += std::string(SEPARATOR);
  out += AAAEEB::run();
  out += std::string(SEPARATOR);
  out += AAAEEC::run();
  out += std::string(SEPARATOR);
  out += AAAEED::run();
  out += std::string(SEPARATOR);
  out += AAAEEE::run();
  return out;
}

}