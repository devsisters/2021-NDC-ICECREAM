#include "ABCDE.h"
#include "A/ABCDEA.h"
#include "B/ABCDEB.h"
#include "C/ABCDEC.h"
#include "D/ABCDED.h"
#include "E/ABCDEE.h"

namespace ABCDE {

std::string run() {
  std::string out("ABCDE");
  out += std::string(SEPARATOR);
  out += ABCDEA::run();
  out += std::string(SEPARATOR);
  out += ABCDEB::run();
  out += std::string(SEPARATOR);
  out += ABCDEC::run();
  out += std::string(SEPARATOR);
  out += ABCDED::run();
  out += std::string(SEPARATOR);
  out += ABCDEE::run();
  return out;
}

}