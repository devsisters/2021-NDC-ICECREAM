#include "ABCCE.h"
#include "A/ABCCEA.h"
#include "B/ABCCEB.h"
#include "C/ABCCEC.h"
#include "D/ABCCED.h"
#include "E/ABCCEE.h"

namespace ABCCE {

std::string run() {
  std::string out("ABCCE");
  out += std::string(SEPARATOR);
  out += ABCCEA::run();
  out += std::string(SEPARATOR);
  out += ABCCEB::run();
  out += std::string(SEPARATOR);
  out += ABCCEC::run();
  out += std::string(SEPARATOR);
  out += ABCCED::run();
  out += std::string(SEPARATOR);
  out += ABCCEE::run();
  return out;
}

}