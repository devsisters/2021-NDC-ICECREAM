#include "ADADA.h"
#include "A/ADADAA.h"
#include "B/ADADAB.h"
#include "C/ADADAC.h"
#include "D/ADADAD.h"
#include "E/ADADAE.h"

namespace ADADA {

std::string run() {
  std::string out("ADADA");
  out += std::string(SEPARATOR);
  out += ADADAA::run();
  out += std::string(SEPARATOR);
  out += ADADAB::run();
  out += std::string(SEPARATOR);
  out += ADADAC::run();
  out += std::string(SEPARATOR);
  out += ADADAD::run();
  out += std::string(SEPARATOR);
  out += ADADAE::run();
  return out;
}

}