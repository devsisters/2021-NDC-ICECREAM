#include "ADDEA.h"
#include "A/ADDEAA.h"
#include "B/ADDEAB.h"
#include "C/ADDEAC.h"
#include "D/ADDEAD.h"
#include "E/ADDEAE.h"

namespace ADDEA {

std::string run() {
  std::string out("ADDEA");
  out += std::string(SEPARATOR);
  out += ADDEAA::run();
  out += std::string(SEPARATOR);
  out += ADDEAB::run();
  out += std::string(SEPARATOR);
  out += ADDEAC::run();
  out += std::string(SEPARATOR);
  out += ADDEAD::run();
  out += std::string(SEPARATOR);
  out += ADDEAE::run();
  return out;
}

}