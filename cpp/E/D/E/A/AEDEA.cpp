#include "AEDEA.h"
#include "A/AEDEAA.h"
#include "B/AEDEAB.h"
#include "C/AEDEAC.h"
#include "D/AEDEAD.h"
#include "E/AEDEAE.h"

namespace AEDEA {

std::string run() {
  std::string out("AEDEA");
  out += std::string(SEPARATOR);
  out += AEDEAA::run();
  out += std::string(SEPARATOR);
  out += AEDEAB::run();
  out += std::string(SEPARATOR);
  out += AEDEAC::run();
  out += std::string(SEPARATOR);
  out += AEDEAD::run();
  out += std::string(SEPARATOR);
  out += AEDEAE::run();
  return out;
}

}