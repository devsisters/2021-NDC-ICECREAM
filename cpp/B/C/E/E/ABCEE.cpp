#include "ABCEE.h"
#include "A/ABCEEA.h"
#include "B/ABCEEB.h"
#include "C/ABCEEC.h"
#include "D/ABCEED.h"
#include "E/ABCEEE.h"

namespace ABCEE {

std::string run() {
  std::string out("ABCEE");
  out += std::string(SEPARATOR);
  out += ABCEEA::run();
  out += std::string(SEPARATOR);
  out += ABCEEB::run();
  out += std::string(SEPARATOR);
  out += ABCEEC::run();
  out += std::string(SEPARATOR);
  out += ABCEED::run();
  out += std::string(SEPARATOR);
  out += ABCEEE::run();
  return out;
}

}