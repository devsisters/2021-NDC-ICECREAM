#include "ACCAE.h"
#include "A/ACCAEA.h"
#include "B/ACCAEB.h"
#include "C/ACCAEC.h"
#include "D/ACCAED.h"
#include "E/ACCAEE.h"

namespace ACCAE {

std::string run() {
  std::string out("ACCAE");
  out += std::string(SEPARATOR);
  out += ACCAEA::run();
  out += std::string(SEPARATOR);
  out += ACCAEB::run();
  out += std::string(SEPARATOR);
  out += ACCAEC::run();
  out += std::string(SEPARATOR);
  out += ACCAED::run();
  out += std::string(SEPARATOR);
  out += ACCAEE::run();
  return out;
}

}