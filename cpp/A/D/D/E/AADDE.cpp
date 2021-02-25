#include "AADDE.h"
#include "A/AADDEA.h"
#include "B/AADDEB.h"
#include "C/AADDEC.h"
#include "D/AADDED.h"
#include "E/AADDEE.h"

namespace AADDE {

std::string run() {
  std::string out("AADDE");
  out += std::string(SEPARATOR);
  out += AADDEA::run();
  out += std::string(SEPARATOR);
  out += AADDEB::run();
  out += std::string(SEPARATOR);
  out += AADDEC::run();
  out += std::string(SEPARATOR);
  out += AADDED::run();
  out += std::string(SEPARATOR);
  out += AADDEE::run();
  return out;
}

}