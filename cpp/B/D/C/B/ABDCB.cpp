#include "ABDCB.h"
#include "A/ABDCBA.h"
#include "B/ABDCBB.h"
#include "C/ABDCBC.h"
#include "D/ABDCBD.h"
#include "E/ABDCBE.h"

namespace ABDCB {

std::string run() {
  std::string out("ABDCB");
  out += std::string(SEPARATOR);
  out += ABDCBA::run();
  out += std::string(SEPARATOR);
  out += ABDCBB::run();
  out += std::string(SEPARATOR);
  out += ABDCBC::run();
  out += std::string(SEPARATOR);
  out += ABDCBD::run();
  out += std::string(SEPARATOR);
  out += ABDCBE::run();
  return out;
}

}