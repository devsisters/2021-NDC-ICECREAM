#include "AEACA.h"
#include "A/AEACAA.h"
#include "B/AEACAB.h"
#include "C/AEACAC.h"
#include "D/AEACAD.h"
#include "E/AEACAE.h"

namespace AEACA {

std::string run() {
  std::string out("AEACA");
  out += std::string(SEPARATOR);
  out += AEACAA::run();
  out += std::string(SEPARATOR);
  out += AEACAB::run();
  out += std::string(SEPARATOR);
  out += AEACAC::run();
  out += std::string(SEPARATOR);
  out += AEACAD::run();
  out += std::string(SEPARATOR);
  out += AEACAE::run();
  return out;
}

}