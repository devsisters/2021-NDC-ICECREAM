#include "AECAE.h"
#include "A/AECAEA.h"
#include "B/AECAEB.h"
#include "C/AECAEC.h"
#include "D/AECAED.h"
#include "E/AECAEE.h"

namespace AECAE {

std::string run() {
  std::string out("AECAE");
  out += std::string(SEPARATOR);
  out += AECAEA::run();
  out += std::string(SEPARATOR);
  out += AECAEB::run();
  out += std::string(SEPARATOR);
  out += AECAEC::run();
  out += std::string(SEPARATOR);
  out += AECAED::run();
  out += std::string(SEPARATOR);
  out += AECAEE::run();
  return out;
}

}